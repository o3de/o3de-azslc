/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 * 
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */
#pragma once

#include "AzslcUtils.h"

namespace AZ::ShaderCompiler
{
    // type classes before canonicalization.
    // post canonicalization, you can't have generic arithmetic nor typeof.
    MAKE_REFLECTABLE_ENUM (TypeClass,
        // Error case
        IsNotType,
        // The void type
        Void,
        // Predefined
        Scalar,
        Vector,
        GenericVector,  // vector<t,d>
        Matrix,
        GenericMatrix,  // matrix<t,d1,d2>
        Texture,
        GenericTexture,
        MultisampledTexture,
        Sampler,
        StructuredBuffer,
        Buffer,
        ByteAddressBuffer,
        ConstantBuffer,
        StreamOutput,
        LibrarySubobject,
        OtherViewBufferType,
        OtherPredefined,  // IO patch
        // Not predefined
        Struct,
        Class,
        Interface,
        Enum,
        TypeofExpression,
        Alias
    );

    // == category queries ==

    inline bool IsUserDefined(TypeClass typeClass)
    {
        return typeClass.IsOneOf(TypeClass::Struct, TypeClass::Class, TypeClass::Interface, TypeClass::Enum);
    }

    //! a product type is a (non-union) 'structured' type. (Cartesian product in type theory)
    inline bool IsProductType(TypeClass typeClass)
    {
        return typeClass.IsOneOf(TypeClass::Struct, TypeClass::Class, TypeClass::Interface);
    }

    // predefined types are all HLSL base types (void included)
    inline bool IsPredefinedType(TypeClass typeClass)
    {
        return !typeClass.IsOneOf(TypeClass::IsNotType, TypeClass::TypeofExpression, TypeClass::Alias)
            && !IsUserDefined(typeClass);
    }

    // an arithmetic type, but not non-generic
    inline bool IsNonGenericArithmetic(TypeClass typeClass)
    {
        return typeClass.IsOneOf(TypeClass::Scalar, TypeClass::Vector, TypeClass::Matrix);
    }

    // has a generic to canonicalize
    inline bool IsGenericArithmetic(TypeClass typeClass)
    {
        return typeClass.IsOneOf(TypeClass::GenericVector, TypeClass::GenericMatrix);
    }

    inline bool IsArithmetic(TypeClass typeClass)
    {
        return IsGenericArithmetic(typeClass) || IsNonGenericArithmetic(typeClass);
    }

    // a fundamental is void or arithmetic
    inline bool IsFundamental(TypeClass typeClass)
    {
        return typeClass == TypeClass::Void || IsArithmetic(typeClass);
    }

    // type that behaves like its generic parameter
    inline bool IsChameleon(TypeClass typeClass)
    {  // IO patch are not strict chameleon because they behave like an array. if we consider array collapsing then maybe they are.
        return typeClass.IsOneOf(TypeClass::StructuredBuffer, TypeClass::Buffer, TypeClass::StreamOutput, TypeClass::ConstantBuffer);
    }

    inline bool HasGenericParameter(TypeClass typeClass)
    { // TODO: to add InputPath/OutputPatch because it has a generic parameter. (when you do it, update ExtractGenericTypeParameterNameFromAstContext)
        return IsChameleon(typeClass) || IsGenericArithmetic(typeClass) || typeClass.IsOneOf(TypeClass::GenericTexture, TypeClass::MultisampledTexture);
    }

    inline bool IsViewTypeBuffer(TypeClass typeClass)
    {
        return typeClass.IsOneOf(TypeClass::ConstantBuffer, TypeClass::StructuredBuffer, TypeClass::Buffer, TypeClass::ByteAddressBuffer, TypeClass::OtherViewBufferType);
    }

    inline bool IsViewType(TypeClass typeClass)
    {   // note that a constant buffer is not a view type
        return IsViewTypeBuffer(typeClass)
            || typeClass.IsOneOf(TypeClass::Texture, TypeClass::GenericTexture, TypeClass::MultisampledTexture, TypeClass::Sampler);
    }

