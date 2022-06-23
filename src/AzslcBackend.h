/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 * 
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */
#pragma once

#include "AzslcListener.h"

#include "jsoncpp/dist/json/json.h"
#include "AzslcRegisters.h"

namespace AZ::ShaderCompiler
{
    struct PlatformEmitter;

    struct DescriptorCountBounds
    {
        int m_descriptorsTotal = -1;   //!< negative values deactivate the check
        int m_spaces = -1;
        int m_samplers = -1;
        int m_textures = -1;
        int m_buffers = -1;
    };
    
    //! This structure is typically filled from parsed user settings from the command line
    struct Options
    {
        bool m_useUniqueIndices = false;
        bool m_useUnboundedSpaces = false;
        bool m_emitConstantBufferBody = false;
        bool m_emitRootSig = false;
        bool m_emitRowMajor = false;     //!< False by default (HLSL standard)
        bool m_forceEmitMajor = false;   //!< True if either -Zpc or -Zpr was specified
        bool m_padRootConstantCB = false; //!< If True, the emitted root constant CB will padded to 16-byte boundary.
        bool m_skipAlignmentValidation = false; //! < If True, disables validation of a known DXC issue when certain word or 2-words size variables are preceded by some MatrixRxC variables.
        DescriptorCountBounds m_minAvailableDescriptors;   //!< Hint about the targeted graphics API's minimal guaranteed usable descriptors
        int m_maxSpaces = std::numeric_limits<int>::max();   //!< Maximum allocatable register logical space, after which register indexes will accumulate, but spaces will be capped
        int m_rootConstantsMaxSize = std::numeric_limits<int>::max();   //!< Indicates the number of root constants to be allowed, 0 means root constants not enabled
        Packing::Layout m_packConstantBuffers  = Packing::Layout::DirectXPacking; //!< Packing standard for constant buffers (uniform)
        Packing::Layout m_packDataBuffers      = Packing::Layout::CStylePacking;  //!< Packing standard for data buffer views
    };

    struct Binding
    {
        int m_registerIndex = -1;
        int m_logicalSpace = -1;
    };

    //! store 2 sets of binding points: one calculated purely (untainted), and one calculated with space compression (SRG-Merging)
    struct BindingPair
    {
        MAKE_REFLECTABLE_ENUM(Set, Untainted, Merged);
        std::array<Binding, Set::EndEnumeratorSentinel_> m_pair;
    };

    struct RootSigDesc
    {
        struct SrgParamDesc
        {
            IdentifierUID m_uid;
            RootParamType m_type;
            BindingPair m_registerBinding;
            int m_registerRange = -1;
            int m_num32BitConstants = -1;

            SpaceIndex m_spillSpace = FirstUnboundedSpace;

            // This flag is added so m_registerRange can take the value
            // of 1 and at the same time We do not forget that m_uid refers
            // to an unbounded array.
            bool m_isUnboundedArray = false;
        };

        struct SrgDesc
        {
            IdentifierUID m_uid;
            vector<SrgParamDesc> m_parameters;
        };

        const SrgParamDesc& Get(const IdentifierUID& uid) const
        {
            return m_descriptorMap.at(uid);
        }

        vector<SrgDesc> m_srGroups;
        unordered_map<IdentifierUID, SrgParamDesc> m_descriptorMap;
    };

    //! Stateful tracker that helps to construct binding points, by counting up
    struct SingleBindingLocationTracker
    {
        //! Increments logical space index and nullifies all register indices
        void IncrementSpace();

        //! Equalizes all register indices (important for platforms with no B,T,S,U distinction)
        void UnifyIndices();

        //! Access total burned up resources, e.g for hardware capacity checks
        int GetAccumulated(BindingType r) const;

        int m_space = 0;  //<! logical space

        // See: MultiBindingLocationMarker::m_unboundedSpillSpace
        int m_unboundedSpillSpace;

        int m_registerPos[BindingType::EndEnumeratorSentinel_] = {0};   //!< register index, one by type.
        int m_accumulated[BindingType::EndEnumeratorSentinel_] = {0};  //!< Counter for total usage independently from space increments
        int m_accumulatedUnused[BindingType::EndEnumeratorSentinel_] = {0};  //!< Counter for holes created by indices unification
    };

    //! Because of space limitations on some devices, we needed to introduce SRG-merging.
    //! For minimal engine impact, we need to be able to reflect the "untainted" (non-merged) binding scheme,
    //!  and the merged scheme together. For that purpose, we will track 2 binding locations in that maker.
    class MultiBindingLocationMaker
    {
    public:
        MultiBindingLocationMaker(const Options& options, SpaceIndex& unboundedSpillSpace)
            : m_options{ options }
            , m_unboundedSpillSpace{ unboundedSpillSpace }
        {}

