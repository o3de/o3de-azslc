
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
    Int = 120, Int32_t = 121, Int64_t = 122, Int1 = 123, Int2 = 124, Int3 = 125, 
    Int4 = 126, Int1x1 = 127, Int1x2 = 128, Int1x3 = 129, Int1x4 = 130, 
    Int2x1 = 131, Int2x2 = 132, Int2x3 = 133, Int2x4 = 134, Int3x1 = 135, 
    Int3x2 = 136, Int3x3 = 137, Int3x4 = 138, Int4x1 = 139, Int4x2 = 140, 
    Int4x3 = 141, Int4x4 = 142, Interface = 143, Line_ = 144, LineAdj = 145, 
    Linear = 146, LineStream = 147, Long = 148, Matrix = 149, Nointerpolation = 150, 
    Noperspective = 151, Option = 152, Out = 153, OutputPatch = 154, Override = 155, 
    Partial = 156, Packoffset = 157, Point = 158, PointStream = 159, Precise = 160, 
    RasterizerOrderedBuffer = 161, RasterizerOrderedByteAddressBuffer = 162, 
    RasterizerOrderedStructuredBuffer = 163, RasterizerOrderedTexture1D = 164, 
    RasterizerOrderedTexture1DArray = 165, RasterizerOrderedTexture2D = 166, 
    RasterizerOrderedTexture2DArray = 167, RasterizerOrderedTexture3D = 168, 
    RayDesc = 169, RaytracingAccelerationStructure = 170, Register = 171, 
    Return = 172, RowMajor = 173, RWBuffer = 174, RWByteAddressBuffer = 175, 
    RWStructuredBuffer = 176, RWTexture1D = 177, RWTexture1DArray = 178, 
    RWTexture2D = 179, RWTexture2DArray = 180, RWTexture3D = 181, Sample = 182, 
    Sampler = 183, SamplerCapitalS = 184, SamplerComparisonState = 185, 
    SamplerStateCamel = 186, SamplerState = 187, Shared = 188, SNorm = 189, 
    Static = 190, Struct = 191, StructuredBuffer = 192, SubpassInput = 193, 
    SubpassInputMS = 194, Switch = 195, TBuffer = 196, Texture1D = 197, 
    Texture1DArray = 198, Texture2D = 199, Texture2DArray = 200, Texture2DMS = 201, 
    Texture2DMSArray = 202, Texture3D = 203, TextureCube = 204, TextureCubeArray = 205, 
    Triangle = 206, TriangleAdj = 207, TriangleStream = 208, Uniform = 209, 
    Uint = 210, Uint32_t = 211, Uint64_t = 212, UnsignedInt = 213, Uint1 = 214, 
    Uint2 = 215, Uint3 = 216, Uint4 = 217, Uint1x1 = 218, Uint1x2 = 219, 
    Uint1x3 = 220, Uint1x4 = 221, Uint2x1 = 222, Uint2x2 = 223, Uint2x3 = 224, 
    Uint2x4 = 225, Uint3x1 = 226, Uint3x2 = 227, Uint3x3 = 228, Uint3x4 = 229, 
    Uint4x1 = 230, Uint4x2 = 231, Uint4x3 = 232, Uint4x4 = 233, UNorm = 234, 
    Dword = 235, Dword1 = 236, Dword2 = 237, Dword3 = 238, Dword4 = 239, 
    Dword1x1 = 240, Dword1x2 = 241, Dword1x3 = 242, Dword1x4 = 243, Dword2x1 = 244, 
    Dword2x2 = 245, Dword2x3 = 246, Dword2x4 = 247, Dword3x1 = 248, Dword3x2 = 249, 
    Dword3x3 = 250, Dword3x4 = 251, Dword4x1 = 252, Dword4x2 = 253, Dword4x3 = 254, 
    Dword4x4 = 255, Vector = 256, Volatile = 257, Void = 258, While = 259, 
    StateObjectConfig = 260, LocalRootSignature = 261, GlobalRootSignature = 262, 
    SubobjectToExportsAssociation = 263, RaytracingShaderConfig = 264, RaytracingPipelineConfig = 265, 
    RaytracingPipelineConfig1 = 266, TriangleHitGroup = 267, ProceduralPrimitiveHitGroup = 268, 
    ADDRESS_U = 269, ADDRESS_V = 270, ADDRESS_W = 271, BORDER_COLOR = 272, 
    MIN_FILTER = 273, MAG_FILTER = 274, MIP_FILTER = 275, MAX_ANISOTROPY = 276, 
    MAX_LOD = 277, MIN_LOD = 278, MIP_LOD_BIAS = 279, COMPARISON_FUNC = 280, 
    REDUCTION_TYPE = 281, FILTER_MODE_POINT = 282, FILTER_MODE_LINEAR = 283, 
    REDUCTION_TYPE_FILTER = 284, REDUCTION_TYPE_COMPARISON = 285, REDUCTION_TYPE_MINIMUM = 286, 
    REDUCTION_TYPE_MAXIMUM = 287, ADDRESS_MODE_WRAP = 288, ADDRESS_MODE_MIRROR = 289, 
    ADDRESS_MODE_CLAMP = 290, ADDRESS_MODE_BORDER = 291, ADDRESS_MODE_MIRROR_ONCE = 292, 
    COMPARISON_FUNCTION_NEVER = 293, COMPARISON_FUNCTION_LESS = 294, COMPARISON_FUNCTION_EQUAL = 295, 
    COMPARISON_FUNCTION_LESS_EQUAL = 296, COMPARISON_FUNCTION_GREATER = 297, 
    COMPARISON_FUNCTION_NOT_EQUAL = 298, COMPARISON_FUNCTION_GREATER_EQUAL = 299, 
    COMPARISON_FUNCTION_ALWAYS = 300, BORDER_COLOR_OPAQUE_BLACK = 301, BORDER_COLOR_TRANSPARENT_BLACK = 302, 
    BORDER_COLOR_OPAQUE_WHITE = 303, LeftParen = 304, RightParen = 305, 
    LeftBracket = 306, RightBracket = 307, LeftBrace = 308, RightBrace = 309, 
    LeftDoubleBracket = 310, Less = 311, LessEqual = 312, Greater = 313, 
    GreaterEqual = 314, LeftShift = 315, RightShift = 316, Plus = 317, PlusPlus = 318, 
    Minus = 319, MinusMinus = 320, Star = 321, Div = 322, Mod = 323, And = 324, 
    Or = 325, AndAnd = 326, OrOr = 327, Caret = 328, Not = 329, Tilde = 330, 
    Question = 331, Colon = 332, ColonColon = 333, Semi = 334, Comma = 335, 
    Assign = 336, StarAssign = 337, DivAssign = 338, ModAssign = 339, PlusAssign = 340, 
    MinusAssign = 341, LeftShiftAssign = 342, RightShiftAssign = 343, AndAssign = 344, 
    XorAssign = 345, OrAssign = 346, Equal = 347, NotEqual = 348, Dot = 349, 
    True = 350, False = 351, KW_AssociatedType = 352, KW_TypeAlias = 353, 
    KW_Typedef = 354, KW_Fundamental = 355, KW_Typeof = 356, KW_ext_print_message = 357, 
    KW_ext_print_symbol = 358, KW_ext_prtsym_fully_qualified = 359, KW_ext_prtsym_least_qualified = 360, 
    KW_ext_prtsym_constint_value = 361, FrequencyId = 362, ShaderVariantFallback = 363, 
    ShaderResourceGroupSemantic = 364, ShaderResourceGroup = 365, HLSLSemanticStream = 366, 
    HLSLSemanticSystem = 367, Indices = 368, Vertices = 369, Identifier = 370, 
    IntegerLiteral = 371, FloatLiteral = 372, StringLiteral = 373, PragmaDirective = 374, 
    LineDirective = 375, Whitespace = 376, Newline = 377, BlockComment = 378, 
    LineComment = 379
  };

  enum {
    PREPROCESSOR = 2, COMMENTS = 3
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