    //Example Texture2D m_myTex[]; is supported.
    inline bool CanBeDeclaredAsUnboundedArray(TypeClass typeClass)
    {
        return IsViewType(typeClass);
    }

    // Get TypeClass for type inside a predefined context
    inline TypeClass AnalyzeTypeClass(azslParser::PredefinedTypeContext* predefinedNode)
    {
        TypeClass toReturn = TypeClass::OtherPredefined;  // default value if nothing of the under was non null.
        using PredefinedNodeT = std::remove_pointer_t<decltype(predefinedNode)>;  // DRY
        // map TypeClasses to the same indexes than the context functions list
        array<TypeClass, 16> contextClasses = { TypeClass::Scalar,
                                                TypeClass::Vector,
                                                TypeClass::GenericVector,
                                                TypeClass::Matrix,
                                                TypeClass::GenericMatrix,
                                                TypeClass::Texture,
                                                TypeClass::MultisampledTexture,
                                                TypeClass::GenericTexture,
                                                TypeClass::Sampler,
                                                TypeClass::StructuredBuffer,
                                                TypeClass::Buffer,
                                                TypeClass::ByteAddressBuffer,
                                                TypeClass::ConstantBuffer,
                                                TypeClass::StreamOutput,
                                                TypeClass::OtherViewBufferType,
                                                TypeClass::LibrarySubobject};
        // create a constexpr valuelist of member function pointers
        using FunctionList = ValueTplList< &PredefinedNodeT::scalarType,
                                           &PredefinedNodeT::vectorType,
                                           &PredefinedNodeT::genericVectorType,
                                           &PredefinedNodeT::matrixType,
                                           &PredefinedNodeT::genericMatrixPredefinedType,
                                           &PredefinedNodeT::texturePredefinedType,
                                           &PredefinedNodeT::msTexturePredefinedType,
                                           &PredefinedNodeT::genericTexturePredefinedType,
                                           &PredefinedNodeT::samplerStatePredefinedType,
                                           &PredefinedNodeT::structuredBufferPredefinedType,
                                           &PredefinedNodeT::bufferPredefinedType,
                                           &PredefinedNodeT::byteAddressBufferTypes,
                                           &PredefinedNodeT::constantBufferTemplated,
                                           &PredefinedNodeT::streamOutputPredefinedType,
                                           &PredefinedNodeT::otherViewResourceType,
                                           &PredefinedNodeT::subobjectType >;
        static_assert( countTemplateParameters_v<FunctionList> == contextClasses.size() );
        // This meta-loop will be unfolded at build time, therefore the generic lambda will be instantiated individually (by each type)
        ForEachValue<FunctionList>([&toReturn, &predefinedNode, &contextClasses](auto ctxMemFn, auto index)
                                    {
                                        if ((predefinedNode->*ctxMemFn)())  // pointer-to-member-function call.
                                        {
                                            toReturn = contextClasses[index];
                                        }
                                    });
        return toReturn;
    }

    // Get TypeClass for type inside a type context
    inline TypeClass AnalyzeTypeClass(AstType* typeNode)
    {
        TypeClass toReturn = TypeClass::IsNotType;
        if (typeNode != nullptr)
        {
            if (typeNode->predefinedType())
            {
                toReturn = AnalyzeTypeClass(typeNode->predefinedType());
            }
            else if (typeNode->userDefinedType() && typeNode->userDefinedType()->anyStructuredTypeDefinition())
            {
                if (typeNode->userDefinedType()->anyStructuredTypeDefinition()->classDefinition())
                {
                    toReturn = TypeClass::Class;
                }
                else if (typeNode->userDefinedType()->anyStructuredTypeDefinition()->interfaceDefinition())
                {
                    toReturn = TypeClass::Interface;
                }
                else if (typeNode->userDefinedType()->anyStructuredTypeDefinition()->structDefinition())
                {
                    toReturn = TypeClass::Struct;
                }
                else if (typeNode->userDefinedType()->anyStructuredTypeDefinition()->enumDefinition())
                {
                    toReturn = TypeClass::Enum;
                }
            }
            else if (typeNode->typeofExpression())
            {
                toReturn = TypeClass::TypeofExpression;
            }
        }
        return toReturn;
    }

