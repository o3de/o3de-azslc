
// Generated from ../azslLexer.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class  azslLexer : public antlr4::Lexer {
public:
  enum {
    AppendStructuredBuffer = 1, Bool = 2, Bool1 = 3, Bool2 = 4, Bool3 = 5, 
    Bool4 = 6, Bool1x1 = 7, Bool1x2 = 8, Bool1x3 = 9, Bool1x4 = 10, Bool2x1 = 11, 
    Bool2x2 = 12, Bool2x3 = 13, Bool2x4 = 14, Bool3x1 = 15, Bool3x2 = 16, 
    Bool3x3 = 17, Bool3x4 = 18, Bool4x1 = 19, Bool4x2 = 20, Bool4x3 = 21, 
    Bool4x4 = 22, Buffer = 23, BuiltInTriangleIntersectionAttributes = 24, 
    ByteAddressBuffer = 25, Break = 26, Case = 27, CBuffer = 28, ConstantBuffer = 29, 
    ConstantBufferCamel = 30, Centroid = 31, Class = 32, ColumnMajor = 33, 
    Const = 34, ConsumeStructuredBuffer = 35, Continue = 36, Default = 37, 
    Discard = 38, Do = 39, Double = 40, Double1 = 41, Double2 = 42, Double3 = 43, 
    Double4 = 44, Double1x1 = 45, Double1x2 = 46, Double1x3 = 47, Double1x4 = 48, 
    Double2x1 = 49, Double2x2 = 50, Double2x3 = 51, Double2x4 = 52, Double3x1 = 53, 
    Double3x2 = 54, Double3x3 = 55, Double3x4 = 56, Double4x1 = 57, Double4x2 = 58, 
    Double4x3 = 59, Double4x4 = 60, Else = 61, Enum = 62, Extern = 63, FeedbackTexture2D = 64, 
    FeedbackTexture2DArray = 65, Float = 66, Float1 = 67, Float2 = 68, Float3 = 69, 
    Float4 = 70, Float1x1 = 71, Float1x2 = 72, Float1x3 = 73, Float1x4 = 74, 
    Float2x1 = 75, Float2x2 = 76, Float2x3 = 77, Float2x4 = 78, Float3x1 = 79, 
    Float3x2 = 80, Float3x3 = 81, Float3x4 = 82, Float4x1 = 83, Float4x2 = 84, 
    Float4x3 = 85, Float4x4 = 86, For = 87, Groupshared = 88, Global = 89, 
    Half = 90, Half1 = 91, Half2 = 92, Half3 = 93, Half4 = 94, Half1x1 = 95, 
    Half1x2 = 96, Half1x3 = 97, Half1x4 = 98, Half2x1 = 99, Half2x2 = 100, 
    Half2x3 = 101, Half2x4 = 102, Half3x1 = 103, Half3x2 = 104, Half3x3 = 105, 
    Half3x4 = 106, Half4x1 = 107, Half4x2 = 108, Half4x3 = 109, Half4x4 = 110, 
    If = 111, In = 112, Inline = 113, Rootconstant = 114, Inout = 115, InputPatch = 116, 
    Int = 117, Int32_t = 118, Int64_t = 119, Int1 = 120, Int2 = 121, Int3 = 122, 
    Int4 = 123, Int1x1 = 124, Int1x2 = 125, Int1x3 = 126, Int1x4 = 127, 
    Int2x1 = 128, Int2x2 = 129, Int2x3 = 130, Int2x4 = 131, Int3x1 = 132, 
    Int3x2 = 133, Int3x3 = 134, Int3x4 = 135, Int4x1 = 136, Int4x2 = 137, 
    Int4x3 = 138, Int4x4 = 139, Interface = 140, Line_ = 141, LineAdj = 142, 
    Linear = 143, LineStream = 144, Long = 145, Matrix = 146, Nointerpolation = 147, 
    Noperspective = 148, Option = 149, Out = 150, OutputPatch = 151, Override = 152, 
    Partial = 153, Packoffset = 154, Point = 155, PointStream = 156, Precise = 157, 
    RasterizerOrderedBuffer = 158, RasterizerOrderedByteAddressBuffer = 159, 
    RasterizerOrderedStructuredBuffer = 160, RasterizerOrderedTexture1D = 161, 
    RasterizerOrderedTexture1DArray = 162, RasterizerOrderedTexture2D = 163, 
    RasterizerOrderedTexture2DArray = 164, RasterizerOrderedTexture3D = 165, 
    RayDesc = 166, RaytracingAccelerationStructure = 167, Register = 168, 
    Return = 169, RowMajor = 170, RWBuffer = 171, RWByteAddressBuffer = 172, 
    RWStructuredBuffer = 173, RWTexture1D = 174, RWTexture1DArray = 175, 
    RWTexture2D = 176, RWTexture2DArray = 177, RWTexture3D = 178, Sample = 179, 
    Sampler = 180, SamplerCapitalS = 181, SamplerComparisonState = 182, 
    SamplerState = 183, Shared = 184, Static = 185, Struct = 186, StructuredBuffer = 187, 
    SubpassInput = 188, SubpassInputMS = 189, Switch = 190, Texture1D = 191, 
    Texture1DArray = 192, Texture2D = 193, Texture2DArray = 194, Texture2DMS = 195, 
    Texture2DMSArray = 196, Texture3D = 197, TextureCube = 198, TextureCubeArray = 199, 
    Triangle = 200, TriangleAdj = 201, TriangleStream = 202, Uniform = 203, 
    Uint = 204, Uint32_t = 205, Uint64_t = 206, UnsignedInt = 207, Uint1 = 208, 
    Uint2 = 209, Uint3 = 210, Uint4 = 211, Uint1x1 = 212, Uint1x2 = 213, 
    Uint1x3 = 214, Uint1x4 = 215, Uint2x1 = 216, Uint2x2 = 217, Uint2x3 = 218, 
    Uint2x4 = 219, Uint3x1 = 220, Uint3x2 = 221, Uint3x3 = 222, Uint3x4 = 223, 
    Uint4x1 = 224, Uint4x2 = 225, Uint4x3 = 226, Uint4x4 = 227, Dword = 228, 
    Dword1 = 229, Dword2 = 230, Dword3 = 231, Dword4 = 232, Dword1x1 = 233, 
    Dword1x2 = 234, Dword1x3 = 235, Dword1x4 = 236, Dword2x1 = 237, Dword2x2 = 238, 
    Dword2x3 = 239, Dword2x4 = 240, Dword3x1 = 241, Dword3x2 = 242, Dword3x3 = 243, 
    Dword3x4 = 244, Dword4x1 = 245, Dword4x2 = 246, Dword4x3 = 247, Dword4x4 = 248, 
    Vector = 249, Volatile = 250, Void = 251, While = 252, StateObjectConfig = 253, 
    LocalRootSignature = 254, GlobalRootSignature = 255, SubobjectToExportsAssociation = 256, 
    RaytracingShaderConfig = 257, RaytracingPipelineConfig = 258, RaytracingPipelineConfig1 = 259, 
    TriangleHitGroup = 260, ProceduralPrimitiveHitGroup = 261, ADDRESS_U = 262, 
    ADDRESS_V = 263, ADDRESS_W = 264, BORDER_COLOR = 265, MIN_FILTER = 266, 
    MAG_FILTER = 267, MIP_FILTER = 268, MAX_ANISOTROPY = 269, MAX_LOD = 270, 
    MIN_LOD = 271, MIP_LOD_BIAS = 272, COMPARISON_FUNC = 273, REDUCTION_TYPE = 274, 
    FILTER_MODE_POINT = 275, FILTER_MODE_LINEAR = 276, REDUCTION_TYPE_FILTER = 277, 
    REDUCTION_TYPE_COMPARISON = 278, REDUCTION_TYPE_MINIMUM = 279, REDUCTION_TYPE_MAXIMUM = 280, 
    ADDRESS_MODE_WRAP = 281, ADDRESS_MODE_MIRROR = 282, ADDRESS_MODE_CLAMP = 283, 
    ADDRESS_MODE_BORDER = 284, ADDRESS_MODE_MIRROR_ONCE = 285, COMPARISON_FUNCTION_NEVER = 286, 
    COMPARISON_FUNCTION_LESS = 287, COMPARISON_FUNCTION_EQUAL = 288, COMPARISON_FUNCTION_LESS_EQUAL = 289, 
    COMPARISON_FUNCTION_GREATER = 290, COMPARISON_FUNCTION_NOT_EQUAL = 291, 
    COMPARISON_FUNCTION_GREATER_EQUAL = 292, COMPARISON_FUNCTION_ALWAYS = 293, 
    BORDER_COLOR_OPAQUE_BLACK = 294, BORDER_COLOR_TRANSPARENT_BLACK = 295, 
    BORDER_COLOR_OPAQUE_WHITE = 296, LeftParen = 297, RightParen = 298, 
    LeftBracket = 299, RightBracket = 300, LeftBrace = 301, RightBrace = 302, 
    LeftDoubleBracket = 303, Less = 304, LessEqual = 305, Greater = 306, 
    GreaterEqual = 307, LeftShift = 308, RightShift = 309, Plus = 310, PlusPlus = 311, 
    Minus = 312, MinusMinus = 313, Star = 314, Div = 315, Mod = 316, And = 317, 
    Or = 318, AndAnd = 319, OrOr = 320, Caret = 321, Not = 322, Tilde = 323, 
    Question = 324, Colon = 325, ColonColon = 326, Semi = 327, Comma = 328, 
    Assign = 329, StarAssign = 330, DivAssign = 331, ModAssign = 332, PlusAssign = 333, 
    MinusAssign = 334, LeftShiftAssign = 335, RightShiftAssign = 336, AndAssign = 337, 
    XorAssign = 338, OrAssign = 339, Equal = 340, NotEqual = 341, Dot = 342, 
    True = 343, False = 344, KW_AssociatedType = 345, KW_TypeAlias = 346, 
    KW_Typedef = 347, KW_Fundamental = 348, KW_Typeof = 349, KW_ext_print_message = 350, 
    KW_ext_print_symbol = 351, KW_ext_prtsym_fully_qualified = 352, KW_ext_prtsym_least_qualified = 353, 
    KW_ext_prtsym_constint_value = 354, FrequencyId = 355, ShaderVariantFallback = 356, 
    ShaderResourceGroupSemantic = 357, ShaderResourceGroup = 358, HLSLSemanticStream = 359, 
    HLSLSemanticSystem = 360, Identifier = 361, IntegerLiteral = 362, FloatLiteral = 363, 
    StringLiteral = 364, PragmaDirective = 365, LineDirective = 366, Whitespace = 367, 
    Newline = 368, BlockComment = 369, LineComment = 370
  };

  enum {
    PREPROCESSOR = 2
  };

  explicit azslLexer(antlr4::CharStream *input);
  ~azslLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

