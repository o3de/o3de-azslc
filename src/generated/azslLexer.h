
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
    ByteAddressBuffer = 25, Break = 26, Case = 27, CBuffer = 28, Centroid = 29, 
    ConstantBuffer = 30, ConstantBufferCamel = 31, Class = 32, ColumnMajor = 33, 
    Const = 34, ConsumeStructuredBuffer = 35, Continue = 36, Default = 37, 
    Discard = 38, Do = 39, Double = 40, Double1 = 41, Double2 = 42, Double3 = 43, 
    Double4 = 44, Double1x1 = 45, Double1x2 = 46, Double1x3 = 47, Double1x4 = 48, 
    Double2x1 = 49, Double2x2 = 50, Double2x3 = 51, Double2x4 = 52, Double3x1 = 53, 
    Double3x2 = 54, Double3x3 = 55, Double3x4 = 56, Double4x1 = 57, Double4x2 = 58, 
    Double4x3 = 59, Double4x4 = 60, Else = 61, Enum = 62, Export = 63, Extern = 64, 
    FeedbackTexture2D = 65, FeedbackTexture2DArray = 66, Float = 67, Float1 = 68, 
    Float2 = 69, Float3 = 70, Float4 = 71, Float1x1 = 72, Float1x2 = 73, 
    Float1x3 = 74, Float1x4 = 75, Float2x1 = 76, Float2x2 = 77, Float2x3 = 78, 
    Float2x4 = 79, Float3x1 = 80, Float3x2 = 81, Float3x3 = 82, Float3x4 = 83, 
    Float4x1 = 84, Float4x2 = 85, Float4x3 = 86, Float4x4 = 87, For = 88, 
    Groupshared = 89, Globallycoherent = 90, Global = 91, Half = 92, Half1 = 93, 
    Half2 = 94, Half3 = 95, Half4 = 96, Half1x1 = 97, Half1x2 = 98, Half1x3 = 99, 
    Half1x4 = 100, Half2x1 = 101, Half2x2 = 102, Half2x3 = 103, Half2x4 = 104, 
    Half3x1 = 105, Half3x2 = 106, Half3x3 = 107, Half3x4 = 108, Half4x1 = 109, 
    Half4x2 = 110, Half4x3 = 111, Half4x4 = 112, If = 113, In = 114, Inline = 115, 
    Rootconstant = 116, Inout = 117, InputPatch = 118, Int = 119, Int16_t = 120, 
    Int32_t = 121, Int64_t = 122, Int1 = 123, Int2 = 124, Int3 = 125, Int4 = 126, 
    Int1x1 = 127, Int1x2 = 128, Int1x3 = 129, Int1x4 = 130, Int2x1 = 131, 
    Int2x2 = 132, Int2x3 = 133, Int2x4 = 134, Int3x1 = 135, Int3x2 = 136, 
    Int3x3 = 137, Int3x4 = 138, Int4x1 = 139, Int4x2 = 140, Int4x3 = 141, 
    Int4x4 = 142, Interface = 143, Line_ = 144, LineAdj = 145, Linear = 146, 
    LineStream = 147, Long = 148, Matrix = 149, Nointerpolation = 150, Noperspective = 151, 
    Option = 152, Out = 153, OutputPatch = 154, Override = 155, Partial = 156, 
    Packoffset = 157, Point = 158, PointStream = 159, Precise = 160, RasterizerOrderedBuffer = 161, 
    RasterizerOrderedByteAddressBuffer = 162, RasterizerOrderedStructuredBuffer = 163, 
    RasterizerOrderedTexture1D = 164, RasterizerOrderedTexture1DArray = 165, 
    RasterizerOrderedTexture2D = 166, RasterizerOrderedTexture2DArray = 167, 
    RasterizerOrderedTexture3D = 168, RayDesc = 169, RaytracingAccelerationStructure = 170, 
    Register = 171, Return = 172, RowMajor = 173, RWBuffer = 174, RWByteAddressBuffer = 175, 
    RWStructuredBuffer = 176, RWTexture1D = 177, RWTexture1DArray = 178, 
    RWTexture2D = 179, RWTexture2DArray = 180, RWTexture3D = 181, Sample = 182, 
    Sampler = 183, SamplerCapitalS = 184, SamplerComparisonState = 185, 
    SamplerStateCamel = 186, SamplerState = 187, Shared = 188, SNorm = 189, 
    Static = 190, Struct = 191, StructuredBuffer = 192, SubpassInput = 193, 
    SubpassInputMS = 194, Switch = 195, TBuffer = 196, Texture1D = 197, 
    Texture1DArray = 198, Texture2D = 199, Texture2DArray = 200, Texture2DMS = 201, 
    Texture2DMSArray = 202, Texture3D = 203, TextureCube = 204, TextureCubeArray = 205, 
    Triangle = 206, TriangleAdj = 207, TriangleStream = 208, Uniform = 209, 
    Uint = 210, Uint1 = 211, Uint2 = 212, Uint3 = 213, Uint4 = 214, Uint1x1 = 215, 
    Uint1x2 = 216, Uint1x3 = 217, Uint1x4 = 218, Uint2x1 = 219, Uint2x2 = 220, 
    Uint2x3 = 221, Uint2x4 = 222, Uint3x1 = 223, Uint3x2 = 224, Uint3x3 = 225, 
    Uint3x4 = 226, Uint4x1 = 227, Uint4x2 = 228, Uint4x3 = 229, Uint4x4 = 230, 
    Uint16_t = 231, Uint32_t = 232, Uint64_t = 233, UNorm = 234, Unsigned = 235, 
    Dword = 236, Dword1 = 237, Dword2 = 238, Dword3 = 239, Dword4 = 240, 
    Dword1x1 = 241, Dword1x2 = 242, Dword1x3 = 243, Dword1x4 = 244, Dword2x1 = 245, 
    Dword2x2 = 246, Dword2x3 = 247, Dword2x4 = 248, Dword3x1 = 249, Dword3x2 = 250, 
    Dword3x3 = 251, Dword3x4 = 252, Dword4x1 = 253, Dword4x2 = 254, Dword4x3 = 255, 
    Dword4x4 = 256, Vector = 257, Volatile = 258, Void = 259, While = 260, 
    StateObjectConfig = 261, LocalRootSignature = 262, GlobalRootSignature = 263, 
    SubobjectToExportsAssociation = 264, RaytracingShaderConfig = 265, RaytracingPipelineConfig = 266, 
    RaytracingPipelineConfig1 = 267, TriangleHitGroup = 268, ProceduralPrimitiveHitGroup = 269, 
    ADDRESS_U = 270, ADDRESS_V = 271, ADDRESS_W = 272, BORDER_COLOR = 273, 
    MIN_FILTER = 274, MAG_FILTER = 275, MIP_FILTER = 276, MAX_ANISOTROPY = 277, 
    MAX_LOD = 278, MIN_LOD = 279, MIP_LOD_BIAS = 280, COMPARISON_FUNC = 281, 
    REDUCTION_TYPE = 282, FILTER_MODE_POINT = 283, FILTER_MODE_LINEAR = 284, 
    REDUCTION_TYPE_FILTER = 285, REDUCTION_TYPE_COMPARISON = 286, REDUCTION_TYPE_MINIMUM = 287, 
    REDUCTION_TYPE_MAXIMUM = 288, ADDRESS_MODE_WRAP = 289, ADDRESS_MODE_MIRROR = 290, 
    ADDRESS_MODE_CLAMP = 291, ADDRESS_MODE_BORDER = 292, ADDRESS_MODE_MIRROR_ONCE = 293, 
    COMPARISON_FUNCTION_NEVER = 294, COMPARISON_FUNCTION_LESS = 295, COMPARISON_FUNCTION_EQUAL = 296, 
    COMPARISON_FUNCTION_LESS_EQUAL = 297, COMPARISON_FUNCTION_GREATER = 298, 
    COMPARISON_FUNCTION_NOT_EQUAL = 299, COMPARISON_FUNCTION_GREATER_EQUAL = 300, 
    COMPARISON_FUNCTION_ALWAYS = 301, BORDER_COLOR_OPAQUE_BLACK = 302, BORDER_COLOR_TRANSPARENT_BLACK = 303, 
    BORDER_COLOR_OPAQUE_WHITE = 304, LeftParen = 305, RightParen = 306, 
    LeftBracket = 307, RightBracket = 308, LeftBrace = 309, RightBrace = 310, 
    LeftDoubleBracket = 311, Less = 312, LessEqual = 313, Greater = 314, 
    GreaterEqual = 315, LeftShift = 316, RightShift = 317, Plus = 318, PlusPlus = 319, 
    Minus = 320, MinusMinus = 321, Star = 322, Div = 323, Mod = 324, And = 325, 
    Or = 326, AndAnd = 327, OrOr = 328, Caret = 329, Not = 330, Tilde = 331, 
    Question = 332, Colon = 333, ColonColon = 334, Semi = 335, Comma = 336, 
    Assign = 337, StarAssign = 338, DivAssign = 339, ModAssign = 340, PlusAssign = 341, 
    MinusAssign = 342, LeftShiftAssign = 343, RightShiftAssign = 344, AndAssign = 345, 
    XorAssign = 346, OrAssign = 347, Equal = 348, NotEqual = 349, Dot = 350, 
    True = 351, False = 352, KW_AssociatedType = 353, KW_TypeAlias = 354, 
    KW_Typedef = 355, KW_Fundamental = 356, KW_Typeof = 357, FrequencyId = 358, 
    ShaderVariantFallback = 359, ShaderResourceGroupSemantic = 360, ShaderResourceGroup = 361, 
    KW_ext_print_message = 362, KW_ext_print_symbol = 363, KW_ext_prtsym_fully_qualified = 364, 
    KW_ext_prtsym_least_qualified = 365, KW_ext_prtsym_constint_value = 366, 
    HLSLSemanticStream = 367, HLSLSemanticSystem = 368, Identifier = 369, 
    IntegerLiteral = 370, FloatLiteral = 371, StringLiteral = 372, PragmaDirective = 373, 
    LineDirective = 374, Whitespace = 375, Newline = 376, BlockComment = 377, 
    LineComment = 378
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