    // Get TypeClass for type inside a functype context
    inline TypeClass AnalyzeTypeClass(AstFuncType* funcTypeNode)
    {
        TypeClass toReturn = TypeClass::IsNotType;
        if (funcTypeNode != nullptr)
        {
            if (funcTypeNode->Void())
            {
                toReturn = TypeClass::Void;
            }
            else
            {
                AstType* typeNode = funcTypeNode->type();
                toReturn = AnalyzeTypeClass(typeNode);
            }
        }
        return toReturn;
    }

    // Analyze a type (by parsing it) and return what class it belongs to.
    // Don't let too wild uncontrolled input sneak in there, there may be vectors of attack.
    inline TypeClass AnalyzeTypeClass(string_view typeName)
    {
        assert(typeName.find("/") == string::npos);  // forgot to unmangle ? use the TentativeName overload in these cases
        // Construct a mini program of the form "type a();" and check the AST.
        // Deduce the type class from the node.
        string miniprogram { typeName };
        miniprogram += " a();";
        ANTLRInputStream input(miniprogram);
        azslLexer lexer(&input);
        lexer.removeErrorListeners();
        CommonTokenStream tokens(&lexer);
        azslParser parser(&tokens);
        parser.removeErrorListeners();
        azslParser::CompilationUnitContext* unit = parser.compilationUnit();
        bool failCondition = parser.getNumberOfSyntaxErrors() > 0
                          || unit->Declarations.empty()
                          || unit->Declarations[0]->attributedFunctionDeclaration() == nullptr
                          || unit->Declarations[0]->attributedFunctionDeclaration()->functionDeclaration() == nullptr
                          || unit->Declarations[0]->attributedFunctionDeclaration()->functionDeclaration()->hlslFunctionDeclaration() == nullptr;
        AstFuncType* funcTypeNode = nullptr;
        if (!failCondition)
        {
            funcTypeNode = unit->Declarations[0]->
                               attributedFunctionDeclaration()->
                                   functionDeclaration()->
                                       hlslFunctionDeclaration()->
                                           leadingTypeFunctionSignature()->
                                               functionType();
        }
        return AnalyzeTypeClass(funcTypeNode);
    }

    struct TentativeName
    {
        string mangled;
    };
    // try to analyze a type with a few iterations to remove mangling while the result is NotAType
    inline TypeClass AnalyzeTypeClass(TentativeName typeName)
    {
        string try1 = UnMangle(typeName.mangled);
        TypeClass result = AnalyzeTypeClass(try1);
        if (result == TypeClass::IsNotType)
        {
            // this version does not preserve the global one, this can help for fundamentals
            string try2 = ReplaceSeparators(typeName.mangled, "::");
            result = AnalyzeTypeClass(try2);
        }
        return result;
    }

    /// Rows and Cols (this is specific to shader languages to identify vector and matrix types)
    struct ArithmeticTypeInfo
    {
        void ResolveSize()
        {
            m_size = Packing::PackedSizeof(m_underlyingScalar);
        }

        /// Get the size of a single base element
        const uint32_t GetBaseSize() const
        {
            return m_size;
        }

                /// Get the size of a the element with regard to dimensions as well
        const uint32_t GetTotalSize() const
        {
            return m_size * (m_cols > 0 ? m_cols : 1) * (m_rows > 0 ? m_rows : 1);
        }

        /// True if the type is a vector type. If it's a vector type it cannot be a matrix as well.
        const bool IsVector() const
        {
            // This treats special cases like 2x1, 3x1 and 4x1 as vectors
            // The behavior is consistent with dxc packing rules
            return (m_cols == 1 && m_rows > 1) || (m_cols > 1 && m_rows == 0);
        }