        void SignalIncrementSpace(std::function<void(int, int)> warningMessageFunctionForMinDescOvershoot);

        void SignalUnifyIndices();
        
        void SignalRegisterIncrement(BindingType regType, int count, bool isUnbounded);

        BindingPair GetCurrent(BindingType regType);

        SingleBindingLocationTracker m_untainted;
        SingleBindingLocationTracker m_merged;
        Options m_options;

        // On some platforms (DX12), descriptor arrays occupy an individual register slot, and spaces are used
        // to prevent overlapping ranges. When an unbounded array is encountered, we immediately assign it to
        // the value of this member variable and increment. This is initialized in the constructor because the
        // space we spill to must not collide with any other SRG declared in the shader.
        SpaceIndex& m_unboundedSpillSpace;
    };

    //! This class intends to be a base umbrella for compiler back-end services.
    //! A back-end service typically provides reflection or code emission.
    //! Since there are re-used commonalities in such systems, it is helpful
    //! to share their common data and methods in this base class.
    class Backend
    {
    public:
        Backend(IntermediateRepresentation* ir, TokenStream* tokens, std::ostream& out)
        : m_ir(ir), m_tokens(tokens), m_out(out)
        {}

        //! Gets the IntermediateRepresentation object
        const IntermediateRepresentation* GetIR() const { return m_ir; }

    protected:
        //! Obtains a supplement emitter which provides per-platform emission functionality.
        const PlatformEmitter& GetPlatformEmitter() const;

        //! Gets the next and increments tokenIndex. TokenIndex must be in the [misc::Interval.a, misc::Interval.b] range. Token cannot be nullptr.
        auto GetNextToken(ssize_t& tokenIndex, size_t channel = Token::DEFAULT_CHANNEL) const -> antlr4::Token*;

        //! Extract an interval of text out of the source token stream, and append it to @output
        virtual void GetTextInStream(misc::Interval interval, std::ostream& output) const;

        //! Extract an interval of text out of the source token stream
        string GetTextAsString(misc::Interval interval) const;

        string GetInitializerClause(const AZ::ShaderCompiler::VarInfo* varInfo) const;

        uint32_t GetNumberOf32BitConstants(const Options& options, const IdentifierUID& uid) const;

        RootSigDesc BuildSignatureDescription(const Options& options, int num32BitConst) const;

        RootSigDesc::SrgParamDesc ReflectOneExternalResource(IdentifierUID id, MultiBindingLocationMaker& bindInfo, RootSigDesc& rootSig) const;

        RootSigDesc::SrgParamDesc ReflectOneExternalResourceAndWrapWithUnifyIndices(IdentifierUID id, MultiBindingLocationMaker& bindInfo, RootSigDesc& rootSig) const;

        void AppendOptionRange(Json::Value& varOption, const IdentifierUID& varUid, const AZ::ShaderCompiler::VarInfo* varInfo, const Options& options) const;

        Json::Value GetVariantList(const Options& options, bool includeEmpty = false) const;

        static const char* GetInputModifier(TypeQualifier typeQualifier);

        string GetExtendedTypeInfo(const ExtendedTypeInfo& extTypeInfo, std::function<string(const TypeRefInfo&)> translator) const;

        std::ostream&               m_out;
        IntermediateRepresentation* m_ir;
        TokenStream*                m_tokens;

        // See MultiBindingLocationMaker::m_unboundedSpillSpace
        mutable SpaceIndex m_unboundedSpillSpace = FirstUnboundedSpace;
    };

    // independent utility functions
    bool IsReadWriteView(string_view viewName);

    QualifiedName MakeSrgConstantsStructName(IdentifierUID srg);

    QualifiedName MakeSrgConstantsCBName(IdentifierUID srg);

    /// don't use for HLSL emission (this doesn't go through translation)
    string UnmangleTrimedName(const QualifiedNameView name);

    string JoinAllNestedNamesWithUnderscore(const QualifiedNameView name);

    string GetGlobalRootConstantVarName(const QualifiedNameView name);

    string GetShaderKeyFunctionName(const IdentifierUID& uid);

    string GetRootConstFunctionName(const IdentifierUID& uid);

    // don't use for HLSL emission (this doesn't go through translation)
    string UnmangleTrimedName(const ExtendedTypeInfo& extTypeInfo);

    std::ostream &operator << (std::ostream &out, const SamplerStateDesc::AddressMode& addressMode);
    std::ostream &operator << (std::ostream &out, const SamplerStateDesc::ComparisonFunc& compFunc);
    std::ostream &operator << (std::ostream &out, const SamplerStateDesc::BorderColor& borderColor);
    std::ostream &operator << (std::ostream &out, const SamplerStateDesc& samplerDesc);
    std::ostream &operator << (std::ostream &out, const SamplerStateDesc::ReductionType& redcType);
}
