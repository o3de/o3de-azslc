
// Generated from ../azslParser.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class  azslParser : public antlr4::Parser {
public:
  enum {
    AppendStructuredBuffer = 1, Bool = 2, Bool1 = 3, Bool2 = 4, Bool3 = 5, 
    Bool4 = 6, Bool1x1 = 7, Bool1x2 = 8, Bool1x3 = 9, Bool1x4 = 10, Bool2x1 = 11, 
    Bool2x2 = 12, Bool2x3 = 13, Bool2x4 = 14, Bool3x1 = 15, Bool3x2 = 16, 
    Bool3x3 = 17, Bool3x4 = 18, Bool4x1 = 19, Bool4x2 = 20, Bool4x3 = 21, 
    Bool4x4 = 22, Buffer = 23, BuiltInTriangleIntersectionAttributes = 24, 
    ByteAddressBuffer = 25, Break = 26, Case = 27, CBuffer = 28, Center = 29, 
    Centroid = 30, ConstantBuffer = 31, ConstantBufferCamel = 32, Class = 33, 
    ColumnMajor = 34, Const = 35, ConsumeStructuredBuffer = 36, Continue = 37, 
    Default = 38, Discard = 39, Do = 40, Double = 41, Double1 = 42, Double2 = 43, 
    Double3 = 44, Double4 = 45, Double1x1 = 46, Double1x2 = 47, Double1x3 = 48, 
    Double1x4 = 49, Double2x1 = 50, Double2x2 = 51, Double2x3 = 52, Double2x4 = 53, 
    Double3x1 = 54, Double3x2 = 55, Double3x3 = 56, Double3x4 = 57, Double4x1 = 58, 
    Double4x2 = 59, Double4x3 = 60, Double4x4 = 61, Else = 62, Enum = 63, 
    Export = 64, Extern = 65, FeedbackTexture2D = 66, FeedbackTexture2DArray = 67, 
    Float = 68, Float1 = 69, Float2 = 70, Float3 = 71, Float4 = 72, Float1x1 = 73, 
    Float1x2 = 74, Float1x3 = 75, Float1x4 = 76, Float2x1 = 77, Float2x2 = 78, 
    Float2x3 = 79, Float2x4 = 80, Float3x1 = 81, Float3x2 = 82, Float3x3 = 83, 
    Float3x4 = 84, Float4x1 = 85, Float4x2 = 86, Float4x3 = 87, Float4x4 = 88, 
    For = 89, Groupshared = 90, Globallycoherent = 91, Global = 92, Half = 93, 
    Half1 = 94, Half2 = 95, Half3 = 96, Half4 = 97, Half1x1 = 98, Half1x2 = 99, 
    Half1x3 = 100, Half1x4 = 101, Half2x1 = 102, Half2x2 = 103, Half2x3 = 104, 
    Half2x4 = 105, Half3x1 = 106, Half3x2 = 107, Half3x3 = 108, Half3x4 = 109, 
    Half4x1 = 110, Half4x2 = 111, Half4x3 = 112, Half4x4 = 113, If = 114, 
    In = 115, Inline = 116, Rootconstant = 117, Inout = 118, InputPatch = 119, 
    Int = 120, Int16_t = 121, Int32_t = 122, Int64_t = 123, Int1 = 124, 
    Int2 = 125, Int3 = 126, Int4 = 127, Int1x1 = 128, Int1x2 = 129, Int1x3 = 130, 
    Int1x4 = 131, Int2x1 = 132, Int2x2 = 133, Int2x3 = 134, Int2x4 = 135, 
    Int3x1 = 136, Int3x2 = 137, Int3x3 = 138, Int3x4 = 139, Int4x1 = 140, 
    Int4x2 = 141, Int4x3 = 142, Int4x4 = 143, Interface = 144, Line_ = 145, 
    LineAdj = 146, Linear = 147, LineStream = 148, Long = 149, Matrix = 150, 
    Nointerpolation = 151, Noperspective = 152, Option = 153, Out = 154, 
    OutputPatch = 155, Override = 156, Partial = 157, Packoffset = 158, 
    Point = 159, PointStream = 160, Precise = 161, RasterizerOrderedBuffer = 162, 
    RasterizerOrderedByteAddressBuffer = 163, RasterizerOrderedStructuredBuffer = 164, 
    RasterizerOrderedTexture1D = 165, RasterizerOrderedTexture1DArray = 166, 
    RasterizerOrderedTexture2D = 167, RasterizerOrderedTexture2DArray = 168, 
    RasterizerOrderedTexture3D = 169, RayDesc = 170, RaytracingAccelerationStructure = 171, 
    Register = 172, Return = 173, RowMajor = 174, RWBuffer = 175, RWByteAddressBuffer = 176, 
    RWStructuredBuffer = 177, RWTexture1D = 178, RWTexture1DArray = 179, 
    RWTexture2D = 180, RWTexture2DArray = 181, RWTexture3D = 182, Sample = 183, 
    Sampler = 184, SamplerCapitalS = 185, SamplerComparisonState = 186, 
    SamplerStateCamel = 187, SamplerState = 188, Shared = 189, SNorm = 190, 
    Static = 191, Struct = 192, StructuredBuffer = 193, SubpassInput = 194, 
    SubpassInputMS = 195, Switch = 196, TBuffer = 197, Texture1D = 198, 
    Texture1DArray = 199, Texture2D = 200, Texture2DArray = 201, Texture2DMS = 202, 
    Texture2DMSArray = 203, Texture3D = 204, TextureCube = 205, TextureCubeArray = 206, 
    Triangle = 207, TriangleAdj = 208, TriangleStream = 209, Uniform = 210, 
    Uint = 211, Uint1 = 212, Uint2 = 213, Uint3 = 214, Uint4 = 215, Uint1x1 = 216, 
    Uint1x2 = 217, Uint1x3 = 218, Uint1x4 = 219, Uint2x1 = 220, Uint2x2 = 221, 
    Uint2x3 = 222, Uint2x4 = 223, Uint3x1 = 224, Uint3x2 = 225, Uint3x3 = 226, 
    Uint3x4 = 227, Uint4x1 = 228, Uint4x2 = 229, Uint4x3 = 230, Uint4x4 = 231, 
    Uint16_t = 232, Uint32_t = 233, Uint64_t = 234, UNorm = 235, Unsigned = 236, 
    Dword = 237, Dword1 = 238, Dword2 = 239, Dword3 = 240, Dword4 = 241, 
    Dword1x1 = 242, Dword1x2 = 243, Dword1x3 = 244, Dword1x4 = 245, Dword2x1 = 246, 
    Dword2x2 = 247, Dword2x3 = 248, Dword2x4 = 249, Dword3x1 = 250, Dword3x2 = 251, 
    Dword3x3 = 252, Dword3x4 = 253, Dword4x1 = 254, Dword4x2 = 255, Dword4x3 = 256, 
    Dword4x4 = 257, Vector = 258, Volatile = 259, Void = 260, While = 261, 
    StateObjectConfig = 262, LocalRootSignature = 263, GlobalRootSignature = 264, 
    SubobjectToExportsAssociation = 265, RaytracingShaderConfig = 266, RaytracingPipelineConfig = 267, 
    RaytracingPipelineConfig1 = 268, TriangleHitGroup = 269, ProceduralPrimitiveHitGroup = 270, 
    ADDRESS_U = 271, ADDRESS_V = 272, ADDRESS_W = 273, BORDER_COLOR = 274, 
    MIN_FILTER = 275, MAG_FILTER = 276, MIP_FILTER = 277, MAX_ANISOTROPY = 278, 
    MAX_LOD = 279, MIN_LOD = 280, MIP_LOD_BIAS = 281, COMPARISON_FUNC = 282, 
    REDUCTION_TYPE = 283, FILTER_MODE_POINT = 284, FILTER_MODE_LINEAR = 285, 
    REDUCTION_TYPE_FILTER = 286, REDUCTION_TYPE_COMPARISON = 287, REDUCTION_TYPE_MINIMUM = 288, 
    REDUCTION_TYPE_MAXIMUM = 289, ADDRESS_MODE_WRAP = 290, ADDRESS_MODE_MIRROR = 291, 
    ADDRESS_MODE_CLAMP = 292, ADDRESS_MODE_BORDER = 293, ADDRESS_MODE_MIRROR_ONCE = 294, 
    COMPARISON_FUNCTION_NEVER = 295, COMPARISON_FUNCTION_LESS = 296, COMPARISON_FUNCTION_EQUAL = 297, 
    COMPARISON_FUNCTION_LESS_EQUAL = 298, COMPARISON_FUNCTION_GREATER = 299, 
    COMPARISON_FUNCTION_NOT_EQUAL = 300, COMPARISON_FUNCTION_GREATER_EQUAL = 301, 
    COMPARISON_FUNCTION_ALWAYS = 302, BORDER_COLOR_OPAQUE_BLACK = 303, BORDER_COLOR_TRANSPARENT_BLACK = 304, 
    BORDER_COLOR_OPAQUE_WHITE = 305, LeftParen = 306, RightParen = 307, 
    LeftBracket = 308, RightBracket = 309, LeftBrace = 310, RightBrace = 311, 
    LeftDoubleBracket = 312, Less = 313, LessEqual = 314, Greater = 315, 
    GreaterEqual = 316, LeftShift = 317, RightShift = 318, Plus = 319, PlusPlus = 320, 
    Minus = 321, MinusMinus = 322, Star = 323, Div = 324, Mod = 325, And = 326, 
    Or = 327, AndAnd = 328, OrOr = 329, Caret = 330, Not = 331, Tilde = 332, 
    Question = 333, Colon = 334, ColonColon = 335, Semi = 336, Comma = 337, 
    Assign = 338, StarAssign = 339, DivAssign = 340, ModAssign = 341, PlusAssign = 342, 
    MinusAssign = 343, LeftShiftAssign = 344, RightShiftAssign = 345, AndAssign = 346, 
    XorAssign = 347, OrAssign = 348, Equal = 349, NotEqual = 350, Dot = 351, 
    True = 352, False = 353, KW_AssociatedType = 354, KW_TypeAlias = 355, 
    KW_Typedef = 356, KW_Fundamental = 357, KW_Typeof = 358, FrequencyId = 359, 
    ShaderVariantFallback = 360, ShaderResourceGroupSemantic = 361, ShaderResourceGroup = 362, 
    KW_ext_print_message = 363, KW_ext_print_symbol = 364, KW_ext_prtsym_fully_qualified = 365, 
    KW_ext_prtsym_least_qualified = 366, KW_ext_prtsym_constint_value = 367, 
    HLSLSemanticStream = 368, HLSLSemanticSystem = 369, Indices = 370, Vertices = 371, 
    Payload = 372, Identifier = 373, IntegerLiteral = 374, FloatLiteral = 375, 
    StringLiteral = 376, PragmaDirective = 377, LineDirective = 378, Whitespace = 379, 
    Newline = 380, BlockComment = 381, LineComment = 382
  };

  enum {
    RuleCompilationUnit = 0, RuleTopLevelDeclaration = 1, RuleIdExpression = 2, 
    RuleUnqualifiedId = 3, RuleQualifiedId = 4, RuleNestedNameSpecifier = 5, 
    RuleClassDefinitionStatement = 6, RuleClassDefinition = 7, RuleBaseList = 8, 
    RuleClassMemberDeclaration = 9, RuleStructDefinitionStatement = 10, 
    RuleStructDefinition = 11, RuleStructMemberDeclaration = 12, RuleAnyStructuredTypeDefinitionStatement = 13, 
    RuleEnumDefinitionStatement = 14, RuleEnumDefinition = 15, RuleEnumKey = 16, 
    RuleEnumeratorListDefinition = 17, RuleEnumeratorDeclarator = 18, RuleAnyStructuredTypeDefinition = 19, 
    RuleInterfaceDefinitionStatement = 20, RuleInterfaceDefinition = 21, 
    RuleInterfaceMemberDeclaration = 22, RuleConstantBufferTemplated = 23, 
    RuleVariableDeclarationStatement = 24, RuleFunctionParams = 25, RuleFunctionParam = 26, 
    RuleHlslSemantic = 27, RuleHlslSemanticName = 28, RuleAttributeArguments = 29, 
    RuleAttributeArgumentList = 30, RuleAttribute = 31, RuleAttributeSpecifier = 32, 
    RuleAttributeSpecifierSequence = 33, RuleAttributeSpecifierAny = 34, 
    RuleBlock = 35, RuleStatement = 36, RuleForInitializer = 37, RuleSwitchLabel = 38, 
    RuleSwitchSection = 39, RuleSwitchBlock = 40, RuleEmbeddedStatement = 41, 
    RuleElseClause = 42, RuleExpression = 43, RuleExpressionExt = 44, RulePostfixUnaryOperator = 45, 
    RulePrefixUnaryOperator = 46, RuleBinaryOperator = 47, RuleAssignmentOperator = 48, 
    RuleArgumentList = 49, RuleArguments = 50, RuleVariableDeclaration = 51, 
    RuleVariableDeclarators = 52, RuleUnnamedVariableDeclarator = 53, RuleNamedVariableDeclarator = 54, 
    RuleVariableInitializer = 55, RuleStandardVariableInitializer = 56, 
    RuleArrayElementInitializers = 57, RuleArrayRankSpecifier = 58, RulePackOffsetNode = 59, 
    RuleStorageFlags = 60, RuleStorageFlag = 61, RuleType = 62, RulePredefinedType = 63, 
    RuleSubobjectType = 64, RuleOtherViewResourceType = 65, RuleRtxBuiltInTypes = 66, 
    RuleBufferPredefinedType = 67, RuleBufferType = 68, RuleByteAddressBufferTypes = 69, 
    RulePatchPredefinedType = 70, RulePatchType = 71, RuleSamplerStatePredefinedType = 72, 
    RuleScalarType = 73, RuleStreamOutputPredefinedType = 74, RuleStreamOutputObjectType = 75, 
    RuleStructuredBufferPredefinedType = 76, RuleStructuredBufferName = 77, 
    RuleTextureType = 78, RuleTexturePredefinedType = 79, RuleGenericTexturePredefinedType = 80, 
    RuleTextureTypeMS = 81, RuleMsTexturePredefinedType = 82, RuleVectorType = 83, 
    RuleGenericVectorType = 84, RuleScalarOrVectorType = 85, RuleScalarOrVectorOrMatrixType = 86, 
    RuleMatrixType = 87, RuleGenericMatrixPredefinedType = 88, RuleRegisterAllocation = 89, 
    RuleSamplerStateProperty = 90, RuleLiteral = 91, RuleLeadingTypeFunctionSignature = 92, 
    RuleHlslFunctionDefinition = 93, RuleHlslFunctionDeclaration = 94, RuleUserDefinedType = 95, 
    RuleAssociatedTypeDeclaration = 96, RuleTypedefStatement = 97, RuleTypealiasStatement = 98, 
    RuleTypeAliasingDefinitionStatement = 99, RuleTypeofExpression = 100, 
    RuleGenericParameterList = 101, RuleGenericTypeDefinition = 102, RuleGenericConstraint = 103, 
    RuleLanguageDefinedConstraint = 104, RuleFunctionDeclaration = 105, 
    RuleAttributedFunctionDeclaration = 106, RuleFunctionDefinition = 107, 
    RuleAttributedFunctionDefinition = 108, RuleCompilerExtensionStatement = 109, 
    RuleSrgDefinition = 110, RuleAttributedSrgDefinition = 111, RuleSrgMemberDeclaration = 112, 
    RuleSrgSemantic = 113, RuleAttributedSrgSemantic = 114, RuleSrgSemanticBodyDeclaration = 115, 
    RuleSrgSemanticMemberDeclaration = 116, RuleSamplerBodyDeclaration = 117, 
    RuleSamplerMemberDeclaration = 118, RuleMaxAnisotropyOption = 119, RuleMinFilterOption = 120, 
    RuleMagFilterOption = 121, RuleMipFilterOption = 122, RuleReductionTypeOption = 123, 
    RuleComparisonFunctionOption = 124, RuleAddressUOption = 125, RuleAddressVOption = 126, 
    RuleAddressWOption = 127, RuleMinLodOption = 128, RuleMaxLodOption = 129, 
    RuleMipLodBiasOption = 130, RuleBorderColorOption = 131, RuleFilterModeEnum = 132, 
    RuleReductionTypeEnum = 133, RuleAddressModeEnum = 134, RuleComparisonFunctionEnum = 135, 
    RuleBorderColorEnum = 136
  };

  explicit azslParser(antlr4::TokenStream *input);
  ~azslParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class CompilationUnitContext;
  class TopLevelDeclarationContext;
  class IdExpressionContext;
  class UnqualifiedIdContext;
  class QualifiedIdContext;
  class NestedNameSpecifierContext;
  class ClassDefinitionStatementContext;
  class ClassDefinitionContext;
  class BaseListContext;
  class ClassMemberDeclarationContext;
  class StructDefinitionStatementContext;
  class StructDefinitionContext;
  class StructMemberDeclarationContext;
  class AnyStructuredTypeDefinitionStatementContext;
  class EnumDefinitionStatementContext;
  class EnumDefinitionContext;
  class EnumKeyContext;
  class EnumeratorListDefinitionContext;
  class EnumeratorDeclaratorContext;
  class AnyStructuredTypeDefinitionContext;
  class InterfaceDefinitionStatementContext;
  class InterfaceDefinitionContext;
  class InterfaceMemberDeclarationContext;
  class ConstantBufferTemplatedContext;
  class VariableDeclarationStatementContext;
  class FunctionParamsContext;
  class FunctionParamContext;
  class HlslSemanticContext;
  class HlslSemanticNameContext;
  class AttributeArgumentsContext;
  class AttributeArgumentListContext;
  class AttributeContext;
  class AttributeSpecifierContext;
  class AttributeSpecifierSequenceContext;
  class AttributeSpecifierAnyContext;
  class BlockContext;
  class StatementContext;
  class ForInitializerContext;
  class SwitchLabelContext;
  class SwitchSectionContext;
  class SwitchBlockContext;
  class EmbeddedStatementContext;
  class ElseClauseContext;
  class ExpressionContext;
  class ExpressionExtContext;
  class PostfixUnaryOperatorContext;
  class PrefixUnaryOperatorContext;
  class BinaryOperatorContext;
  class AssignmentOperatorContext;
  class ArgumentListContext;
  class ArgumentsContext;
  class VariableDeclarationContext;
  class VariableDeclaratorsContext;
  class UnnamedVariableDeclaratorContext;
  class NamedVariableDeclaratorContext;
  class VariableInitializerContext;
  class StandardVariableInitializerContext;
  class ArrayElementInitializersContext;
  class ArrayRankSpecifierContext;
  class PackOffsetNodeContext;
  class StorageFlagsContext;
  class StorageFlagContext;
  class TypeContext;
  class PredefinedTypeContext;
  class SubobjectTypeContext;
  class OtherViewResourceTypeContext;
  class RtxBuiltInTypesContext;
  class BufferPredefinedTypeContext;
  class BufferTypeContext;
  class ByteAddressBufferTypesContext;
  class PatchPredefinedTypeContext;
  class PatchTypeContext;
  class SamplerStatePredefinedTypeContext;
  class ScalarTypeContext;
  class StreamOutputPredefinedTypeContext;
  class StreamOutputObjectTypeContext;
  class StructuredBufferPredefinedTypeContext;
  class StructuredBufferNameContext;
  class TextureTypeContext;
  class TexturePredefinedTypeContext;
  class GenericTexturePredefinedTypeContext;
  class TextureTypeMSContext;
  class MsTexturePredefinedTypeContext;
  class VectorTypeContext;
  class GenericVectorTypeContext;
  class ScalarOrVectorTypeContext;
  class ScalarOrVectorOrMatrixTypeContext;
  class MatrixTypeContext;
  class GenericMatrixPredefinedTypeContext;
  class RegisterAllocationContext;
  class SamplerStatePropertyContext;
  class LiteralContext;
  class LeadingTypeFunctionSignatureContext;
  class HlslFunctionDefinitionContext;
  class HlslFunctionDeclarationContext;
  class UserDefinedTypeContext;
  class AssociatedTypeDeclarationContext;
  class TypedefStatementContext;
  class TypealiasStatementContext;
  class TypeAliasingDefinitionStatementContext;
  class TypeofExpressionContext;
  class GenericParameterListContext;
  class GenericTypeDefinitionContext;
  class GenericConstraintContext;
  class LanguageDefinedConstraintContext;
  class FunctionDeclarationContext;
  class AttributedFunctionDeclarationContext;
  class FunctionDefinitionContext;
  class AttributedFunctionDefinitionContext;
  class CompilerExtensionStatementContext;
  class SrgDefinitionContext;
  class AttributedSrgDefinitionContext;
  class SrgMemberDeclarationContext;
  class SrgSemanticContext;
  class AttributedSrgSemanticContext;
  class SrgSemanticBodyDeclarationContext;
  class SrgSemanticMemberDeclarationContext;
  class SamplerBodyDeclarationContext;
  class SamplerMemberDeclarationContext;
  class MaxAnisotropyOptionContext;
  class MinFilterOptionContext;
  class MagFilterOptionContext;
  class MipFilterOptionContext;
  class ReductionTypeOptionContext;
  class ComparisonFunctionOptionContext;
  class AddressUOptionContext;
  class AddressVOptionContext;
  class AddressWOptionContext;
  class MinLodOptionContext;
  class MaxLodOptionContext;
  class MipLodBiasOptionContext;
  class BorderColorOptionContext;
  class FilterModeEnumContext;
  class ReductionTypeEnumContext;
  class AddressModeEnumContext;
  class ComparisonFunctionEnumContext;
  class BorderColorEnumContext; 

  class  CompilationUnitContext : public antlr4::ParserRuleContext {
  public:
    azslParser::TopLevelDeclarationContext *topLevelDeclarationContext = nullptr;
    std::vector<TopLevelDeclarationContext *> Declarations;
    CompilationUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<TopLevelDeclarationContext *> topLevelDeclaration();
    TopLevelDeclarationContext* topLevelDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompilationUnitContext* compilationUnit();

  class  TopLevelDeclarationContext : public antlr4::ParserRuleContext {
  public:
    TopLevelDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnyStructuredTypeDefinitionStatementContext *anyStructuredTypeDefinitionStatement();
    VariableDeclarationStatementContext *variableDeclarationStatement();
    AttributedFunctionDefinitionContext *attributedFunctionDefinition();
    AttributedFunctionDeclarationContext *attributedFunctionDeclaration();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    CompilerExtensionStatementContext *compilerExtensionStatement();
    TypeAliasingDefinitionStatementContext *typeAliasingDefinitionStatement();
    AttributedSrgDefinitionContext *attributedSrgDefinition();
    AttributedSrgSemanticContext *attributedSrgSemantic();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TopLevelDeclarationContext* topLevelDeclaration();

  class  IdExpressionContext : public antlr4::ParserRuleContext {
  public:
    IdExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnqualifiedIdContext *unqualifiedId();
    QualifiedIdContext *qualifiedId();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdExpressionContext* idExpression();

  class  UnqualifiedIdContext : public antlr4::ParserRuleContext {
  public:
    UnqualifiedIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnqualifiedIdContext* unqualifiedId();

  class  QualifiedIdContext : public antlr4::ParserRuleContext {
  public:
    QualifiedIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NestedNameSpecifierContext *nestedNameSpecifier();
    UnqualifiedIdContext *unqualifiedId();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QualifiedIdContext* qualifiedId();

  class  NestedNameSpecifierContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *GlobalSROToken = nullptr;
    NestedNameSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ColonColon();
    antlr4::tree::TerminalNode* ColonColon(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NestedNameSpecifierContext* nestedNameSpecifier();

  class  ClassDefinitionStatementContext : public antlr4::ParserRuleContext {
  public:
    ClassDefinitionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassDefinitionContext *classDefinition();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassDefinitionStatementContext* classDefinitionStatement();

  class  ClassDefinitionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *Name = nullptr;
    azslParser::BaseListContext *BaseListOpt = nullptr;
    ClassDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    antlr4::tree::TerminalNode *Identifier();
    std::vector<ClassMemberDeclarationContext *> classMemberDeclaration();
    ClassMemberDeclarationContext* classMemberDeclaration(size_t i);
    BaseListContext *baseList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassDefinitionContext* classDefinition();

  class  BaseListContext : public antlr4::ParserRuleContext {
  public:
    BaseListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    std::vector<IdExpressionContext *> idExpression();
    IdExpressionContext* idExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BaseListContext* baseList();

  class  ClassMemberDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ClassMemberDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableDeclarationStatementContext *variableDeclarationStatement();
    AttributedFunctionDefinitionContext *attributedFunctionDefinition();
    AttributedFunctionDeclarationContext *attributedFunctionDeclaration();
    TypeAliasingDefinitionStatementContext *typeAliasingDefinitionStatement();
    AnyStructuredTypeDefinitionStatementContext *anyStructuredTypeDefinitionStatement();
    AttributeSpecifierAnyContext *attributeSpecifierAny();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassMemberDeclarationContext* classMemberDeclaration();

  class  StructDefinitionStatementContext : public antlr4::ParserRuleContext {
  public:
    StructDefinitionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StructDefinitionContext *structDefinition();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StructDefinitionStatementContext* structDefinitionStatement();

  class  StructDefinitionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *Name = nullptr;
    StructDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Struct();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    antlr4::tree::TerminalNode *Identifier();
    std::vector<StructMemberDeclarationContext *> structMemberDeclaration();
    StructMemberDeclarationContext* structMemberDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StructDefinitionContext* structDefinition();

  class  StructMemberDeclarationContext : public antlr4::ParserRuleContext {
  public:
    StructMemberDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableDeclarationStatementContext *variableDeclarationStatement();
    AttributedFunctionDefinitionContext *attributedFunctionDefinition();
    AttributedFunctionDeclarationContext *attributedFunctionDeclaration();
    AnyStructuredTypeDefinitionStatementContext *anyStructuredTypeDefinitionStatement();
    TypeAliasingDefinitionStatementContext *typeAliasingDefinitionStatement();
    AttributeSpecifierAnyContext *attributeSpecifierAny();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StructMemberDeclarationContext* structMemberDeclaration();

  class  AnyStructuredTypeDefinitionStatementContext : public antlr4::ParserRuleContext {
  public:
    AnyStructuredTypeDefinitionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnyStructuredTypeDefinitionContext *anyStructuredTypeDefinition();
    antlr4::tree::TerminalNode *Semi();
    std::vector<AttributeSpecifierAnyContext *> attributeSpecifierAny();
    AttributeSpecifierAnyContext* attributeSpecifierAny(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnyStructuredTypeDefinitionStatementContext* anyStructuredTypeDefinitionStatement();

  class  EnumDefinitionStatementContext : public antlr4::ParserRuleContext {
  public:
    EnumDefinitionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumDefinitionContext *enumDefinition();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumDefinitionStatementContext* enumDefinitionStatement();

  class  EnumDefinitionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *Name = nullptr;
    azslParser::EnumeratorListDefinitionContext *List = nullptr;
    EnumDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumKeyContext *enumKey();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    antlr4::tree::TerminalNode *Identifier();
    EnumeratorListDefinitionContext *enumeratorListDefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumDefinitionContext* enumDefinition();

  class  EnumKeyContext : public antlr4::ParserRuleContext {
  public:
    EnumKeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    EnumKeyContext() = default;
    void copyFrom(EnumKeyContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UnscopedEnumContext : public EnumKeyContext {
  public:
    UnscopedEnumContext(EnumKeyContext *ctx);

    antlr4::tree::TerminalNode *Enum();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ScopedEnumContext : public EnumKeyContext {
  public:
    ScopedEnumContext(EnumKeyContext *ctx);

    antlr4::tree::TerminalNode *Enum();
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Struct();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  EnumKeyContext* enumKey();

  class  EnumeratorListDefinitionContext : public antlr4::ParserRuleContext {
  public:
    azslParser::EnumeratorDeclaratorContext *enumeratorDeclaratorContext = nullptr;
    std::vector<EnumeratorDeclaratorContext *> Enumerators;
    EnumeratorListDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EnumeratorDeclaratorContext *> enumeratorDeclarator();
    EnumeratorDeclaratorContext* enumeratorDeclarator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumeratorListDefinitionContext* enumeratorListDefinition();

  class  EnumeratorDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *Name = nullptr;
    azslParser::ExpressionContext *Value = nullptr;
    EnumeratorDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Assign();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumeratorDeclaratorContext* enumeratorDeclarator();

  class  AnyStructuredTypeDefinitionContext : public antlr4::ParserRuleContext {
  public:
    AnyStructuredTypeDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassDefinitionContext *classDefinition();
    InterfaceDefinitionContext *interfaceDefinition();
    StructDefinitionContext *structDefinition();
    EnumDefinitionContext *enumDefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnyStructuredTypeDefinitionContext* anyStructuredTypeDefinition();

  class  InterfaceDefinitionStatementContext : public antlr4::ParserRuleContext {
  public:
    InterfaceDefinitionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InterfaceDefinitionContext *interfaceDefinition();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfaceDefinitionStatementContext* interfaceDefinitionStatement();

  class  InterfaceDefinitionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *Name = nullptr;
    InterfaceDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Interface();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    antlr4::tree::TerminalNode *Identifier();
    std::vector<InterfaceMemberDeclarationContext *> interfaceMemberDeclaration();
    InterfaceMemberDeclarationContext* interfaceMemberDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfaceDefinitionContext* interfaceDefinition();

  class  InterfaceMemberDeclarationContext : public antlr4::ParserRuleContext {
  public:
    InterfaceMemberDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributedFunctionDeclarationContext *attributedFunctionDeclaration();
    AssociatedTypeDeclarationContext *associatedTypeDeclaration();
    AnyStructuredTypeDefinitionStatementContext *anyStructuredTypeDefinitionStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfaceMemberDeclarationContext* interfaceMemberDeclaration();

  class  ConstantBufferTemplatedContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *CBCoreType = nullptr;
    azslParser::TypeContext *GenericTypeName = nullptr;
    ConstantBufferTemplatedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    TypeContext *type();
    antlr4::tree::TerminalNode *ConstantBuffer();
    antlr4::tree::TerminalNode *ConstantBufferCamel();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstantBufferTemplatedContext* constantBufferTemplated();

  class  VariableDeclarationStatementContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableDeclarationContext *variableDeclaration();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableDeclarationStatementContext* variableDeclarationStatement();

  class  FunctionParamsContext : public antlr4::ParserRuleContext {
  public:
    FunctionParamsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Void();
    std::vector<FunctionParamContext *> functionParam();
    FunctionParamContext* functionParam(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionParamsContext* functionParams();

  class  FunctionParamContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *Name = nullptr;
    FunctionParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    UnnamedVariableDeclaratorContext *unnamedVariableDeclarator();
    std::vector<AttributeSpecifierAnyContext *> attributeSpecifierAny();
    AttributeSpecifierAnyContext* attributeSpecifierAny(size_t i);
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionParamContext* functionParam();

  class  HlslSemanticContext : public antlr4::ParserRuleContext {
  public:
    azslParser::HlslSemanticNameContext *Name = nullptr;
    HlslSemanticContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    HlslSemanticNameContext *hlslSemanticName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HlslSemanticContext* hlslSemantic();

  class  HlslSemanticNameContext : public antlr4::ParserRuleContext {
  public:
    HlslSemanticNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HLSLSemanticStream();
    antlr4::tree::TerminalNode *HLSLSemanticSystem();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HlslSemanticNameContext* hlslSemanticName();

  class  AttributeArgumentsContext : public antlr4::ParserRuleContext {
  public:
    AttributeArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LiteralContext *> literal();
    LiteralContext* literal(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeArgumentsContext* attributeArguments();

  class  AttributeArgumentListContext : public antlr4::ParserRuleContext {
  public:
    AttributeArgumentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    AttributeArgumentsContext *attributeArguments();
    antlr4::tree::TerminalNode *RightParen();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeArgumentListContext* attributeArgumentList();

  class  AttributeContext : public antlr4::ParserRuleContext {
  public:
    AttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AttributeContext() = default;
    void copyFrom(AttributeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  GlobalAttributeContext : public AttributeContext {
  public:
    GlobalAttributeContext(AttributeContext *ctx);

    antlr4::Token *Namespace = nullptr;
    antlr4::Token *Name = nullptr;
    antlr4::tree::TerminalNode *Global();
    std::vector<antlr4::tree::TerminalNode *> ColonColon();
    antlr4::tree::TerminalNode* ColonColon(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    AttributeArgumentListContext *attributeArgumentList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AttachedAttributeContext : public AttributeContext {
  public:
    AttachedAttributeContext(AttributeContext *ctx);

    antlr4::Token *Namespace = nullptr;
    antlr4::Token *Name = nullptr;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    antlr4::tree::TerminalNode *ColonColon();
    AttributeArgumentListContext *attributeArgumentList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  AttributeContext* attribute();

  class  AttributeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    AttributeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBracket();
    AttributeContext *attribute();
    antlr4::tree::TerminalNode *RightBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeSpecifierContext* attributeSpecifier();

  class  AttributeSpecifierSequenceContext : public antlr4::ParserRuleContext {
  public:
    azslParser::AttributeContext *attributeContext = nullptr;
    std::vector<AttributeContext *> Attributes;
    AttributeSpecifierSequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftDoubleBracket();
    std::vector<antlr4::tree::TerminalNode *> RightBracket();
    antlr4::tree::TerminalNode* RightBracket(size_t i);
    std::vector<AttributeContext *> attribute();
    AttributeContext* attribute(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeSpecifierSequenceContext* attributeSpecifierSequence();

  class  AttributeSpecifierAnyContext : public antlr4::ParserRuleContext {
  public:
    AttributeSpecifierAnyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributeSpecifierContext *attributeSpecifier();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeSpecifierAnyContext* attributeSpecifierAny();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    azslParser::StatementContext *statementContext = nullptr;
    std::vector<StatementContext *> Stmts;
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockContext* block();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableDeclarationStatementContext *variableDeclarationStatement();
    EmbeddedStatementContext *embeddedStatement();
    AnyStructuredTypeDefinitionStatementContext *anyStructuredTypeDefinitionStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  ForInitializerContext : public antlr4::ParserRuleContext {
  public:
    ForInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableDeclarationContext *variableDeclaration();
    ExpressionExtContext *expressionExt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForInitializerContext* forInitializer();

  class  SwitchLabelContext : public antlr4::ParserRuleContext {
  public:
    SwitchLabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SwitchLabelContext() = default;
    void copyFrom(SwitchLabelContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DefaultSwitchLabelContext : public SwitchLabelContext {
  public:
    DefaultSwitchLabelContext(SwitchLabelContext *ctx);

    antlr4::tree::TerminalNode *Default();
    antlr4::tree::TerminalNode *Colon();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  CaseSwitchLabelContext : public SwitchLabelContext {
  public:
    CaseSwitchLabelContext(SwitchLabelContext *ctx);

    azslParser::ExpressionContext *Expr = nullptr;
    antlr4::tree::TerminalNode *Case();
    antlr4::tree::TerminalNode *Colon();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  SwitchLabelContext* switchLabel();

  class  SwitchSectionContext : public antlr4::ParserRuleContext {
  public:
    SwitchSectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SwitchLabelContext *> switchLabel();
    SwitchLabelContext* switchLabel(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SwitchSectionContext* switchSection();

  class  SwitchBlockContext : public antlr4::ParserRuleContext {
  public:
    SwitchBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    std::vector<SwitchSectionContext *> switchSection();
    SwitchSectionContext* switchSection(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SwitchBlockContext* switchBlock();

  class  EmbeddedStatementContext : public antlr4::ParserRuleContext {
  public:
    EmbeddedStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    EmbeddedStatementContext() = default;
    void copyFrom(EmbeddedStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DoStatementContext : public EmbeddedStatementContext {
  public:
    DoStatementContext(EmbeddedStatementContext *ctx);

    azslParser::ExpressionExtContext *Condition = nullptr;
    antlr4::tree::TerminalNode *Do();
    EmbeddedStatementContext *embeddedStatement();
    antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Semi();
    ExpressionExtContext *expressionExt();
    std::vector<AttributeSpecifierContext *> attributeSpecifier();
    AttributeSpecifierContext* attributeSpecifier(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  EmptyStatementContext : public EmbeddedStatementContext {
  public:
    EmptyStatementContext(EmbeddedStatementContext *ctx);

    antlr4::tree::TerminalNode *Semi();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BlockStatementContext : public EmbeddedStatementContext {
  public:
    BlockStatementContext(EmbeddedStatementContext *ctx);

    BlockContext *block();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  WhileStatementContext : public EmbeddedStatementContext {
  public:
    WhileStatementContext(EmbeddedStatementContext *ctx);

    azslParser::ExpressionExtContext *condition = nullptr;
    antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    EmbeddedStatementContext *embeddedStatement();
    ExpressionExtContext *expressionExt();
    std::vector<AttributeSpecifierContext *> attributeSpecifier();
    AttributeSpecifierContext* attributeSpecifier(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ExtenstionStatementContext : public EmbeddedStatementContext {
  public:
    ExtenstionStatementContext(EmbeddedStatementContext *ctx);

    CompilerExtensionStatementContext *compilerExtensionStatement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BreakStatementContext : public EmbeddedStatementContext {
  public:
    BreakStatementContext(EmbeddedStatementContext *ctx);

    antlr4::tree::TerminalNode *Break();
    antlr4::tree::TerminalNode *Semi();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  IfStatementContext : public EmbeddedStatementContext {
  public:
    IfStatementContext(EmbeddedStatementContext *ctx);

    azslParser::ExpressionExtContext *Condition = nullptr;
    azslParser::EmbeddedStatementContext *Stmt = nullptr;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ExpressionExtContext *expressionExt();
    EmbeddedStatementContext *embeddedStatement();
    std::vector<AttributeSpecifierContext *> attributeSpecifier();
    AttributeSpecifierContext* attributeSpecifier(size_t i);
    ElseClauseContext *elseClause();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SwitchStatementContext : public EmbeddedStatementContext {
  public:
    SwitchStatementContext(EmbeddedStatementContext *ctx);

    azslParser::ExpressionExtContext *Expr = nullptr;
    antlr4::tree::TerminalNode *Switch();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    SwitchBlockContext *switchBlock();
    ExpressionExtContext *expressionExt();
    std::vector<AttributeSpecifierContext *> attributeSpecifier();
    AttributeSpecifierContext* attributeSpecifier(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ExpressionStatementContext : public EmbeddedStatementContext {
  public:
    ExpressionStatementContext(EmbeddedStatementContext *ctx);

    azslParser::ExpressionExtContext *Expr = nullptr;
    antlr4::tree::TerminalNode *Semi();
    ExpressionExtContext *expressionExt();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ReturnStatementContext : public EmbeddedStatementContext {
  public:
    ReturnStatementContext(EmbeddedStatementContext *ctx);

    azslParser::ExpressionExtContext *Expr = nullptr;
    antlr4::tree::TerminalNode *Return();
    antlr4::tree::TerminalNode *Semi();
    ExpressionExtContext *expressionExt();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  DiscardStatementContext : public EmbeddedStatementContext {
  public:
    DiscardStatementContext(EmbeddedStatementContext *ctx);

    antlr4::tree::TerminalNode *Discard();
    antlr4::tree::TerminalNode *Semi();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ForStatementContext : public EmbeddedStatementContext {
  public:
    ForStatementContext(EmbeddedStatementContext *ctx);

    azslParser::ExpressionExtContext *Condition = nullptr;
    azslParser::ExpressionExtContext *iterator = nullptr;
    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *LeftParen();
    std::vector<antlr4::tree::TerminalNode *> Semi();
    antlr4::tree::TerminalNode* Semi(size_t i);
    antlr4::tree::TerminalNode *RightParen();
    EmbeddedStatementContext *embeddedStatement();
    std::vector<AttributeSpecifierContext *> attributeSpecifier();
    AttributeSpecifierContext* attributeSpecifier(size_t i);
    ForInitializerContext *forInitializer();
    std::vector<ExpressionExtContext *> expressionExt();
    ExpressionExtContext* expressionExt(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TypeAliasingDefinitionStatementLabelContext : public EmbeddedStatementContext {
  public:
    TypeAliasingDefinitionStatementLabelContext(EmbeddedStatementContext *ctx);

    TypeAliasingDefinitionStatementContext *typeAliasingDefinitionStatement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ContinueStatementContext : public EmbeddedStatementContext {
  public:
    ContinueStatementContext(EmbeddedStatementContext *ctx);

    antlr4::tree::TerminalNode *Continue();
    antlr4::tree::TerminalNode *Semi();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  EmbeddedStatementContext* embeddedStatement();

  class  ElseClauseContext : public antlr4::ParserRuleContext {
  public:
    azslParser::EmbeddedStatementContext *Stmt = nullptr;
    ElseClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Else();
    EmbeddedStatementContext *embeddedStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElseClauseContext* elseClause();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ParenthesizedExpressionContext : public ExpressionContext {
  public:
    ParenthesizedExpressionContext(ExpressionContext *ctx);

    azslParser::ExpressionExtContext *Expr = nullptr;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ExpressionExtContext *expressionExt();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MemberAccessExpressionContext : public ExpressionContext {
  public:
    MemberAccessExpressionContext(ExpressionContext *ctx);

    azslParser::ExpressionContext *LHSExpr = nullptr;
    antlr4::Token *DotToken = nullptr;
    azslParser::IdExpressionContext *Member = nullptr;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Dot();
    IdExpressionContext *idExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PrefixUnaryExpressionContext : public ExpressionContext {
  public:
    PrefixUnaryExpressionContext(ExpressionContext *ctx);

    azslParser::PrefixUnaryOperatorContext *Operator = nullptr;
    azslParser::ExpressionContext *Expr = nullptr;
    PrefixUnaryOperatorContext *prefixUnaryOperator();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  LiteralExpressionContext : public ExpressionContext {
  public:
    LiteralExpressionContext(ExpressionContext *ctx);

    LiteralContext *literal();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ConditionalExpressionContext : public ExpressionContext {
  public:
    ConditionalExpressionContext(ExpressionContext *ctx);

    azslParser::ExpressionContext *Condition = nullptr;
    azslParser::ExpressionExtContext *TrueExpr = nullptr;
    azslParser::ExpressionExtContext *FalseExpr = nullptr;
    antlr4::tree::TerminalNode *Question();
    antlr4::tree::TerminalNode *Colon();
    ExpressionContext *expression();
    std::vector<ExpressionExtContext *> expressionExt();
    ExpressionExtContext* expressionExt(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PostfixUnaryExpressionContext : public ExpressionContext {
  public:
    PostfixUnaryExpressionContext(ExpressionContext *ctx);

    azslParser::ExpressionContext *Expr = nullptr;
    azslParser::PostfixUnaryOperatorContext *Operator = nullptr;
    ExpressionContext *expression();
    PostfixUnaryOperatorContext *postfixUnaryOperator();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  NumericConstructorExpressionContext : public ExpressionContext {
  public:
    NumericConstructorExpressionContext(ExpressionContext *ctx);

    ScalarOrVectorOrMatrixTypeContext *scalarOrVectorOrMatrixType();
    ArgumentListContext *argumentList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  FunctionCallExpressionContext : public ExpressionContext {
  public:
    FunctionCallExpressionContext(ExpressionContext *ctx);

    azslParser::ExpressionContext *Expr = nullptr;
    ArgumentListContext *argumentList();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  IdentifierExpressionContext : public ExpressionContext {
  public:
    IdentifierExpressionContext(ExpressionContext *ctx);

    IdExpressionContext *idExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BinaryExpressionContext : public ExpressionContext {
  public:
    BinaryExpressionContext(ExpressionContext *ctx);

    azslParser::ExpressionContext *Left = nullptr;
    azslParser::BinaryOperatorContext *Operator = nullptr;
    azslParser::ExpressionContext *Right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    BinaryOperatorContext *binaryOperator();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AssignmentExpressionContext : public ExpressionContext {
  public:
    AssignmentExpressionContext(ExpressionContext *ctx);

    azslParser::ExpressionContext *Left = nullptr;
    azslParser::AssignmentOperatorContext *Operator = nullptr;
    azslParser::ExpressionExtContext *Right = nullptr;
    ExpressionContext *expression();
    AssignmentOperatorContext *assignmentOperator();
    ExpressionExtContext *expressionExt();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  CastExpressionContext : public ExpressionContext {
  public:
    CastExpressionContext(ExpressionContext *ctx);

    azslParser::ArrayRankSpecifierContext *arrayRankSpecifierContext = nullptr;
    std::vector<ArrayRankSpecifierContext *> ArrayRankSpecifiers;
    azslParser::ExpressionContext *Expr = nullptr;
    antlr4::tree::TerminalNode *LeftParen();
    TypeContext *type();
    antlr4::tree::TerminalNode *RightParen();
    ExpressionContext *expression();
    std::vector<ArrayRankSpecifierContext *> arrayRankSpecifier();
    ArrayRankSpecifierContext* arrayRankSpecifier(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ArrayAccessExpressionContext : public ExpressionContext {
  public:
    ArrayAccessExpressionContext(ExpressionContext *ctx);

    azslParser::ExpressionContext *Expr = nullptr;
    azslParser::ExpressionContext *Index = nullptr;
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  ExpressionExtContext : public antlr4::ParserRuleContext {
  public:
    ExpressionExtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionExtContext() = default;
    void copyFrom(ExpressionExtContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  OtherExpressionContext : public ExpressionExtContext {
  public:
    OtherExpressionContext(ExpressionExtContext *ctx);

    azslParser::ExpressionContext *Expr = nullptr;
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  CommaExpressionContext : public ExpressionExtContext {
  public:
    CommaExpressionContext(ExpressionExtContext *ctx);

    azslParser::ExpressionExtContext *Left = nullptr;
    antlr4::Token *Operator = nullptr;
    azslParser::ExpressionContext *Right = nullptr;
    ExpressionExtContext *expressionExt();
    antlr4::tree::TerminalNode *Comma();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  ExpressionExtContext* expressionExt();
  ExpressionExtContext* expressionExt(int precedence);
  class  PostfixUnaryOperatorContext : public antlr4::ParserRuleContext {
  public:
    PostfixUnaryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PlusPlus();
    antlr4::tree::TerminalNode *MinusMinus();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PostfixUnaryOperatorContext* postfixUnaryOperator();

  class  PrefixUnaryOperatorContext : public antlr4::ParserRuleContext {
  public:
    PrefixUnaryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *Not();
    antlr4::tree::TerminalNode *Tilde();
    antlr4::tree::TerminalNode *PlusPlus();
    antlr4::tree::TerminalNode *MinusMinus();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrefixUnaryOperatorContext* prefixUnaryOperator();

  class  BinaryOperatorContext : public antlr4::ParserRuleContext {
  public:
    BinaryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *Div();
    antlr4::tree::TerminalNode *Mod();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *LeftShift();
    antlr4::tree::TerminalNode *RightShift();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *LessEqual();
    antlr4::tree::TerminalNode *GreaterEqual();
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *NotEqual();
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *Caret();
    antlr4::tree::TerminalNode *Or();
    antlr4::tree::TerminalNode *AndAnd();
    antlr4::tree::TerminalNode *OrOr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BinaryOperatorContext* binaryOperator();

  class  AssignmentOperatorContext : public antlr4::ParserRuleContext {
  public:
    AssignmentOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *StarAssign();
    antlr4::tree::TerminalNode *DivAssign();
    antlr4::tree::TerminalNode *ModAssign();
    antlr4::tree::TerminalNode *PlusAssign();
    antlr4::tree::TerminalNode *MinusAssign();
    antlr4::tree::TerminalNode *LeftShiftAssign();
    antlr4::tree::TerminalNode *RightShiftAssign();
    antlr4::tree::TerminalNode *AndAssign();
    antlr4::tree::TerminalNode *XorAssign();
    antlr4::tree::TerminalNode *OrAssign();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentOperatorContext* assignmentOperator();

  class  ArgumentListContext : public antlr4::ParserRuleContext {
  public:
    ArgumentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ArgumentsContext *arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgumentListContext* argumentList();

  class  ArgumentsContext : public antlr4::ParserRuleContext {
  public:
    ArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgumentsContext* arguments();

  class  VariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    VariableDeclaratorsContext *variableDeclarators();
    std::vector<AttributeSpecifierAnyContext *> attributeSpecifierAny();
    AttributeSpecifierAnyContext* attributeSpecifierAny(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableDeclarationContext* variableDeclaration();

  class  VariableDeclaratorsContext : public antlr4::ParserRuleContext {
  public:
    azslParser::NamedVariableDeclaratorContext *namedVariableDeclaratorContext = nullptr;
    std::vector<NamedVariableDeclaratorContext *> VarDecls;
    VariableDeclaratorsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NamedVariableDeclaratorContext *> namedVariableDeclarator();
    NamedVariableDeclaratorContext* namedVariableDeclarator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableDeclaratorsContext* variableDeclarators();

  class  UnnamedVariableDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    azslParser::ArrayRankSpecifierContext *arrayRankSpecifierContext = nullptr;
    std::vector<ArrayRankSpecifierContext *> ArrayRankSpecifiers;
    azslParser::HlslSemanticContext *SemanticOpt = nullptr;
    azslParser::RegisterAllocationContext *RegisterAllocation = nullptr;
    UnnamedVariableDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PackOffsetNodeContext *packOffsetNode();
    VariableInitializerContext *variableInitializer();
    std::vector<ArrayRankSpecifierContext *> arrayRankSpecifier();
    ArrayRankSpecifierContext* arrayRankSpecifier(size_t i);
    HlslSemanticContext *hlslSemantic();
    RegisterAllocationContext *registerAllocation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnnamedVariableDeclaratorContext* unnamedVariableDeclarator();

  class  NamedVariableDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *Name = nullptr;
    NamedVariableDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnnamedVariableDeclaratorContext *unnamedVariableDeclarator();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamedVariableDeclaratorContext* namedVariableDeclarator();

  class  VariableInitializerContext : public antlr4::ParserRuleContext {
  public:
    VariableInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Assign();
    StandardVariableInitializerContext *standardVariableInitializer();
    SamplerBodyDeclarationContext *samplerBodyDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableInitializerContext* variableInitializer();

  class  StandardVariableInitializerContext : public antlr4::ParserRuleContext {
  public:
    azslParser::ExpressionContext *Expr = nullptr;
    StandardVariableInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    ArrayElementInitializersContext *arrayElementInitializers();
    antlr4::tree::TerminalNode *RightBrace();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StandardVariableInitializerContext* standardVariableInitializer();

  class  ArrayElementInitializersContext : public antlr4::ParserRuleContext {
  public:
    ArrayElementInitializersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StandardVariableInitializerContext *> standardVariableInitializer();
    StandardVariableInitializerContext* standardVariableInitializer(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrayElementInitializersContext* arrayElementInitializers();

  class  ArrayRankSpecifierContext : public antlr4::ParserRuleContext {
  public:
    azslParser::ExpressionContext *Dimension = nullptr;
    ArrayRankSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrayRankSpecifierContext* arrayRankSpecifier();

  class  PackOffsetNodeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *PackoffsetKeyword = nullptr;
    antlr4::Token *PackOffsetRegister = nullptr;
    antlr4::Token *PackOffsetComponent = nullptr;
    PackOffsetNodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Packoffset();
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    antlr4::tree::TerminalNode *Dot();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PackOffsetNodeContext* packOffsetNode();

  class  StorageFlagsContext : public antlr4::ParserRuleContext {
  public:
    StorageFlagsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StorageFlagContext *> storageFlag();
    StorageFlagContext* storageFlag(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StorageFlagsContext* storageFlags();

  class  StorageFlagContext : public antlr4::ParserRuleContext {
  public:
    StorageFlagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Unsigned();
    antlr4::tree::TerminalNode *RowMajor();
    antlr4::tree::TerminalNode *ColumnMajor();
    antlr4::tree::TerminalNode *Extern();
    antlr4::tree::TerminalNode *Inline();
    antlr4::tree::TerminalNode *Rootconstant();
    antlr4::tree::TerminalNode *Option();
    antlr4::tree::TerminalNode *Precise();
    antlr4::tree::TerminalNode *Shared();
    antlr4::tree::TerminalNode *Groupshared();
    antlr4::tree::TerminalNode *Static();
    antlr4::tree::TerminalNode *Uniform();
    antlr4::tree::TerminalNode *Volatile();
    antlr4::tree::TerminalNode *Globallycoherent();
    antlr4::tree::TerminalNode *SNorm();
    antlr4::tree::TerminalNode *UNorm();
    antlr4::tree::TerminalNode *Linear();
    antlr4::tree::TerminalNode *Center();
    antlr4::tree::TerminalNode *Centroid();
    antlr4::tree::TerminalNode *Nointerpolation();
    antlr4::tree::TerminalNode *Noperspective();
    antlr4::tree::TerminalNode *Sample();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Out();
    antlr4::tree::TerminalNode *Inout();
    antlr4::tree::TerminalNode *Indices();
    antlr4::tree::TerminalNode *Vertices();
    antlr4::tree::TerminalNode *Payload();
    antlr4::tree::TerminalNode *Point();
    antlr4::tree::TerminalNode *Line_();
    antlr4::tree::TerminalNode *Triangle();
    antlr4::tree::TerminalNode *LineAdj();
    antlr4::tree::TerminalNode *TriangleAdj();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StorageFlagContext* storageFlag();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StorageFlagsContext *storageFlags();
    PredefinedTypeContext *predefinedType();
    UserDefinedTypeContext *userDefinedType();
    TypeofExpressionContext *typeofExpression();
    antlr4::tree::TerminalNode *Void();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeContext* type();

  class  PredefinedTypeContext : public antlr4::ParserRuleContext {
  public:
    PredefinedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BufferPredefinedTypeContext *bufferPredefinedType();
    ByteAddressBufferTypesContext *byteAddressBufferTypes();
    PatchPredefinedTypeContext *patchPredefinedType();
    MatrixTypeContext *matrixType();
    GenericMatrixPredefinedTypeContext *genericMatrixPredefinedType();
    SamplerStatePredefinedTypeContext *samplerStatePredefinedType();
    ScalarTypeContext *scalarType();
    StreamOutputPredefinedTypeContext *streamOutputPredefinedType();
    StructuredBufferPredefinedTypeContext *structuredBufferPredefinedType();
    TexturePredefinedTypeContext *texturePredefinedType();
    GenericTexturePredefinedTypeContext *genericTexturePredefinedType();
    MsTexturePredefinedTypeContext *msTexturePredefinedType();
    VectorTypeContext *vectorType();
    GenericVectorTypeContext *genericVectorType();
    ConstantBufferTemplatedContext *constantBufferTemplated();
    OtherViewResourceTypeContext *otherViewResourceType();
    SubobjectTypeContext *subobjectType();
    RtxBuiltInTypesContext *rtxBuiltInTypes();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PredefinedTypeContext* predefinedType();

  class  SubobjectTypeContext : public antlr4::ParserRuleContext {
  public:
    SubobjectTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *StateObjectConfig();
    antlr4::tree::TerminalNode *LocalRootSignature();
    antlr4::tree::TerminalNode *GlobalRootSignature();
    antlr4::tree::TerminalNode *SubobjectToExportsAssociation();
    antlr4::tree::TerminalNode *RaytracingShaderConfig();
    antlr4::tree::TerminalNode *RaytracingPipelineConfig();
    antlr4::tree::TerminalNode *RaytracingPipelineConfig1();
    antlr4::tree::TerminalNode *TriangleHitGroup();
    antlr4::tree::TerminalNode *ProceduralPrimitiveHitGroup();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubobjectTypeContext* subobjectType();

  class  OtherViewResourceTypeContext : public antlr4::ParserRuleContext {
  public:
    OtherViewResourceTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RaytracingAccelerationStructure();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OtherViewResourceTypeContext* otherViewResourceType();

  class  RtxBuiltInTypesContext : public antlr4::ParserRuleContext {
  public:
    RtxBuiltInTypesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BuiltInTriangleIntersectionAttributes();
    antlr4::tree::TerminalNode *RayDesc();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RtxBuiltInTypesContext* rtxBuiltInTypes();

  class  BufferPredefinedTypeContext : public antlr4::ParserRuleContext {
  public:
    BufferPredefinedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BufferTypeContext *bufferType();
    antlr4::tree::TerminalNode *Less();
    ScalarOrVectorOrMatrixTypeContext *scalarOrVectorOrMatrixType();
    antlr4::tree::TerminalNode *Greater();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BufferPredefinedTypeContext* bufferPredefinedType();

  class  BufferTypeContext : public antlr4::ParserRuleContext {
  public:
    BufferTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Buffer();
    antlr4::tree::TerminalNode *RWBuffer();
    antlr4::tree::TerminalNode *RasterizerOrderedBuffer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BufferTypeContext* bufferType();

  class  ByteAddressBufferTypesContext : public antlr4::ParserRuleContext {
  public:
    ByteAddressBufferTypesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ByteAddressBuffer();
    antlr4::tree::TerminalNode *RWByteAddressBuffer();
    antlr4::tree::TerminalNode *RasterizerOrderedByteAddressBuffer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ByteAddressBufferTypesContext* byteAddressBufferTypes();

  class  PatchPredefinedTypeContext : public antlr4::ParserRuleContext {
  public:
    azslParser::UserDefinedTypeContext *Name = nullptr;
    antlr4::Token *ControlPoints = nullptr;
    PatchPredefinedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PatchTypeContext *patchType();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *Greater();
    UserDefinedTypeContext *userDefinedType();
    antlr4::tree::TerminalNode *IntegerLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PatchPredefinedTypeContext* patchPredefinedType();

  class  PatchTypeContext : public antlr4::ParserRuleContext {
  public:
    PatchTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *InputPatch();
    antlr4::tree::TerminalNode *OutputPatch();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PatchTypeContext* patchType();

  class  SamplerStatePredefinedTypeContext : public antlr4::ParserRuleContext {
  public:
    SamplerStatePredefinedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Sampler();
    antlr4::tree::TerminalNode *SamplerCapitalS();
    antlr4::tree::TerminalNode *SamplerState();
    antlr4::tree::TerminalNode *SamplerStateCamel();
    antlr4::tree::TerminalNode *SamplerComparisonState();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SamplerStatePredefinedTypeContext* samplerStatePredefinedType();

  class  ScalarTypeContext : public antlr4::ParserRuleContext {
  public:
    ScalarTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Bool();
    antlr4::tree::TerminalNode *Int();
    antlr4::tree::TerminalNode *Int16_t();
    antlr4::tree::TerminalNode *Int32_t();
    antlr4::tree::TerminalNode *Int64_t();
    antlr4::tree::TerminalNode *Uint();
    antlr4::tree::TerminalNode *Uint16_t();
    antlr4::tree::TerminalNode *Uint32_t();
    antlr4::tree::TerminalNode *Uint64_t();
    antlr4::tree::TerminalNode *Dword();
    antlr4::tree::TerminalNode *Half();
    antlr4::tree::TerminalNode *Float();
    antlr4::tree::TerminalNode *Double();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ScalarTypeContext* scalarType();

  class  StreamOutputPredefinedTypeContext : public antlr4::ParserRuleContext {
  public:
    StreamOutputPredefinedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StreamOutputObjectTypeContext *streamOutputObjectType();
    antlr4::tree::TerminalNode *Less();
    TypeContext *type();
    antlr4::tree::TerminalNode *Greater();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StreamOutputPredefinedTypeContext* streamOutputPredefinedType();

  class  StreamOutputObjectTypeContext : public antlr4::ParserRuleContext {
  public:
    StreamOutputObjectTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PointStream();
    antlr4::tree::TerminalNode *LineStream();
    antlr4::tree::TerminalNode *TriangleStream();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StreamOutputObjectTypeContext* streamOutputObjectType();

  class  StructuredBufferPredefinedTypeContext : public antlr4::ParserRuleContext {
  public:
    StructuredBufferPredefinedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StructuredBufferNameContext *structuredBufferName();
    antlr4::tree::TerminalNode *Less();
    TypeContext *type();
    antlr4::tree::TerminalNode *Greater();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StructuredBufferPredefinedTypeContext* structuredBufferPredefinedType();

  class  StructuredBufferNameContext : public antlr4::ParserRuleContext {
  public:
    StructuredBufferNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AppendStructuredBuffer();
    antlr4::tree::TerminalNode *ConsumeStructuredBuffer();
    antlr4::tree::TerminalNode *RWStructuredBuffer();
    antlr4::tree::TerminalNode *StructuredBuffer();
    antlr4::tree::TerminalNode *RasterizerOrderedStructuredBuffer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StructuredBufferNameContext* structuredBufferName();

  class  TextureTypeContext : public antlr4::ParserRuleContext {
  public:
    TextureTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Texture1D();
    antlr4::tree::TerminalNode *Texture1DArray();
    antlr4::tree::TerminalNode *RasterizerOrderedTexture1D();
    antlr4::tree::TerminalNode *RasterizerOrderedTexture1DArray();
    antlr4::tree::TerminalNode *Texture2D();
    antlr4::tree::TerminalNode *Texture2DArray();
    antlr4::tree::TerminalNode *RasterizerOrderedTexture2D();
    antlr4::tree::TerminalNode *RasterizerOrderedTexture2DArray();
    antlr4::tree::TerminalNode *Texture3D();
    antlr4::tree::TerminalNode *RasterizerOrderedTexture3D();
    antlr4::tree::TerminalNode *TextureCube();
    antlr4::tree::TerminalNode *TextureCubeArray();
    antlr4::tree::TerminalNode *RWTexture1D();
    antlr4::tree::TerminalNode *RWTexture1DArray();
    antlr4::tree::TerminalNode *RWTexture2D();
    antlr4::tree::TerminalNode *RWTexture2DArray();
    antlr4::tree::TerminalNode *RWTexture3D();
    antlr4::tree::TerminalNode *SubpassInput();
    antlr4::tree::TerminalNode *SubpassInputMS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TextureTypeContext* textureType();

  class  TexturePredefinedTypeContext : public antlr4::ParserRuleContext {
  public:
    TexturePredefinedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextureTypeContext *textureType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TexturePredefinedTypeContext* texturePredefinedType();

  class  GenericTexturePredefinedTypeContext : public antlr4::ParserRuleContext {
  public:
    GenericTexturePredefinedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextureTypeContext *textureType();
    antlr4::tree::TerminalNode *Less();
    ScalarOrVectorTypeContext *scalarOrVectorType();
    antlr4::tree::TerminalNode *Greater();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GenericTexturePredefinedTypeContext* genericTexturePredefinedType();

  class  TextureTypeMSContext : public antlr4::ParserRuleContext {
  public:
    TextureTypeMSContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Texture2DMS();
    antlr4::tree::TerminalNode *Texture2DMSArray();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TextureTypeMSContext* textureTypeMS();

  class  MsTexturePredefinedTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *Samples = nullptr;
    MsTexturePredefinedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextureTypeMSContext *textureTypeMS();
    antlr4::tree::TerminalNode *Less();
    ScalarOrVectorTypeContext *scalarOrVectorType();
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *IntegerLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MsTexturePredefinedTypeContext* msTexturePredefinedType();

  class  VectorTypeContext : public antlr4::ParserRuleContext {
  public:
    VectorTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Vector();
    antlr4::tree::TerminalNode *Bool1();
    antlr4::tree::TerminalNode *Bool2();
    antlr4::tree::TerminalNode *Bool3();
    antlr4::tree::TerminalNode *Bool4();
    antlr4::tree::TerminalNode *Int1();
    antlr4::tree::TerminalNode *Int2();
    antlr4::tree::TerminalNode *Int3();
    antlr4::tree::TerminalNode *Int4();
    antlr4::tree::TerminalNode *Uint1();
    antlr4::tree::TerminalNode *Uint2();
    antlr4::tree::TerminalNode *Uint3();
    antlr4::tree::TerminalNode *Uint4();
    antlr4::tree::TerminalNode *Dword1();
    antlr4::tree::TerminalNode *Dword2();
    antlr4::tree::TerminalNode *Dword3();
    antlr4::tree::TerminalNode *Dword4();
    antlr4::tree::TerminalNode *Half1();
    antlr4::tree::TerminalNode *Half2();
    antlr4::tree::TerminalNode *Half3();
    antlr4::tree::TerminalNode *Half4();
    antlr4::tree::TerminalNode *Float1();
    antlr4::tree::TerminalNode *Float2();
    antlr4::tree::TerminalNode *Float3();
    antlr4::tree::TerminalNode *Float4();
    antlr4::tree::TerminalNode *Double1();
    antlr4::tree::TerminalNode *Double2();
    antlr4::tree::TerminalNode *Double3();
    antlr4::tree::TerminalNode *Double4();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VectorTypeContext* vectorType();

  class  GenericVectorTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *Size_ = nullptr;
    GenericVectorTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Vector();
    antlr4::tree::TerminalNode *Less();
    ScalarTypeContext *scalarType();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *IntegerLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GenericVectorTypeContext* genericVectorType();

  class  ScalarOrVectorTypeContext : public antlr4::ParserRuleContext {
  public:
    ScalarOrVectorTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ScalarTypeContext *scalarType();
    VectorTypeContext *vectorType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ScalarOrVectorTypeContext* scalarOrVectorType();

  class  ScalarOrVectorOrMatrixTypeContext : public antlr4::ParserRuleContext {
  public:
    ScalarOrVectorOrMatrixTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ScalarTypeContext *scalarType();
    VectorTypeContext *vectorType();
    MatrixTypeContext *matrixType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ScalarOrVectorOrMatrixTypeContext* scalarOrVectorOrMatrixType();

  class  MatrixTypeContext : public antlr4::ParserRuleContext {
  public:
    MatrixTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Matrix();
    antlr4::tree::TerminalNode *Bool1x1();
    antlr4::tree::TerminalNode *Bool1x2();
    antlr4::tree::TerminalNode *Bool1x3();
    antlr4::tree::TerminalNode *Bool1x4();
    antlr4::tree::TerminalNode *Bool2x1();
    antlr4::tree::TerminalNode *Bool2x2();
    antlr4::tree::TerminalNode *Bool2x3();
    antlr4::tree::TerminalNode *Bool2x4();
    antlr4::tree::TerminalNode *Bool3x1();
    antlr4::tree::TerminalNode *Bool3x2();
    antlr4::tree::TerminalNode *Bool3x3();
    antlr4::tree::TerminalNode *Bool3x4();
    antlr4::tree::TerminalNode *Bool4x1();
    antlr4::tree::TerminalNode *Bool4x2();
    antlr4::tree::TerminalNode *Bool4x3();
    antlr4::tree::TerminalNode *Bool4x4();
    antlr4::tree::TerminalNode *Int1x1();
    antlr4::tree::TerminalNode *Int1x2();
    antlr4::tree::TerminalNode *Int1x3();
    antlr4::tree::TerminalNode *Int1x4();
    antlr4::tree::TerminalNode *Int2x1();
    antlr4::tree::TerminalNode *Int2x2();
    antlr4::tree::TerminalNode *Int2x3();
    antlr4::tree::TerminalNode *Int2x4();
    antlr4::tree::TerminalNode *Int3x1();
    antlr4::tree::TerminalNode *Int3x2();
    antlr4::tree::TerminalNode *Int3x3();
    antlr4::tree::TerminalNode *Int3x4();
    antlr4::tree::TerminalNode *Int4x1();
    antlr4::tree::TerminalNode *Int4x2();
    antlr4::tree::TerminalNode *Int4x3();
    antlr4::tree::TerminalNode *Int4x4();
    antlr4::tree::TerminalNode *Uint1x1();
    antlr4::tree::TerminalNode *Uint1x2();
    antlr4::tree::TerminalNode *Uint1x3();
    antlr4::tree::TerminalNode *Uint1x4();
    antlr4::tree::TerminalNode *Uint2x1();
    antlr4::tree::TerminalNode *Uint2x2();
    antlr4::tree::TerminalNode *Uint2x3();
    antlr4::tree::TerminalNode *Uint2x4();
    antlr4::tree::TerminalNode *Uint3x1();
    antlr4::tree::TerminalNode *Uint3x2();
    antlr4::tree::TerminalNode *Uint3x3();
    antlr4::tree::TerminalNode *Uint3x4();
    antlr4::tree::TerminalNode *Uint4x1();
    antlr4::tree::TerminalNode *Uint4x2();
    antlr4::tree::TerminalNode *Uint4x3();
    antlr4::tree::TerminalNode *Uint4x4();
    antlr4::tree::TerminalNode *Dword1x1();
    antlr4::tree::TerminalNode *Dword1x2();
    antlr4::tree::TerminalNode *Dword1x3();
    antlr4::tree::TerminalNode *Dword1x4();
    antlr4::tree::TerminalNode *Dword2x1();
    antlr4::tree::TerminalNode *Dword2x2();
    antlr4::tree::TerminalNode *Dword2x3();
    antlr4::tree::TerminalNode *Dword2x4();
    antlr4::tree::TerminalNode *Dword3x1();
    antlr4::tree::TerminalNode *Dword3x2();
    antlr4::tree::TerminalNode *Dword3x3();
    antlr4::tree::TerminalNode *Dword3x4();
    antlr4::tree::TerminalNode *Dword4x1();
    antlr4::tree::TerminalNode *Dword4x2();
    antlr4::tree::TerminalNode *Dword4x3();
    antlr4::tree::TerminalNode *Dword4x4();
    antlr4::tree::TerminalNode *Half1x1();
    antlr4::tree::TerminalNode *Half1x2();
    antlr4::tree::TerminalNode *Half1x3();
    antlr4::tree::TerminalNode *Half1x4();
    antlr4::tree::TerminalNode *Half2x1();
    antlr4::tree::TerminalNode *Half2x2();
    antlr4::tree::TerminalNode *Half2x3();
    antlr4::tree::TerminalNode *Half2x4();
    antlr4::tree::TerminalNode *Half3x1();
    antlr4::tree::TerminalNode *Half3x2();
    antlr4::tree::TerminalNode *Half3x3();
    antlr4::tree::TerminalNode *Half3x4();
    antlr4::tree::TerminalNode *Half4x1();
    antlr4::tree::TerminalNode *Half4x2();
    antlr4::tree::TerminalNode *Half4x3();
    antlr4::tree::TerminalNode *Half4x4();
    antlr4::tree::TerminalNode *Float1x1();
    antlr4::tree::TerminalNode *Float1x2();
    antlr4::tree::TerminalNode *Float1x3();
    antlr4::tree::TerminalNode *Float1x4();
    antlr4::tree::TerminalNode *Float2x1();
    antlr4::tree::TerminalNode *Float2x2();
    antlr4::tree::TerminalNode *Float2x3();
    antlr4::tree::TerminalNode *Float2x4();
    antlr4::tree::TerminalNode *Float3x1();
    antlr4::tree::TerminalNode *Float3x2();
    antlr4::tree::TerminalNode *Float3x3();
    antlr4::tree::TerminalNode *Float3x4();
    antlr4::tree::TerminalNode *Float4x1();
    antlr4::tree::TerminalNode *Float4x2();
    antlr4::tree::TerminalNode *Float4x3();
    antlr4::tree::TerminalNode *Float4x4();
    antlr4::tree::TerminalNode *Double1x1();
    antlr4::tree::TerminalNode *Double1x2();
    antlr4::tree::TerminalNode *Double1x3();
    antlr4::tree::TerminalNode *Double1x4();
    antlr4::tree::TerminalNode *Double2x1();
    antlr4::tree::TerminalNode *Double2x2();
    antlr4::tree::TerminalNode *Double2x3();
    antlr4::tree::TerminalNode *Double2x4();
    antlr4::tree::TerminalNode *Double3x1();
    antlr4::tree::TerminalNode *Double3x2();
    antlr4::tree::TerminalNode *Double3x3();
    antlr4::tree::TerminalNode *Double3x4();
    antlr4::tree::TerminalNode *Double4x1();
    antlr4::tree::TerminalNode *Double4x2();
    antlr4::tree::TerminalNode *Double4x3();
    antlr4::tree::TerminalNode *Double4x4();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MatrixTypeContext* matrixType();

  class  GenericMatrixPredefinedTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *Rows_ = nullptr;
    antlr4::Token *Cols_ = nullptr;
    GenericMatrixPredefinedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Matrix();
    antlr4::tree::TerminalNode *Less();
    ScalarTypeContext *scalarType();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    antlr4::tree::TerminalNode *Greater();
    std::vector<antlr4::tree::TerminalNode *> IntegerLiteral();
    antlr4::tree::TerminalNode* IntegerLiteral(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GenericMatrixPredefinedTypeContext* genericMatrixPredefinedType();

  class  RegisterAllocationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *Address = nullptr;
    RegisterAllocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *Register();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RegisterAllocationContext* registerAllocation();

  class  SamplerStatePropertyContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *Name = nullptr;
    antlr4::Token *EqualsToken = nullptr;
    azslParser::ExpressionContext *Expr = nullptr;
    SamplerStatePropertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Assign();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SamplerStatePropertyContext* samplerStateProperty();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *True();
    antlr4::tree::TerminalNode *False();
    antlr4::tree::TerminalNode *FloatLiteral();
    antlr4::tree::TerminalNode *IntegerLiteral();
    std::vector<antlr4::tree::TerminalNode *> StringLiteral();
    antlr4::tree::TerminalNode* StringLiteral(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LiteralContext* literal();

  class  LeadingTypeFunctionSignatureContext : public antlr4::ParserRuleContext {
  public:
    azslParser::UserDefinedTypeContext *ClassName = nullptr;
    antlr4::Token *Name = nullptr;
    LeadingTypeFunctionSignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *ColonColon();
    GenericParameterListContext *genericParameterList();
    FunctionParamsContext *functionParams();
    antlr4::tree::TerminalNode *Override();
    HlslSemanticContext *hlslSemantic();
    UserDefinedTypeContext *userDefinedType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LeadingTypeFunctionSignatureContext* leadingTypeFunctionSignature();

  class  HlslFunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    HlslFunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LeadingTypeFunctionSignatureContext *leadingTypeFunctionSignature();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HlslFunctionDefinitionContext* hlslFunctionDefinition();

  class  HlslFunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    HlslFunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LeadingTypeFunctionSignatureContext *leadingTypeFunctionSignature();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HlslFunctionDeclarationContext* hlslFunctionDeclaration();

  class  UserDefinedTypeContext : public antlr4::ParserRuleContext {
  public:
    UserDefinedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdExpressionContext *idExpression();
    AnyStructuredTypeDefinitionContext *anyStructuredTypeDefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UserDefinedTypeContext* userDefinedType();

  class  AssociatedTypeDeclarationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *Name = nullptr;
    AssociatedTypeDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_AssociatedType();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *Identifier();
    GenericConstraintContext *genericConstraint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssociatedTypeDeclarationContext* associatedTypeDeclaration();

  class  TypedefStatementContext : public antlr4::ParserRuleContext {
  public:
    azslParser::TypeContext *ExistingType = nullptr;
    antlr4::Token *NewTypeName = nullptr;
    TypedefStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_Typedef();
    antlr4::tree::TerminalNode *Semi();
    TypeContext *type();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypedefStatementContext* typedefStatement();

  class  TypealiasStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *NewTypeName = nullptr;
    azslParser::TypeContext *ExistingType = nullptr;
    TypealiasStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_TypeAlias();
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *Identifier();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypealiasStatementContext* typealiasStatement();

  class  TypeAliasingDefinitionStatementContext : public antlr4::ParserRuleContext {
  public:
    TypeAliasingDefinitionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypealiasStatementContext *typealiasStatement();
    TypedefStatementContext *typedefStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeAliasingDefinitionStatementContext* typeAliasingDefinitionStatement();

  class  TypeofExpressionContext : public antlr4::ParserRuleContext {
  public:
    azslParser::ExpressionExtContext *Expr = nullptr;
    azslParser::IdExpressionContext *SubQualification = nullptr;
    TypeofExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_Typeof();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    TypeContext *type();
    ExpressionExtContext *expressionExt();
    antlr4::tree::TerminalNode *ColonColon();
    IdExpressionContext *idExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeofExpressionContext* typeofExpression();

  class  GenericParameterListContext : public antlr4::ParserRuleContext {
  public:
    GenericParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Less();
    std::vector<GenericTypeDefinitionContext *> genericTypeDefinition();
    GenericTypeDefinitionContext* genericTypeDefinition(size_t i);
    antlr4::tree::TerminalNode *Greater();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GenericParameterListContext* genericParameterList();

  class  GenericTypeDefinitionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *GenericTypeName = nullptr;
    GenericTypeDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    GenericConstraintContext *genericConstraint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GenericTypeDefinitionContext* genericTypeDefinition();

  class  GenericConstraintContext : public antlr4::ParserRuleContext {
  public:
    GenericConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    UserDefinedTypeContext *userDefinedType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GenericConstraintContext* genericConstraint();

  class  LanguageDefinedConstraintContext : public antlr4::ParserRuleContext {
  public:
    LanguageDefinedConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_Fundamental();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LanguageDefinedConstraintContext* languageDefinedConstraint();

  class  FunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HlslFunctionDeclarationContext *hlslFunctionDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionDeclarationContext* functionDeclaration();

  class  AttributedFunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    AttributedFunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionDeclarationContext *functionDeclaration();
    std::vector<AttributeSpecifierAnyContext *> attributeSpecifierAny();
    AttributeSpecifierAnyContext* attributeSpecifierAny(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributedFunctionDeclarationContext* attributedFunctionDeclaration();

  class  FunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    FunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HlslFunctionDefinitionContext *hlslFunctionDefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionDefinitionContext* functionDefinition();

  class  AttributedFunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    AttributedFunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionDefinitionContext *functionDefinition();
    std::vector<AttributeSpecifierAnyContext *> attributeSpecifierAny();
    AttributeSpecifierAnyContext* attributeSpecifierAny(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributedFunctionDefinitionContext* attributedFunctionDefinition();

  class  CompilerExtensionStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *Message = nullptr;
    CompilerExtensionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ext_print_message();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *KW_ext_print_symbol();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *KW_ext_prtsym_fully_qualified();
    antlr4::tree::TerminalNode *KW_ext_prtsym_least_qualified();
    antlr4::tree::TerminalNode *KW_ext_prtsym_constint_value();
    IdExpressionContext *idExpression();
    TypeofExpressionContext *typeofExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompilerExtensionStatementContext* compilerExtensionStatement();

  class  SrgDefinitionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *Name = nullptr;
    antlr4::Token *Semantic = nullptr;
    SrgDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ShaderResourceGroup();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    antlr4::tree::TerminalNode *Partial();
    antlr4::tree::TerminalNode *Colon();
    std::vector<SrgMemberDeclarationContext *> srgMemberDeclaration();
    SrgMemberDeclarationContext* srgMemberDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SrgDefinitionContext* srgDefinition();

  class  AttributedSrgDefinitionContext : public antlr4::ParserRuleContext {
  public:
    AttributedSrgDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SrgDefinitionContext *srgDefinition();
    std::vector<AttributeSpecifierAnyContext *> attributeSpecifierAny();
    AttributeSpecifierAnyContext* attributeSpecifierAny(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributedSrgDefinitionContext* attributedSrgDefinition();

  class  SrgMemberDeclarationContext : public antlr4::ParserRuleContext {
  public:
    SrgMemberDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StructDefinitionStatementContext *structDefinitionStatement();
    AttributedFunctionDeclarationContext *attributedFunctionDeclaration();
    AttributedFunctionDefinitionContext *attributedFunctionDefinition();
    VariableDeclarationStatementContext *variableDeclarationStatement();
    EnumDefinitionStatementContext *enumDefinitionStatement();
    TypeAliasingDefinitionStatementContext *typeAliasingDefinitionStatement();
    AttributeSpecifierAnyContext *attributeSpecifierAny();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SrgMemberDeclarationContext* srgMemberDeclaration();

  class  SrgSemanticContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *Name = nullptr;
    SrgSemanticContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ShaderResourceGroupSemantic();
    SrgSemanticBodyDeclarationContext *srgSemanticBodyDeclaration();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SrgSemanticContext* srgSemantic();

  class  AttributedSrgSemanticContext : public antlr4::ParserRuleContext {
  public:
    AttributedSrgSemanticContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SrgSemanticContext *srgSemantic();
    std::vector<AttributeSpecifierAnyContext *> attributeSpecifierAny();
    AttributeSpecifierAnyContext* attributeSpecifierAny(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributedSrgSemanticContext* attributedSrgSemantic();

  class  SrgSemanticBodyDeclarationContext : public antlr4::ParserRuleContext {
  public:
    SrgSemanticBodyDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    std::vector<SrgSemanticMemberDeclarationContext *> srgSemanticMemberDeclaration();
    SrgSemanticMemberDeclarationContext* srgSemanticMemberDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SrgSemanticBodyDeclarationContext* srgSemanticBodyDeclaration();

  class  SrgSemanticMemberDeclarationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *Frequency = nullptr;
    azslParser::LiteralContext *FrequencyValue = nullptr;
    antlr4::Token *VariantFallback = nullptr;
    azslParser::LiteralContext *VariantFallbackValue = nullptr;
    SrgSemanticMemberDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *FrequencyId();
    LiteralContext *literal();
    antlr4::tree::TerminalNode *ShaderVariantFallback();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SrgSemanticMemberDeclarationContext* srgSemanticMemberDeclaration();

  class  SamplerBodyDeclarationContext : public antlr4::ParserRuleContext {
  public:
    SamplerBodyDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    std::vector<SamplerMemberDeclarationContext *> samplerMemberDeclaration();
    SamplerMemberDeclarationContext* samplerMemberDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SamplerBodyDeclarationContext* samplerBodyDeclaration();

  class  SamplerMemberDeclarationContext : public antlr4::ParserRuleContext {
  public:
    SamplerMemberDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MaxAnisotropyOptionContext *maxAnisotropyOption();
    MinFilterOptionContext *minFilterOption();
    MagFilterOptionContext *magFilterOption();
    MipFilterOptionContext *mipFilterOption();
    ReductionTypeOptionContext *reductionTypeOption();
    ComparisonFunctionOptionContext *comparisonFunctionOption();
    AddressUOptionContext *addressUOption();
    AddressVOptionContext *addressVOption();
    AddressWOptionContext *addressWOption();
    MinLodOptionContext *minLodOption();
    MaxLodOptionContext *maxLodOption();
    MipLodBiasOptionContext *mipLodBiasOption();
    BorderColorOptionContext *borderColorOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SamplerMemberDeclarationContext* samplerMemberDeclaration();

  class  MaxAnisotropyOptionContext : public antlr4::ParserRuleContext {
  public:
    MaxAnisotropyOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAX_ANISOTROPY();
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *IntegerLiteral();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MaxAnisotropyOptionContext* maxAnisotropyOption();

  class  MinFilterOptionContext : public antlr4::ParserRuleContext {
  public:
    MinFilterOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MIN_FILTER();
    antlr4::tree::TerminalNode *Assign();
    FilterModeEnumContext *filterModeEnum();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MinFilterOptionContext* minFilterOption();

  class  MagFilterOptionContext : public antlr4::ParserRuleContext {
  public:
    MagFilterOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAG_FILTER();
    antlr4::tree::TerminalNode *Assign();
    FilterModeEnumContext *filterModeEnum();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MagFilterOptionContext* magFilterOption();

  class  MipFilterOptionContext : public antlr4::ParserRuleContext {
  public:
    MipFilterOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MIP_FILTER();
    antlr4::tree::TerminalNode *Assign();
    FilterModeEnumContext *filterModeEnum();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MipFilterOptionContext* mipFilterOption();

  class  ReductionTypeOptionContext : public antlr4::ParserRuleContext {
  public:
    ReductionTypeOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REDUCTION_TYPE();
    antlr4::tree::TerminalNode *Assign();
    ReductionTypeEnumContext *reductionTypeEnum();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReductionTypeOptionContext* reductionTypeOption();

  class  ComparisonFunctionOptionContext : public antlr4::ParserRuleContext {
  public:
    ComparisonFunctionOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMPARISON_FUNC();
    antlr4::tree::TerminalNode *Assign();
    ComparisonFunctionEnumContext *comparisonFunctionEnum();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComparisonFunctionOptionContext* comparisonFunctionOption();

  class  AddressUOptionContext : public antlr4::ParserRuleContext {
  public:
    AddressUOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADDRESS_U();
    antlr4::tree::TerminalNode *Assign();
    AddressModeEnumContext *addressModeEnum();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddressUOptionContext* addressUOption();

  class  AddressVOptionContext : public antlr4::ParserRuleContext {
  public:
    AddressVOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADDRESS_V();
    antlr4::tree::TerminalNode *Assign();
    AddressModeEnumContext *addressModeEnum();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddressVOptionContext* addressVOption();

  class  AddressWOptionContext : public antlr4::ParserRuleContext {
  public:
    AddressWOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADDRESS_W();
    antlr4::tree::TerminalNode *Assign();
    AddressModeEnumContext *addressModeEnum();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddressWOptionContext* addressWOption();

  class  MinLodOptionContext : public antlr4::ParserRuleContext {
  public:
    MinLodOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MIN_LOD();
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *FloatLiteral();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MinLodOptionContext* minLodOption();

  class  MaxLodOptionContext : public antlr4::ParserRuleContext {
  public:
    MaxLodOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAX_LOD();
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *FloatLiteral();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MaxLodOptionContext* maxLodOption();

  class  MipLodBiasOptionContext : public antlr4::ParserRuleContext {
  public:
    MipLodBiasOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MIP_LOD_BIAS();
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *FloatLiteral();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MipLodBiasOptionContext* mipLodBiasOption();

  class  BorderColorOptionContext : public antlr4::ParserRuleContext {
  public:
    BorderColorOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BORDER_COLOR();
    antlr4::tree::TerminalNode *Assign();
    BorderColorEnumContext *borderColorEnum();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BorderColorOptionContext* borderColorOption();

  class  FilterModeEnumContext : public antlr4::ParserRuleContext {
  public:
    FilterModeEnumContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILTER_MODE_POINT();
    antlr4::tree::TerminalNode *FILTER_MODE_LINEAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FilterModeEnumContext* filterModeEnum();

  class  ReductionTypeEnumContext : public antlr4::ParserRuleContext {
  public:
    ReductionTypeEnumContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REDUCTION_TYPE_FILTER();
    antlr4::tree::TerminalNode *REDUCTION_TYPE_COMPARISON();
    antlr4::tree::TerminalNode *REDUCTION_TYPE_MINIMUM();
    antlr4::tree::TerminalNode *REDUCTION_TYPE_MAXIMUM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReductionTypeEnumContext* reductionTypeEnum();

  class  AddressModeEnumContext : public antlr4::ParserRuleContext {
  public:
    AddressModeEnumContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADDRESS_MODE_WRAP();
    antlr4::tree::TerminalNode *ADDRESS_MODE_MIRROR();
    antlr4::tree::TerminalNode *ADDRESS_MODE_CLAMP();
    antlr4::tree::TerminalNode *ADDRESS_MODE_BORDER();
    antlr4::tree::TerminalNode *ADDRESS_MODE_MIRROR_ONCE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddressModeEnumContext* addressModeEnum();

  class  ComparisonFunctionEnumContext : public antlr4::ParserRuleContext {
  public:
    ComparisonFunctionEnumContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMPARISON_FUNCTION_NEVER();
    antlr4::tree::TerminalNode *COMPARISON_FUNCTION_LESS();
    antlr4::tree::TerminalNode *COMPARISON_FUNCTION_EQUAL();
    antlr4::tree::TerminalNode *COMPARISON_FUNCTION_LESS_EQUAL();
    antlr4::tree::TerminalNode *COMPARISON_FUNCTION_GREATER();
    antlr4::tree::TerminalNode *COMPARISON_FUNCTION_NOT_EQUAL();
    antlr4::tree::TerminalNode *COMPARISON_FUNCTION_GREATER_EQUAL();
    antlr4::tree::TerminalNode *COMPARISON_FUNCTION_ALWAYS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComparisonFunctionEnumContext* comparisonFunctionEnum();

  class  BorderColorEnumContext : public antlr4::ParserRuleContext {
  public:
    BorderColorEnumContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BORDER_COLOR_OPAQUE_BLACK();
    antlr4::tree::TerminalNode *BORDER_COLOR_TRANSPARENT_BLACK();
    antlr4::tree::TerminalNode *BORDER_COLOR_OPAQUE_WHITE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BorderColorEnumContext* borderColorEnum();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool expressionExtSempred(ExpressionExtContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