        /// True if the type is a matrix type. If it's a matrix type it cannot be a vector as well.
        const bool IsMatrix() const
        {
            // This fails special cases like 2x1, 3x1 and 4x1,
            //   but allows cases like 1x2, 1x3 and 1x4.
            // The behavior is consistent with dxc packing rules
            return m_rows > 0 && m_cols > 1;
        }

        /// If initialized as a fundamental -> not empty.
        const bool IsEmpty() const
        {
            return m_underlyingScalar == -1;
        }

        // for pretty print
        string UnderlyingScalarToStr() const
        {
            return m_underlyingScalar >= 0 && m_underlyingScalar < AZ::ShaderCompiler::Predefined::Scalar.size() ?
                AZ::ShaderCompiler::Predefined::Scalar[m_underlyingScalar] : "<NA>";
        }

        uint32_t m_size = 0;                     // In bytes. Size of 0 indicates TypeRefInfo which hasn't been resolved or is a struct
        uint32_t m_rows = 0;                     // 0 means it's not a matrix (effective Rows = 1). 1 or more means a Matrix
        uint32_t m_cols = 0;                     // 0 means it's not a vector (effective Cols = 1). 1 or more means a Vector or Matrix
        int      m_underlyingScalar = -1;        // index into AZ::ShaderCompiler::Predefined::Scalar, all fundamentals end up in a scalar at its leaf.
    };

    //! TypeRefInfo holds resolved immutable information of a core type (the `matrix2x2` in `column_major matrix2x2 a[3];`)
    //! Its own id (containing mangled core name)
    //! A type class (scalar, matrix, buffer, UDT...)
    //! Information around the fundamental if applicable (not UDT).
    struct TypeRefInfo
    {
        TypeRefInfo() = default;
        TypeRefInfo(IdentifierUID typeId, const ArithmeticTypeInfo& fundamentalInfo, TypeClass typeClass)
            : m_arithmeticInfo{fundamentalInfo},
              m_typeClass{typeClass},
              m_typeId{typeId}
        {}

        //! is plain data: sum type or fundamental. but not enum; because we don't know what underlying they have.
        const bool IsPackable() const
        {
            return m_typeClass.IsOneOf(TypeClass::Struct, TypeClass::Class)
                || !m_arithmeticInfo.IsEmpty();
        }

        //! non assigned TypeRefInfo
        bool IsEmpty() const
        {
            return m_typeId.m_name.empty();
        }

        //! if the type is a SubpassInput, it's an input attachment
        bool IsInputAttachment(const azslLexer* lexer) const
        {
            return IsViewType(m_typeClass)
                 && (  m_typeId.GetNameLeaf() == Trim(lexer->getVocabulary().getLiteralName(azslLexer::SubpassInput), "\'")
                    || m_typeId.GetNameLeaf() == Trim(lexer->getVocabulary().getLiteralName(azslLexer::SubpassInputMS), "\'"));
        }

        friend bool operator == (const TypeRefInfo& lhs, const TypeRefInfo& rhs)
        {
            return lhs.m_typeId == rhs.m_typeId;
        }
        friend bool operator != (const TypeRefInfo& lhs, const TypeRefInfo& rhs)
        {
            return !operator==(lhs,rhs);
        }

        IdentifierUID       m_typeId;
        TypeClass           m_typeClass;
        ArithmeticTypeInfo  m_arithmeticInfo;
    };

