
// Generated from ../azslLexer.g4 by ANTLR 4.7.1

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
    Int = 117, Int1 = 118, Int2 = 119, Int3 = 120, Int4 = 121, Int1x1 = 122, 
    Int1x2 = 123, Int1x3 = 124, Int1x4 = 125, Int2x1 = 126, Int2x2 = 127, 
    Int2x3 = 128, Int2x4 = 129, Int3x1 = 130, Int3x2 = 131, Int3x3 = 132, 
    Int3x4 = 133, Int4x1 = 134, Int4x2 = 135, Int4x3 = 136, Int4x4 = 137, 
    Interface = 138, Line_ = 139, LineAdj = 140, Linear = 141, LineStream = 142, 
    Long = 143, Matrix = 144, Nointerpolation = 145, Noperspective = 146, 
    Option = 147, Out = 148, OutputPatch = 149, Override = 150, Partial = 151, 
    Packoffset = 152, Point = 153, PointStream = 154, Precise = 155, RasterizerOrderedBuffer = 156, 
    RasterizerOrderedByteAddressBuffer = 157, RasterizerOrderedStructuredBuffer = 158, 
    RasterizerOrderedTexture1D = 159, RasterizerOrderedTexture1DArray = 160, 
    RasterizerOrderedTexture2D = 161, RasterizerOrderedTexture2DArray = 162, 
    RasterizerOrderedTexture3D = 163, RayDesc = 164, RaytracingAccelerationStructure = 165, 
    Register = 166, Return = 167, RowMajor = 168, RWBuffer = 169, RWByteAddressBuffer = 170, 
    RWStructuredBuffer = 171, RWTexture1D = 172, RWTexture1DArray = 173, 
    RWTexture2D = 174, RWTexture2DArray = 175, RWTexture3D = 176, Sample = 177, 
    Sampler = 178, SamplerCapitalS = 179, SamplerComparisonState = 180, 
    SamplerState = 181, Shared = 182, Static = 183, Struct = 184, StructuredBuffer = 185, 
    SubpassInput = 186, SubpassInputMS = 187, Switch = 188, Texture1D = 189, 
    Texture1DArray = 190, Texture2D = 191, Texture2DArray = 192, Texture2DMS = 193, 
    Texture2DMSArray = 194, Texture3D = 195, TextureCube = 196, TextureCubeArray = 197, 
    Triangle = 198, TriangleAdj = 199, TriangleStream = 200, Uniform = 201, 
    Uint = 202, UnsignedInt = 203, Uint1 = 204, Uint2 = 205, Uint3 = 206, 
    Uint4 = 207, Uint1x1 = 208, Uint1x2 = 209, Uint1x3 = 210, Uint1x4 = 211, 
    Uint2x1 = 212, Uint2x2 = 213, Uint2x3 = 214, Uint2x4 = 215, Uint3x1 = 216, 
    Uint3x2 = 217, Uint3x3 = 218, Uint3x4 = 219, Uint4x1 = 220, Uint4x2 = 221, 
    Uint4x3 = 222, Uint4x4 = 223, Dword = 224, Dword1 = 225, Dword2 = 226, 
    Dword3 = 227, Dword4 = 228, Dword1x1 = 229, Dword1x2 = 230, Dword1x3 = 231, 
    Dword1x4 = 232, Dword2x1 = 233, Dword2x2 = 234, Dword2x3 = 235, Dword2x4 = 236, 
    Dword3x1 = 237, Dword3x2 = 238, Dword3x3 = 239, Dword3x4 = 240, Dword4x1 = 241, 
    Dword4x2 = 242, Dword4x3 = 243, Dword4x4 = 244, Vector = 245, Volatile = 246, 
    Void = 247, While = 248, StateObjectConfig = 249, LocalRootSignature = 250, 
    GlobalRootSignature = 251, SubobjectToExportsAssociation = 252, RaytracingShaderConfig = 253, 
    RaytracingPipelineConfig = 254, RaytracingPipelineConfig1 = 255, TriangleHitGroup = 256, 
    ProceduralPrimitiveHitGroup = 257, ADDRESS_U = 258, ADDRESS_V = 259, 
    ADDRESS_W = 260, BORDER_COLOR = 261, MIN_FILTER = 262, MAG_FILTER = 263, 
    MIP_FILTER = 264, MAX_ANISOTROPY = 265, MAX_LOD = 266, MIN_LOD = 267, 
    MIP_LOD_BIAS = 268, COMPARISON_FUNC = 269, REDUCTION_TYPE = 270, FILTER_MODE_POINT = 271, 
    FILTER_MODE_LINEAR = 272, REDUCTION_TYPE_FILTER = 273, REDUCTION_TYPE_COMPARISON = 274, 
    REDUCTION_TYPE_MINIMUM = 275, REDUCTION_TYPE_MAXIMUM = 276, ADDRESS_MODE_WRAP = 277, 
    ADDRESS_MODE_MIRROR = 278, ADDRESS_MODE_CLAMP = 279, ADDRESS_MODE_BORDER = 280, 
    ADDRESS_MODE_MIRROR_ONCE = 281, COMPARISON_FUNCTION_NEVER = 282, COMPARISON_FUNCTION_LESS = 283, 
    COMPARISON_FUNCTION_EQUAL = 284, COMPARISON_FUNCTION_LESS_EQUAL = 285, 
    COMPARISON_FUNCTION_GREATER = 286, COMPARISON_FUNCTION_NOT_EQUAL = 287, 
    COMPARISON_FUNCTION_GREATER_EQUAL = 288, COMPARISON_FUNCTION_ALWAYS = 289, 
    BORDER_COLOR_OPAQUE_BLACK = 290, BORDER_COLOR_TRANSPARENT_BLACK = 291, 
    BORDER_COLOR_OPAQUE_WHITE = 292, LeftParen = 293, RightParen = 294, 
    LeftBracket = 295, RightBracket = 296, LeftBrace = 297, RightBrace = 298, 
    LeftDoubleBracket = 299, Less = 300, LessEqual = 301, Greater = 302, 
    GreaterEqual = 303, LeftShift = 304, RightShift = 305, Plus = 306, PlusPlus = 307, 
    Minus = 308, MinusMinus = 309, Star = 310, Div = 311, Mod = 312, And = 313, 
    Or = 314, AndAnd = 315, OrOr = 316, Caret = 317, Not = 318, Tilde = 319, 
    Question = 320, Colon = 321, ColonColon = 322, Semi = 323, Comma = 324, 
    Assign = 325, StarAssign = 326, DivAssign = 327, ModAssign = 328, PlusAssign = 329, 
    MinusAssign = 330, LeftShiftAssign = 331, RightShiftAssign = 332, AndAssign = 333, 
    XorAssign = 334, OrAssign = 335, Equal = 336, NotEqual = 337, Dot = 338, 
    True = 339, False = 340, KW_AssociatedType = 341, KW_TypeAlias = 342, 
    KW_Typedef = 343, KW_Fundamental = 344, KW_Typeof = 345, KW_ext_print_message = 346, 
    KW_ext_print_symbol = 347, KW_ext_prtsym_fully_qualified = 348, KW_ext_prtsym_least_qualified = 349, 
    KW_ext_prtsym_constint_value = 350, FrequencyId = 351, ShaderVariantFallback = 352, 
    ShaderResourceGroupSemantic = 353, ShaderResourceGroup = 354, HLSLSemanticStream = 355, 
    HLSLSemanticSystem = 356, Identifier = 357, IntegerLiteral = 358, FloatLiteral = 359, 
    StringLiteral = 360, PragmaDirective = 361, LineDirective = 362, Whitespace = 363, 
    Newline = 364, BlockComment = 365, LineComment = 366
  };

  enum {
    PREPROCESSOR = 2
  };

  azslLexer(antlr4::CharStream *input);
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