    //! Run a syntactic analysis of an arithmetic type name and extract info on its composition
    inline ArithmeticTypeInfo CreateArithmeticTypeInfo(QualifiedName a_typeName)
    {
        assert(IsArithmetic( /*slow*/AnalyzeTypeClass(TentativeName{a_typeName}) ));  // no need to call this function if you don't have a fundamental (non void)
        assert(!IsGenericArithmetic( /*slow*/AnalyzeTypeClass(TentativeName{a_typeName}) ));
        // ↑ fatal aspect. The input needs to be canonicalized earlier to minimize this function's complexity.

        ArithmeticTypeInfo toReturn;

        string typeName = UnMangle(a_typeName);
        size_t baseTypeLen = typeName.length();

        // In shading languages we have vector and matrix types which use number of columns and possibly rows (for matrices)
        // The digits always appear at the end of the type, so we can count back to resolve them
        auto& colsChar = typeName.at(baseTypeLen - 1);
        if (isdigit(colsChar))
        {   // Fundamental types ending with a digit are either vectors (1, 2, 3, 4) or matrices (1x1, 2x2, 3x3, 4x4, etc)

            // Vectors' sizes are defined in components, we opt to put those in Columns for consistency with the Matrix type below.
            // A float3x4 matrix in DXC is represented as class.matrix.float.3.4 = type { [3 x <4 x float>] }
            toReturn.m_cols = colsChar - '0';
            baseTypeLen--;
            assert(toReturn.m_cols >= 1 && toReturn.m_cols <= 4); // We should not be hitting asserts with any shader input, this is a bug in the tool

            if (baseTypeLen >= 2)
            {   // It's possible we are in a matrix type so let's check for rows too!

                // Documentation: https://docs.microsoft.com/en-us/windows/desktop/direct3dhlsl/dx-graphics-hlsl-per-component-math
                // A matrix is a data structure that contains rows and columns of data.The data can be any of the scalar data types,
                //   however, every element of a matrix is the same data type.The number of rows and columns is specified with the
                //   row-by-column string that is appended to the data type.

                auto& rowsChar = typeName.at(baseTypeLen - 2);
                if (isdigit(rowsChar))
                {
                    assert(typeName.at(baseTypeLen - 1) == 'x'); // We should not be hitting asserts with any shader input, this is a bug in the tool

                    toReturn.m_rows = rowsChar - '0';
                    baseTypeLen -= 2;
                    assert(toReturn.m_rows >= 1 && toReturn.m_rows <= 4); // We should not be hitting asserts with any shader input, this is a bug in the tool
                }
            }
        }

        // In any case baseTypeLen gives us our base type without vector or matrix information
        string baseType = typeName.substr(0, baseTypeLen);

        // 2 special cases: generic vector and matrix with no generic parameter -> they default to float, 4, 4.
        // https://github.com/Microsoft/DirectXShaderCompiler/issues/2034
        // temporarily support them, but when we canonicalize generics it will be supported earlier.
        if (baseType == "vector" || baseType == "matrix")
        {
            baseType = "float";
        }

        auto it = ::std::find(AZ::ShaderCompiler::Predefined::Scalar.begin(), AZ::ShaderCompiler::Predefined::Scalar.end(), baseType);
        assert(it != AZ::ShaderCompiler::Predefined::Scalar.end()); // baseType must exist in the Scalar bag by program invariant.
        toReturn.m_underlyingScalar = static_cast<int>( std::distance(AZ::ShaderCompiler::Predefined::Scalar.begin(), it) );
        toReturn.ResolveSize();
        return toReturn;
    }

    MAKE_REFLECTABLE_ENUM(RootParamType,
        SRV,               // t
        UAV,               // u
        Sampler,           // s
        CBV,               // b, bound under an SrgTable as a View. Used for external buffers
        SrgConstantCB,     // b, bound through a root descriptor. Used for SRG Constants.
        RootConstantCB     // b, bound through a CB under root signature. Used for root constants.
    );
    MAKE_REFLECTABLE_ENUM(BindingType, T, U, S, B);  //!< as HLSL register type. (please keep in the same order as RootParamType for simple mapping)

    //! map SRV->T | UAV->U | Sampler->S | CBV,SrgConsant,RootConstant->B
    BindingType RootParamTypeToBindingType(RootParamType paramType);
}
