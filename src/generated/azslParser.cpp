
// Generated from ../azslParser.g4 by ANTLR 4.9.3


#include "azslParserListener.h"

#include "azslParser.h"


using namespace antlrcpp;
using namespace antlr4;

azslParser::azslParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

azslParser::~azslParser() {
  delete _interpreter;
}

std::string azslParser::getGrammarFileName() const {
  return "azslParser.g4";
}

const std::vector<std::string>& azslParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& azslParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- CompilationUnitContext ------------------------------------------------------------------

azslParser::CompilationUnitContext::CompilationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::CompilationUnitContext::EOF() {
  return getToken(azslParser::EOF, 0);
}

std::vector<azslParser::TopLevelDeclarationContext *> azslParser::CompilationUnitContext::topLevelDeclaration() {
  return getRuleContexts<azslParser::TopLevelDeclarationContext>();
}

azslParser::TopLevelDeclarationContext* azslParser::CompilationUnitContext::topLevelDeclaration(size_t i) {
  return getRuleContext<azslParser::TopLevelDeclarationContext>(i);
}


size_t azslParser::CompilationUnitContext::getRuleIndex() const {
  return azslParser::RuleCompilationUnit;
}

void azslParser::CompilationUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompilationUnit(this);
}

void azslParser::CompilationUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompilationUnit(this);
}

azslParser::CompilationUnitContext* azslParser::compilationUnit() {
  CompilationUnitContext *_localctx = _tracker.createInstance<CompilationUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, azslParser::RuleCompilationUnit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(277);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << azslParser::AppendStructuredBuffer)
      | (1ULL << azslParser::Bool)
      | (1ULL << azslParser::Bool1)
      | (1ULL << azslParser::Bool2)
      | (1ULL << azslParser::Bool3)
      | (1ULL << azslParser::Bool4)
      | (1ULL << azslParser::Bool1x1)
      | (1ULL << azslParser::Bool1x2)
      | (1ULL << azslParser::Bool1x3)
      | (1ULL << azslParser::Bool1x4)
      | (1ULL << azslParser::Bool2x1)
      | (1ULL << azslParser::Bool2x2)
      | (1ULL << azslParser::Bool2x3)
      | (1ULL << azslParser::Bool2x4)
      | (1ULL << azslParser::Bool3x1)
      | (1ULL << azslParser::Bool3x2)
      | (1ULL << azslParser::Bool3x3)
      | (1ULL << azslParser::Bool3x4)
      | (1ULL << azslParser::Bool4x1)
      | (1ULL << azslParser::Bool4x2)
      | (1ULL << azslParser::Bool4x3)
      | (1ULL << azslParser::Bool4x4)
      | (1ULL << azslParser::Buffer)
      | (1ULL << azslParser::BuiltInTriangleIntersectionAttributes)
      | (1ULL << azslParser::ByteAddressBuffer)
      | (1ULL << azslParser::Centroid)
      | (1ULL << azslParser::ConstantBuffer)
      | (1ULL << azslParser::ConstantBufferCamel)
      | (1ULL << azslParser::Class)
      | (1ULL << azslParser::ColumnMajor)
      | (1ULL << azslParser::Const)
      | (1ULL << azslParser::ConsumeStructuredBuffer)
      | (1ULL << azslParser::Double)
      | (1ULL << azslParser::Double1)
      | (1ULL << azslParser::Double2)
      | (1ULL << azslParser::Double3)
      | (1ULL << azslParser::Double4)
      | (1ULL << azslParser::Double1x1)
      | (1ULL << azslParser::Double1x2)
      | (1ULL << azslParser::Double1x3)
      | (1ULL << azslParser::Double1x4)
      | (1ULL << azslParser::Double2x1)
      | (1ULL << azslParser::Double2x2)
      | (1ULL << azslParser::Double2x3)
      | (1ULL << azslParser::Double2x4)
      | (1ULL << azslParser::Double3x1)
      | (1ULL << azslParser::Double3x2)
      | (1ULL << azslParser::Double3x3)
      | (1ULL << azslParser::Double3x4)
      | (1ULL << azslParser::Double4x1)
      | (1ULL << azslParser::Double4x2)
      | (1ULL << azslParser::Double4x3)
      | (1ULL << azslParser::Double4x4)
      | (1ULL << azslParser::Enum))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (azslParser::Extern - 64))
      | (1ULL << (azslParser::Float - 64))
      | (1ULL << (azslParser::Float1 - 64))
      | (1ULL << (azslParser::Float2 - 64))
      | (1ULL << (azslParser::Float3 - 64))
      | (1ULL << (azslParser::Float4 - 64))
      | (1ULL << (azslParser::Float1x1 - 64))
      | (1ULL << (azslParser::Float1x2 - 64))
      | (1ULL << (azslParser::Float1x3 - 64))
      | (1ULL << (azslParser::Float1x4 - 64))
      | (1ULL << (azslParser::Float2x1 - 64))
      | (1ULL << (azslParser::Float2x2 - 64))
      | (1ULL << (azslParser::Float2x3 - 64))
      | (1ULL << (azslParser::Float2x4 - 64))
      | (1ULL << (azslParser::Float3x1 - 64))
      | (1ULL << (azslParser::Float3x2 - 64))
      | (1ULL << (azslParser::Float3x3 - 64))
      | (1ULL << (azslParser::Float3x4 - 64))
      | (1ULL << (azslParser::Float4x1 - 64))
      | (1ULL << (azslParser::Float4x2 - 64))
      | (1ULL << (azslParser::Float4x3 - 64))
      | (1ULL << (azslParser::Float4x4 - 64))
      | (1ULL << (azslParser::Groupshared - 64))
      | (1ULL << (azslParser::Globallycoherent - 64))
      | (1ULL << (azslParser::Half - 64))
      | (1ULL << (azslParser::Half1 - 64))
      | (1ULL << (azslParser::Half2 - 64))
      | (1ULL << (azslParser::Half3 - 64))
      | (1ULL << (azslParser::Half4 - 64))
      | (1ULL << (azslParser::Half1x1 - 64))
      | (1ULL << (azslParser::Half1x2 - 64))
      | (1ULL << (azslParser::Half1x3 - 64))
      | (1ULL << (azslParser::Half1x4 - 64))
      | (1ULL << (azslParser::Half2x1 - 64))
      | (1ULL << (azslParser::Half2x2 - 64))
      | (1ULL << (azslParser::Half2x3 - 64))
      | (1ULL << (azslParser::Half2x4 - 64))
      | (1ULL << (azslParser::Half3x1 - 64))
      | (1ULL << (azslParser::Half3x2 - 64))
      | (1ULL << (azslParser::Half3x3 - 64))
      | (1ULL << (azslParser::Half3x4 - 64))
      | (1ULL << (azslParser::Half4x1 - 64))
      | (1ULL << (azslParser::Half4x2 - 64))
      | (1ULL << (azslParser::Half4x3 - 64))
      | (1ULL << (azslParser::Half4x4 - 64))
      | (1ULL << (azslParser::In - 64))
      | (1ULL << (azslParser::Inline - 64))
      | (1ULL << (azslParser::Rootconstant - 64))
      | (1ULL << (azslParser::Inout - 64))
      | (1ULL << (azslParser::InputPatch - 64))
      | (1ULL << (azslParser::Int - 64))
      | (1ULL << (azslParser::Int16_t - 64))
      | (1ULL << (azslParser::Int32_t - 64))
      | (1ULL << (azslParser::Int64_t - 64))
      | (1ULL << (azslParser::Int1 - 64))
      | (1ULL << (azslParser::Int2 - 64))
      | (1ULL << (azslParser::Int3 - 64))
      | (1ULL << (azslParser::Int4 - 64))
      | (1ULL << (azslParser::Int1x1 - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (azslParser::Int1x2 - 128))
      | (1ULL << (azslParser::Int1x3 - 128))
      | (1ULL << (azslParser::Int1x4 - 128))
      | (1ULL << (azslParser::Int2x1 - 128))
      | (1ULL << (azslParser::Int2x2 - 128))
      | (1ULL << (azslParser::Int2x3 - 128))
      | (1ULL << (azslParser::Int2x4 - 128))
      | (1ULL << (azslParser::Int3x1 - 128))
      | (1ULL << (azslParser::Int3x2 - 128))
      | (1ULL << (azslParser::Int3x3 - 128))
      | (1ULL << (azslParser::Int3x4 - 128))
      | (1ULL << (azslParser::Int4x1 - 128))
      | (1ULL << (azslParser::Int4x2 - 128))
      | (1ULL << (azslParser::Int4x3 - 128))
      | (1ULL << (azslParser::Int4x4 - 128))
      | (1ULL << (azslParser::Interface - 128))
      | (1ULL << (azslParser::Line_ - 128))
      | (1ULL << (azslParser::LineAdj - 128))
      | (1ULL << (azslParser::Linear - 128))
      | (1ULL << (azslParser::LineStream - 128))
      | (1ULL << (azslParser::Matrix - 128))
      | (1ULL << (azslParser::Nointerpolation - 128))
      | (1ULL << (azslParser::Noperspective - 128))
      | (1ULL << (azslParser::Option - 128))
      | (1ULL << (azslParser::Out - 128))
      | (1ULL << (azslParser::OutputPatch - 128))
      | (1ULL << (azslParser::Partial - 128))
      | (1ULL << (azslParser::Point - 128))
      | (1ULL << (azslParser::PointStream - 128))
      | (1ULL << (azslParser::Precise - 128))
      | (1ULL << (azslParser::RasterizerOrderedBuffer - 128))
      | (1ULL << (azslParser::RasterizerOrderedByteAddressBuffer - 128))
      | (1ULL << (azslParser::RasterizerOrderedStructuredBuffer - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture1D - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture1DArray - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture2D - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture2DArray - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture3D - 128))
      | (1ULL << (azslParser::RayDesc - 128))
      | (1ULL << (azslParser::RaytracingAccelerationStructure - 128))
      | (1ULL << (azslParser::RowMajor - 128))
      | (1ULL << (azslParser::RWBuffer - 128))
      | (1ULL << (azslParser::RWByteAddressBuffer - 128))
      | (1ULL << (azslParser::RWStructuredBuffer - 128))
      | (1ULL << (azslParser::RWTexture1D - 128))
      | (1ULL << (azslParser::RWTexture1DArray - 128))
      | (1ULL << (azslParser::RWTexture2D - 128))
      | (1ULL << (azslParser::RWTexture2DArray - 128))
      | (1ULL << (azslParser::RWTexture3D - 128))
      | (1ULL << (azslParser::Sample - 128))
      | (1ULL << (azslParser::Sampler - 128))
      | (1ULL << (azslParser::SamplerCapitalS - 128))
      | (1ULL << (azslParser::SamplerComparisonState - 128))
      | (1ULL << (azslParser::SamplerStateCamel - 128))
      | (1ULL << (azslParser::SamplerState - 128))
      | (1ULL << (azslParser::Shared - 128))
      | (1ULL << (azslParser::SNorm - 128))
      | (1ULL << (azslParser::Static - 128))
      | (1ULL << (azslParser::Struct - 128)))) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 192)) & ((1ULL << (azslParser::StructuredBuffer - 192))
      | (1ULL << (azslParser::SubpassInput - 192))
      | (1ULL << (azslParser::SubpassInputMS - 192))
      | (1ULL << (azslParser::Texture1D - 192))
      | (1ULL << (azslParser::Texture1DArray - 192))
      | (1ULL << (azslParser::Texture2D - 192))
      | (1ULL << (azslParser::Texture2DArray - 192))
      | (1ULL << (azslParser::Texture2DMS - 192))
      | (1ULL << (azslParser::Texture2DMSArray - 192))
      | (1ULL << (azslParser::Texture3D - 192))
      | (1ULL << (azslParser::TextureCube - 192))
      | (1ULL << (azslParser::TextureCubeArray - 192))
      | (1ULL << (azslParser::Triangle - 192))
      | (1ULL << (azslParser::TriangleAdj - 192))
      | (1ULL << (azslParser::TriangleStream - 192))
      | (1ULL << (azslParser::Uniform - 192))
      | (1ULL << (azslParser::Uint - 192))
      | (1ULL << (azslParser::Uint1 - 192))
      | (1ULL << (azslParser::Uint2 - 192))
      | (1ULL << (azslParser::Uint3 - 192))
      | (1ULL << (azslParser::Uint4 - 192))
      | (1ULL << (azslParser::Uint1x1 - 192))
      | (1ULL << (azslParser::Uint1x2 - 192))
      | (1ULL << (azslParser::Uint1x3 - 192))
      | (1ULL << (azslParser::Uint1x4 - 192))
      | (1ULL << (azslParser::Uint2x1 - 192))
      | (1ULL << (azslParser::Uint2x2 - 192))
      | (1ULL << (azslParser::Uint2x3 - 192))
      | (1ULL << (azslParser::Uint2x4 - 192))
      | (1ULL << (azslParser::Uint3x1 - 192))
      | (1ULL << (azslParser::Uint3x2 - 192))
      | (1ULL << (azslParser::Uint3x3 - 192))
      | (1ULL << (azslParser::Uint3x4 - 192))
      | (1ULL << (azslParser::Uint4x1 - 192))
      | (1ULL << (azslParser::Uint4x2 - 192))
      | (1ULL << (azslParser::Uint4x3 - 192))
      | (1ULL << (azslParser::Uint4x4 - 192))
      | (1ULL << (azslParser::Uint16_t - 192))
      | (1ULL << (azslParser::Uint32_t - 192))
      | (1ULL << (azslParser::Uint64_t - 192))
      | (1ULL << (azslParser::UNorm - 192))
      | (1ULL << (azslParser::Unsigned - 192))
      | (1ULL << (azslParser::Dword - 192))
      | (1ULL << (azslParser::Dword1 - 192))
      | (1ULL << (azslParser::Dword2 - 192))
      | (1ULL << (azslParser::Dword3 - 192))
      | (1ULL << (azslParser::Dword4 - 192))
      | (1ULL << (azslParser::Dword1x1 - 192))
      | (1ULL << (azslParser::Dword1x2 - 192))
      | (1ULL << (azslParser::Dword1x3 - 192))
      | (1ULL << (azslParser::Dword1x4 - 192))
      | (1ULL << (azslParser::Dword2x1 - 192))
      | (1ULL << (azslParser::Dword2x2 - 192))
      | (1ULL << (azslParser::Dword2x3 - 192))
      | (1ULL << (azslParser::Dword2x4 - 192))
      | (1ULL << (azslParser::Dword3x1 - 192))
      | (1ULL << (azslParser::Dword3x2 - 192))
      | (1ULL << (azslParser::Dword3x3 - 192))
      | (1ULL << (azslParser::Dword3x4 - 192))
      | (1ULL << (azslParser::Dword4x1 - 192))
      | (1ULL << (azslParser::Dword4x2 - 192))
      | (1ULL << (azslParser::Dword4x3 - 192)))) != 0) || ((((_la - 256) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 256)) & ((1ULL << (azslParser::Dword4x4 - 256))
      | (1ULL << (azslParser::Vector - 256))
      | (1ULL << (azslParser::Volatile - 256))
      | (1ULL << (azslParser::Void - 256))
      | (1ULL << (azslParser::StateObjectConfig - 256))
      | (1ULL << (azslParser::LocalRootSignature - 256))
      | (1ULL << (azslParser::GlobalRootSignature - 256))
      | (1ULL << (azslParser::SubobjectToExportsAssociation - 256))
      | (1ULL << (azslParser::RaytracingShaderConfig - 256))
      | (1ULL << (azslParser::RaytracingPipelineConfig - 256))
      | (1ULL << (azslParser::RaytracingPipelineConfig1 - 256))
      | (1ULL << (azslParser::TriangleHitGroup - 256))
      | (1ULL << (azslParser::ProceduralPrimitiveHitGroup - 256))
      | (1ULL << (azslParser::LeftBracket - 256))
      | (1ULL << (azslParser::LeftDoubleBracket - 256)))) != 0) || ((((_la - 334) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 334)) & ((1ULL << (azslParser::ColonColon - 334))
      | (1ULL << (azslParser::Semi - 334))
      | (1ULL << (azslParser::KW_TypeAlias - 334))
      | (1ULL << (azslParser::KW_Typedef - 334))
      | (1ULL << (azslParser::KW_Typeof - 334))
      | (1ULL << (azslParser::ShaderResourceGroupSemantic - 334))
      | (1ULL << (azslParser::ShaderResourceGroup - 334))
      | (1ULL << (azslParser::KW_ext_print_message - 334))
      | (1ULL << (azslParser::KW_ext_print_symbol - 334))
      | (1ULL << (azslParser::Identifier - 334)))) != 0)) {
      setState(274);
      antlrcpp::downCast<CompilationUnitContext *>(_localctx)->topLevelDeclarationContext = topLevelDeclaration();
      antlrcpp::downCast<CompilationUnitContext *>(_localctx)->Declarations.push_back(antlrcpp::downCast<CompilationUnitContext *>(_localctx)->topLevelDeclarationContext);
      setState(279);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(280);
    match(azslParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TopLevelDeclarationContext ------------------------------------------------------------------

azslParser::TopLevelDeclarationContext::TopLevelDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::AnyStructuredTypeDefinitionStatementContext* azslParser::TopLevelDeclarationContext::anyStructuredTypeDefinitionStatement() {
  return getRuleContext<azslParser::AnyStructuredTypeDefinitionStatementContext>(0);
}

azslParser::VariableDeclarationStatementContext* azslParser::TopLevelDeclarationContext::variableDeclarationStatement() {
  return getRuleContext<azslParser::VariableDeclarationStatementContext>(0);
}

azslParser::AttributedFunctionDefinitionContext* azslParser::TopLevelDeclarationContext::attributedFunctionDefinition() {
  return getRuleContext<azslParser::AttributedFunctionDefinitionContext>(0);
}

azslParser::AttributedFunctionDeclarationContext* azslParser::TopLevelDeclarationContext::attributedFunctionDeclaration() {
  return getRuleContext<azslParser::AttributedFunctionDeclarationContext>(0);
}

azslParser::AttributeSpecifierSequenceContext* azslParser::TopLevelDeclarationContext::attributeSpecifierSequence() {
  return getRuleContext<azslParser::AttributeSpecifierSequenceContext>(0);
}

azslParser::CompilerExtensionStatementContext* azslParser::TopLevelDeclarationContext::compilerExtensionStatement() {
  return getRuleContext<azslParser::CompilerExtensionStatementContext>(0);
}

azslParser::TypeAliasingDefinitionStatementContext* azslParser::TopLevelDeclarationContext::typeAliasingDefinitionStatement() {
  return getRuleContext<azslParser::TypeAliasingDefinitionStatementContext>(0);
}

azslParser::AttributedSrgDefinitionContext* azslParser::TopLevelDeclarationContext::attributedSrgDefinition() {
  return getRuleContext<azslParser::AttributedSrgDefinitionContext>(0);
}

azslParser::AttributedSrgSemanticContext* azslParser::TopLevelDeclarationContext::attributedSrgSemantic() {
  return getRuleContext<azslParser::AttributedSrgSemanticContext>(0);
}

tree::TerminalNode* azslParser::TopLevelDeclarationContext::Semi() {
  return getToken(azslParser::Semi, 0);
}


size_t azslParser::TopLevelDeclarationContext::getRuleIndex() const {
  return azslParser::RuleTopLevelDeclaration;
}

void azslParser::TopLevelDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTopLevelDeclaration(this);
}

void azslParser::TopLevelDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTopLevelDeclaration(this);
}

azslParser::TopLevelDeclarationContext* azslParser::topLevelDeclaration() {
  TopLevelDeclarationContext *_localctx = _tracker.createInstance<TopLevelDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 2, azslParser::RuleTopLevelDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(292);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(282);
      anyStructuredTypeDefinitionStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(283);
      variableDeclarationStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(284);
      attributedFunctionDefinition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(285);
      attributedFunctionDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(286);
      attributeSpecifierSequence();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(287);
      compilerExtensionStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(288);
      typeAliasingDefinitionStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(289);
      attributedSrgDefinition();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(290);
      attributedSrgSemantic();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(291);
      match(azslParser::Semi);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdExpressionContext ------------------------------------------------------------------

azslParser::IdExpressionContext::IdExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::UnqualifiedIdContext* azslParser::IdExpressionContext::unqualifiedId() {
  return getRuleContext<azslParser::UnqualifiedIdContext>(0);
}

azslParser::QualifiedIdContext* azslParser::IdExpressionContext::qualifiedId() {
  return getRuleContext<azslParser::QualifiedIdContext>(0);
}


size_t azslParser::IdExpressionContext::getRuleIndex() const {
  return azslParser::RuleIdExpression;
}

void azslParser::IdExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdExpression(this);
}

void azslParser::IdExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdExpression(this);
}

azslParser::IdExpressionContext* azslParser::idExpression() {
  IdExpressionContext *_localctx = _tracker.createInstance<IdExpressionContext>(_ctx, getState());
  enterRule(_localctx, 4, azslParser::RuleIdExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(296);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(294);
      unqualifiedId();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(295);
      qualifiedId();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnqualifiedIdContext ------------------------------------------------------------------

azslParser::UnqualifiedIdContext::UnqualifiedIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::UnqualifiedIdContext::Identifier() {
  return getToken(azslParser::Identifier, 0);
}


size_t azslParser::UnqualifiedIdContext::getRuleIndex() const {
  return azslParser::RuleUnqualifiedId;
}

void azslParser::UnqualifiedIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnqualifiedId(this);
}

void azslParser::UnqualifiedIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnqualifiedId(this);
}

azslParser::UnqualifiedIdContext* azslParser::unqualifiedId() {
  UnqualifiedIdContext *_localctx = _tracker.createInstance<UnqualifiedIdContext>(_ctx, getState());
  enterRule(_localctx, 6, azslParser::RuleUnqualifiedId);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(298);
    match(azslParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualifiedIdContext ------------------------------------------------------------------

azslParser::QualifiedIdContext::QualifiedIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::NestedNameSpecifierContext* azslParser::QualifiedIdContext::nestedNameSpecifier() {
  return getRuleContext<azslParser::NestedNameSpecifierContext>(0);
}

azslParser::UnqualifiedIdContext* azslParser::QualifiedIdContext::unqualifiedId() {
  return getRuleContext<azslParser::UnqualifiedIdContext>(0);
}


size_t azslParser::QualifiedIdContext::getRuleIndex() const {
  return azslParser::RuleQualifiedId;
}

void azslParser::QualifiedIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQualifiedId(this);
}

void azslParser::QualifiedIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQualifiedId(this);
}

azslParser::QualifiedIdContext* azslParser::qualifiedId() {
  QualifiedIdContext *_localctx = _tracker.createInstance<QualifiedIdContext>(_ctx, getState());
  enterRule(_localctx, 8, azslParser::RuleQualifiedId);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(300);
    nestedNameSpecifier();
    setState(301);
    unqualifiedId();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NestedNameSpecifierContext ------------------------------------------------------------------

azslParser::NestedNameSpecifierContext::NestedNameSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> azslParser::NestedNameSpecifierContext::Identifier() {
  return getTokens(azslParser::Identifier);
}

tree::TerminalNode* azslParser::NestedNameSpecifierContext::Identifier(size_t i) {
  return getToken(azslParser::Identifier, i);
}

std::vector<tree::TerminalNode *> azslParser::NestedNameSpecifierContext::ColonColon() {
  return getTokens(azslParser::ColonColon);
}

tree::TerminalNode* azslParser::NestedNameSpecifierContext::ColonColon(size_t i) {
  return getToken(azslParser::ColonColon, i);
}


size_t azslParser::NestedNameSpecifierContext::getRuleIndex() const {
  return azslParser::RuleNestedNameSpecifier;
}

void azslParser::NestedNameSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNestedNameSpecifier(this);
}

void azslParser::NestedNameSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNestedNameSpecifier(this);
}

azslParser::NestedNameSpecifierContext* azslParser::nestedNameSpecifier() {
  NestedNameSpecifierContext *_localctx = _tracker.createInstance<NestedNameSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 10, azslParser::RuleNestedNameSpecifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(304);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == azslParser::ColonColon) {
      setState(303);
      antlrcpp::downCast<NestedNameSpecifierContext *>(_localctx)->GlobalSROToken = match(azslParser::ColonColon);
    }
    setState(310);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(306);
        match(azslParser::Identifier);
        setState(307);
        match(azslParser::ColonColon); 
      }
      setState(312);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDefinitionStatementContext ------------------------------------------------------------------

azslParser::ClassDefinitionStatementContext::ClassDefinitionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::ClassDefinitionContext* azslParser::ClassDefinitionStatementContext::classDefinition() {
  return getRuleContext<azslParser::ClassDefinitionContext>(0);
}

tree::TerminalNode* azslParser::ClassDefinitionStatementContext::Semi() {
  return getToken(azslParser::Semi, 0);
}


size_t azslParser::ClassDefinitionStatementContext::getRuleIndex() const {
  return azslParser::RuleClassDefinitionStatement;
}

void azslParser::ClassDefinitionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassDefinitionStatement(this);
}

void azslParser::ClassDefinitionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassDefinitionStatement(this);
}

azslParser::ClassDefinitionStatementContext* azslParser::classDefinitionStatement() {
  ClassDefinitionStatementContext *_localctx = _tracker.createInstance<ClassDefinitionStatementContext>(_ctx, getState());
  enterRule(_localctx, 12, azslParser::RuleClassDefinitionStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(313);
    classDefinition();
    setState(314);
    match(azslParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDefinitionContext ------------------------------------------------------------------

azslParser::ClassDefinitionContext::ClassDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::ClassDefinitionContext::Class() {
  return getToken(azslParser::Class, 0);
}

tree::TerminalNode* azslParser::ClassDefinitionContext::LeftBrace() {
  return getToken(azslParser::LeftBrace, 0);
}

tree::TerminalNode* azslParser::ClassDefinitionContext::RightBrace() {
  return getToken(azslParser::RightBrace, 0);
}

tree::TerminalNode* azslParser::ClassDefinitionContext::Identifier() {
  return getToken(azslParser::Identifier, 0);
}

std::vector<azslParser::ClassMemberDeclarationContext *> azslParser::ClassDefinitionContext::classMemberDeclaration() {
  return getRuleContexts<azslParser::ClassMemberDeclarationContext>();
}

azslParser::ClassMemberDeclarationContext* azslParser::ClassDefinitionContext::classMemberDeclaration(size_t i) {
  return getRuleContext<azslParser::ClassMemberDeclarationContext>(i);
}

azslParser::BaseListContext* azslParser::ClassDefinitionContext::baseList() {
  return getRuleContext<azslParser::BaseListContext>(0);
}


size_t azslParser::ClassDefinitionContext::getRuleIndex() const {
  return azslParser::RuleClassDefinition;
}

void azslParser::ClassDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassDefinition(this);
}

void azslParser::ClassDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassDefinition(this);
}

azslParser::ClassDefinitionContext* azslParser::classDefinition() {
  ClassDefinitionContext *_localctx = _tracker.createInstance<ClassDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 14, azslParser::RuleClassDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(316);
    match(azslParser::Class);
    setState(317);
    antlrcpp::downCast<ClassDefinitionContext *>(_localctx)->Name = match(azslParser::Identifier);
    setState(319);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == azslParser::Colon) {
      setState(318);
      antlrcpp::downCast<ClassDefinitionContext *>(_localctx)->BaseListOpt = baseList();
    }
    setState(321);
    match(azslParser::LeftBrace);
    setState(325);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << azslParser::AppendStructuredBuffer)
      | (1ULL << azslParser::Bool)
      | (1ULL << azslParser::Bool1)
      | (1ULL << azslParser::Bool2)
      | (1ULL << azslParser::Bool3)
      | (1ULL << azslParser::Bool4)
      | (1ULL << azslParser::Bool1x1)
      | (1ULL << azslParser::Bool1x2)
      | (1ULL << azslParser::Bool1x3)
      | (1ULL << azslParser::Bool1x4)
      | (1ULL << azslParser::Bool2x1)
      | (1ULL << azslParser::Bool2x2)
      | (1ULL << azslParser::Bool2x3)
      | (1ULL << azslParser::Bool2x4)
      | (1ULL << azslParser::Bool3x1)
      | (1ULL << azslParser::Bool3x2)
      | (1ULL << azslParser::Bool3x3)
      | (1ULL << azslParser::Bool3x4)
      | (1ULL << azslParser::Bool4x1)
      | (1ULL << azslParser::Bool4x2)
      | (1ULL << azslParser::Bool4x3)
      | (1ULL << azslParser::Bool4x4)
      | (1ULL << azslParser::Buffer)
      | (1ULL << azslParser::BuiltInTriangleIntersectionAttributes)
      | (1ULL << azslParser::ByteAddressBuffer)
      | (1ULL << azslParser::Centroid)
      | (1ULL << azslParser::ConstantBuffer)
      | (1ULL << azslParser::ConstantBufferCamel)
      | (1ULL << azslParser::Class)
      | (1ULL << azslParser::ColumnMajor)
      | (1ULL << azslParser::Const)
      | (1ULL << azslParser::ConsumeStructuredBuffer)
      | (1ULL << azslParser::Double)
      | (1ULL << azslParser::Double1)
      | (1ULL << azslParser::Double2)
      | (1ULL << azslParser::Double3)
      | (1ULL << azslParser::Double4)
      | (1ULL << azslParser::Double1x1)
      | (1ULL << azslParser::Double1x2)
      | (1ULL << azslParser::Double1x3)
      | (1ULL << azslParser::Double1x4)
      | (1ULL << azslParser::Double2x1)
      | (1ULL << azslParser::Double2x2)
      | (1ULL << azslParser::Double2x3)
      | (1ULL << azslParser::Double2x4)
      | (1ULL << azslParser::Double3x1)
      | (1ULL << azslParser::Double3x2)
      | (1ULL << azslParser::Double3x3)
      | (1ULL << azslParser::Double3x4)
      | (1ULL << azslParser::Double4x1)
      | (1ULL << azslParser::Double4x2)
      | (1ULL << azslParser::Double4x3)
      | (1ULL << azslParser::Double4x4)
      | (1ULL << azslParser::Enum))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (azslParser::Extern - 64))
      | (1ULL << (azslParser::Float - 64))
      | (1ULL << (azslParser::Float1 - 64))
      | (1ULL << (azslParser::Float2 - 64))
      | (1ULL << (azslParser::Float3 - 64))
      | (1ULL << (azslParser::Float4 - 64))
      | (1ULL << (azslParser::Float1x1 - 64))
      | (1ULL << (azslParser::Float1x2 - 64))
      | (1ULL << (azslParser::Float1x3 - 64))
      | (1ULL << (azslParser::Float1x4 - 64))
      | (1ULL << (azslParser::Float2x1 - 64))
      | (1ULL << (azslParser::Float2x2 - 64))
      | (1ULL << (azslParser::Float2x3 - 64))
      | (1ULL << (azslParser::Float2x4 - 64))
      | (1ULL << (azslParser::Float3x1 - 64))
      | (1ULL << (azslParser::Float3x2 - 64))
      | (1ULL << (azslParser::Float3x3 - 64))
      | (1ULL << (azslParser::Float3x4 - 64))
      | (1ULL << (azslParser::Float4x1 - 64))
      | (1ULL << (azslParser::Float4x2 - 64))
      | (1ULL << (azslParser::Float4x3 - 64))
      | (1ULL << (azslParser::Float4x4 - 64))
      | (1ULL << (azslParser::Groupshared - 64))
      | (1ULL << (azslParser::Globallycoherent - 64))
      | (1ULL << (azslParser::Half - 64))
      | (1ULL << (azslParser::Half1 - 64))
      | (1ULL << (azslParser::Half2 - 64))
      | (1ULL << (azslParser::Half3 - 64))
      | (1ULL << (azslParser::Half4 - 64))
      | (1ULL << (azslParser::Half1x1 - 64))
      | (1ULL << (azslParser::Half1x2 - 64))
      | (1ULL << (azslParser::Half1x3 - 64))
      | (1ULL << (azslParser::Half1x4 - 64))
      | (1ULL << (azslParser::Half2x1 - 64))
      | (1ULL << (azslParser::Half2x2 - 64))
      | (1ULL << (azslParser::Half2x3 - 64))
      | (1ULL << (azslParser::Half2x4 - 64))
      | (1ULL << (azslParser::Half3x1 - 64))
      | (1ULL << (azslParser::Half3x2 - 64))
      | (1ULL << (azslParser::Half3x3 - 64))
      | (1ULL << (azslParser::Half3x4 - 64))
      | (1ULL << (azslParser::Half4x1 - 64))
      | (1ULL << (azslParser::Half4x2 - 64))
      | (1ULL << (azslParser::Half4x3 - 64))
      | (1ULL << (azslParser::Half4x4 - 64))
      | (1ULL << (azslParser::In - 64))
      | (1ULL << (azslParser::Inline - 64))
      | (1ULL << (azslParser::Rootconstant - 64))
      | (1ULL << (azslParser::Inout - 64))
      | (1ULL << (azslParser::InputPatch - 64))
      | (1ULL << (azslParser::Int - 64))
      | (1ULL << (azslParser::Int16_t - 64))
      | (1ULL << (azslParser::Int32_t - 64))
      | (1ULL << (azslParser::Int64_t - 64))
      | (1ULL << (azslParser::Int1 - 64))
      | (1ULL << (azslParser::Int2 - 64))
      | (1ULL << (azslParser::Int3 - 64))
      | (1ULL << (azslParser::Int4 - 64))
      | (1ULL << (azslParser::Int1x1 - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (azslParser::Int1x2 - 128))
      | (1ULL << (azslParser::Int1x3 - 128))
      | (1ULL << (azslParser::Int1x4 - 128))
      | (1ULL << (azslParser::Int2x1 - 128))
      | (1ULL << (azslParser::Int2x2 - 128))
      | (1ULL << (azslParser::Int2x3 - 128))
      | (1ULL << (azslParser::Int2x4 - 128))
      | (1ULL << (azslParser::Int3x1 - 128))
      | (1ULL << (azslParser::Int3x2 - 128))
      | (1ULL << (azslParser::Int3x3 - 128))
      | (1ULL << (azslParser::Int3x4 - 128))
      | (1ULL << (azslParser::Int4x1 - 128))
      | (1ULL << (azslParser::Int4x2 - 128))
      | (1ULL << (azslParser::Int4x3 - 128))
      | (1ULL << (azslParser::Int4x4 - 128))
      | (1ULL << (azslParser::Interface - 128))
      | (1ULL << (azslParser::Line_ - 128))
      | (1ULL << (azslParser::LineAdj - 128))
      | (1ULL << (azslParser::Linear - 128))
      | (1ULL << (azslParser::LineStream - 128))
      | (1ULL << (azslParser::Matrix - 128))
      | (1ULL << (azslParser::Nointerpolation - 128))
      | (1ULL << (azslParser::Noperspective - 128))
      | (1ULL << (azslParser::Option - 128))
      | (1ULL << (azslParser::Out - 128))
      | (1ULL << (azslParser::OutputPatch - 128))
      | (1ULL << (azslParser::Point - 128))
      | (1ULL << (azslParser::PointStream - 128))
      | (1ULL << (azslParser::Precise - 128))
      | (1ULL << (azslParser::RasterizerOrderedBuffer - 128))
      | (1ULL << (azslParser::RasterizerOrderedByteAddressBuffer - 128))
      | (1ULL << (azslParser::RasterizerOrderedStructuredBuffer - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture1D - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture1DArray - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture2D - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture2DArray - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture3D - 128))
      | (1ULL << (azslParser::RayDesc - 128))
      | (1ULL << (azslParser::RaytracingAccelerationStructure - 128))
      | (1ULL << (azslParser::RowMajor - 128))
      | (1ULL << (azslParser::RWBuffer - 128))
      | (1ULL << (azslParser::RWByteAddressBuffer - 128))
      | (1ULL << (azslParser::RWStructuredBuffer - 128))
      | (1ULL << (azslParser::RWTexture1D - 128))
      | (1ULL << (azslParser::RWTexture1DArray - 128))
      | (1ULL << (azslParser::RWTexture2D - 128))
      | (1ULL << (azslParser::RWTexture2DArray - 128))
      | (1ULL << (azslParser::RWTexture3D - 128))
      | (1ULL << (azslParser::Sample - 128))
      | (1ULL << (azslParser::Sampler - 128))
      | (1ULL << (azslParser::SamplerCapitalS - 128))
      | (1ULL << (azslParser::SamplerComparisonState - 128))
      | (1ULL << (azslParser::SamplerStateCamel - 128))
      | (1ULL << (azslParser::SamplerState - 128))
      | (1ULL << (azslParser::Shared - 128))
      | (1ULL << (azslParser::SNorm - 128))
      | (1ULL << (azslParser::Static - 128))
      | (1ULL << (azslParser::Struct - 128)))) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 192)) & ((1ULL << (azslParser::StructuredBuffer - 192))
      | (1ULL << (azslParser::SubpassInput - 192))
      | (1ULL << (azslParser::SubpassInputMS - 192))
      | (1ULL << (azslParser::Texture1D - 192))
      | (1ULL << (azslParser::Texture1DArray - 192))
      | (1ULL << (azslParser::Texture2D - 192))
      | (1ULL << (azslParser::Texture2DArray - 192))
      | (1ULL << (azslParser::Texture2DMS - 192))
      | (1ULL << (azslParser::Texture2DMSArray - 192))
      | (1ULL << (azslParser::Texture3D - 192))
      | (1ULL << (azslParser::TextureCube - 192))
      | (1ULL << (azslParser::TextureCubeArray - 192))
      | (1ULL << (azslParser::Triangle - 192))
      | (1ULL << (azslParser::TriangleAdj - 192))
      | (1ULL << (azslParser::TriangleStream - 192))
      | (1ULL << (azslParser::Uniform - 192))
      | (1ULL << (azslParser::Uint - 192))
      | (1ULL << (azslParser::Uint1 - 192))
      | (1ULL << (azslParser::Uint2 - 192))
      | (1ULL << (azslParser::Uint3 - 192))
      | (1ULL << (azslParser::Uint4 - 192))
      | (1ULL << (azslParser::Uint1x1 - 192))
      | (1ULL << (azslParser::Uint1x2 - 192))
      | (1ULL << (azslParser::Uint1x3 - 192))
      | (1ULL << (azslParser::Uint1x4 - 192))
      | (1ULL << (azslParser::Uint2x1 - 192))
      | (1ULL << (azslParser::Uint2x2 - 192))
      | (1ULL << (azslParser::Uint2x3 - 192))
      | (1ULL << (azslParser::Uint2x4 - 192))
      | (1ULL << (azslParser::Uint3x1 - 192))
      | (1ULL << (azslParser::Uint3x2 - 192))
      | (1ULL << (azslParser::Uint3x3 - 192))
      | (1ULL << (azslParser::Uint3x4 - 192))
      | (1ULL << (azslParser::Uint4x1 - 192))
      | (1ULL << (azslParser::Uint4x2 - 192))
      | (1ULL << (azslParser::Uint4x3 - 192))
      | (1ULL << (azslParser::Uint4x4 - 192))
      | (1ULL << (azslParser::Uint16_t - 192))
      | (1ULL << (azslParser::Uint32_t - 192))
      | (1ULL << (azslParser::Uint64_t - 192))
      | (1ULL << (azslParser::UNorm - 192))
      | (1ULL << (azslParser::Unsigned - 192))
      | (1ULL << (azslParser::Dword - 192))
      | (1ULL << (azslParser::Dword1 - 192))
      | (1ULL << (azslParser::Dword2 - 192))
      | (1ULL << (azslParser::Dword3 - 192))
      | (1ULL << (azslParser::Dword4 - 192))
      | (1ULL << (azslParser::Dword1x1 - 192))
      | (1ULL << (azslParser::Dword1x2 - 192))
      | (1ULL << (azslParser::Dword1x3 - 192))
      | (1ULL << (azslParser::Dword1x4 - 192))
      | (1ULL << (azslParser::Dword2x1 - 192))
      | (1ULL << (azslParser::Dword2x2 - 192))
      | (1ULL << (azslParser::Dword2x3 - 192))
      | (1ULL << (azslParser::Dword2x4 - 192))
      | (1ULL << (azslParser::Dword3x1 - 192))
      | (1ULL << (azslParser::Dword3x2 - 192))
      | (1ULL << (azslParser::Dword3x3 - 192))
      | (1ULL << (azslParser::Dword3x4 - 192))
      | (1ULL << (azslParser::Dword4x1 - 192))
      | (1ULL << (azslParser::Dword4x2 - 192))
      | (1ULL << (azslParser::Dword4x3 - 192)))) != 0) || ((((_la - 256) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 256)) & ((1ULL << (azslParser::Dword4x4 - 256))
      | (1ULL << (azslParser::Vector - 256))
      | (1ULL << (azslParser::Volatile - 256))
      | (1ULL << (azslParser::Void - 256))
      | (1ULL << (azslParser::StateObjectConfig - 256))
      | (1ULL << (azslParser::LocalRootSignature - 256))
      | (1ULL << (azslParser::GlobalRootSignature - 256))
      | (1ULL << (azslParser::SubobjectToExportsAssociation - 256))
      | (1ULL << (azslParser::RaytracingShaderConfig - 256))
      | (1ULL << (azslParser::RaytracingPipelineConfig - 256))
      | (1ULL << (azslParser::RaytracingPipelineConfig1 - 256))
      | (1ULL << (azslParser::TriangleHitGroup - 256))
      | (1ULL << (azslParser::ProceduralPrimitiveHitGroup - 256))
      | (1ULL << (azslParser::LeftBracket - 256))
      | (1ULL << (azslParser::LeftDoubleBracket - 256)))) != 0) || ((((_la - 334) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 334)) & ((1ULL << (azslParser::ColonColon - 334))
      | (1ULL << (azslParser::KW_TypeAlias - 334))
      | (1ULL << (azslParser::KW_Typedef - 334))
      | (1ULL << (azslParser::KW_Typeof - 334))
      | (1ULL << (azslParser::Identifier - 334)))) != 0)) {
      setState(322);
      classMemberDeclaration();
      setState(327);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(328);
    match(azslParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BaseListContext ------------------------------------------------------------------

azslParser::BaseListContext::BaseListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::BaseListContext::Colon() {
  return getToken(azslParser::Colon, 0);
}

std::vector<azslParser::IdExpressionContext *> azslParser::BaseListContext::idExpression() {
  return getRuleContexts<azslParser::IdExpressionContext>();
}

azslParser::IdExpressionContext* azslParser::BaseListContext::idExpression(size_t i) {
  return getRuleContext<azslParser::IdExpressionContext>(i);
}

std::vector<tree::TerminalNode *> azslParser::BaseListContext::Comma() {
  return getTokens(azslParser::Comma);
}

tree::TerminalNode* azslParser::BaseListContext::Comma(size_t i) {
  return getToken(azslParser::Comma, i);
}


size_t azslParser::BaseListContext::getRuleIndex() const {
  return azslParser::RuleBaseList;
}

void azslParser::BaseListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBaseList(this);
}

void azslParser::BaseListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBaseList(this);
}

azslParser::BaseListContext* azslParser::baseList() {
  BaseListContext *_localctx = _tracker.createInstance<BaseListContext>(_ctx, getState());
  enterRule(_localctx, 16, azslParser::RuleBaseList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(330);
    match(azslParser::Colon);
    setState(331);
    idExpression();
    setState(336);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == azslParser::Comma) {
      setState(332);
      match(azslParser::Comma);
      setState(333);
      idExpression();
      setState(338);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassMemberDeclarationContext ------------------------------------------------------------------

azslParser::ClassMemberDeclarationContext::ClassMemberDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::VariableDeclarationStatementContext* azslParser::ClassMemberDeclarationContext::variableDeclarationStatement() {
  return getRuleContext<azslParser::VariableDeclarationStatementContext>(0);
}

azslParser::AttributedFunctionDefinitionContext* azslParser::ClassMemberDeclarationContext::attributedFunctionDefinition() {
  return getRuleContext<azslParser::AttributedFunctionDefinitionContext>(0);
}

azslParser::AttributedFunctionDeclarationContext* azslParser::ClassMemberDeclarationContext::attributedFunctionDeclaration() {
  return getRuleContext<azslParser::AttributedFunctionDeclarationContext>(0);
}

azslParser::TypeAliasingDefinitionStatementContext* azslParser::ClassMemberDeclarationContext::typeAliasingDefinitionStatement() {
  return getRuleContext<azslParser::TypeAliasingDefinitionStatementContext>(0);
}

azslParser::AnyStructuredTypeDefinitionStatementContext* azslParser::ClassMemberDeclarationContext::anyStructuredTypeDefinitionStatement() {
  return getRuleContext<azslParser::AnyStructuredTypeDefinitionStatementContext>(0);
}

azslParser::AttributeSpecifierAnyContext* azslParser::ClassMemberDeclarationContext::attributeSpecifierAny() {
  return getRuleContext<azslParser::AttributeSpecifierAnyContext>(0);
}


size_t azslParser::ClassMemberDeclarationContext::getRuleIndex() const {
  return azslParser::RuleClassMemberDeclaration;
}

void azslParser::ClassMemberDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassMemberDeclaration(this);
}

void azslParser::ClassMemberDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassMemberDeclaration(this);
}

azslParser::ClassMemberDeclarationContext* azslParser::classMemberDeclaration() {
  ClassMemberDeclarationContext *_localctx = _tracker.createInstance<ClassMemberDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 18, azslParser::RuleClassMemberDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(345);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(339);
      variableDeclarationStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(340);
      attributedFunctionDefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(341);
      attributedFunctionDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(342);
      typeAliasingDefinitionStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(343);
      anyStructuredTypeDefinitionStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(344);
      attributeSpecifierAny();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDefinitionStatementContext ------------------------------------------------------------------

azslParser::StructDefinitionStatementContext::StructDefinitionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::StructDefinitionContext* azslParser::StructDefinitionStatementContext::structDefinition() {
  return getRuleContext<azslParser::StructDefinitionContext>(0);
}

tree::TerminalNode* azslParser::StructDefinitionStatementContext::Semi() {
  return getToken(azslParser::Semi, 0);
}


size_t azslParser::StructDefinitionStatementContext::getRuleIndex() const {
  return azslParser::RuleStructDefinitionStatement;
}

void azslParser::StructDefinitionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructDefinitionStatement(this);
}

void azslParser::StructDefinitionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructDefinitionStatement(this);
}

azslParser::StructDefinitionStatementContext* azslParser::structDefinitionStatement() {
  StructDefinitionStatementContext *_localctx = _tracker.createInstance<StructDefinitionStatementContext>(_ctx, getState());
  enterRule(_localctx, 20, azslParser::RuleStructDefinitionStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(347);
    structDefinition();
    setState(348);
    match(azslParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDefinitionContext ------------------------------------------------------------------

azslParser::StructDefinitionContext::StructDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::StructDefinitionContext::Struct() {
  return getToken(azslParser::Struct, 0);
}

tree::TerminalNode* azslParser::StructDefinitionContext::LeftBrace() {
  return getToken(azslParser::LeftBrace, 0);
}

tree::TerminalNode* azslParser::StructDefinitionContext::RightBrace() {
  return getToken(azslParser::RightBrace, 0);
}

tree::TerminalNode* azslParser::StructDefinitionContext::Identifier() {
  return getToken(azslParser::Identifier, 0);
}

std::vector<azslParser::StructMemberDeclarationContext *> azslParser::StructDefinitionContext::structMemberDeclaration() {
  return getRuleContexts<azslParser::StructMemberDeclarationContext>();
}

azslParser::StructMemberDeclarationContext* azslParser::StructDefinitionContext::structMemberDeclaration(size_t i) {
  return getRuleContext<azslParser::StructMemberDeclarationContext>(i);
}


size_t azslParser::StructDefinitionContext::getRuleIndex() const {
  return azslParser::RuleStructDefinition;
}

void azslParser::StructDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructDefinition(this);
}

void azslParser::StructDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructDefinition(this);
}

azslParser::StructDefinitionContext* azslParser::structDefinition() {
  StructDefinitionContext *_localctx = _tracker.createInstance<StructDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 22, azslParser::RuleStructDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(350);
    match(azslParser::Struct);
    setState(351);
    antlrcpp::downCast<StructDefinitionContext *>(_localctx)->Name = match(azslParser::Identifier);
    setState(352);
    match(azslParser::LeftBrace);
    setState(356);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << azslParser::AppendStructuredBuffer)
      | (1ULL << azslParser::Bool)
      | (1ULL << azslParser::Bool1)
      | (1ULL << azslParser::Bool2)
      | (1ULL << azslParser::Bool3)
      | (1ULL << azslParser::Bool4)
      | (1ULL << azslParser::Bool1x1)
      | (1ULL << azslParser::Bool1x2)
      | (1ULL << azslParser::Bool1x3)
      | (1ULL << azslParser::Bool1x4)
      | (1ULL << azslParser::Bool2x1)
      | (1ULL << azslParser::Bool2x2)
      | (1ULL << azslParser::Bool2x3)
      | (1ULL << azslParser::Bool2x4)
      | (1ULL << azslParser::Bool3x1)
      | (1ULL << azslParser::Bool3x2)
      | (1ULL << azslParser::Bool3x3)
      | (1ULL << azslParser::Bool3x4)
      | (1ULL << azslParser::Bool4x1)
      | (1ULL << azslParser::Bool4x2)
      | (1ULL << azslParser::Bool4x3)
      | (1ULL << azslParser::Bool4x4)
      | (1ULL << azslParser::Buffer)
      | (1ULL << azslParser::BuiltInTriangleIntersectionAttributes)
      | (1ULL << azslParser::ByteAddressBuffer)
      | (1ULL << azslParser::Centroid)
      | (1ULL << azslParser::ConstantBuffer)
      | (1ULL << azslParser::ConstantBufferCamel)
      | (1ULL << azslParser::Class)
      | (1ULL << azslParser::ColumnMajor)
      | (1ULL << azslParser::Const)
      | (1ULL << azslParser::ConsumeStructuredBuffer)
      | (1ULL << azslParser::Double)
      | (1ULL << azslParser::Double1)
      | (1ULL << azslParser::Double2)
      | (1ULL << azslParser::Double3)
      | (1ULL << azslParser::Double4)
      | (1ULL << azslParser::Double1x1)
      | (1ULL << azslParser::Double1x2)
      | (1ULL << azslParser::Double1x3)
      | (1ULL << azslParser::Double1x4)
      | (1ULL << azslParser::Double2x1)
      | (1ULL << azslParser::Double2x2)
      | (1ULL << azslParser::Double2x3)
      | (1ULL << azslParser::Double2x4)
      | (1ULL << azslParser::Double3x1)
      | (1ULL << azslParser::Double3x2)
      | (1ULL << azslParser::Double3x3)
      | (1ULL << azslParser::Double3x4)
      | (1ULL << azslParser::Double4x1)
      | (1ULL << azslParser::Double4x2)
      | (1ULL << azslParser::Double4x3)
      | (1ULL << azslParser::Double4x4)
      | (1ULL << azslParser::Enum))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (azslParser::Extern - 64))
      | (1ULL << (azslParser::Float - 64))
      | (1ULL << (azslParser::Float1 - 64))
      | (1ULL << (azslParser::Float2 - 64))
      | (1ULL << (azslParser::Float3 - 64))
      | (1ULL << (azslParser::Float4 - 64))
      | (1ULL << (azslParser::Float1x1 - 64))
      | (1ULL << (azslParser::Float1x2 - 64))
      | (1ULL << (azslParser::Float1x3 - 64))
      | (1ULL << (azslParser::Float1x4 - 64))
      | (1ULL << (azslParser::Float2x1 - 64))
      | (1ULL << (azslParser::Float2x2 - 64))
      | (1ULL << (azslParser::Float2x3 - 64))
      | (1ULL << (azslParser::Float2x4 - 64))
      | (1ULL << (azslParser::Float3x1 - 64))
      | (1ULL << (azslParser::Float3x2 - 64))
      | (1ULL << (azslParser::Float3x3 - 64))
      | (1ULL << (azslParser::Float3x4 - 64))
      | (1ULL << (azslParser::Float4x1 - 64))
      | (1ULL << (azslParser::Float4x2 - 64))
      | (1ULL << (azslParser::Float4x3 - 64))
      | (1ULL << (azslParser::Float4x4 - 64))
      | (1ULL << (azslParser::Groupshared - 64))
      | (1ULL << (azslParser::Globallycoherent - 64))
      | (1ULL << (azslParser::Half - 64))
      | (1ULL << (azslParser::Half1 - 64))
      | (1ULL << (azslParser::Half2 - 64))
      | (1ULL << (azslParser::Half3 - 64))
      | (1ULL << (azslParser::Half4 - 64))
      | (1ULL << (azslParser::Half1x1 - 64))
      | (1ULL << (azslParser::Half1x2 - 64))
      | (1ULL << (azslParser::Half1x3 - 64))
      | (1ULL << (azslParser::Half1x4 - 64))
      | (1ULL << (azslParser::Half2x1 - 64))
      | (1ULL << (azslParser::Half2x2 - 64))
      | (1ULL << (azslParser::Half2x3 - 64))
      | (1ULL << (azslParser::Half2x4 - 64))
      | (1ULL << (azslParser::Half3x1 - 64))
      | (1ULL << (azslParser::Half3x2 - 64))
      | (1ULL << (azslParser::Half3x3 - 64))
      | (1ULL << (azslParser::Half3x4 - 64))
      | (1ULL << (azslParser::Half4x1 - 64))
      | (1ULL << (azslParser::Half4x2 - 64))
      | (1ULL << (azslParser::Half4x3 - 64))
      | (1ULL << (azslParser::Half4x4 - 64))
      | (1ULL << (azslParser::In - 64))
      | (1ULL << (azslParser::Inline - 64))
      | (1ULL << (azslParser::Rootconstant - 64))
      | (1ULL << (azslParser::Inout - 64))
      | (1ULL << (azslParser::InputPatch - 64))
      | (1ULL << (azslParser::Int - 64))
      | (1ULL << (azslParser::Int16_t - 64))
      | (1ULL << (azslParser::Int32_t - 64))
      | (1ULL << (azslParser::Int64_t - 64))
      | (1ULL << (azslParser::Int1 - 64))
      | (1ULL << (azslParser::Int2 - 64))
      | (1ULL << (azslParser::Int3 - 64))
      | (1ULL << (azslParser::Int4 - 64))
      | (1ULL << (azslParser::Int1x1 - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (azslParser::Int1x2 - 128))
      | (1ULL << (azslParser::Int1x3 - 128))
      | (1ULL << (azslParser::Int1x4 - 128))
      | (1ULL << (azslParser::Int2x1 - 128))
      | (1ULL << (azslParser::Int2x2 - 128))
      | (1ULL << (azslParser::Int2x3 - 128))
      | (1ULL << (azslParser::Int2x4 - 128))
      | (1ULL << (azslParser::Int3x1 - 128))
      | (1ULL << (azslParser::Int3x2 - 128))
      | (1ULL << (azslParser::Int3x3 - 128))
      | (1ULL << (azslParser::Int3x4 - 128))
      | (1ULL << (azslParser::Int4x1 - 128))
      | (1ULL << (azslParser::Int4x2 - 128))
      | (1ULL << (azslParser::Int4x3 - 128))
      | (1ULL << (azslParser::Int4x4 - 128))
      | (1ULL << (azslParser::Interface - 128))
      | (1ULL << (azslParser::Line_ - 128))
      | (1ULL << (azslParser::LineAdj - 128))
      | (1ULL << (azslParser::Linear - 128))
      | (1ULL << (azslParser::LineStream - 128))
      | (1ULL << (azslParser::Matrix - 128))
      | (1ULL << (azslParser::Nointerpolation - 128))
      | (1ULL << (azslParser::Noperspective - 128))
      | (1ULL << (azslParser::Option - 128))
      | (1ULL << (azslParser::Out - 128))
      | (1ULL << (azslParser::OutputPatch - 128))
      | (1ULL << (azslParser::Point - 128))
      | (1ULL << (azslParser::PointStream - 128))
      | (1ULL << (azslParser::Precise - 128))
      | (1ULL << (azslParser::RasterizerOrderedBuffer - 128))
      | (1ULL << (azslParser::RasterizerOrderedByteAddressBuffer - 128))
      | (1ULL << (azslParser::RasterizerOrderedStructuredBuffer - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture1D - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture1DArray - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture2D - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture2DArray - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture3D - 128))
      | (1ULL << (azslParser::RayDesc - 128))
      | (1ULL << (azslParser::RaytracingAccelerationStructure - 128))
      | (1ULL << (azslParser::RowMajor - 128))
      | (1ULL << (azslParser::RWBuffer - 128))
      | (1ULL << (azslParser::RWByteAddressBuffer - 128))
      | (1ULL << (azslParser::RWStructuredBuffer - 128))
      | (1ULL << (azslParser::RWTexture1D - 128))
      | (1ULL << (azslParser::RWTexture1DArray - 128))
      | (1ULL << (azslParser::RWTexture2D - 128))
      | (1ULL << (azslParser::RWTexture2DArray - 128))
      | (1ULL << (azslParser::RWTexture3D - 128))
      | (1ULL << (azslParser::Sample - 128))
      | (1ULL << (azslParser::Sampler - 128))
      | (1ULL << (azslParser::SamplerCapitalS - 128))
      | (1ULL << (azslParser::SamplerComparisonState - 128))
      | (1ULL << (azslParser::SamplerStateCamel - 128))
      | (1ULL << (azslParser::SamplerState - 128))
      | (1ULL << (azslParser::Shared - 128))
      | (1ULL << (azslParser::SNorm - 128))
      | (1ULL << (azslParser::Static - 128))
      | (1ULL << (azslParser::Struct - 128)))) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 192)) & ((1ULL << (azslParser::StructuredBuffer - 192))
      | (1ULL << (azslParser::SubpassInput - 192))
      | (1ULL << (azslParser::SubpassInputMS - 192))
      | (1ULL << (azslParser::Texture1D - 192))
      | (1ULL << (azslParser::Texture1DArray - 192))
      | (1ULL << (azslParser::Texture2D - 192))
      | (1ULL << (azslParser::Texture2DArray - 192))
      | (1ULL << (azslParser::Texture2DMS - 192))
      | (1ULL << (azslParser::Texture2DMSArray - 192))
      | (1ULL << (azslParser::Texture3D - 192))
      | (1ULL << (azslParser::TextureCube - 192))
      | (1ULL << (azslParser::TextureCubeArray - 192))
      | (1ULL << (azslParser::Triangle - 192))
      | (1ULL << (azslParser::TriangleAdj - 192))
      | (1ULL << (azslParser::TriangleStream - 192))
      | (1ULL << (azslParser::Uniform - 192))
      | (1ULL << (azslParser::Uint - 192))
      | (1ULL << (azslParser::Uint1 - 192))
      | (1ULL << (azslParser::Uint2 - 192))
      | (1ULL << (azslParser::Uint3 - 192))
      | (1ULL << (azslParser::Uint4 - 192))
      | (1ULL << (azslParser::Uint1x1 - 192))
      | (1ULL << (azslParser::Uint1x2 - 192))
      | (1ULL << (azslParser::Uint1x3 - 192))
      | (1ULL << (azslParser::Uint1x4 - 192))
      | (1ULL << (azslParser::Uint2x1 - 192))
      | (1ULL << (azslParser::Uint2x2 - 192))
      | (1ULL << (azslParser::Uint2x3 - 192))
      | (1ULL << (azslParser::Uint2x4 - 192))
      | (1ULL << (azslParser::Uint3x1 - 192))
      | (1ULL << (azslParser::Uint3x2 - 192))
      | (1ULL << (azslParser::Uint3x3 - 192))
      | (1ULL << (azslParser::Uint3x4 - 192))
      | (1ULL << (azslParser::Uint4x1 - 192))
      | (1ULL << (azslParser::Uint4x2 - 192))
      | (1ULL << (azslParser::Uint4x3 - 192))
      | (1ULL << (azslParser::Uint4x4 - 192))
      | (1ULL << (azslParser::Uint16_t - 192))
      | (1ULL << (azslParser::Uint32_t - 192))
      | (1ULL << (azslParser::Uint64_t - 192))
      | (1ULL << (azslParser::UNorm - 192))
      | (1ULL << (azslParser::Unsigned - 192))
      | (1ULL << (azslParser::Dword - 192))
      | (1ULL << (azslParser::Dword1 - 192))
      | (1ULL << (azslParser::Dword2 - 192))
      | (1ULL << (azslParser::Dword3 - 192))
      | (1ULL << (azslParser::Dword4 - 192))
      | (1ULL << (azslParser::Dword1x1 - 192))
      | (1ULL << (azslParser::Dword1x2 - 192))
      | (1ULL << (azslParser::Dword1x3 - 192))
      | (1ULL << (azslParser::Dword1x4 - 192))
      | (1ULL << (azslParser::Dword2x1 - 192))
      | (1ULL << (azslParser::Dword2x2 - 192))
      | (1ULL << (azslParser::Dword2x3 - 192))
      | (1ULL << (azslParser::Dword2x4 - 192))
      | (1ULL << (azslParser::Dword3x1 - 192))
      | (1ULL << (azslParser::Dword3x2 - 192))
      | (1ULL << (azslParser::Dword3x3 - 192))
      | (1ULL << (azslParser::Dword3x4 - 192))
      | (1ULL << (azslParser::Dword4x1 - 192))
      | (1ULL << (azslParser::Dword4x2 - 192))
      | (1ULL << (azslParser::Dword4x3 - 192)))) != 0) || ((((_la - 256) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 256)) & ((1ULL << (azslParser::Dword4x4 - 256))
      | (1ULL << (azslParser::Vector - 256))
      | (1ULL << (azslParser::Volatile - 256))
      | (1ULL << (azslParser::Void - 256))
      | (1ULL << (azslParser::StateObjectConfig - 256))
      | (1ULL << (azslParser::LocalRootSignature - 256))
      | (1ULL << (azslParser::GlobalRootSignature - 256))
      | (1ULL << (azslParser::SubobjectToExportsAssociation - 256))
      | (1ULL << (azslParser::RaytracingShaderConfig - 256))
      | (1ULL << (azslParser::RaytracingPipelineConfig - 256))
      | (1ULL << (azslParser::RaytracingPipelineConfig1 - 256))
      | (1ULL << (azslParser::TriangleHitGroup - 256))
      | (1ULL << (azslParser::ProceduralPrimitiveHitGroup - 256))
      | (1ULL << (azslParser::LeftBracket - 256))
      | (1ULL << (azslParser::LeftDoubleBracket - 256)))) != 0) || ((((_la - 334) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 334)) & ((1ULL << (azslParser::ColonColon - 334))
      | (1ULL << (azslParser::KW_TypeAlias - 334))
      | (1ULL << (azslParser::KW_Typedef - 334))
      | (1ULL << (azslParser::KW_Typeof - 334))
      | (1ULL << (azslParser::Identifier - 334)))) != 0)) {
      setState(353);
      structMemberDeclaration();
      setState(358);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(359);
    match(azslParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructMemberDeclarationContext ------------------------------------------------------------------

azslParser::StructMemberDeclarationContext::StructMemberDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::VariableDeclarationStatementContext* azslParser::StructMemberDeclarationContext::variableDeclarationStatement() {
  return getRuleContext<azslParser::VariableDeclarationStatementContext>(0);
}

azslParser::AttributedFunctionDefinitionContext* azslParser::StructMemberDeclarationContext::attributedFunctionDefinition() {
  return getRuleContext<azslParser::AttributedFunctionDefinitionContext>(0);
}

azslParser::AttributedFunctionDeclarationContext* azslParser::StructMemberDeclarationContext::attributedFunctionDeclaration() {
  return getRuleContext<azslParser::AttributedFunctionDeclarationContext>(0);
}

azslParser::AnyStructuredTypeDefinitionStatementContext* azslParser::StructMemberDeclarationContext::anyStructuredTypeDefinitionStatement() {
  return getRuleContext<azslParser::AnyStructuredTypeDefinitionStatementContext>(0);
}

azslParser::TypeAliasingDefinitionStatementContext* azslParser::StructMemberDeclarationContext::typeAliasingDefinitionStatement() {
  return getRuleContext<azslParser::TypeAliasingDefinitionStatementContext>(0);
}

azslParser::AttributeSpecifierAnyContext* azslParser::StructMemberDeclarationContext::attributeSpecifierAny() {
  return getRuleContext<azslParser::AttributeSpecifierAnyContext>(0);
}


size_t azslParser::StructMemberDeclarationContext::getRuleIndex() const {
  return azslParser::RuleStructMemberDeclaration;
}

void azslParser::StructMemberDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructMemberDeclaration(this);
}

void azslParser::StructMemberDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructMemberDeclaration(this);
}

azslParser::StructMemberDeclarationContext* azslParser::structMemberDeclaration() {
  StructMemberDeclarationContext *_localctx = _tracker.createInstance<StructMemberDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 24, azslParser::RuleStructMemberDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(367);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(361);
      variableDeclarationStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(362);
      attributedFunctionDefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(363);
      attributedFunctionDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(364);
      anyStructuredTypeDefinitionStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(365);
      typeAliasingDefinitionStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(366);
      attributeSpecifierAny();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnyStructuredTypeDefinitionStatementContext ------------------------------------------------------------------

azslParser::AnyStructuredTypeDefinitionStatementContext::AnyStructuredTypeDefinitionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::AnyStructuredTypeDefinitionContext* azslParser::AnyStructuredTypeDefinitionStatementContext::anyStructuredTypeDefinition() {
  return getRuleContext<azslParser::AnyStructuredTypeDefinitionContext>(0);
}

tree::TerminalNode* azslParser::AnyStructuredTypeDefinitionStatementContext::Semi() {
  return getToken(azslParser::Semi, 0);
}

std::vector<azslParser::AttributeSpecifierAnyContext *> azslParser::AnyStructuredTypeDefinitionStatementContext::attributeSpecifierAny() {
  return getRuleContexts<azslParser::AttributeSpecifierAnyContext>();
}

azslParser::AttributeSpecifierAnyContext* azslParser::AnyStructuredTypeDefinitionStatementContext::attributeSpecifierAny(size_t i) {
  return getRuleContext<azslParser::AttributeSpecifierAnyContext>(i);
}


size_t azslParser::AnyStructuredTypeDefinitionStatementContext::getRuleIndex() const {
  return azslParser::RuleAnyStructuredTypeDefinitionStatement;
}

void azslParser::AnyStructuredTypeDefinitionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnyStructuredTypeDefinitionStatement(this);
}

void azslParser::AnyStructuredTypeDefinitionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnyStructuredTypeDefinitionStatement(this);
}

azslParser::AnyStructuredTypeDefinitionStatementContext* azslParser::anyStructuredTypeDefinitionStatement() {
  AnyStructuredTypeDefinitionStatementContext *_localctx = _tracker.createInstance<AnyStructuredTypeDefinitionStatementContext>(_ctx, getState());
  enterRule(_localctx, 26, azslParser::RuleAnyStructuredTypeDefinitionStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(372);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == azslParser::LeftBracket

    || _la == azslParser::LeftDoubleBracket) {
      setState(369);
      attributeSpecifierAny();
      setState(374);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(375);
    anyStructuredTypeDefinition();
    setState(376);
    match(azslParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumDefinitionStatementContext ------------------------------------------------------------------

azslParser::EnumDefinitionStatementContext::EnumDefinitionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::EnumDefinitionContext* azslParser::EnumDefinitionStatementContext::enumDefinition() {
  return getRuleContext<azslParser::EnumDefinitionContext>(0);
}

tree::TerminalNode* azslParser::EnumDefinitionStatementContext::Semi() {
  return getToken(azslParser::Semi, 0);
}


size_t azslParser::EnumDefinitionStatementContext::getRuleIndex() const {
  return azslParser::RuleEnumDefinitionStatement;
}

void azslParser::EnumDefinitionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumDefinitionStatement(this);
}

void azslParser::EnumDefinitionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumDefinitionStatement(this);
}

azslParser::EnumDefinitionStatementContext* azslParser::enumDefinitionStatement() {
  EnumDefinitionStatementContext *_localctx = _tracker.createInstance<EnumDefinitionStatementContext>(_ctx, getState());
  enterRule(_localctx, 28, azslParser::RuleEnumDefinitionStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(378);
    enumDefinition();
    setState(379);
    match(azslParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumDefinitionContext ------------------------------------------------------------------

azslParser::EnumDefinitionContext::EnumDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::EnumKeyContext* azslParser::EnumDefinitionContext::enumKey() {
  return getRuleContext<azslParser::EnumKeyContext>(0);
}

tree::TerminalNode* azslParser::EnumDefinitionContext::LeftBrace() {
  return getToken(azslParser::LeftBrace, 0);
}

tree::TerminalNode* azslParser::EnumDefinitionContext::RightBrace() {
  return getToken(azslParser::RightBrace, 0);
}

tree::TerminalNode* azslParser::EnumDefinitionContext::Identifier() {
  return getToken(azslParser::Identifier, 0);
}

azslParser::EnumeratorListDefinitionContext* azslParser::EnumDefinitionContext::enumeratorListDefinition() {
  return getRuleContext<azslParser::EnumeratorListDefinitionContext>(0);
}


size_t azslParser::EnumDefinitionContext::getRuleIndex() const {
  return azslParser::RuleEnumDefinition;
}

void azslParser::EnumDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumDefinition(this);
}

void azslParser::EnumDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumDefinition(this);
}

azslParser::EnumDefinitionContext* azslParser::enumDefinition() {
  EnumDefinitionContext *_localctx = _tracker.createInstance<EnumDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 30, azslParser::RuleEnumDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(381);
    enumKey();
    setState(382);
    antlrcpp::downCast<EnumDefinitionContext *>(_localctx)->Name = match(azslParser::Identifier);
    setState(383);
    match(azslParser::LeftBrace);
    setState(385);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == azslParser::Identifier) {
      setState(384);
      antlrcpp::downCast<EnumDefinitionContext *>(_localctx)->List = enumeratorListDefinition();
    }
    setState(387);
    match(azslParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumKeyContext ------------------------------------------------------------------

azslParser::EnumKeyContext::EnumKeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t azslParser::EnumKeyContext::getRuleIndex() const {
  return azslParser::RuleEnumKey;
}

void azslParser::EnumKeyContext::copyFrom(EnumKeyContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- UnscopedEnumContext ------------------------------------------------------------------

tree::TerminalNode* azslParser::UnscopedEnumContext::Enum() {
  return getToken(azslParser::Enum, 0);
}

azslParser::UnscopedEnumContext::UnscopedEnumContext(EnumKeyContext *ctx) { copyFrom(ctx); }

void azslParser::UnscopedEnumContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnscopedEnum(this);
}
void azslParser::UnscopedEnumContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnscopedEnum(this);
}
//----------------- ScopedEnumContext ------------------------------------------------------------------

tree::TerminalNode* azslParser::ScopedEnumContext::Enum() {
  return getToken(azslParser::Enum, 0);
}

tree::TerminalNode* azslParser::ScopedEnumContext::Class() {
  return getToken(azslParser::Class, 0);
}

tree::TerminalNode* azslParser::ScopedEnumContext::Struct() {
  return getToken(azslParser::Struct, 0);
}

azslParser::ScopedEnumContext::ScopedEnumContext(EnumKeyContext *ctx) { copyFrom(ctx); }

void azslParser::ScopedEnumContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScopedEnum(this);
}
void azslParser::ScopedEnumContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScopedEnum(this);
}
azslParser::EnumKeyContext* azslParser::enumKey() {
  EnumKeyContext *_localctx = _tracker.createInstance<EnumKeyContext>(_ctx, getState());
  enterRule(_localctx, 32, azslParser::RuleEnumKey);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(392);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<azslParser::UnscopedEnumContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(389);
      match(azslParser::Enum);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<azslParser::ScopedEnumContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(390);
      match(azslParser::Enum);
      setState(391);
      _la = _input->LA(1);
      if (!(_la == azslParser::Class || _la == azslParser::Struct)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorListDefinitionContext ------------------------------------------------------------------

azslParser::EnumeratorListDefinitionContext::EnumeratorListDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<azslParser::EnumeratorDeclaratorContext *> azslParser::EnumeratorListDefinitionContext::enumeratorDeclarator() {
  return getRuleContexts<azslParser::EnumeratorDeclaratorContext>();
}

azslParser::EnumeratorDeclaratorContext* azslParser::EnumeratorListDefinitionContext::enumeratorDeclarator(size_t i) {
  return getRuleContext<azslParser::EnumeratorDeclaratorContext>(i);
}

std::vector<tree::TerminalNode *> azslParser::EnumeratorListDefinitionContext::Comma() {
  return getTokens(azslParser::Comma);
}

tree::TerminalNode* azslParser::EnumeratorListDefinitionContext::Comma(size_t i) {
  return getToken(azslParser::Comma, i);
}


size_t azslParser::EnumeratorListDefinitionContext::getRuleIndex() const {
  return azslParser::RuleEnumeratorListDefinition;
}

void azslParser::EnumeratorListDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumeratorListDefinition(this);
}

void azslParser::EnumeratorListDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumeratorListDefinition(this);
}

azslParser::EnumeratorListDefinitionContext* azslParser::enumeratorListDefinition() {
  EnumeratorListDefinitionContext *_localctx = _tracker.createInstance<EnumeratorListDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 34, azslParser::RuleEnumeratorListDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(394);
    antlrcpp::downCast<EnumeratorListDefinitionContext *>(_localctx)->enumeratorDeclaratorContext = enumeratorDeclarator();
    antlrcpp::downCast<EnumeratorListDefinitionContext *>(_localctx)->Enumerators.push_back(antlrcpp::downCast<EnumeratorListDefinitionContext *>(_localctx)->enumeratorDeclaratorContext);
    setState(399);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(395);
        match(azslParser::Comma);
        setState(396);
        antlrcpp::downCast<EnumeratorListDefinitionContext *>(_localctx)->enumeratorDeclaratorContext = enumeratorDeclarator();
        antlrcpp::downCast<EnumeratorListDefinitionContext *>(_localctx)->Enumerators.push_back(antlrcpp::downCast<EnumeratorListDefinitionContext *>(_localctx)->enumeratorDeclaratorContext); 
      }
      setState(401);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
    setState(403);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == azslParser::Comma) {
      setState(402);
      match(azslParser::Comma);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorDeclaratorContext ------------------------------------------------------------------

azslParser::EnumeratorDeclaratorContext::EnumeratorDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::EnumeratorDeclaratorContext::Identifier() {
  return getToken(azslParser::Identifier, 0);
}

tree::TerminalNode* azslParser::EnumeratorDeclaratorContext::Assign() {
  return getToken(azslParser::Assign, 0);
}

azslParser::ExpressionContext* azslParser::EnumeratorDeclaratorContext::expression() {
  return getRuleContext<azslParser::ExpressionContext>(0);
}


size_t azslParser::EnumeratorDeclaratorContext::getRuleIndex() const {
  return azslParser::RuleEnumeratorDeclarator;
}

void azslParser::EnumeratorDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumeratorDeclarator(this);
}

void azslParser::EnumeratorDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumeratorDeclarator(this);
}

azslParser::EnumeratorDeclaratorContext* azslParser::enumeratorDeclarator() {
  EnumeratorDeclaratorContext *_localctx = _tracker.createInstance<EnumeratorDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 36, azslParser::RuleEnumeratorDeclarator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(405);
    antlrcpp::downCast<EnumeratorDeclaratorContext *>(_localctx)->Name = match(azslParser::Identifier);
    setState(408);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == azslParser::Assign) {
      setState(406);
      match(azslParser::Assign);
      setState(407);
      antlrcpp::downCast<EnumeratorDeclaratorContext *>(_localctx)->Value = expression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnyStructuredTypeDefinitionContext ------------------------------------------------------------------

azslParser::AnyStructuredTypeDefinitionContext::AnyStructuredTypeDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::ClassDefinitionContext* azslParser::AnyStructuredTypeDefinitionContext::classDefinition() {
  return getRuleContext<azslParser::ClassDefinitionContext>(0);
}

azslParser::InterfaceDefinitionContext* azslParser::AnyStructuredTypeDefinitionContext::interfaceDefinition() {
  return getRuleContext<azslParser::InterfaceDefinitionContext>(0);
}

azslParser::StructDefinitionContext* azslParser::AnyStructuredTypeDefinitionContext::structDefinition() {
  return getRuleContext<azslParser::StructDefinitionContext>(0);
}

azslParser::EnumDefinitionContext* azslParser::AnyStructuredTypeDefinitionContext::enumDefinition() {
  return getRuleContext<azslParser::EnumDefinitionContext>(0);
}


size_t azslParser::AnyStructuredTypeDefinitionContext::getRuleIndex() const {
  return azslParser::RuleAnyStructuredTypeDefinition;
}

void azslParser::AnyStructuredTypeDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnyStructuredTypeDefinition(this);
}

void azslParser::AnyStructuredTypeDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnyStructuredTypeDefinition(this);
}

azslParser::AnyStructuredTypeDefinitionContext* azslParser::anyStructuredTypeDefinition() {
  AnyStructuredTypeDefinitionContext *_localctx = _tracker.createInstance<AnyStructuredTypeDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 38, azslParser::RuleAnyStructuredTypeDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(414);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case azslParser::Class: {
        enterOuterAlt(_localctx, 1);
        setState(410);
        classDefinition();
        break;
      }

      case azslParser::Interface: {
        enterOuterAlt(_localctx, 2);
        setState(411);
        interfaceDefinition();
        break;
      }

      case azslParser::Struct: {
        enterOuterAlt(_localctx, 3);
        setState(412);
        structDefinition();
        break;
      }

      case azslParser::Enum: {
        enterOuterAlt(_localctx, 4);
        setState(413);
        enumDefinition();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceDefinitionStatementContext ------------------------------------------------------------------

azslParser::InterfaceDefinitionStatementContext::InterfaceDefinitionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::InterfaceDefinitionContext* azslParser::InterfaceDefinitionStatementContext::interfaceDefinition() {
  return getRuleContext<azslParser::InterfaceDefinitionContext>(0);
}

tree::TerminalNode* azslParser::InterfaceDefinitionStatementContext::Semi() {
  return getToken(azslParser::Semi, 0);
}


size_t azslParser::InterfaceDefinitionStatementContext::getRuleIndex() const {
  return azslParser::RuleInterfaceDefinitionStatement;
}

void azslParser::InterfaceDefinitionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceDefinitionStatement(this);
}

void azslParser::InterfaceDefinitionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceDefinitionStatement(this);
}

azslParser::InterfaceDefinitionStatementContext* azslParser::interfaceDefinitionStatement() {
  InterfaceDefinitionStatementContext *_localctx = _tracker.createInstance<InterfaceDefinitionStatementContext>(_ctx, getState());
  enterRule(_localctx, 40, azslParser::RuleInterfaceDefinitionStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(416);
    interfaceDefinition();
    setState(417);
    match(azslParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceDefinitionContext ------------------------------------------------------------------

azslParser::InterfaceDefinitionContext::InterfaceDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::InterfaceDefinitionContext::Interface() {
  return getToken(azslParser::Interface, 0);
}

tree::TerminalNode* azslParser::InterfaceDefinitionContext::LeftBrace() {
  return getToken(azslParser::LeftBrace, 0);
}

tree::TerminalNode* azslParser::InterfaceDefinitionContext::RightBrace() {
  return getToken(azslParser::RightBrace, 0);
}

tree::TerminalNode* azslParser::InterfaceDefinitionContext::Identifier() {
  return getToken(azslParser::Identifier, 0);
}

std::vector<azslParser::InterfaceMemberDeclarationContext *> azslParser::InterfaceDefinitionContext::interfaceMemberDeclaration() {
  return getRuleContexts<azslParser::InterfaceMemberDeclarationContext>();
}

azslParser::InterfaceMemberDeclarationContext* azslParser::InterfaceDefinitionContext::interfaceMemberDeclaration(size_t i) {
  return getRuleContext<azslParser::InterfaceMemberDeclarationContext>(i);
}


size_t azslParser::InterfaceDefinitionContext::getRuleIndex() const {
  return azslParser::RuleInterfaceDefinition;
}

void azslParser::InterfaceDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceDefinition(this);
}

void azslParser::InterfaceDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceDefinition(this);
}

azslParser::InterfaceDefinitionContext* azslParser::interfaceDefinition() {
  InterfaceDefinitionContext *_localctx = _tracker.createInstance<InterfaceDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 42, azslParser::RuleInterfaceDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(419);
    match(azslParser::Interface);
    setState(420);
    antlrcpp::downCast<InterfaceDefinitionContext *>(_localctx)->Name = match(azslParser::Identifier);
    setState(421);
    match(azslParser::LeftBrace);
    setState(425);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << azslParser::AppendStructuredBuffer)
      | (1ULL << azslParser::Bool)
      | (1ULL << azslParser::Bool1)
      | (1ULL << azslParser::Bool2)
      | (1ULL << azslParser::Bool3)
      | (1ULL << azslParser::Bool4)
      | (1ULL << azslParser::Bool1x1)
      | (1ULL << azslParser::Bool1x2)
      | (1ULL << azslParser::Bool1x3)
      | (1ULL << azslParser::Bool1x4)
      | (1ULL << azslParser::Bool2x1)
      | (1ULL << azslParser::Bool2x2)
      | (1ULL << azslParser::Bool2x3)
      | (1ULL << azslParser::Bool2x4)
      | (1ULL << azslParser::Bool3x1)
      | (1ULL << azslParser::Bool3x2)
      | (1ULL << azslParser::Bool3x3)
      | (1ULL << azslParser::Bool3x4)
      | (1ULL << azslParser::Bool4x1)
      | (1ULL << azslParser::Bool4x2)
      | (1ULL << azslParser::Bool4x3)
      | (1ULL << azslParser::Bool4x4)
      | (1ULL << azslParser::Buffer)
      | (1ULL << azslParser::BuiltInTriangleIntersectionAttributes)
      | (1ULL << azslParser::ByteAddressBuffer)
      | (1ULL << azslParser::Centroid)
      | (1ULL << azslParser::ConstantBuffer)
      | (1ULL << azslParser::ConstantBufferCamel)
      | (1ULL << azslParser::Class)
      | (1ULL << azslParser::ColumnMajor)
      | (1ULL << azslParser::Const)
      | (1ULL << azslParser::ConsumeStructuredBuffer)
      | (1ULL << azslParser::Double)
      | (1ULL << azslParser::Double1)
      | (1ULL << azslParser::Double2)
      | (1ULL << azslParser::Double3)
      | (1ULL << azslParser::Double4)
      | (1ULL << azslParser::Double1x1)
      | (1ULL << azslParser::Double1x2)
      | (1ULL << azslParser::Double1x3)
      | (1ULL << azslParser::Double1x4)
      | (1ULL << azslParser::Double2x1)
      | (1ULL << azslParser::Double2x2)
      | (1ULL << azslParser::Double2x3)
      | (1ULL << azslParser::Double2x4)
      | (1ULL << azslParser::Double3x1)
      | (1ULL << azslParser::Double3x2)
      | (1ULL << azslParser::Double3x3)
      | (1ULL << azslParser::Double3x4)
      | (1ULL << azslParser::Double4x1)
      | (1ULL << azslParser::Double4x2)
      | (1ULL << azslParser::Double4x3)
      | (1ULL << azslParser::Double4x4)
      | (1ULL << azslParser::Enum))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (azslParser::Extern - 64))
      | (1ULL << (azslParser::Float - 64))
      | (1ULL << (azslParser::Float1 - 64))
      | (1ULL << (azslParser::Float2 - 64))
      | (1ULL << (azslParser::Float3 - 64))
      | (1ULL << (azslParser::Float4 - 64))
      | (1ULL << (azslParser::Float1x1 - 64))
      | (1ULL << (azslParser::Float1x2 - 64))
      | (1ULL << (azslParser::Float1x3 - 64))
      | (1ULL << (azslParser::Float1x4 - 64))
      | (1ULL << (azslParser::Float2x1 - 64))
      | (1ULL << (azslParser::Float2x2 - 64))
      | (1ULL << (azslParser::Float2x3 - 64))
      | (1ULL << (azslParser::Float2x4 - 64))
      | (1ULL << (azslParser::Float3x1 - 64))
      | (1ULL << (azslParser::Float3x2 - 64))
      | (1ULL << (azslParser::Float3x3 - 64))
      | (1ULL << (azslParser::Float3x4 - 64))
      | (1ULL << (azslParser::Float4x1 - 64))
      | (1ULL << (azslParser::Float4x2 - 64))
      | (1ULL << (azslParser::Float4x3 - 64))
      | (1ULL << (azslParser::Float4x4 - 64))
      | (1ULL << (azslParser::Groupshared - 64))
      | (1ULL << (azslParser::Globallycoherent - 64))
      | (1ULL << (azslParser::Half - 64))
      | (1ULL << (azslParser::Half1 - 64))
      | (1ULL << (azslParser::Half2 - 64))
      | (1ULL << (azslParser::Half3 - 64))
      | (1ULL << (azslParser::Half4 - 64))
      | (1ULL << (azslParser::Half1x1 - 64))
      | (1ULL << (azslParser::Half1x2 - 64))
      | (1ULL << (azslParser::Half1x3 - 64))
      | (1ULL << (azslParser::Half1x4 - 64))
      | (1ULL << (azslParser::Half2x1 - 64))
      | (1ULL << (azslParser::Half2x2 - 64))
      | (1ULL << (azslParser::Half2x3 - 64))
      | (1ULL << (azslParser::Half2x4 - 64))
      | (1ULL << (azslParser::Half3x1 - 64))
      | (1ULL << (azslParser::Half3x2 - 64))
      | (1ULL << (azslParser::Half3x3 - 64))
      | (1ULL << (azslParser::Half3x4 - 64))
      | (1ULL << (azslParser::Half4x1 - 64))
      | (1ULL << (azslParser::Half4x2 - 64))
      | (1ULL << (azslParser::Half4x3 - 64))
      | (1ULL << (azslParser::Half4x4 - 64))
      | (1ULL << (azslParser::In - 64))
      | (1ULL << (azslParser::Inline - 64))
      | (1ULL << (azslParser::Rootconstant - 64))
      | (1ULL << (azslParser::Inout - 64))
      | (1ULL << (azslParser::InputPatch - 64))
      | (1ULL << (azslParser::Int - 64))
      | (1ULL << (azslParser::Int16_t - 64))
      | (1ULL << (azslParser::Int32_t - 64))
      | (1ULL << (azslParser::Int64_t - 64))
      | (1ULL << (azslParser::Int1 - 64))
      | (1ULL << (azslParser::Int2 - 64))
      | (1ULL << (azslParser::Int3 - 64))
      | (1ULL << (azslParser::Int4 - 64))
      | (1ULL << (azslParser::Int1x1 - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (azslParser::Int1x2 - 128))
      | (1ULL << (azslParser::Int1x3 - 128))
      | (1ULL << (azslParser::Int1x4 - 128))
      | (1ULL << (azslParser::Int2x1 - 128))
      | (1ULL << (azslParser::Int2x2 - 128))
      | (1ULL << (azslParser::Int2x3 - 128))
      | (1ULL << (azslParser::Int2x4 - 128))
      | (1ULL << (azslParser::Int3x1 - 128))
      | (1ULL << (azslParser::Int3x2 - 128))
      | (1ULL << (azslParser::Int3x3 - 128))
      | (1ULL << (azslParser::Int3x4 - 128))
      | (1ULL << (azslParser::Int4x1 - 128))
      | (1ULL << (azslParser::Int4x2 - 128))
      | (1ULL << (azslParser::Int4x3 - 128))
      | (1ULL << (azslParser::Int4x4 - 128))
      | (1ULL << (azslParser::Interface - 128))
      | (1ULL << (azslParser::Line_ - 128))
      | (1ULL << (azslParser::LineAdj - 128))
      | (1ULL << (azslParser::Linear - 128))
      | (1ULL << (azslParser::LineStream - 128))
      | (1ULL << (azslParser::Matrix - 128))
      | (1ULL << (azslParser::Nointerpolation - 128))
      | (1ULL << (azslParser::Noperspective - 128))
      | (1ULL << (azslParser::Option - 128))
      | (1ULL << (azslParser::Out - 128))
      | (1ULL << (azslParser::OutputPatch - 128))
      | (1ULL << (azslParser::Point - 128))
      | (1ULL << (azslParser::PointStream - 128))
      | (1ULL << (azslParser::Precise - 128))
      | (1ULL << (azslParser::RasterizerOrderedBuffer - 128))
      | (1ULL << (azslParser::RasterizerOrderedByteAddressBuffer - 128))
      | (1ULL << (azslParser::RasterizerOrderedStructuredBuffer - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture1D - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture1DArray - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture2D - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture2DArray - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture3D - 128))
      | (1ULL << (azslParser::RayDesc - 128))
      | (1ULL << (azslParser::RaytracingAccelerationStructure - 128))
      | (1ULL << (azslParser::RowMajor - 128))
      | (1ULL << (azslParser::RWBuffer - 128))
      | (1ULL << (azslParser::RWByteAddressBuffer - 128))
      | (1ULL << (azslParser::RWStructuredBuffer - 128))
      | (1ULL << (azslParser::RWTexture1D - 128))
      | (1ULL << (azslParser::RWTexture1DArray - 128))
      | (1ULL << (azslParser::RWTexture2D - 128))
      | (1ULL << (azslParser::RWTexture2DArray - 128))
      | (1ULL << (azslParser::RWTexture3D - 128))
      | (1ULL << (azslParser::Sample - 128))
      | (1ULL << (azslParser::Sampler - 128))
      | (1ULL << (azslParser::SamplerCapitalS - 128))
      | (1ULL << (azslParser::SamplerComparisonState - 128))
      | (1ULL << (azslParser::SamplerStateCamel - 128))
      | (1ULL << (azslParser::SamplerState - 128))
      | (1ULL << (azslParser::Shared - 128))
      | (1ULL << (azslParser::SNorm - 128))
      | (1ULL << (azslParser::Static - 128))
      | (1ULL << (azslParser::Struct - 128)))) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 192)) & ((1ULL << (azslParser::StructuredBuffer - 192))
      | (1ULL << (azslParser::SubpassInput - 192))
      | (1ULL << (azslParser::SubpassInputMS - 192))
      | (1ULL << (azslParser::Texture1D - 192))
      | (1ULL << (azslParser::Texture1DArray - 192))
      | (1ULL << (azslParser::Texture2D - 192))
      | (1ULL << (azslParser::Texture2DArray - 192))
      | (1ULL << (azslParser::Texture2DMS - 192))
      | (1ULL << (azslParser::Texture2DMSArray - 192))
      | (1ULL << (azslParser::Texture3D - 192))
      | (1ULL << (azslParser::TextureCube - 192))
      | (1ULL << (azslParser::TextureCubeArray - 192))
      | (1ULL << (azslParser::Triangle - 192))
      | (1ULL << (azslParser::TriangleAdj - 192))
      | (1ULL << (azslParser::TriangleStream - 192))
      | (1ULL << (azslParser::Uniform - 192))
      | (1ULL << (azslParser::Uint - 192))
      | (1ULL << (azslParser::Uint1 - 192))
      | (1ULL << (azslParser::Uint2 - 192))
      | (1ULL << (azslParser::Uint3 - 192))
      | (1ULL << (azslParser::Uint4 - 192))
      | (1ULL << (azslParser::Uint1x1 - 192))
      | (1ULL << (azslParser::Uint1x2 - 192))
      | (1ULL << (azslParser::Uint1x3 - 192))
      | (1ULL << (azslParser::Uint1x4 - 192))
      | (1ULL << (azslParser::Uint2x1 - 192))
      | (1ULL << (azslParser::Uint2x2 - 192))
      | (1ULL << (azslParser::Uint2x3 - 192))
      | (1ULL << (azslParser::Uint2x4 - 192))
      | (1ULL << (azslParser::Uint3x1 - 192))
      | (1ULL << (azslParser::Uint3x2 - 192))
      | (1ULL << (azslParser::Uint3x3 - 192))
      | (1ULL << (azslParser::Uint3x4 - 192))
      | (1ULL << (azslParser::Uint4x1 - 192))
      | (1ULL << (azslParser::Uint4x2 - 192))
      | (1ULL << (azslParser::Uint4x3 - 192))
      | (1ULL << (azslParser::Uint4x4 - 192))
      | (1ULL << (azslParser::Uint16_t - 192))
      | (1ULL << (azslParser::Uint32_t - 192))
      | (1ULL << (azslParser::Uint64_t - 192))
      | (1ULL << (azslParser::UNorm - 192))
      | (1ULL << (azslParser::Unsigned - 192))
      | (1ULL << (azslParser::Dword - 192))
      | (1ULL << (azslParser::Dword1 - 192))
      | (1ULL << (azslParser::Dword2 - 192))
      | (1ULL << (azslParser::Dword3 - 192))
      | (1ULL << (azslParser::Dword4 - 192))
      | (1ULL << (azslParser::Dword1x1 - 192))
      | (1ULL << (azslParser::Dword1x2 - 192))
      | (1ULL << (azslParser::Dword1x3 - 192))
      | (1ULL << (azslParser::Dword1x4 - 192))
      | (1ULL << (azslParser::Dword2x1 - 192))
      | (1ULL << (azslParser::Dword2x2 - 192))
      | (1ULL << (azslParser::Dword2x3 - 192))
      | (1ULL << (azslParser::Dword2x4 - 192))
      | (1ULL << (azslParser::Dword3x1 - 192))
      | (1ULL << (azslParser::Dword3x2 - 192))
      | (1ULL << (azslParser::Dword3x3 - 192))
      | (1ULL << (azslParser::Dword3x4 - 192))
      | (1ULL << (azslParser::Dword4x1 - 192))
      | (1ULL << (azslParser::Dword4x2 - 192))
      | (1ULL << (azslParser::Dword4x3 - 192)))) != 0) || ((((_la - 256) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 256)) & ((1ULL << (azslParser::Dword4x4 - 256))
      | (1ULL << (azslParser::Vector - 256))
      | (1ULL << (azslParser::Volatile - 256))
      | (1ULL << (azslParser::Void - 256))
      | (1ULL << (azslParser::StateObjectConfig - 256))
      | (1ULL << (azslParser::LocalRootSignature - 256))
      | (1ULL << (azslParser::GlobalRootSignature - 256))
      | (1ULL << (azslParser::SubobjectToExportsAssociation - 256))
      | (1ULL << (azslParser::RaytracingShaderConfig - 256))
      | (1ULL << (azslParser::RaytracingPipelineConfig - 256))
      | (1ULL << (azslParser::RaytracingPipelineConfig1 - 256))
      | (1ULL << (azslParser::TriangleHitGroup - 256))
      | (1ULL << (azslParser::ProceduralPrimitiveHitGroup - 256))
      | (1ULL << (azslParser::LeftBracket - 256))
      | (1ULL << (azslParser::LeftDoubleBracket - 256)))) != 0) || ((((_la - 334) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 334)) & ((1ULL << (azslParser::ColonColon - 334))
      | (1ULL << (azslParser::KW_AssociatedType - 334))
      | (1ULL << (azslParser::KW_Typeof - 334))
      | (1ULL << (azslParser::Identifier - 334)))) != 0)) {
      setState(422);
      interfaceMemberDeclaration();
      setState(427);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(428);
    match(azslParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceMemberDeclarationContext ------------------------------------------------------------------

azslParser::InterfaceMemberDeclarationContext::InterfaceMemberDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::AttributedFunctionDeclarationContext* azslParser::InterfaceMemberDeclarationContext::attributedFunctionDeclaration() {
  return getRuleContext<azslParser::AttributedFunctionDeclarationContext>(0);
}

azslParser::AssociatedTypeDeclarationContext* azslParser::InterfaceMemberDeclarationContext::associatedTypeDeclaration() {
  return getRuleContext<azslParser::AssociatedTypeDeclarationContext>(0);
}

azslParser::AnyStructuredTypeDefinitionStatementContext* azslParser::InterfaceMemberDeclarationContext::anyStructuredTypeDefinitionStatement() {
  return getRuleContext<azslParser::AnyStructuredTypeDefinitionStatementContext>(0);
}


size_t azslParser::InterfaceMemberDeclarationContext::getRuleIndex() const {
  return azslParser::RuleInterfaceMemberDeclaration;
}

void azslParser::InterfaceMemberDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceMemberDeclaration(this);
}

void azslParser::InterfaceMemberDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceMemberDeclaration(this);
}

azslParser::InterfaceMemberDeclarationContext* azslParser::interfaceMemberDeclaration() {
  InterfaceMemberDeclarationContext *_localctx = _tracker.createInstance<InterfaceMemberDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 44, azslParser::RuleInterfaceMemberDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(433);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(430);
      attributedFunctionDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(431);
      associatedTypeDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(432);
      anyStructuredTypeDefinitionStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantBufferTemplatedContext ------------------------------------------------------------------

azslParser::ConstantBufferTemplatedContext::ConstantBufferTemplatedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::ConstantBufferTemplatedContext::Less() {
  return getToken(azslParser::Less, 0);
}

tree::TerminalNode* azslParser::ConstantBufferTemplatedContext::Greater() {
  return getToken(azslParser::Greater, 0);
}

azslParser::TypeContext* azslParser::ConstantBufferTemplatedContext::type() {
  return getRuleContext<azslParser::TypeContext>(0);
}

tree::TerminalNode* azslParser::ConstantBufferTemplatedContext::ConstantBuffer() {
  return getToken(azslParser::ConstantBuffer, 0);
}

tree::TerminalNode* azslParser::ConstantBufferTemplatedContext::ConstantBufferCamel() {
  return getToken(azslParser::ConstantBufferCamel, 0);
}


size_t azslParser::ConstantBufferTemplatedContext::getRuleIndex() const {
  return azslParser::RuleConstantBufferTemplated;
}

void azslParser::ConstantBufferTemplatedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantBufferTemplated(this);
}

void azslParser::ConstantBufferTemplatedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantBufferTemplated(this);
}

azslParser::ConstantBufferTemplatedContext* azslParser::constantBufferTemplated() {
  ConstantBufferTemplatedContext *_localctx = _tracker.createInstance<ConstantBufferTemplatedContext>(_ctx, getState());
  enterRule(_localctx, 46, azslParser::RuleConstantBufferTemplated);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(435);
    antlrcpp::downCast<ConstantBufferTemplatedContext *>(_localctx)->CBCoreType = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == azslParser::ConstantBuffer

    || _la == azslParser::ConstantBufferCamel)) {
      antlrcpp::downCast<ConstantBufferTemplatedContext *>(_localctx)->CBCoreType = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(436);
    match(azslParser::Less);
    setState(437);
    antlrcpp::downCast<ConstantBufferTemplatedContext *>(_localctx)->GenericTypeName = type();
    setState(438);
    match(azslParser::Greater);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationStatementContext ------------------------------------------------------------------

azslParser::VariableDeclarationStatementContext::VariableDeclarationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::VariableDeclarationContext* azslParser::VariableDeclarationStatementContext::variableDeclaration() {
  return getRuleContext<azslParser::VariableDeclarationContext>(0);
}

tree::TerminalNode* azslParser::VariableDeclarationStatementContext::Semi() {
  return getToken(azslParser::Semi, 0);
}


size_t azslParser::VariableDeclarationStatementContext::getRuleIndex() const {
  return azslParser::RuleVariableDeclarationStatement;
}

void azslParser::VariableDeclarationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclarationStatement(this);
}

void azslParser::VariableDeclarationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclarationStatement(this);
}

azslParser::VariableDeclarationStatementContext* azslParser::variableDeclarationStatement() {
  VariableDeclarationStatementContext *_localctx = _tracker.createInstance<VariableDeclarationStatementContext>(_ctx, getState());
  enterRule(_localctx, 48, azslParser::RuleVariableDeclarationStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(440);
    variableDeclaration();
    setState(441);
    match(azslParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionParamsContext ------------------------------------------------------------------

azslParser::FunctionParamsContext::FunctionParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::FunctionParamsContext::Void() {
  return getToken(azslParser::Void, 0);
}

std::vector<azslParser::FunctionParamContext *> azslParser::FunctionParamsContext::functionParam() {
  return getRuleContexts<azslParser::FunctionParamContext>();
}

azslParser::FunctionParamContext* azslParser::FunctionParamsContext::functionParam(size_t i) {
  return getRuleContext<azslParser::FunctionParamContext>(i);
}

std::vector<tree::TerminalNode *> azslParser::FunctionParamsContext::Comma() {
  return getTokens(azslParser::Comma);
}

tree::TerminalNode* azslParser::FunctionParamsContext::Comma(size_t i) {
  return getToken(azslParser::Comma, i);
}


size_t azslParser::FunctionParamsContext::getRuleIndex() const {
  return azslParser::RuleFunctionParams;
}

void azslParser::FunctionParamsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionParams(this);
}

void azslParser::FunctionParamsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionParams(this);
}

azslParser::FunctionParamsContext* azslParser::functionParams() {
  FunctionParamsContext *_localctx = _tracker.createInstance<FunctionParamsContext>(_ctx, getState());
  enterRule(_localctx, 50, azslParser::RuleFunctionParams);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(452);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(443);
      match(azslParser::Void);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(444);
      functionParam();
      setState(449);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == azslParser::Comma) {
        setState(445);
        match(azslParser::Comma);
        setState(446);
        functionParam();
        setState(451);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionParamContext ------------------------------------------------------------------

azslParser::FunctionParamContext::FunctionParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::TypeContext* azslParser::FunctionParamContext::type() {
  return getRuleContext<azslParser::TypeContext>(0);
}

azslParser::UnnamedVariableDeclaratorContext* azslParser::FunctionParamContext::unnamedVariableDeclarator() {
  return getRuleContext<azslParser::UnnamedVariableDeclaratorContext>(0);
}

std::vector<azslParser::AttributeSpecifierAnyContext *> azslParser::FunctionParamContext::attributeSpecifierAny() {
  return getRuleContexts<azslParser::AttributeSpecifierAnyContext>();
}

azslParser::AttributeSpecifierAnyContext* azslParser::FunctionParamContext::attributeSpecifierAny(size_t i) {
  return getRuleContext<azslParser::AttributeSpecifierAnyContext>(i);
}

tree::TerminalNode* azslParser::FunctionParamContext::Identifier() {
  return getToken(azslParser::Identifier, 0);
}


size_t azslParser::FunctionParamContext::getRuleIndex() const {
  return azslParser::RuleFunctionParam;
}

void azslParser::FunctionParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionParam(this);
}

void azslParser::FunctionParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionParam(this);
}

azslParser::FunctionParamContext* azslParser::functionParam() {
  FunctionParamContext *_localctx = _tracker.createInstance<FunctionParamContext>(_ctx, getState());
  enterRule(_localctx, 52, azslParser::RuleFunctionParam);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(457);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == azslParser::LeftBracket

    || _la == azslParser::LeftDoubleBracket) {
      setState(454);
      attributeSpecifierAny();
      setState(459);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(460);
    type();
    setState(462);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == azslParser::Identifier) {
      setState(461);
      antlrcpp::downCast<FunctionParamContext *>(_localctx)->Name = match(azslParser::Identifier);
    }
    setState(464);
    unnamedVariableDeclarator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HlslSemanticContext ------------------------------------------------------------------

azslParser::HlslSemanticContext::HlslSemanticContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::HlslSemanticContext::Colon() {
  return getToken(azslParser::Colon, 0);
}

azslParser::HlslSemanticNameContext* azslParser::HlslSemanticContext::hlslSemanticName() {
  return getRuleContext<azslParser::HlslSemanticNameContext>(0);
}


size_t azslParser::HlslSemanticContext::getRuleIndex() const {
  return azslParser::RuleHlslSemantic;
}

void azslParser::HlslSemanticContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHlslSemantic(this);
}

void azslParser::HlslSemanticContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHlslSemantic(this);
}

azslParser::HlslSemanticContext* azslParser::hlslSemantic() {
  HlslSemanticContext *_localctx = _tracker.createInstance<HlslSemanticContext>(_ctx, getState());
  enterRule(_localctx, 54, azslParser::RuleHlslSemantic);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(466);
    match(azslParser::Colon);
    setState(467);
    antlrcpp::downCast<HlslSemanticContext *>(_localctx)->Name = hlslSemanticName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HlslSemanticNameContext ------------------------------------------------------------------

azslParser::HlslSemanticNameContext::HlslSemanticNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::HlslSemanticNameContext::HLSLSemanticStream() {
  return getToken(azslParser::HLSLSemanticStream, 0);
}

tree::TerminalNode* azslParser::HlslSemanticNameContext::HLSLSemanticSystem() {
  return getToken(azslParser::HLSLSemanticSystem, 0);
}

tree::TerminalNode* azslParser::HlslSemanticNameContext::Identifier() {
  return getToken(azslParser::Identifier, 0);
}


size_t azslParser::HlslSemanticNameContext::getRuleIndex() const {
  return azslParser::RuleHlslSemanticName;
}

void azslParser::HlslSemanticNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHlslSemanticName(this);
}

void azslParser::HlslSemanticNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHlslSemanticName(this);
}

azslParser::HlslSemanticNameContext* azslParser::hlslSemanticName() {
  HlslSemanticNameContext *_localctx = _tracker.createInstance<HlslSemanticNameContext>(_ctx, getState());
  enterRule(_localctx, 56, azslParser::RuleHlslSemanticName);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(469);
    _la = _input->LA(1);
    if (!(((((_la - 367) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 367)) & ((1ULL << (azslParser::HLSLSemanticStream - 367))
      | (1ULL << (azslParser::HLSLSemanticSystem - 367))
      | (1ULL << (azslParser::Identifier - 367)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeArgumentsContext ------------------------------------------------------------------

azslParser::AttributeArgumentsContext::AttributeArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<azslParser::LiteralContext *> azslParser::AttributeArgumentsContext::literal() {
  return getRuleContexts<azslParser::LiteralContext>();
}

azslParser::LiteralContext* azslParser::AttributeArgumentsContext::literal(size_t i) {
  return getRuleContext<azslParser::LiteralContext>(i);
}

std::vector<tree::TerminalNode *> azslParser::AttributeArgumentsContext::Comma() {
  return getTokens(azslParser::Comma);
}

tree::TerminalNode* azslParser::AttributeArgumentsContext::Comma(size_t i) {
  return getToken(azslParser::Comma, i);
}


size_t azslParser::AttributeArgumentsContext::getRuleIndex() const {
  return azslParser::RuleAttributeArguments;
}

void azslParser::AttributeArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeArguments(this);
}

void azslParser::AttributeArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeArguments(this);
}

azslParser::AttributeArgumentsContext* azslParser::attributeArguments() {
  AttributeArgumentsContext *_localctx = _tracker.createInstance<AttributeArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 58, azslParser::RuleAttributeArguments);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(471);
    literal();
    setState(476);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == azslParser::Comma) {
      setState(472);
      match(azslParser::Comma);
      setState(473);
      literal();
      setState(478);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeArgumentListContext ------------------------------------------------------------------

azslParser::AttributeArgumentListContext::AttributeArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::AttributeArgumentListContext::LeftParen() {
  return getToken(azslParser::LeftParen, 0);
}

azslParser::AttributeArgumentsContext* azslParser::AttributeArgumentListContext::attributeArguments() {
  return getRuleContext<azslParser::AttributeArgumentsContext>(0);
}

tree::TerminalNode* azslParser::AttributeArgumentListContext::RightParen() {
  return getToken(azslParser::RightParen, 0);
}


size_t azslParser::AttributeArgumentListContext::getRuleIndex() const {
  return azslParser::RuleAttributeArgumentList;
}

void azslParser::AttributeArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeArgumentList(this);
}

void azslParser::AttributeArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeArgumentList(this);
}

azslParser::AttributeArgumentListContext* azslParser::attributeArgumentList() {
  AttributeArgumentListContext *_localctx = _tracker.createInstance<AttributeArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 60, azslParser::RuleAttributeArgumentList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(479);
    match(azslParser::LeftParen);
    setState(480);
    attributeArguments();
    setState(481);
    match(azslParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeContext ------------------------------------------------------------------

azslParser::AttributeContext::AttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t azslParser::AttributeContext::getRuleIndex() const {
  return azslParser::RuleAttribute;
}

void azslParser::AttributeContext::copyFrom(AttributeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- GlobalAttributeContext ------------------------------------------------------------------

tree::TerminalNode* azslParser::GlobalAttributeContext::Global() {
  return getToken(azslParser::Global, 0);
}

std::vector<tree::TerminalNode *> azslParser::GlobalAttributeContext::ColonColon() {
  return getTokens(azslParser::ColonColon);
}

tree::TerminalNode* azslParser::GlobalAttributeContext::ColonColon(size_t i) {
  return getToken(azslParser::ColonColon, i);
}

std::vector<tree::TerminalNode *> azslParser::GlobalAttributeContext::Identifier() {
  return getTokens(azslParser::Identifier);
}

tree::TerminalNode* azslParser::GlobalAttributeContext::Identifier(size_t i) {
  return getToken(azslParser::Identifier, i);
}

azslParser::AttributeArgumentListContext* azslParser::GlobalAttributeContext::attributeArgumentList() {
  return getRuleContext<azslParser::AttributeArgumentListContext>(0);
}

azslParser::GlobalAttributeContext::GlobalAttributeContext(AttributeContext *ctx) { copyFrom(ctx); }

void azslParser::GlobalAttributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobalAttribute(this);
}
void azslParser::GlobalAttributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobalAttribute(this);
}
//----------------- AttachedAttributeContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> azslParser::AttachedAttributeContext::Identifier() {
  return getTokens(azslParser::Identifier);
}

tree::TerminalNode* azslParser::AttachedAttributeContext::Identifier(size_t i) {
  return getToken(azslParser::Identifier, i);
}

tree::TerminalNode* azslParser::AttachedAttributeContext::ColonColon() {
  return getToken(azslParser::ColonColon, 0);
}

azslParser::AttributeArgumentListContext* azslParser::AttachedAttributeContext::attributeArgumentList() {
  return getRuleContext<azslParser::AttributeArgumentListContext>(0);
}

azslParser::AttachedAttributeContext::AttachedAttributeContext(AttributeContext *ctx) { copyFrom(ctx); }

void azslParser::AttachedAttributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttachedAttribute(this);
}
void azslParser::AttachedAttributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttachedAttribute(this);
}
azslParser::AttributeContext* azslParser::attribute() {
  AttributeContext *_localctx = _tracker.createInstance<AttributeContext>(_ctx, getState());
  enterRule(_localctx, 62, azslParser::RuleAttribute);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(501);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case azslParser::Global: {
        _localctx = _tracker.createInstance<azslParser::GlobalAttributeContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(483);
        match(azslParser::Global);
        setState(484);
        match(azslParser::ColonColon);
        setState(487);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
        case 1: {
          setState(485);
          antlrcpp::downCast<GlobalAttributeContext *>(_localctx)->Namespace = match(azslParser::Identifier);
          setState(486);
          match(azslParser::ColonColon);
          break;
        }

        default:
          break;
        }
        setState(489);
        antlrcpp::downCast<GlobalAttributeContext *>(_localctx)->Name = match(azslParser::Identifier);
        setState(491);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == azslParser::LeftParen) {
          setState(490);
          attributeArgumentList();
        }
        break;
      }

      case azslParser::Identifier: {
        _localctx = _tracker.createInstance<azslParser::AttachedAttributeContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(495);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
        case 1: {
          setState(493);
          antlrcpp::downCast<AttachedAttributeContext *>(_localctx)->Namespace = match(azslParser::Identifier);
          setState(494);
          match(azslParser::ColonColon);
          break;
        }

        default:
          break;
        }
        setState(497);
        antlrcpp::downCast<AttachedAttributeContext *>(_localctx)->Name = match(azslParser::Identifier);
        setState(499);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == azslParser::LeftParen) {
          setState(498);
          attributeArgumentList();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeSpecifierContext ------------------------------------------------------------------

azslParser::AttributeSpecifierContext::AttributeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::AttributeSpecifierContext::LeftBracket() {
  return getToken(azslParser::LeftBracket, 0);
}

azslParser::AttributeContext* azslParser::AttributeSpecifierContext::attribute() {
  return getRuleContext<azslParser::AttributeContext>(0);
}

tree::TerminalNode* azslParser::AttributeSpecifierContext::RightBracket() {
  return getToken(azslParser::RightBracket, 0);
}


size_t azslParser::AttributeSpecifierContext::getRuleIndex() const {
  return azslParser::RuleAttributeSpecifier;
}

void azslParser::AttributeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeSpecifier(this);
}

void azslParser::AttributeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeSpecifier(this);
}

azslParser::AttributeSpecifierContext* azslParser::attributeSpecifier() {
  AttributeSpecifierContext *_localctx = _tracker.createInstance<AttributeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 64, azslParser::RuleAttributeSpecifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(503);
    match(azslParser::LeftBracket);
    setState(504);
    attribute();
    setState(505);
    match(azslParser::RightBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeSpecifierSequenceContext ------------------------------------------------------------------

azslParser::AttributeSpecifierSequenceContext::AttributeSpecifierSequenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::AttributeSpecifierSequenceContext::LeftDoubleBracket() {
  return getToken(azslParser::LeftDoubleBracket, 0);
}

std::vector<tree::TerminalNode *> azslParser::AttributeSpecifierSequenceContext::RightBracket() {
  return getTokens(azslParser::RightBracket);
}

tree::TerminalNode* azslParser::AttributeSpecifierSequenceContext::RightBracket(size_t i) {
  return getToken(azslParser::RightBracket, i);
}

std::vector<azslParser::AttributeContext *> azslParser::AttributeSpecifierSequenceContext::attribute() {
  return getRuleContexts<azslParser::AttributeContext>();
}

azslParser::AttributeContext* azslParser::AttributeSpecifierSequenceContext::attribute(size_t i) {
  return getRuleContext<azslParser::AttributeContext>(i);
}

std::vector<tree::TerminalNode *> azslParser::AttributeSpecifierSequenceContext::Comma() {
  return getTokens(azslParser::Comma);
}

tree::TerminalNode* azslParser::AttributeSpecifierSequenceContext::Comma(size_t i) {
  return getToken(azslParser::Comma, i);
}


size_t azslParser::AttributeSpecifierSequenceContext::getRuleIndex() const {
  return azslParser::RuleAttributeSpecifierSequence;
}

void azslParser::AttributeSpecifierSequenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeSpecifierSequence(this);
}

void azslParser::AttributeSpecifierSequenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeSpecifierSequence(this);
}

azslParser::AttributeSpecifierSequenceContext* azslParser::attributeSpecifierSequence() {
  AttributeSpecifierSequenceContext *_localctx = _tracker.createInstance<AttributeSpecifierSequenceContext>(_ctx, getState());
  enterRule(_localctx, 66, azslParser::RuleAttributeSpecifierSequence);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(507);
    match(azslParser::LeftDoubleBracket);
    setState(508);
    antlrcpp::downCast<AttributeSpecifierSequenceContext *>(_localctx)->attributeContext = attribute();
    antlrcpp::downCast<AttributeSpecifierSequenceContext *>(_localctx)->Attributes.push_back(antlrcpp::downCast<AttributeSpecifierSequenceContext *>(_localctx)->attributeContext);
    setState(513);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == azslParser::Comma) {
      setState(509);
      match(azslParser::Comma);
      setState(510);
      antlrcpp::downCast<AttributeSpecifierSequenceContext *>(_localctx)->attributeContext = attribute();
      antlrcpp::downCast<AttributeSpecifierSequenceContext *>(_localctx)->Attributes.push_back(antlrcpp::downCast<AttributeSpecifierSequenceContext *>(_localctx)->attributeContext);
      setState(515);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(516);
    match(azslParser::RightBracket);
    setState(517);
    match(azslParser::RightBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeSpecifierAnyContext ------------------------------------------------------------------

azslParser::AttributeSpecifierAnyContext::AttributeSpecifierAnyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::AttributeSpecifierContext* azslParser::AttributeSpecifierAnyContext::attributeSpecifier() {
  return getRuleContext<azslParser::AttributeSpecifierContext>(0);
}

azslParser::AttributeSpecifierSequenceContext* azslParser::AttributeSpecifierAnyContext::attributeSpecifierSequence() {
  return getRuleContext<azslParser::AttributeSpecifierSequenceContext>(0);
}


size_t azslParser::AttributeSpecifierAnyContext::getRuleIndex() const {
  return azslParser::RuleAttributeSpecifierAny;
}

void azslParser::AttributeSpecifierAnyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeSpecifierAny(this);
}

void azslParser::AttributeSpecifierAnyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeSpecifierAny(this);
}

azslParser::AttributeSpecifierAnyContext* azslParser::attributeSpecifierAny() {
  AttributeSpecifierAnyContext *_localctx = _tracker.createInstance<AttributeSpecifierAnyContext>(_ctx, getState());
  enterRule(_localctx, 68, azslParser::RuleAttributeSpecifierAny);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(521);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case azslParser::LeftBracket: {
        enterOuterAlt(_localctx, 1);
        setState(519);
        attributeSpecifier();
        break;
      }

      case azslParser::LeftDoubleBracket: {
        enterOuterAlt(_localctx, 2);
        setState(520);
        attributeSpecifierSequence();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

azslParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::BlockContext::LeftBrace() {
  return getToken(azslParser::LeftBrace, 0);
}

tree::TerminalNode* azslParser::BlockContext::RightBrace() {
  return getToken(azslParser::RightBrace, 0);
}

std::vector<azslParser::StatementContext *> azslParser::BlockContext::statement() {
  return getRuleContexts<azslParser::StatementContext>();
}

azslParser::StatementContext* azslParser::BlockContext::statement(size_t i) {
  return getRuleContext<azslParser::StatementContext>(i);
}


size_t azslParser::BlockContext::getRuleIndex() const {
  return azslParser::RuleBlock;
}

void azslParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void azslParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

azslParser::BlockContext* azslParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 70, azslParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(523);
    match(azslParser::LeftBrace);
    setState(527);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << azslParser::AppendStructuredBuffer)
      | (1ULL << azslParser::Bool)
      | (1ULL << azslParser::Bool1)
      | (1ULL << azslParser::Bool2)
      | (1ULL << azslParser::Bool3)
      | (1ULL << azslParser::Bool4)
      | (1ULL << azslParser::Bool1x1)
      | (1ULL << azslParser::Bool1x2)
      | (1ULL << azslParser::Bool1x3)
      | (1ULL << azslParser::Bool1x4)
      | (1ULL << azslParser::Bool2x1)
      | (1ULL << azslParser::Bool2x2)
      | (1ULL << azslParser::Bool2x3)
      | (1ULL << azslParser::Bool2x4)
      | (1ULL << azslParser::Bool3x1)
      | (1ULL << azslParser::Bool3x2)
      | (1ULL << azslParser::Bool3x3)
      | (1ULL << azslParser::Bool3x4)
      | (1ULL << azslParser::Bool4x1)
      | (1ULL << azslParser::Bool4x2)
      | (1ULL << azslParser::Bool4x3)
      | (1ULL << azslParser::Bool4x4)
      | (1ULL << azslParser::Buffer)
      | (1ULL << azslParser::BuiltInTriangleIntersectionAttributes)
      | (1ULL << azslParser::ByteAddressBuffer)
      | (1ULL << azslParser::Break)
      | (1ULL << azslParser::Centroid)
      | (1ULL << azslParser::ConstantBuffer)
      | (1ULL << azslParser::ConstantBufferCamel)
      | (1ULL << azslParser::Class)
      | (1ULL << azslParser::ColumnMajor)
      | (1ULL << azslParser::Const)
      | (1ULL << azslParser::ConsumeStructuredBuffer)
      | (1ULL << azslParser::Continue)
      | (1ULL << azslParser::Discard)
      | (1ULL << azslParser::Do)
      | (1ULL << azslParser::Double)
      | (1ULL << azslParser::Double1)
      | (1ULL << azslParser::Double2)
      | (1ULL << azslParser::Double3)
      | (1ULL << azslParser::Double4)
      | (1ULL << azslParser::Double1x1)
      | (1ULL << azslParser::Double1x2)
      | (1ULL << azslParser::Double1x3)
      | (1ULL << azslParser::Double1x4)
      | (1ULL << azslParser::Double2x1)
      | (1ULL << azslParser::Double2x2)
      | (1ULL << azslParser::Double2x3)
      | (1ULL << azslParser::Double2x4)
      | (1ULL << azslParser::Double3x1)
      | (1ULL << azslParser::Double3x2)
      | (1ULL << azslParser::Double3x3)
      | (1ULL << azslParser::Double3x4)
      | (1ULL << azslParser::Double4x1)
      | (1ULL << azslParser::Double4x2)
      | (1ULL << azslParser::Double4x3)
      | (1ULL << azslParser::Double4x4)
      | (1ULL << azslParser::Enum))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (azslParser::Extern - 64))
      | (1ULL << (azslParser::Float - 64))
      | (1ULL << (azslParser::Float1 - 64))
      | (1ULL << (azslParser::Float2 - 64))
      | (1ULL << (azslParser::Float3 - 64))
      | (1ULL << (azslParser::Float4 - 64))
      | (1ULL << (azslParser::Float1x1 - 64))
      | (1ULL << (azslParser::Float1x2 - 64))
      | (1ULL << (azslParser::Float1x3 - 64))
      | (1ULL << (azslParser::Float1x4 - 64))
      | (1ULL << (azslParser::Float2x1 - 64))
      | (1ULL << (azslParser::Float2x2 - 64))
      | (1ULL << (azslParser::Float2x3 - 64))
      | (1ULL << (azslParser::Float2x4 - 64))
      | (1ULL << (azslParser::Float3x1 - 64))
      | (1ULL << (azslParser::Float3x2 - 64))
      | (1ULL << (azslParser::Float3x3 - 64))
      | (1ULL << (azslParser::Float3x4 - 64))
      | (1ULL << (azslParser::Float4x1 - 64))
      | (1ULL << (azslParser::Float4x2 - 64))
      | (1ULL << (azslParser::Float4x3 - 64))
      | (1ULL << (azslParser::Float4x4 - 64))
      | (1ULL << (azslParser::For - 64))
      | (1ULL << (azslParser::Groupshared - 64))
      | (1ULL << (azslParser::Globallycoherent - 64))
      | (1ULL << (azslParser::Half - 64))
      | (1ULL << (azslParser::Half1 - 64))
      | (1ULL << (azslParser::Half2 - 64))
      | (1ULL << (azslParser::Half3 - 64))
      | (1ULL << (azslParser::Half4 - 64))
      | (1ULL << (azslParser::Half1x1 - 64))
      | (1ULL << (azslParser::Half1x2 - 64))
      | (1ULL << (azslParser::Half1x3 - 64))
      | (1ULL << (azslParser::Half1x4 - 64))
      | (1ULL << (azslParser::Half2x1 - 64))
      | (1ULL << (azslParser::Half2x2 - 64))
      | (1ULL << (azslParser::Half2x3 - 64))
      | (1ULL << (azslParser::Half2x4 - 64))
      | (1ULL << (azslParser::Half3x1 - 64))
      | (1ULL << (azslParser::Half3x2 - 64))
      | (1ULL << (azslParser::Half3x3 - 64))
      | (1ULL << (azslParser::Half3x4 - 64))
      | (1ULL << (azslParser::Half4x1 - 64))
      | (1ULL << (azslParser::Half4x2 - 64))
      | (1ULL << (azslParser::Half4x3 - 64))
      | (1ULL << (azslParser::Half4x4 - 64))
      | (1ULL << (azslParser::If - 64))
      | (1ULL << (azslParser::In - 64))
      | (1ULL << (azslParser::Inline - 64))
      | (1ULL << (azslParser::Rootconstant - 64))
      | (1ULL << (azslParser::Inout - 64))
      | (1ULL << (azslParser::InputPatch - 64))
      | (1ULL << (azslParser::Int - 64))
      | (1ULL << (azslParser::Int16_t - 64))
      | (1ULL << (azslParser::Int32_t - 64))
      | (1ULL << (azslParser::Int64_t - 64))
      | (1ULL << (azslParser::Int1 - 64))
      | (1ULL << (azslParser::Int2 - 64))
      | (1ULL << (azslParser::Int3 - 64))
      | (1ULL << (azslParser::Int4 - 64))
      | (1ULL << (azslParser::Int1x1 - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (azslParser::Int1x2 - 128))
      | (1ULL << (azslParser::Int1x3 - 128))
      | (1ULL << (azslParser::Int1x4 - 128))
      | (1ULL << (azslParser::Int2x1 - 128))
      | (1ULL << (azslParser::Int2x2 - 128))
      | (1ULL << (azslParser::Int2x3 - 128))
      | (1ULL << (azslParser::Int2x4 - 128))
      | (1ULL << (azslParser::Int3x1 - 128))
      | (1ULL << (azslParser::Int3x2 - 128))
      | (1ULL << (azslParser::Int3x3 - 128))
      | (1ULL << (azslParser::Int3x4 - 128))
      | (1ULL << (azslParser::Int4x1 - 128))
      | (1ULL << (azslParser::Int4x2 - 128))
      | (1ULL << (azslParser::Int4x3 - 128))
      | (1ULL << (azslParser::Int4x4 - 128))
      | (1ULL << (azslParser::Interface - 128))
      | (1ULL << (azslParser::Line_ - 128))
      | (1ULL << (azslParser::LineAdj - 128))
      | (1ULL << (azslParser::Linear - 128))
      | (1ULL << (azslParser::LineStream - 128))
      | (1ULL << (azslParser::Matrix - 128))
      | (1ULL << (azslParser::Nointerpolation - 128))
      | (1ULL << (azslParser::Noperspective - 128))
      | (1ULL << (azslParser::Option - 128))
      | (1ULL << (azslParser::Out - 128))
      | (1ULL << (azslParser::OutputPatch - 128))
      | (1ULL << (azslParser::Point - 128))
      | (1ULL << (azslParser::PointStream - 128))
      | (1ULL << (azslParser::Precise - 128))
      | (1ULL << (azslParser::RasterizerOrderedBuffer - 128))
      | (1ULL << (azslParser::RasterizerOrderedByteAddressBuffer - 128))
      | (1ULL << (azslParser::RasterizerOrderedStructuredBuffer - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture1D - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture1DArray - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture2D - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture2DArray - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture3D - 128))
      | (1ULL << (azslParser::RayDesc - 128))
      | (1ULL << (azslParser::RaytracingAccelerationStructure - 128))
      | (1ULL << (azslParser::Return - 128))
      | (1ULL << (azslParser::RowMajor - 128))
      | (1ULL << (azslParser::RWBuffer - 128))
      | (1ULL << (azslParser::RWByteAddressBuffer - 128))
      | (1ULL << (azslParser::RWStructuredBuffer - 128))
      | (1ULL << (azslParser::RWTexture1D - 128))
      | (1ULL << (azslParser::RWTexture1DArray - 128))
      | (1ULL << (azslParser::RWTexture2D - 128))
      | (1ULL << (azslParser::RWTexture2DArray - 128))
      | (1ULL << (azslParser::RWTexture3D - 128))
      | (1ULL << (azslParser::Sample - 128))
      | (1ULL << (azslParser::Sampler - 128))
      | (1ULL << (azslParser::SamplerCapitalS - 128))
      | (1ULL << (azslParser::SamplerComparisonState - 128))
      | (1ULL << (azslParser::SamplerStateCamel - 128))
      | (1ULL << (azslParser::SamplerState - 128))
      | (1ULL << (azslParser::Shared - 128))
      | (1ULL << (azslParser::SNorm - 128))
      | (1ULL << (azslParser::Static - 128))
      | (1ULL << (azslParser::Struct - 128)))) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 192)) & ((1ULL << (azslParser::StructuredBuffer - 192))
      | (1ULL << (azslParser::SubpassInput - 192))
      | (1ULL << (azslParser::SubpassInputMS - 192))
      | (1ULL << (azslParser::Switch - 192))
      | (1ULL << (azslParser::Texture1D - 192))
      | (1ULL << (azslParser::Texture1DArray - 192))
      | (1ULL << (azslParser::Texture2D - 192))
      | (1ULL << (azslParser::Texture2DArray - 192))
      | (1ULL << (azslParser::Texture2DMS - 192))
      | (1ULL << (azslParser::Texture2DMSArray - 192))
      | (1ULL << (azslParser::Texture3D - 192))
      | (1ULL << (azslParser::TextureCube - 192))
      | (1ULL << (azslParser::TextureCubeArray - 192))
      | (1ULL << (azslParser::Triangle - 192))
      | (1ULL << (azslParser::TriangleAdj - 192))
      | (1ULL << (azslParser::TriangleStream - 192))
      | (1ULL << (azslParser::Uniform - 192))
      | (1ULL << (azslParser::Uint - 192))
      | (1ULL << (azslParser::Uint1 - 192))
      | (1ULL << (azslParser::Uint2 - 192))
      | (1ULL << (azslParser::Uint3 - 192))
      | (1ULL << (azslParser::Uint4 - 192))
      | (1ULL << (azslParser::Uint1x1 - 192))
      | (1ULL << (azslParser::Uint1x2 - 192))
      | (1ULL << (azslParser::Uint1x3 - 192))
      | (1ULL << (azslParser::Uint1x4 - 192))
      | (1ULL << (azslParser::Uint2x1 - 192))
      | (1ULL << (azslParser::Uint2x2 - 192))
      | (1ULL << (azslParser::Uint2x3 - 192))
      | (1ULL << (azslParser::Uint2x4 - 192))
      | (1ULL << (azslParser::Uint3x1 - 192))
      | (1ULL << (azslParser::Uint3x2 - 192))
      | (1ULL << (azslParser::Uint3x3 - 192))
      | (1ULL << (azslParser::Uint3x4 - 192))
      | (1ULL << (azslParser::Uint4x1 - 192))
      | (1ULL << (azslParser::Uint4x2 - 192))
      | (1ULL << (azslParser::Uint4x3 - 192))
      | (1ULL << (azslParser::Uint4x4 - 192))
      | (1ULL << (azslParser::Uint16_t - 192))
      | (1ULL << (azslParser::Uint32_t - 192))
      | (1ULL << (azslParser::Uint64_t - 192))
      | (1ULL << (azslParser::UNorm - 192))
      | (1ULL << (azslParser::Unsigned - 192))
      | (1ULL << (azslParser::Dword - 192))
      | (1ULL << (azslParser::Dword1 - 192))
      | (1ULL << (azslParser::Dword2 - 192))
      | (1ULL << (azslParser::Dword3 - 192))
      | (1ULL << (azslParser::Dword4 - 192))
      | (1ULL << (azslParser::Dword1x1 - 192))
      | (1ULL << (azslParser::Dword1x2 - 192))
      | (1ULL << (azslParser::Dword1x3 - 192))
      | (1ULL << (azslParser::Dword1x4 - 192))
      | (1ULL << (azslParser::Dword2x1 - 192))
      | (1ULL << (azslParser::Dword2x2 - 192))
      | (1ULL << (azslParser::Dword2x3 - 192))
      | (1ULL << (azslParser::Dword2x4 - 192))
      | (1ULL << (azslParser::Dword3x1 - 192))
      | (1ULL << (azslParser::Dword3x2 - 192))
      | (1ULL << (azslParser::Dword3x3 - 192))
      | (1ULL << (azslParser::Dword3x4 - 192))
      | (1ULL << (azslParser::Dword4x1 - 192))
      | (1ULL << (azslParser::Dword4x2 - 192))
      | (1ULL << (azslParser::Dword4x3 - 192)))) != 0) || ((((_la - 256) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 256)) & ((1ULL << (azslParser::Dword4x4 - 256))
      | (1ULL << (azslParser::Vector - 256))
      | (1ULL << (azslParser::Volatile - 256))
      | (1ULL << (azslParser::Void - 256))
      | (1ULL << (azslParser::While - 256))
      | (1ULL << (azslParser::StateObjectConfig - 256))
      | (1ULL << (azslParser::LocalRootSignature - 256))
      | (1ULL << (azslParser::GlobalRootSignature - 256))
      | (1ULL << (azslParser::SubobjectToExportsAssociation - 256))
      | (1ULL << (azslParser::RaytracingShaderConfig - 256))
      | (1ULL << (azslParser::RaytracingPipelineConfig - 256))
      | (1ULL << (azslParser::RaytracingPipelineConfig1 - 256))
      | (1ULL << (azslParser::TriangleHitGroup - 256))
      | (1ULL << (azslParser::ProceduralPrimitiveHitGroup - 256))
      | (1ULL << (azslParser::LeftParen - 256))
      | (1ULL << (azslParser::LeftBracket - 256))
      | (1ULL << (azslParser::LeftBrace - 256))
      | (1ULL << (azslParser::LeftDoubleBracket - 256))
      | (1ULL << (azslParser::Plus - 256))
      | (1ULL << (azslParser::PlusPlus - 256)))) != 0) || ((((_la - 320) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 320)) & ((1ULL << (azslParser::Minus - 320))
      | (1ULL << (azslParser::MinusMinus - 320))
      | (1ULL << (azslParser::Not - 320))
      | (1ULL << (azslParser::Tilde - 320))
      | (1ULL << (azslParser::ColonColon - 320))
      | (1ULL << (azslParser::Semi - 320))
      | (1ULL << (azslParser::True - 320))
      | (1ULL << (azslParser::False - 320))
      | (1ULL << (azslParser::KW_TypeAlias - 320))
      | (1ULL << (azslParser::KW_Typedef - 320))
      | (1ULL << (azslParser::KW_Typeof - 320))
      | (1ULL << (azslParser::KW_ext_print_message - 320))
      | (1ULL << (azslParser::KW_ext_print_symbol - 320))
      | (1ULL << (azslParser::Identifier - 320))
      | (1ULL << (azslParser::IntegerLiteral - 320))
      | (1ULL << (azslParser::FloatLiteral - 320))
      | (1ULL << (azslParser::StringLiteral - 320)))) != 0)) {
      setState(524);
      antlrcpp::downCast<BlockContext *>(_localctx)->statementContext = statement();
      antlrcpp::downCast<BlockContext *>(_localctx)->Stmts.push_back(antlrcpp::downCast<BlockContext *>(_localctx)->statementContext);
      setState(529);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(530);
    match(azslParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

azslParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::VariableDeclarationStatementContext* azslParser::StatementContext::variableDeclarationStatement() {
  return getRuleContext<azslParser::VariableDeclarationStatementContext>(0);
}

azslParser::EmbeddedStatementContext* azslParser::StatementContext::embeddedStatement() {
  return getRuleContext<azslParser::EmbeddedStatementContext>(0);
}

azslParser::AnyStructuredTypeDefinitionStatementContext* azslParser::StatementContext::anyStructuredTypeDefinitionStatement() {
  return getRuleContext<azslParser::AnyStructuredTypeDefinitionStatementContext>(0);
}


size_t azslParser::StatementContext::getRuleIndex() const {
  return azslParser::RuleStatement;
}

void azslParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void azslParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

azslParser::StatementContext* azslParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 72, azslParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(535);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(532);
      variableDeclarationStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(533);
      embeddedStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(534);
      anyStructuredTypeDefinitionStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForInitializerContext ------------------------------------------------------------------

azslParser::ForInitializerContext::ForInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::VariableDeclarationContext* azslParser::ForInitializerContext::variableDeclaration() {
  return getRuleContext<azslParser::VariableDeclarationContext>(0);
}

azslParser::ExpressionExtContext* azslParser::ForInitializerContext::expressionExt() {
  return getRuleContext<azslParser::ExpressionExtContext>(0);
}


size_t azslParser::ForInitializerContext::getRuleIndex() const {
  return azslParser::RuleForInitializer;
}

void azslParser::ForInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForInitializer(this);
}

void azslParser::ForInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForInitializer(this);
}

azslParser::ForInitializerContext* azslParser::forInitializer() {
  ForInitializerContext *_localctx = _tracker.createInstance<ForInitializerContext>(_ctx, getState());
  enterRule(_localctx, 74, azslParser::RuleForInitializer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(539);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(537);
      variableDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(538);
      expressionExt(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchLabelContext ------------------------------------------------------------------

azslParser::SwitchLabelContext::SwitchLabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t azslParser::SwitchLabelContext::getRuleIndex() const {
  return azslParser::RuleSwitchLabel;
}

void azslParser::SwitchLabelContext::copyFrom(SwitchLabelContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DefaultSwitchLabelContext ------------------------------------------------------------------

tree::TerminalNode* azslParser::DefaultSwitchLabelContext::Default() {
  return getToken(azslParser::Default, 0);
}

tree::TerminalNode* azslParser::DefaultSwitchLabelContext::Colon() {
  return getToken(azslParser::Colon, 0);
}

azslParser::DefaultSwitchLabelContext::DefaultSwitchLabelContext(SwitchLabelContext *ctx) { copyFrom(ctx); }

void azslParser::DefaultSwitchLabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultSwitchLabel(this);
}
void azslParser::DefaultSwitchLabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultSwitchLabel(this);
}
//----------------- CaseSwitchLabelContext ------------------------------------------------------------------

tree::TerminalNode* azslParser::CaseSwitchLabelContext::Case() {
  return getToken(azslParser::Case, 0);
}

tree::TerminalNode* azslParser::CaseSwitchLabelContext::Colon() {
  return getToken(azslParser::Colon, 0);
}

azslParser::ExpressionContext* azslParser::CaseSwitchLabelContext::expression() {
  return getRuleContext<azslParser::ExpressionContext>(0);
}

azslParser::CaseSwitchLabelContext::CaseSwitchLabelContext(SwitchLabelContext *ctx) { copyFrom(ctx); }

void azslParser::CaseSwitchLabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCaseSwitchLabel(this);
}
void azslParser::CaseSwitchLabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCaseSwitchLabel(this);
}
azslParser::SwitchLabelContext* azslParser::switchLabel() {
  SwitchLabelContext *_localctx = _tracker.createInstance<SwitchLabelContext>(_ctx, getState());
  enterRule(_localctx, 76, azslParser::RuleSwitchLabel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(547);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case azslParser::Case: {
        _localctx = _tracker.createInstance<azslParser::CaseSwitchLabelContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(541);
        match(azslParser::Case);
        setState(542);
        antlrcpp::downCast<CaseSwitchLabelContext *>(_localctx)->Expr = expression(0);
        setState(543);
        match(azslParser::Colon);
        break;
      }

      case azslParser::Default: {
        _localctx = _tracker.createInstance<azslParser::DefaultSwitchLabelContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(545);
        match(azslParser::Default);
        setState(546);
        match(azslParser::Colon);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchSectionContext ------------------------------------------------------------------

azslParser::SwitchSectionContext::SwitchSectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<azslParser::SwitchLabelContext *> azslParser::SwitchSectionContext::switchLabel() {
  return getRuleContexts<azslParser::SwitchLabelContext>();
}

azslParser::SwitchLabelContext* azslParser::SwitchSectionContext::switchLabel(size_t i) {
  return getRuleContext<azslParser::SwitchLabelContext>(i);
}

std::vector<azslParser::StatementContext *> azslParser::SwitchSectionContext::statement() {
  return getRuleContexts<azslParser::StatementContext>();
}

azslParser::StatementContext* azslParser::SwitchSectionContext::statement(size_t i) {
  return getRuleContext<azslParser::StatementContext>(i);
}


size_t azslParser::SwitchSectionContext::getRuleIndex() const {
  return azslParser::RuleSwitchSection;
}

void azslParser::SwitchSectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchSection(this);
}

void azslParser::SwitchSectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchSection(this);
}

azslParser::SwitchSectionContext* azslParser::switchSection() {
  SwitchSectionContext *_localctx = _tracker.createInstance<SwitchSectionContext>(_ctx, getState());
  enterRule(_localctx, 78, azslParser::RuleSwitchSection);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(550); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(549);
      switchLabel();
      setState(552); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == azslParser::Case

    || _la == azslParser::Default);
    setState(555); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(554);
      statement();
      setState(557); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << azslParser::AppendStructuredBuffer)
      | (1ULL << azslParser::Bool)
      | (1ULL << azslParser::Bool1)
      | (1ULL << azslParser::Bool2)
      | (1ULL << azslParser::Bool3)
      | (1ULL << azslParser::Bool4)
      | (1ULL << azslParser::Bool1x1)
      | (1ULL << azslParser::Bool1x2)
      | (1ULL << azslParser::Bool1x3)
      | (1ULL << azslParser::Bool1x4)
      | (1ULL << azslParser::Bool2x1)
      | (1ULL << azslParser::Bool2x2)
      | (1ULL << azslParser::Bool2x3)
      | (1ULL << azslParser::Bool2x4)
      | (1ULL << azslParser::Bool3x1)
      | (1ULL << azslParser::Bool3x2)
      | (1ULL << azslParser::Bool3x3)
      | (1ULL << azslParser::Bool3x4)
      | (1ULL << azslParser::Bool4x1)
      | (1ULL << azslParser::Bool4x2)
      | (1ULL << azslParser::Bool4x3)
      | (1ULL << azslParser::Bool4x4)
      | (1ULL << azslParser::Buffer)
      | (1ULL << azslParser::BuiltInTriangleIntersectionAttributes)
      | (1ULL << azslParser::ByteAddressBuffer)
      | (1ULL << azslParser::Break)
      | (1ULL << azslParser::Centroid)
      | (1ULL << azslParser::ConstantBuffer)
      | (1ULL << azslParser::ConstantBufferCamel)
      | (1ULL << azslParser::Class)
      | (1ULL << azslParser::ColumnMajor)
      | (1ULL << azslParser::Const)
      | (1ULL << azslParser::ConsumeStructuredBuffer)
      | (1ULL << azslParser::Continue)
      | (1ULL << azslParser::Discard)
      | (1ULL << azslParser::Do)
      | (1ULL << azslParser::Double)
      | (1ULL << azslParser::Double1)
      | (1ULL << azslParser::Double2)
      | (1ULL << azslParser::Double3)
      | (1ULL << azslParser::Double4)
      | (1ULL << azslParser::Double1x1)
      | (1ULL << azslParser::Double1x2)
      | (1ULL << azslParser::Double1x3)
      | (1ULL << azslParser::Double1x4)
      | (1ULL << azslParser::Double2x1)
      | (1ULL << azslParser::Double2x2)
      | (1ULL << azslParser::Double2x3)
      | (1ULL << azslParser::Double2x4)
      | (1ULL << azslParser::Double3x1)
      | (1ULL << azslParser::Double3x2)
      | (1ULL << azslParser::Double3x3)
      | (1ULL << azslParser::Double3x4)
      | (1ULL << azslParser::Double4x1)
      | (1ULL << azslParser::Double4x2)
      | (1ULL << azslParser::Double4x3)
      | (1ULL << azslParser::Double4x4)
      | (1ULL << azslParser::Enum))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (azslParser::Extern - 64))
      | (1ULL << (azslParser::Float - 64))
      | (1ULL << (azslParser::Float1 - 64))
      | (1ULL << (azslParser::Float2 - 64))
      | (1ULL << (azslParser::Float3 - 64))
      | (1ULL << (azslParser::Float4 - 64))
      | (1ULL << (azslParser::Float1x1 - 64))
      | (1ULL << (azslParser::Float1x2 - 64))
      | (1ULL << (azslParser::Float1x3 - 64))
      | (1ULL << (azslParser::Float1x4 - 64))
      | (1ULL << (azslParser::Float2x1 - 64))
      | (1ULL << (azslParser::Float2x2 - 64))
      | (1ULL << (azslParser::Float2x3 - 64))
      | (1ULL << (azslParser::Float2x4 - 64))
      | (1ULL << (azslParser::Float3x1 - 64))
      | (1ULL << (azslParser::Float3x2 - 64))
      | (1ULL << (azslParser::Float3x3 - 64))
      | (1ULL << (azslParser::Float3x4 - 64))
      | (1ULL << (azslParser::Float4x1 - 64))
      | (1ULL << (azslParser::Float4x2 - 64))
      | (1ULL << (azslParser::Float4x3 - 64))
      | (1ULL << (azslParser::Float4x4 - 64))
      | (1ULL << (azslParser::For - 64))
      | (1ULL << (azslParser::Groupshared - 64))
      | (1ULL << (azslParser::Globallycoherent - 64))
      | (1ULL << (azslParser::Half - 64))
      | (1ULL << (azslParser::Half1 - 64))
      | (1ULL << (azslParser::Half2 - 64))
      | (1ULL << (azslParser::Half3 - 64))
      | (1ULL << (azslParser::Half4 - 64))
      | (1ULL << (azslParser::Half1x1 - 64))
      | (1ULL << (azslParser::Half1x2 - 64))
      | (1ULL << (azslParser::Half1x3 - 64))
      | (1ULL << (azslParser::Half1x4 - 64))
      | (1ULL << (azslParser::Half2x1 - 64))
      | (1ULL << (azslParser::Half2x2 - 64))
      | (1ULL << (azslParser::Half2x3 - 64))
      | (1ULL << (azslParser::Half2x4 - 64))
      | (1ULL << (azslParser::Half3x1 - 64))
      | (1ULL << (azslParser::Half3x2 - 64))
      | (1ULL << (azslParser::Half3x3 - 64))
      | (1ULL << (azslParser::Half3x4 - 64))
      | (1ULL << (azslParser::Half4x1 - 64))
      | (1ULL << (azslParser::Half4x2 - 64))
      | (1ULL << (azslParser::Half4x3 - 64))
      | (1ULL << (azslParser::Half4x4 - 64))
      | (1ULL << (azslParser::If - 64))
      | (1ULL << (azslParser::In - 64))
      | (1ULL << (azslParser::Inline - 64))
      | (1ULL << (azslParser::Rootconstant - 64))
      | (1ULL << (azslParser::Inout - 64))
      | (1ULL << (azslParser::InputPatch - 64))
      | (1ULL << (azslParser::Int - 64))
      | (1ULL << (azslParser::Int16_t - 64))
      | (1ULL << (azslParser::Int32_t - 64))
      | (1ULL << (azslParser::Int64_t - 64))
      | (1ULL << (azslParser::Int1 - 64))
      | (1ULL << (azslParser::Int2 - 64))
      | (1ULL << (azslParser::Int3 - 64))
      | (1ULL << (azslParser::Int4 - 64))
      | (1ULL << (azslParser::Int1x1 - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (azslParser::Int1x2 - 128))
      | (1ULL << (azslParser::Int1x3 - 128))
      | (1ULL << (azslParser::Int1x4 - 128))
      | (1ULL << (azslParser::Int2x1 - 128))
      | (1ULL << (azslParser::Int2x2 - 128))
      | (1ULL << (azslParser::Int2x3 - 128))
      | (1ULL << (azslParser::Int2x4 - 128))
      | (1ULL << (azslParser::Int3x1 - 128))
      | (1ULL << (azslParser::Int3x2 - 128))
      | (1ULL << (azslParser::Int3x3 - 128))
      | (1ULL << (azslParser::Int3x4 - 128))
      | (1ULL << (azslParser::Int4x1 - 128))
      | (1ULL << (azslParser::Int4x2 - 128))
      | (1ULL << (azslParser::Int4x3 - 128))
      | (1ULL << (azslParser::Int4x4 - 128))
      | (1ULL << (azslParser::Interface - 128))
      | (1ULL << (azslParser::Line_ - 128))
      | (1ULL << (azslParser::LineAdj - 128))
      | (1ULL << (azslParser::Linear - 128))
      | (1ULL << (azslParser::LineStream - 128))
      | (1ULL << (azslParser::Matrix - 128))
      | (1ULL << (azslParser::Nointerpolation - 128))
      | (1ULL << (azslParser::Noperspective - 128))
      | (1ULL << (azslParser::Option - 128))
      | (1ULL << (azslParser::Out - 128))
      | (1ULL << (azslParser::OutputPatch - 128))
      | (1ULL << (azslParser::Point - 128))
      | (1ULL << (azslParser::PointStream - 128))
      | (1ULL << (azslParser::Precise - 128))
      | (1ULL << (azslParser::RasterizerOrderedBuffer - 128))
      | (1ULL << (azslParser::RasterizerOrderedByteAddressBuffer - 128))
      | (1ULL << (azslParser::RasterizerOrderedStructuredBuffer - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture1D - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture1DArray - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture2D - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture2DArray - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture3D - 128))
      | (1ULL << (azslParser::RayDesc - 128))
      | (1ULL << (azslParser::RaytracingAccelerationStructure - 128))
      | (1ULL << (azslParser::Return - 128))
      | (1ULL << (azslParser::RowMajor - 128))
      | (1ULL << (azslParser::RWBuffer - 128))
      | (1ULL << (azslParser::RWByteAddressBuffer - 128))
      | (1ULL << (azslParser::RWStructuredBuffer - 128))
      | (1ULL << (azslParser::RWTexture1D - 128))
      | (1ULL << (azslParser::RWTexture1DArray - 128))
      | (1ULL << (azslParser::RWTexture2D - 128))
      | (1ULL << (azslParser::RWTexture2DArray - 128))
      | (1ULL << (azslParser::RWTexture3D - 128))
      | (1ULL << (azslParser::Sample - 128))
      | (1ULL << (azslParser::Sampler - 128))
      | (1ULL << (azslParser::SamplerCapitalS - 128))
      | (1ULL << (azslParser::SamplerComparisonState - 128))
      | (1ULL << (azslParser::SamplerStateCamel - 128))
      | (1ULL << (azslParser::SamplerState - 128))
      | (1ULL << (azslParser::Shared - 128))
      | (1ULL << (azslParser::SNorm - 128))
      | (1ULL << (azslParser::Static - 128))
      | (1ULL << (azslParser::Struct - 128)))) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 192)) & ((1ULL << (azslParser::StructuredBuffer - 192))
      | (1ULL << (azslParser::SubpassInput - 192))
      | (1ULL << (azslParser::SubpassInputMS - 192))
      | (1ULL << (azslParser::Switch - 192))
      | (1ULL << (azslParser::Texture1D - 192))
      | (1ULL << (azslParser::Texture1DArray - 192))
      | (1ULL << (azslParser::Texture2D - 192))
      | (1ULL << (azslParser::Texture2DArray - 192))
      | (1ULL << (azslParser::Texture2DMS - 192))
      | (1ULL << (azslParser::Texture2DMSArray - 192))
      | (1ULL << (azslParser::Texture3D - 192))
      | (1ULL << (azslParser::TextureCube - 192))
      | (1ULL << (azslParser::TextureCubeArray - 192))
      | (1ULL << (azslParser::Triangle - 192))
      | (1ULL << (azslParser::TriangleAdj - 192))
      | (1ULL << (azslParser::TriangleStream - 192))
      | (1ULL << (azslParser::Uniform - 192))
      | (1ULL << (azslParser::Uint - 192))
      | (1ULL << (azslParser::Uint1 - 192))
      | (1ULL << (azslParser::Uint2 - 192))
      | (1ULL << (azslParser::Uint3 - 192))
      | (1ULL << (azslParser::Uint4 - 192))
      | (1ULL << (azslParser::Uint1x1 - 192))
      | (1ULL << (azslParser::Uint1x2 - 192))
      | (1ULL << (azslParser::Uint1x3 - 192))
      | (1ULL << (azslParser::Uint1x4 - 192))
      | (1ULL << (azslParser::Uint2x1 - 192))
      | (1ULL << (azslParser::Uint2x2 - 192))
      | (1ULL << (azslParser::Uint2x3 - 192))
      | (1ULL << (azslParser::Uint2x4 - 192))
      | (1ULL << (azslParser::Uint3x1 - 192))
      | (1ULL << (azslParser::Uint3x2 - 192))
      | (1ULL << (azslParser::Uint3x3 - 192))
      | (1ULL << (azslParser::Uint3x4 - 192))
      | (1ULL << (azslParser::Uint4x1 - 192))
      | (1ULL << (azslParser::Uint4x2 - 192))
      | (1ULL << (azslParser::Uint4x3 - 192))
      | (1ULL << (azslParser::Uint4x4 - 192))
      | (1ULL << (azslParser::Uint16_t - 192))
      | (1ULL << (azslParser::Uint32_t - 192))
      | (1ULL << (azslParser::Uint64_t - 192))
      | (1ULL << (azslParser::UNorm - 192))
      | (1ULL << (azslParser::Unsigned - 192))
      | (1ULL << (azslParser::Dword - 192))
      | (1ULL << (azslParser::Dword1 - 192))
      | (1ULL << (azslParser::Dword2 - 192))
      | (1ULL << (azslParser::Dword3 - 192))
      | (1ULL << (azslParser::Dword4 - 192))
      | (1ULL << (azslParser::Dword1x1 - 192))
      | (1ULL << (azslParser::Dword1x2 - 192))
      | (1ULL << (azslParser::Dword1x3 - 192))
      | (1ULL << (azslParser::Dword1x4 - 192))
      | (1ULL << (azslParser::Dword2x1 - 192))
      | (1ULL << (azslParser::Dword2x2 - 192))
      | (1ULL << (azslParser::Dword2x3 - 192))
      | (1ULL << (azslParser::Dword2x4 - 192))
      | (1ULL << (azslParser::Dword3x1 - 192))
      | (1ULL << (azslParser::Dword3x2 - 192))
      | (1ULL << (azslParser::Dword3x3 - 192))
      | (1ULL << (azslParser::Dword3x4 - 192))
      | (1ULL << (azslParser::Dword4x1 - 192))
      | (1ULL << (azslParser::Dword4x2 - 192))
      | (1ULL << (azslParser::Dword4x3 - 192)))) != 0) || ((((_la - 256) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 256)) & ((1ULL << (azslParser::Dword4x4 - 256))
      | (1ULL << (azslParser::Vector - 256))
      | (1ULL << (azslParser::Volatile - 256))
      | (1ULL << (azslParser::Void - 256))
      | (1ULL << (azslParser::While - 256))
      | (1ULL << (azslParser::StateObjectConfig - 256))
      | (1ULL << (azslParser::LocalRootSignature - 256))
      | (1ULL << (azslParser::GlobalRootSignature - 256))
      | (1ULL << (azslParser::SubobjectToExportsAssociation - 256))
      | (1ULL << (azslParser::RaytracingShaderConfig - 256))
      | (1ULL << (azslParser::RaytracingPipelineConfig - 256))
      | (1ULL << (azslParser::RaytracingPipelineConfig1 - 256))
      | (1ULL << (azslParser::TriangleHitGroup - 256))
      | (1ULL << (azslParser::ProceduralPrimitiveHitGroup - 256))
      | (1ULL << (azslParser::LeftParen - 256))
      | (1ULL << (azslParser::LeftBracket - 256))
      | (1ULL << (azslParser::LeftBrace - 256))
      | (1ULL << (azslParser::LeftDoubleBracket - 256))
      | (1ULL << (azslParser::Plus - 256))
      | (1ULL << (azslParser::PlusPlus - 256)))) != 0) || ((((_la - 320) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 320)) & ((1ULL << (azslParser::Minus - 320))
      | (1ULL << (azslParser::MinusMinus - 320))
      | (1ULL << (azslParser::Not - 320))
      | (1ULL << (azslParser::Tilde - 320))
      | (1ULL << (azslParser::ColonColon - 320))
      | (1ULL << (azslParser::Semi - 320))
      | (1ULL << (azslParser::True - 320))
      | (1ULL << (azslParser::False - 320))
      | (1ULL << (azslParser::KW_TypeAlias - 320))
      | (1ULL << (azslParser::KW_Typedef - 320))
      | (1ULL << (azslParser::KW_Typeof - 320))
      | (1ULL << (azslParser::KW_ext_print_message - 320))
      | (1ULL << (azslParser::KW_ext_print_symbol - 320))
      | (1ULL << (azslParser::Identifier - 320))
      | (1ULL << (azslParser::IntegerLiteral - 320))
      | (1ULL << (azslParser::FloatLiteral - 320))
      | (1ULL << (azslParser::StringLiteral - 320)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchBlockContext ------------------------------------------------------------------

azslParser::SwitchBlockContext::SwitchBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::SwitchBlockContext::LeftBrace() {
  return getToken(azslParser::LeftBrace, 0);
}

tree::TerminalNode* azslParser::SwitchBlockContext::RightBrace() {
  return getToken(azslParser::RightBrace, 0);
}

std::vector<azslParser::SwitchSectionContext *> azslParser::SwitchBlockContext::switchSection() {
  return getRuleContexts<azslParser::SwitchSectionContext>();
}

azslParser::SwitchSectionContext* azslParser::SwitchBlockContext::switchSection(size_t i) {
  return getRuleContext<azslParser::SwitchSectionContext>(i);
}


size_t azslParser::SwitchBlockContext::getRuleIndex() const {
  return azslParser::RuleSwitchBlock;
}

void azslParser::SwitchBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchBlock(this);
}

void azslParser::SwitchBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchBlock(this);
}

azslParser::SwitchBlockContext* azslParser::switchBlock() {
  SwitchBlockContext *_localctx = _tracker.createInstance<SwitchBlockContext>(_ctx, getState());
  enterRule(_localctx, 80, azslParser::RuleSwitchBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(559);
    match(azslParser::LeftBrace);
    setState(563);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == azslParser::Case

    || _la == azslParser::Default) {
      setState(560);
      switchSection();
      setState(565);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(566);
    match(azslParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmbeddedStatementContext ------------------------------------------------------------------

azslParser::EmbeddedStatementContext::EmbeddedStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t azslParser::EmbeddedStatementContext::getRuleIndex() const {
  return azslParser::RuleEmbeddedStatement;
}

void azslParser::EmbeddedStatementContext::copyFrom(EmbeddedStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DoStatementContext ------------------------------------------------------------------

tree::TerminalNode* azslParser::DoStatementContext::Do() {
  return getToken(azslParser::Do, 0);
}

azslParser::EmbeddedStatementContext* azslParser::DoStatementContext::embeddedStatement() {
  return getRuleContext<azslParser::EmbeddedStatementContext>(0);
}

tree::TerminalNode* azslParser::DoStatementContext::While() {
  return getToken(azslParser::While, 0);
}

tree::TerminalNode* azslParser::DoStatementContext::LeftParen() {
  return getToken(azslParser::LeftParen, 0);
}

tree::TerminalNode* azslParser::DoStatementContext::RightParen() {
  return getToken(azslParser::RightParen, 0);
}

tree::TerminalNode* azslParser::DoStatementContext::Semi() {
  return getToken(azslParser::Semi, 0);
}

azslParser::ExpressionExtContext* azslParser::DoStatementContext::expressionExt() {
  return getRuleContext<azslParser::ExpressionExtContext>(0);
}

std::vector<azslParser::AttributeSpecifierContext *> azslParser::DoStatementContext::attributeSpecifier() {
  return getRuleContexts<azslParser::AttributeSpecifierContext>();
}

azslParser::AttributeSpecifierContext* azslParser::DoStatementContext::attributeSpecifier(size_t i) {
  return getRuleContext<azslParser::AttributeSpecifierContext>(i);
}

azslParser::DoStatementContext::DoStatementContext(EmbeddedStatementContext *ctx) { copyFrom(ctx); }

void azslParser::DoStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoStatement(this);
}
void azslParser::DoStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoStatement(this);
}
//----------------- EmptyStatementContext ------------------------------------------------------------------

tree::TerminalNode* azslParser::EmptyStatementContext::Semi() {
  return getToken(azslParser::Semi, 0);
}

azslParser::EmptyStatementContext::EmptyStatementContext(EmbeddedStatementContext *ctx) { copyFrom(ctx); }

void azslParser::EmptyStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptyStatement(this);
}
void azslParser::EmptyStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptyStatement(this);
}
//----------------- BlockStatementContext ------------------------------------------------------------------

azslParser::BlockContext* azslParser::BlockStatementContext::block() {
  return getRuleContext<azslParser::BlockContext>(0);
}

azslParser::BlockStatementContext::BlockStatementContext(EmbeddedStatementContext *ctx) { copyFrom(ctx); }

void azslParser::BlockStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockStatement(this);
}
void azslParser::BlockStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockStatement(this);
}
//----------------- WhileStatementContext ------------------------------------------------------------------

tree::TerminalNode* azslParser::WhileStatementContext::While() {
  return getToken(azslParser::While, 0);
}

tree::TerminalNode* azslParser::WhileStatementContext::LeftParen() {
  return getToken(azslParser::LeftParen, 0);
}

tree::TerminalNode* azslParser::WhileStatementContext::RightParen() {
  return getToken(azslParser::RightParen, 0);
}

azslParser::EmbeddedStatementContext* azslParser::WhileStatementContext::embeddedStatement() {
  return getRuleContext<azslParser::EmbeddedStatementContext>(0);
}

azslParser::ExpressionExtContext* azslParser::WhileStatementContext::expressionExt() {
  return getRuleContext<azslParser::ExpressionExtContext>(0);
}

std::vector<azslParser::AttributeSpecifierContext *> azslParser::WhileStatementContext::attributeSpecifier() {
  return getRuleContexts<azslParser::AttributeSpecifierContext>();
}

azslParser::AttributeSpecifierContext* azslParser::WhileStatementContext::attributeSpecifier(size_t i) {
  return getRuleContext<azslParser::AttributeSpecifierContext>(i);
}

azslParser::WhileStatementContext::WhileStatementContext(EmbeddedStatementContext *ctx) { copyFrom(ctx); }

void azslParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}
void azslParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}
//----------------- ExtenstionStatementContext ------------------------------------------------------------------

azslParser::CompilerExtensionStatementContext* azslParser::ExtenstionStatementContext::compilerExtensionStatement() {
  return getRuleContext<azslParser::CompilerExtensionStatementContext>(0);
}

azslParser::ExtenstionStatementContext::ExtenstionStatementContext(EmbeddedStatementContext *ctx) { copyFrom(ctx); }

void azslParser::ExtenstionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExtenstionStatement(this);
}
void azslParser::ExtenstionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExtenstionStatement(this);
}
//----------------- BreakStatementContext ------------------------------------------------------------------

tree::TerminalNode* azslParser::BreakStatementContext::Break() {
  return getToken(azslParser::Break, 0);
}

tree::TerminalNode* azslParser::BreakStatementContext::Semi() {
  return getToken(azslParser::Semi, 0);
}

azslParser::BreakStatementContext::BreakStatementContext(EmbeddedStatementContext *ctx) { copyFrom(ctx); }

void azslParser::BreakStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakStatement(this);
}
void azslParser::BreakStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakStatement(this);
}
//----------------- IfStatementContext ------------------------------------------------------------------

tree::TerminalNode* azslParser::IfStatementContext::If() {
  return getToken(azslParser::If, 0);
}

tree::TerminalNode* azslParser::IfStatementContext::LeftParen() {
  return getToken(azslParser::LeftParen, 0);
}

tree::TerminalNode* azslParser::IfStatementContext::RightParen() {
  return getToken(azslParser::RightParen, 0);
}

azslParser::ExpressionExtContext* azslParser::IfStatementContext::expressionExt() {
  return getRuleContext<azslParser::ExpressionExtContext>(0);
}

azslParser::EmbeddedStatementContext* azslParser::IfStatementContext::embeddedStatement() {
  return getRuleContext<azslParser::EmbeddedStatementContext>(0);
}

std::vector<azslParser::AttributeSpecifierContext *> azslParser::IfStatementContext::attributeSpecifier() {
  return getRuleContexts<azslParser::AttributeSpecifierContext>();
}

azslParser::AttributeSpecifierContext* azslParser::IfStatementContext::attributeSpecifier(size_t i) {
  return getRuleContext<azslParser::AttributeSpecifierContext>(i);
}

azslParser::ElseClauseContext* azslParser::IfStatementContext::elseClause() {
  return getRuleContext<azslParser::ElseClauseContext>(0);
}

azslParser::IfStatementContext::IfStatementContext(EmbeddedStatementContext *ctx) { copyFrom(ctx); }

void azslParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}
void azslParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}
//----------------- SwitchStatementContext ------------------------------------------------------------------

tree::TerminalNode* azslParser::SwitchStatementContext::Switch() {
  return getToken(azslParser::Switch, 0);
}

tree::TerminalNode* azslParser::SwitchStatementContext::LeftParen() {
  return getToken(azslParser::LeftParen, 0);
}

tree::TerminalNode* azslParser::SwitchStatementContext::RightParen() {
  return getToken(azslParser::RightParen, 0);
}

azslParser::SwitchBlockContext* azslParser::SwitchStatementContext::switchBlock() {
  return getRuleContext<azslParser::SwitchBlockContext>(0);
}

azslParser::ExpressionExtContext* azslParser::SwitchStatementContext::expressionExt() {
  return getRuleContext<azslParser::ExpressionExtContext>(0);
}

std::vector<azslParser::AttributeSpecifierContext *> azslParser::SwitchStatementContext::attributeSpecifier() {
  return getRuleContexts<azslParser::AttributeSpecifierContext>();
}

azslParser::AttributeSpecifierContext* azslParser::SwitchStatementContext::attributeSpecifier(size_t i) {
  return getRuleContext<azslParser::AttributeSpecifierContext>(i);
}

azslParser::SwitchStatementContext::SwitchStatementContext(EmbeddedStatementContext *ctx) { copyFrom(ctx); }

void azslParser::SwitchStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchStatement(this);
}
void azslParser::SwitchStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchStatement(this);
}
//----------------- ExpressionStatementContext ------------------------------------------------------------------

tree::TerminalNode* azslParser::ExpressionStatementContext::Semi() {
  return getToken(azslParser::Semi, 0);
}

azslParser::ExpressionExtContext* azslParser::ExpressionStatementContext::expressionExt() {
  return getRuleContext<azslParser::ExpressionExtContext>(0);
}

azslParser::ExpressionStatementContext::ExpressionStatementContext(EmbeddedStatementContext *ctx) { copyFrom(ctx); }

void azslParser::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}
void azslParser::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}
//----------------- ReturnStatementContext ------------------------------------------------------------------

tree::TerminalNode* azslParser::ReturnStatementContext::Return() {
  return getToken(azslParser::Return, 0);
}

tree::TerminalNode* azslParser::ReturnStatementContext::Semi() {
  return getToken(azslParser::Semi, 0);
}

azslParser::ExpressionExtContext* azslParser::ReturnStatementContext::expressionExt() {
  return getRuleContext<azslParser::ExpressionExtContext>(0);
}

azslParser::ReturnStatementContext::ReturnStatementContext(EmbeddedStatementContext *ctx) { copyFrom(ctx); }

void azslParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}
void azslParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}
//----------------- DiscardStatementContext ------------------------------------------------------------------

tree::TerminalNode* azslParser::DiscardStatementContext::Discard() {
  return getToken(azslParser::Discard, 0);
}

tree::TerminalNode* azslParser::DiscardStatementContext::Semi() {
  return getToken(azslParser::Semi, 0);
}

azslParser::DiscardStatementContext::DiscardStatementContext(EmbeddedStatementContext *ctx) { copyFrom(ctx); }

void azslParser::DiscardStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiscardStatement(this);
}
void azslParser::DiscardStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiscardStatement(this);
}
//----------------- ForStatementContext ------------------------------------------------------------------

tree::TerminalNode* azslParser::ForStatementContext::For() {
  return getToken(azslParser::For, 0);
}

tree::TerminalNode* azslParser::ForStatementContext::LeftParen() {
  return getToken(azslParser::LeftParen, 0);
}

std::vector<tree::TerminalNode *> azslParser::ForStatementContext::Semi() {
  return getTokens(azslParser::Semi);
}

tree::TerminalNode* azslParser::ForStatementContext::Semi(size_t i) {
  return getToken(azslParser::Semi, i);
}

tree::TerminalNode* azslParser::ForStatementContext::RightParen() {
  return getToken(azslParser::RightParen, 0);
}

azslParser::EmbeddedStatementContext* azslParser::ForStatementContext::embeddedStatement() {
  return getRuleContext<azslParser::EmbeddedStatementContext>(0);
}

std::vector<azslParser::AttributeSpecifierContext *> azslParser::ForStatementContext::attributeSpecifier() {
  return getRuleContexts<azslParser::AttributeSpecifierContext>();
}

azslParser::AttributeSpecifierContext* azslParser::ForStatementContext::attributeSpecifier(size_t i) {
  return getRuleContext<azslParser::AttributeSpecifierContext>(i);
}

azslParser::ForInitializerContext* azslParser::ForStatementContext::forInitializer() {
  return getRuleContext<azslParser::ForInitializerContext>(0);
}

std::vector<azslParser::ExpressionExtContext *> azslParser::ForStatementContext::expressionExt() {
  return getRuleContexts<azslParser::ExpressionExtContext>();
}

azslParser::ExpressionExtContext* azslParser::ForStatementContext::expressionExt(size_t i) {
  return getRuleContext<azslParser::ExpressionExtContext>(i);
}

azslParser::ForStatementContext::ForStatementContext(EmbeddedStatementContext *ctx) { copyFrom(ctx); }

void azslParser::ForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatement(this);
}
void azslParser::ForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatement(this);
}
//----------------- TypeAliasingDefinitionStatementLabelContext ------------------------------------------------------------------

azslParser::TypeAliasingDefinitionStatementContext* azslParser::TypeAliasingDefinitionStatementLabelContext::typeAliasingDefinitionStatement() {
  return getRuleContext<azslParser::TypeAliasingDefinitionStatementContext>(0);
}

azslParser::TypeAliasingDefinitionStatementLabelContext::TypeAliasingDefinitionStatementLabelContext(EmbeddedStatementContext *ctx) { copyFrom(ctx); }

void azslParser::TypeAliasingDefinitionStatementLabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeAliasingDefinitionStatementLabel(this);
}
void azslParser::TypeAliasingDefinitionStatementLabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeAliasingDefinitionStatementLabel(this);
}
//----------------- ContinueStatementContext ------------------------------------------------------------------

tree::TerminalNode* azslParser::ContinueStatementContext::Continue() {
  return getToken(azslParser::Continue, 0);
}

tree::TerminalNode* azslParser::ContinueStatementContext::Semi() {
  return getToken(azslParser::Semi, 0);
}

azslParser::ContinueStatementContext::ContinueStatementContext(EmbeddedStatementContext *ctx) { copyFrom(ctx); }

void azslParser::ContinueStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinueStatement(this);
}
void azslParser::ContinueStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinueStatement(this);
}
azslParser::EmbeddedStatementContext* azslParser::embeddedStatement() {
  EmbeddedStatementContext *_localctx = _tracker.createInstance<EmbeddedStatementContext>(_ctx, getState());
  enterRule(_localctx, 82, azslParser::RuleEmbeddedStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(659);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<azslParser::EmptyStatementContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(568);
      match(azslParser::Semi);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<azslParser::BlockStatementContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(569);
      block();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<azslParser::ExpressionStatementContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(570);
      antlrcpp::downCast<ExpressionStatementContext *>(_localctx)->Expr = expressionExt(0);
      setState(571);
      match(azslParser::Semi);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<azslParser::IfStatementContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(576);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == azslParser::LeftBracket) {
        setState(573);
        attributeSpecifier();
        setState(578);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(579);
      match(azslParser::If);
      setState(580);
      match(azslParser::LeftParen);
      setState(581);
      antlrcpp::downCast<IfStatementContext *>(_localctx)->Condition = expressionExt(0);
      setState(582);
      match(azslParser::RightParen);
      setState(583);
      antlrcpp::downCast<IfStatementContext *>(_localctx)->Stmt = embeddedStatement();
      setState(585);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
      case 1: {
        setState(584);
        elseClause();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<azslParser::SwitchStatementContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(590);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == azslParser::LeftBracket) {
        setState(587);
        attributeSpecifier();
        setState(592);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(593);
      match(azslParser::Switch);
      setState(594);
      match(azslParser::LeftParen);
      setState(595);
      antlrcpp::downCast<SwitchStatementContext *>(_localctx)->Expr = expressionExt(0);
      setState(596);
      match(azslParser::RightParen);
      setState(597);
      switchBlock();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<azslParser::WhileStatementContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(602);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == azslParser::LeftBracket) {
        setState(599);
        attributeSpecifier();
        setState(604);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(605);
      match(azslParser::While);
      setState(606);
      match(azslParser::LeftParen);
      setState(607);
      antlrcpp::downCast<WhileStatementContext *>(_localctx)->Condition = expressionExt(0);
      setState(608);
      match(azslParser::RightParen);
      setState(609);
      embeddedStatement();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<azslParser::DoStatementContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(614);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == azslParser::LeftBracket) {
        setState(611);
        attributeSpecifier();
        setState(616);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(617);
      match(azslParser::Do);
      setState(618);
      embeddedStatement();
      setState(619);
      match(azslParser::While);
      setState(620);
      match(azslParser::LeftParen);
      setState(621);
      antlrcpp::downCast<DoStatementContext *>(_localctx)->Condition = expressionExt(0);
      setState(622);
      match(azslParser::RightParen);
      setState(623);
      match(azslParser::Semi);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<azslParser::ForStatementContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(628);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == azslParser::LeftBracket) {
        setState(625);
        attributeSpecifier();
        setState(630);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(631);
      match(azslParser::For);
      setState(632);
      match(azslParser::LeftParen);
      setState(634);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << azslParser::AppendStructuredBuffer)
        | (1ULL << azslParser::Bool)
        | (1ULL << azslParser::Bool1)
        | (1ULL << azslParser::Bool2)
        | (1ULL << azslParser::Bool3)
        | (1ULL << azslParser::Bool4)
        | (1ULL << azslParser::Bool1x1)
        | (1ULL << azslParser::Bool1x2)
        | (1ULL << azslParser::Bool1x3)
        | (1ULL << azslParser::Bool1x4)
        | (1ULL << azslParser::Bool2x1)
        | (1ULL << azslParser::Bool2x2)
        | (1ULL << azslParser::Bool2x3)
        | (1ULL << azslParser::Bool2x4)
        | (1ULL << azslParser::Bool3x1)
        | (1ULL << azslParser::Bool3x2)
        | (1ULL << azslParser::Bool3x3)
        | (1ULL << azslParser::Bool3x4)
        | (1ULL << azslParser::Bool4x1)
        | (1ULL << azslParser::Bool4x2)
        | (1ULL << azslParser::Bool4x3)
        | (1ULL << azslParser::Bool4x4)
        | (1ULL << azslParser::Buffer)
        | (1ULL << azslParser::BuiltInTriangleIntersectionAttributes)
        | (1ULL << azslParser::ByteAddressBuffer)
        | (1ULL << azslParser::Centroid)
        | (1ULL << azslParser::ConstantBuffer)
        | (1ULL << azslParser::ConstantBufferCamel)
        | (1ULL << azslParser::Class)
        | (1ULL << azslParser::ColumnMajor)
        | (1ULL << azslParser::Const)
        | (1ULL << azslParser::ConsumeStructuredBuffer)
        | (1ULL << azslParser::Double)
        | (1ULL << azslParser::Double1)
        | (1ULL << azslParser::Double2)
        | (1ULL << azslParser::Double3)
        | (1ULL << azslParser::Double4)
        | (1ULL << azslParser::Double1x1)
        | (1ULL << azslParser::Double1x2)
        | (1ULL << azslParser::Double1x3)
        | (1ULL << azslParser::Double1x4)
        | (1ULL << azslParser::Double2x1)
        | (1ULL << azslParser::Double2x2)
        | (1ULL << azslParser::Double2x3)
        | (1ULL << azslParser::Double2x4)
        | (1ULL << azslParser::Double3x1)
        | (1ULL << azslParser::Double3x2)
        | (1ULL << azslParser::Double3x3)
        | (1ULL << azslParser::Double3x4)
        | (1ULL << azslParser::Double4x1)
        | (1ULL << azslParser::Double4x2)
        | (1ULL << azslParser::Double4x3)
        | (1ULL << azslParser::Double4x4)
        | (1ULL << azslParser::Enum))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (azslParser::Extern - 64))
        | (1ULL << (azslParser::Float - 64))
        | (1ULL << (azslParser::Float1 - 64))
        | (1ULL << (azslParser::Float2 - 64))
        | (1ULL << (azslParser::Float3 - 64))
        | (1ULL << (azslParser::Float4 - 64))
        | (1ULL << (azslParser::Float1x1 - 64))
        | (1ULL << (azslParser::Float1x2 - 64))
        | (1ULL << (azslParser::Float1x3 - 64))
        | (1ULL << (azslParser::Float1x4 - 64))
        | (1ULL << (azslParser::Float2x1 - 64))
        | (1ULL << (azslParser::Float2x2 - 64))
        | (1ULL << (azslParser::Float2x3 - 64))
        | (1ULL << (azslParser::Float2x4 - 64))
        | (1ULL << (azslParser::Float3x1 - 64))
        | (1ULL << (azslParser::Float3x2 - 64))
        | (1ULL << (azslParser::Float3x3 - 64))
        | (1ULL << (azslParser::Float3x4 - 64))
        | (1ULL << (azslParser::Float4x1 - 64))
        | (1ULL << (azslParser::Float4x2 - 64))
        | (1ULL << (azslParser::Float4x3 - 64))
        | (1ULL << (azslParser::Float4x4 - 64))
        | (1ULL << (azslParser::Groupshared - 64))
        | (1ULL << (azslParser::Globallycoherent - 64))
        | (1ULL << (azslParser::Half - 64))
        | (1ULL << (azslParser::Half1 - 64))
        | (1ULL << (azslParser::Half2 - 64))
        | (1ULL << (azslParser::Half3 - 64))
        | (1ULL << (azslParser::Half4 - 64))
        | (1ULL << (azslParser::Half1x1 - 64))
        | (1ULL << (azslParser::Half1x2 - 64))
        | (1ULL << (azslParser::Half1x3 - 64))
        | (1ULL << (azslParser::Half1x4 - 64))
        | (1ULL << (azslParser::Half2x1 - 64))
        | (1ULL << (azslParser::Half2x2 - 64))
        | (1ULL << (azslParser::Half2x3 - 64))
        | (1ULL << (azslParser::Half2x4 - 64))
        | (1ULL << (azslParser::Half3x1 - 64))
        | (1ULL << (azslParser::Half3x2 - 64))
        | (1ULL << (azslParser::Half3x3 - 64))
        | (1ULL << (azslParser::Half3x4 - 64))
        | (1ULL << (azslParser::Half4x1 - 64))
        | (1ULL << (azslParser::Half4x2 - 64))
        | (1ULL << (azslParser::Half4x3 - 64))
        | (1ULL << (azslParser::Half4x4 - 64))
        | (1ULL << (azslParser::In - 64))
        | (1ULL << (azslParser::Inline - 64))
        | (1ULL << (azslParser::Rootconstant - 64))
        | (1ULL << (azslParser::Inout - 64))
        | (1ULL << (azslParser::InputPatch - 64))
        | (1ULL << (azslParser::Int - 64))
        | (1ULL << (azslParser::Int16_t - 64))
        | (1ULL << (azslParser::Int32_t - 64))
        | (1ULL << (azslParser::Int64_t - 64))
        | (1ULL << (azslParser::Int1 - 64))
        | (1ULL << (azslParser::Int2 - 64))
        | (1ULL << (azslParser::Int3 - 64))
        | (1ULL << (azslParser::Int4 - 64))
        | (1ULL << (azslParser::Int1x1 - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (azslParser::Int1x2 - 128))
        | (1ULL << (azslParser::Int1x3 - 128))
        | (1ULL << (azslParser::Int1x4 - 128))
        | (1ULL << (azslParser::Int2x1 - 128))
        | (1ULL << (azslParser::Int2x2 - 128))
        | (1ULL << (azslParser::Int2x3 - 128))
        | (1ULL << (azslParser::Int2x4 - 128))
        | (1ULL << (azslParser::Int3x1 - 128))
        | (1ULL << (azslParser::Int3x2 - 128))
        | (1ULL << (azslParser::Int3x3 - 128))
        | (1ULL << (azslParser::Int3x4 - 128))
        | (1ULL << (azslParser::Int4x1 - 128))
        | (1ULL << (azslParser::Int4x2 - 128))
        | (1ULL << (azslParser::Int4x3 - 128))
        | (1ULL << (azslParser::Int4x4 - 128))
        | (1ULL << (azslParser::Interface - 128))
        | (1ULL << (azslParser::Line_ - 128))
        | (1ULL << (azslParser::LineAdj - 128))
        | (1ULL << (azslParser::Linear - 128))
        | (1ULL << (azslParser::LineStream - 128))
        | (1ULL << (azslParser::Matrix - 128))
        | (1ULL << (azslParser::Nointerpolation - 128))
        | (1ULL << (azslParser::Noperspective - 128))
        | (1ULL << (azslParser::Option - 128))
        | (1ULL << (azslParser::Out - 128))
        | (1ULL << (azslParser::OutputPatch - 128))
        | (1ULL << (azslParser::Point - 128))
        | (1ULL << (azslParser::PointStream - 128))
        | (1ULL << (azslParser::Precise - 128))
        | (1ULL << (azslParser::RasterizerOrderedBuffer - 128))
        | (1ULL << (azslParser::RasterizerOrderedByteAddressBuffer - 128))
        | (1ULL << (azslParser::RasterizerOrderedStructuredBuffer - 128))
        | (1ULL << (azslParser::RasterizerOrderedTexture1D - 128))
        | (1ULL << (azslParser::RasterizerOrderedTexture1DArray - 128))
        | (1ULL << (azslParser::RasterizerOrderedTexture2D - 128))
        | (1ULL << (azslParser::RasterizerOrderedTexture2DArray - 128))
        | (1ULL << (azslParser::RasterizerOrderedTexture3D - 128))
        | (1ULL << (azslParser::RayDesc - 128))
        | (1ULL << (azslParser::RaytracingAccelerationStructure - 128))
        | (1ULL << (azslParser::RowMajor - 128))
        | (1ULL << (azslParser::RWBuffer - 128))
        | (1ULL << (azslParser::RWByteAddressBuffer - 128))
        | (1ULL << (azslParser::RWStructuredBuffer - 128))
        | (1ULL << (azslParser::RWTexture1D - 128))
        | (1ULL << (azslParser::RWTexture1DArray - 128))
        | (1ULL << (azslParser::RWTexture2D - 128))
        | (1ULL << (azslParser::RWTexture2DArray - 128))
        | (1ULL << (azslParser::RWTexture3D - 128))
        | (1ULL << (azslParser::Sample - 128))
        | (1ULL << (azslParser::Sampler - 128))
        | (1ULL << (azslParser::SamplerCapitalS - 128))
        | (1ULL << (azslParser::SamplerComparisonState - 128))
        | (1ULL << (azslParser::SamplerStateCamel - 128))
        | (1ULL << (azslParser::SamplerState - 128))
        | (1ULL << (azslParser::Shared - 128))
        | (1ULL << (azslParser::SNorm - 128))
        | (1ULL << (azslParser::Static - 128))
        | (1ULL << (azslParser::Struct - 128)))) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 192)) & ((1ULL << (azslParser::StructuredBuffer - 192))
        | (1ULL << (azslParser::SubpassInput - 192))
        | (1ULL << (azslParser::SubpassInputMS - 192))
        | (1ULL << (azslParser::Texture1D - 192))
        | (1ULL << (azslParser::Texture1DArray - 192))
        | (1ULL << (azslParser::Texture2D - 192))
        | (1ULL << (azslParser::Texture2DArray - 192))
        | (1ULL << (azslParser::Texture2DMS - 192))
        | (1ULL << (azslParser::Texture2DMSArray - 192))
        | (1ULL << (azslParser::Texture3D - 192))
        | (1ULL << (azslParser::TextureCube - 192))
        | (1ULL << (azslParser::TextureCubeArray - 192))
        | (1ULL << (azslParser::Triangle - 192))
        | (1ULL << (azslParser::TriangleAdj - 192))
        | (1ULL << (azslParser::TriangleStream - 192))
        | (1ULL << (azslParser::Uniform - 192))
        | (1ULL << (azslParser::Uint - 192))
        | (1ULL << (azslParser::Uint1 - 192))
        | (1ULL << (azslParser::Uint2 - 192))
        | (1ULL << (azslParser::Uint3 - 192))
        | (1ULL << (azslParser::Uint4 - 192))
        | (1ULL << (azslParser::Uint1x1 - 192))
        | (1ULL << (azslParser::Uint1x2 - 192))
        | (1ULL << (azslParser::Uint1x3 - 192))
        | (1ULL << (azslParser::Uint1x4 - 192))
        | (1ULL << (azslParser::Uint2x1 - 192))
        | (1ULL << (azslParser::Uint2x2 - 192))
        | (1ULL << (azslParser::Uint2x3 - 192))
        | (1ULL << (azslParser::Uint2x4 - 192))
        | (1ULL << (azslParser::Uint3x1 - 192))
        | (1ULL << (azslParser::Uint3x2 - 192))
        | (1ULL << (azslParser::Uint3x3 - 192))
        | (1ULL << (azslParser::Uint3x4 - 192))
        | (1ULL << (azslParser::Uint4x1 - 192))
        | (1ULL << (azslParser::Uint4x2 - 192))
        | (1ULL << (azslParser::Uint4x3 - 192))
        | (1ULL << (azslParser::Uint4x4 - 192))
        | (1ULL << (azslParser::Uint16_t - 192))
        | (1ULL << (azslParser::Uint32_t - 192))
        | (1ULL << (azslParser::Uint64_t - 192))
        | (1ULL << (azslParser::UNorm - 192))
        | (1ULL << (azslParser::Unsigned - 192))
        | (1ULL << (azslParser::Dword - 192))
        | (1ULL << (azslParser::Dword1 - 192))
        | (1ULL << (azslParser::Dword2 - 192))
        | (1ULL << (azslParser::Dword3 - 192))
        | (1ULL << (azslParser::Dword4 - 192))
        | (1ULL << (azslParser::Dword1x1 - 192))
        | (1ULL << (azslParser::Dword1x2 - 192))
        | (1ULL << (azslParser::Dword1x3 - 192))
        | (1ULL << (azslParser::Dword1x4 - 192))
        | (1ULL << (azslParser::Dword2x1 - 192))
        | (1ULL << (azslParser::Dword2x2 - 192))
        | (1ULL << (azslParser::Dword2x3 - 192))
        | (1ULL << (azslParser::Dword2x4 - 192))
        | (1ULL << (azslParser::Dword3x1 - 192))
        | (1ULL << (azslParser::Dword3x2 - 192))
        | (1ULL << (azslParser::Dword3x3 - 192))
        | (1ULL << (azslParser::Dword3x4 - 192))
        | (1ULL << (azslParser::Dword4x1 - 192))
        | (1ULL << (azslParser::Dword4x2 - 192))
        | (1ULL << (azslParser::Dword4x3 - 192)))) != 0) || ((((_la - 256) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 256)) & ((1ULL << (azslParser::Dword4x4 - 256))
        | (1ULL << (azslParser::Vector - 256))
        | (1ULL << (azslParser::Volatile - 256))
        | (1ULL << (azslParser::Void - 256))
        | (1ULL << (azslParser::StateObjectConfig - 256))
        | (1ULL << (azslParser::LocalRootSignature - 256))
        | (1ULL << (azslParser::GlobalRootSignature - 256))
        | (1ULL << (azslParser::SubobjectToExportsAssociation - 256))
        | (1ULL << (azslParser::RaytracingShaderConfig - 256))
        | (1ULL << (azslParser::RaytracingPipelineConfig - 256))
        | (1ULL << (azslParser::RaytracingPipelineConfig1 - 256))
        | (1ULL << (azslParser::TriangleHitGroup - 256))
        | (1ULL << (azslParser::ProceduralPrimitiveHitGroup - 256))
        | (1ULL << (azslParser::LeftParen - 256))
        | (1ULL << (azslParser::LeftBracket - 256))
        | (1ULL << (azslParser::LeftDoubleBracket - 256))
        | (1ULL << (azslParser::Plus - 256))
        | (1ULL << (azslParser::PlusPlus - 256)))) != 0) || ((((_la - 320) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 320)) & ((1ULL << (azslParser::Minus - 320))
        | (1ULL << (azslParser::MinusMinus - 320))
        | (1ULL << (azslParser::Not - 320))
        | (1ULL << (azslParser::Tilde - 320))
        | (1ULL << (azslParser::ColonColon - 320))
        | (1ULL << (azslParser::True - 320))
        | (1ULL << (azslParser::False - 320))
        | (1ULL << (azslParser::KW_Typeof - 320))
        | (1ULL << (azslParser::Identifier - 320))
        | (1ULL << (azslParser::IntegerLiteral - 320))
        | (1ULL << (azslParser::FloatLiteral - 320))
        | (1ULL << (azslParser::StringLiteral - 320)))) != 0)) {
        setState(633);
        forInitializer();
      }
      setState(636);
      match(azslParser::Semi);
      setState(638);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << azslParser::Bool)
        | (1ULL << azslParser::Bool1)
        | (1ULL << azslParser::Bool2)
        | (1ULL << azslParser::Bool3)
        | (1ULL << azslParser::Bool4)
        | (1ULL << azslParser::Bool1x1)
        | (1ULL << azslParser::Bool1x2)
        | (1ULL << azslParser::Bool1x3)
        | (1ULL << azslParser::Bool1x4)
        | (1ULL << azslParser::Bool2x1)
        | (1ULL << azslParser::Bool2x2)
        | (1ULL << azslParser::Bool2x3)
        | (1ULL << azslParser::Bool2x4)
        | (1ULL << azslParser::Bool3x1)
        | (1ULL << azslParser::Bool3x2)
        | (1ULL << azslParser::Bool3x3)
        | (1ULL << azslParser::Bool3x4)
        | (1ULL << azslParser::Bool4x1)
        | (1ULL << azslParser::Bool4x2)
        | (1ULL << azslParser::Bool4x3)
        | (1ULL << azslParser::Bool4x4)
        | (1ULL << azslParser::Double)
        | (1ULL << azslParser::Double1)
        | (1ULL << azslParser::Double2)
        | (1ULL << azslParser::Double3)
        | (1ULL << azslParser::Double4)
        | (1ULL << azslParser::Double1x1)
        | (1ULL << azslParser::Double1x2)
        | (1ULL << azslParser::Double1x3)
        | (1ULL << azslParser::Double1x4)
        | (1ULL << azslParser::Double2x1)
        | (1ULL << azslParser::Double2x2)
        | (1ULL << azslParser::Double2x3)
        | (1ULL << azslParser::Double2x4)
        | (1ULL << azslParser::Double3x1)
        | (1ULL << azslParser::Double3x2)
        | (1ULL << azslParser::Double3x3)
        | (1ULL << azslParser::Double3x4)
        | (1ULL << azslParser::Double4x1)
        | (1ULL << azslParser::Double4x2)
        | (1ULL << azslParser::Double4x3)
        | (1ULL << azslParser::Double4x4))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 67)) & ((1ULL << (azslParser::Float - 67))
        | (1ULL << (azslParser::Float1 - 67))
        | (1ULL << (azslParser::Float2 - 67))
        | (1ULL << (azslParser::Float3 - 67))
        | (1ULL << (azslParser::Float4 - 67))
        | (1ULL << (azslParser::Float1x1 - 67))
        | (1ULL << (azslParser::Float1x2 - 67))
        | (1ULL << (azslParser::Float1x3 - 67))
        | (1ULL << (azslParser::Float1x4 - 67))
        | (1ULL << (azslParser::Float2x1 - 67))
        | (1ULL << (azslParser::Float2x2 - 67))
        | (1ULL << (azslParser::Float2x3 - 67))
        | (1ULL << (azslParser::Float2x4 - 67))
        | (1ULL << (azslParser::Float3x1 - 67))
        | (1ULL << (azslParser::Float3x2 - 67))
        | (1ULL << (azslParser::Float3x3 - 67))
        | (1ULL << (azslParser::Float3x4 - 67))
        | (1ULL << (azslParser::Float4x1 - 67))
        | (1ULL << (azslParser::Float4x2 - 67))
        | (1ULL << (azslParser::Float4x3 - 67))
        | (1ULL << (azslParser::Float4x4 - 67))
        | (1ULL << (azslParser::Half - 67))
        | (1ULL << (azslParser::Half1 - 67))
        | (1ULL << (azslParser::Half2 - 67))
        | (1ULL << (azslParser::Half3 - 67))
        | (1ULL << (azslParser::Half4 - 67))
        | (1ULL << (azslParser::Half1x1 - 67))
        | (1ULL << (azslParser::Half1x2 - 67))
        | (1ULL << (azslParser::Half1x3 - 67))
        | (1ULL << (azslParser::Half1x4 - 67))
        | (1ULL << (azslParser::Half2x1 - 67))
        | (1ULL << (azslParser::Half2x2 - 67))
        | (1ULL << (azslParser::Half2x3 - 67))
        | (1ULL << (azslParser::Half2x4 - 67))
        | (1ULL << (azslParser::Half3x1 - 67))
        | (1ULL << (azslParser::Half3x2 - 67))
        | (1ULL << (azslParser::Half3x3 - 67))
        | (1ULL << (azslParser::Half3x4 - 67))
        | (1ULL << (azslParser::Half4x1 - 67))
        | (1ULL << (azslParser::Half4x2 - 67))
        | (1ULL << (azslParser::Half4x3 - 67))
        | (1ULL << (azslParser::Half4x4 - 67))
        | (1ULL << (azslParser::Int - 67))
        | (1ULL << (azslParser::Int16_t - 67))
        | (1ULL << (azslParser::Int32_t - 67))
        | (1ULL << (azslParser::Int64_t - 67))
        | (1ULL << (azslParser::Int1 - 67))
        | (1ULL << (azslParser::Int2 - 67))
        | (1ULL << (azslParser::Int3 - 67))
        | (1ULL << (azslParser::Int4 - 67))
        | (1ULL << (azslParser::Int1x1 - 67))
        | (1ULL << (azslParser::Int1x2 - 67))
        | (1ULL << (azslParser::Int1x3 - 67))
        | (1ULL << (azslParser::Int1x4 - 67)))) != 0) || ((((_la - 131) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 131)) & ((1ULL << (azslParser::Int2x1 - 131))
        | (1ULL << (azslParser::Int2x2 - 131))
        | (1ULL << (azslParser::Int2x3 - 131))
        | (1ULL << (azslParser::Int2x4 - 131))
        | (1ULL << (azslParser::Int3x1 - 131))
        | (1ULL << (azslParser::Int3x2 - 131))
        | (1ULL << (azslParser::Int3x3 - 131))
        | (1ULL << (azslParser::Int3x4 - 131))
        | (1ULL << (azslParser::Int4x1 - 131))
        | (1ULL << (azslParser::Int4x2 - 131))
        | (1ULL << (azslParser::Int4x3 - 131))
        | (1ULL << (azslParser::Int4x4 - 131))
        | (1ULL << (azslParser::Matrix - 131)))) != 0) || ((((_la - 210) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 210)) & ((1ULL << (azslParser::Uint - 210))
        | (1ULL << (azslParser::Uint1 - 210))
        | (1ULL << (azslParser::Uint2 - 210))
        | (1ULL << (azslParser::Uint3 - 210))
        | (1ULL << (azslParser::Uint4 - 210))
        | (1ULL << (azslParser::Uint1x1 - 210))
        | (1ULL << (azslParser::Uint1x2 - 210))
        | (1ULL << (azslParser::Uint1x3 - 210))
        | (1ULL << (azslParser::Uint1x4 - 210))
        | (1ULL << (azslParser::Uint2x1 - 210))
        | (1ULL << (azslParser::Uint2x2 - 210))
        | (1ULL << (azslParser::Uint2x3 - 210))
        | (1ULL << (azslParser::Uint2x4 - 210))
        | (1ULL << (azslParser::Uint3x1 - 210))
        | (1ULL << (azslParser::Uint3x2 - 210))
        | (1ULL << (azslParser::Uint3x3 - 210))
        | (1ULL << (azslParser::Uint3x4 - 210))
        | (1ULL << (azslParser::Uint4x1 - 210))
        | (1ULL << (azslParser::Uint4x2 - 210))
        | (1ULL << (azslParser::Uint4x3 - 210))
        | (1ULL << (azslParser::Uint4x4 - 210))
        | (1ULL << (azslParser::Uint16_t - 210))
        | (1ULL << (azslParser::Uint32_t - 210))
        | (1ULL << (azslParser::Uint64_t - 210))
        | (1ULL << (azslParser::Dword - 210))
        | (1ULL << (azslParser::Dword1 - 210))
        | (1ULL << (azslParser::Dword2 - 210))
        | (1ULL << (azslParser::Dword3 - 210))
        | (1ULL << (azslParser::Dword4 - 210))
        | (1ULL << (azslParser::Dword1x1 - 210))
        | (1ULL << (azslParser::Dword1x2 - 210))
        | (1ULL << (azslParser::Dword1x3 - 210))
        | (1ULL << (azslParser::Dword1x4 - 210))
        | (1ULL << (azslParser::Dword2x1 - 210))
        | (1ULL << (azslParser::Dword2x2 - 210))
        | (1ULL << (azslParser::Dword2x3 - 210))
        | (1ULL << (azslParser::Dword2x4 - 210))
        | (1ULL << (azslParser::Dword3x1 - 210))
        | (1ULL << (azslParser::Dword3x2 - 210))
        | (1ULL << (azslParser::Dword3x3 - 210))
        | (1ULL << (azslParser::Dword3x4 - 210))
        | (1ULL << (azslParser::Dword4x1 - 210))
        | (1ULL << (azslParser::Dword4x2 - 210))
        | (1ULL << (azslParser::Dword4x3 - 210))
        | (1ULL << (azslParser::Dword4x4 - 210))
        | (1ULL << (azslParser::Vector - 210)))) != 0) || ((((_la - 305) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 305)) & ((1ULL << (azslParser::LeftParen - 305))
        | (1ULL << (azslParser::Plus - 305))
        | (1ULL << (azslParser::PlusPlus - 305))
        | (1ULL << (azslParser::Minus - 305))
        | (1ULL << (azslParser::MinusMinus - 305))
        | (1ULL << (azslParser::Not - 305))
        | (1ULL << (azslParser::Tilde - 305))
        | (1ULL << (azslParser::ColonColon - 305))
        | (1ULL << (azslParser::True - 305))
        | (1ULL << (azslParser::False - 305)))) != 0) || ((((_la - 369) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 369)) & ((1ULL << (azslParser::Identifier - 369))
        | (1ULL << (azslParser::IntegerLiteral - 369))
        | (1ULL << (azslParser::FloatLiteral - 369))
        | (1ULL << (azslParser::StringLiteral - 369)))) != 0)) {
        setState(637);
        antlrcpp::downCast<ForStatementContext *>(_localctx)->Condition = expressionExt(0);
      }
      setState(640);
      match(azslParser::Semi);
      setState(642);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << azslParser::Bool)
        | (1ULL << azslParser::Bool1)
        | (1ULL << azslParser::Bool2)
        | (1ULL << azslParser::Bool3)
        | (1ULL << azslParser::Bool4)
        | (1ULL << azslParser::Bool1x1)
        | (1ULL << azslParser::Bool1x2)
        | (1ULL << azslParser::Bool1x3)
        | (1ULL << azslParser::Bool1x4)
        | (1ULL << azslParser::Bool2x1)
        | (1ULL << azslParser::Bool2x2)
        | (1ULL << azslParser::Bool2x3)
        | (1ULL << azslParser::Bool2x4)
        | (1ULL << azslParser::Bool3x1)
        | (1ULL << azslParser::Bool3x2)
        | (1ULL << azslParser::Bool3x3)
        | (1ULL << azslParser::Bool3x4)
        | (1ULL << azslParser::Bool4x1)
        | (1ULL << azslParser::Bool4x2)
        | (1ULL << azslParser::Bool4x3)
        | (1ULL << azslParser::Bool4x4)
        | (1ULL << azslParser::Double)
        | (1ULL << azslParser::Double1)
        | (1ULL << azslParser::Double2)
        | (1ULL << azslParser::Double3)
        | (1ULL << azslParser::Double4)
        | (1ULL << azslParser::Double1x1)
        | (1ULL << azslParser::Double1x2)
        | (1ULL << azslParser::Double1x3)
        | (1ULL << azslParser::Double1x4)
        | (1ULL << azslParser::Double2x1)
        | (1ULL << azslParser::Double2x2)
        | (1ULL << azslParser::Double2x3)
        | (1ULL << azslParser::Double2x4)
        | (1ULL << azslParser::Double3x1)
        | (1ULL << azslParser::Double3x2)
        | (1ULL << azslParser::Double3x3)
        | (1ULL << azslParser::Double3x4)
        | (1ULL << azslParser::Double4x1)
        | (1ULL << azslParser::Double4x2)
        | (1ULL << azslParser::Double4x3)
        | (1ULL << azslParser::Double4x4))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 67)) & ((1ULL << (azslParser::Float - 67))
        | (1ULL << (azslParser::Float1 - 67))
        | (1ULL << (azslParser::Float2 - 67))
        | (1ULL << (azslParser::Float3 - 67))
        | (1ULL << (azslParser::Float4 - 67))
        | (1ULL << (azslParser::Float1x1 - 67))
        | (1ULL << (azslParser::Float1x2 - 67))
        | (1ULL << (azslParser::Float1x3 - 67))
        | (1ULL << (azslParser::Float1x4 - 67))
        | (1ULL << (azslParser::Float2x1 - 67))
        | (1ULL << (azslParser::Float2x2 - 67))
        | (1ULL << (azslParser::Float2x3 - 67))
        | (1ULL << (azslParser::Float2x4 - 67))
        | (1ULL << (azslParser::Float3x1 - 67))
        | (1ULL << (azslParser::Float3x2 - 67))
        | (1ULL << (azslParser::Float3x3 - 67))
        | (1ULL << (azslParser::Float3x4 - 67))
        | (1ULL << (azslParser::Float4x1 - 67))
        | (1ULL << (azslParser::Float4x2 - 67))
        | (1ULL << (azslParser::Float4x3 - 67))
        | (1ULL << (azslParser::Float4x4 - 67))
        | (1ULL << (azslParser::Half - 67))
        | (1ULL << (azslParser::Half1 - 67))
        | (1ULL << (azslParser::Half2 - 67))
        | (1ULL << (azslParser::Half3 - 67))
        | (1ULL << (azslParser::Half4 - 67))
        | (1ULL << (azslParser::Half1x1 - 67))
        | (1ULL << (azslParser::Half1x2 - 67))
        | (1ULL << (azslParser::Half1x3 - 67))
        | (1ULL << (azslParser::Half1x4 - 67))
        | (1ULL << (azslParser::Half2x1 - 67))
        | (1ULL << (azslParser::Half2x2 - 67))
        | (1ULL << (azslParser::Half2x3 - 67))
        | (1ULL << (azslParser::Half2x4 - 67))
        | (1ULL << (azslParser::Half3x1 - 67))
        | (1ULL << (azslParser::Half3x2 - 67))
        | (1ULL << (azslParser::Half3x3 - 67))
        | (1ULL << (azslParser::Half3x4 - 67))
        | (1ULL << (azslParser::Half4x1 - 67))
        | (1ULL << (azslParser::Half4x2 - 67))
        | (1ULL << (azslParser::Half4x3 - 67))
        | (1ULL << (azslParser::Half4x4 - 67))
        | (1ULL << (azslParser::Int - 67))
        | (1ULL << (azslParser::Int16_t - 67))
        | (1ULL << (azslParser::Int32_t - 67))
        | (1ULL << (azslParser::Int64_t - 67))
        | (1ULL << (azslParser::Int1 - 67))
        | (1ULL << (azslParser::Int2 - 67))
        | (1ULL << (azslParser::Int3 - 67))
        | (1ULL << (azslParser::Int4 - 67))
        | (1ULL << (azslParser::Int1x1 - 67))
        | (1ULL << (azslParser::Int1x2 - 67))
        | (1ULL << (azslParser::Int1x3 - 67))
        | (1ULL << (azslParser::Int1x4 - 67)))) != 0) || ((((_la - 131) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 131)) & ((1ULL << (azslParser::Int2x1 - 131))
        | (1ULL << (azslParser::Int2x2 - 131))
        | (1ULL << (azslParser::Int2x3 - 131))
        | (1ULL << (azslParser::Int2x4 - 131))
        | (1ULL << (azslParser::Int3x1 - 131))
        | (1ULL << (azslParser::Int3x2 - 131))
        | (1ULL << (azslParser::Int3x3 - 131))
        | (1ULL << (azslParser::Int3x4 - 131))
        | (1ULL << (azslParser::Int4x1 - 131))
        | (1ULL << (azslParser::Int4x2 - 131))
        | (1ULL << (azslParser::Int4x3 - 131))
        | (1ULL << (azslParser::Int4x4 - 131))
        | (1ULL << (azslParser::Matrix - 131)))) != 0) || ((((_la - 210) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 210)) & ((1ULL << (azslParser::Uint - 210))
        | (1ULL << (azslParser::Uint1 - 210))
        | (1ULL << (azslParser::Uint2 - 210))
        | (1ULL << (azslParser::Uint3 - 210))
        | (1ULL << (azslParser::Uint4 - 210))
        | (1ULL << (azslParser::Uint1x1 - 210))
        | (1ULL << (azslParser::Uint1x2 - 210))
        | (1ULL << (azslParser::Uint1x3 - 210))
        | (1ULL << (azslParser::Uint1x4 - 210))
        | (1ULL << (azslParser::Uint2x1 - 210))
        | (1ULL << (azslParser::Uint2x2 - 210))
        | (1ULL << (azslParser::Uint2x3 - 210))
        | (1ULL << (azslParser::Uint2x4 - 210))
        | (1ULL << (azslParser::Uint3x1 - 210))
        | (1ULL << (azslParser::Uint3x2 - 210))
        | (1ULL << (azslParser::Uint3x3 - 210))
        | (1ULL << (azslParser::Uint3x4 - 210))
        | (1ULL << (azslParser::Uint4x1 - 210))
        | (1ULL << (azslParser::Uint4x2 - 210))
        | (1ULL << (azslParser::Uint4x3 - 210))
        | (1ULL << (azslParser::Uint4x4 - 210))
        | (1ULL << (azslParser::Uint16_t - 210))
        | (1ULL << (azslParser::Uint32_t - 210))
        | (1ULL << (azslParser::Uint64_t - 210))
        | (1ULL << (azslParser::Dword - 210))
        | (1ULL << (azslParser::Dword1 - 210))
        | (1ULL << (azslParser::Dword2 - 210))
        | (1ULL << (azslParser::Dword3 - 210))
        | (1ULL << (azslParser::Dword4 - 210))
        | (1ULL << (azslParser::Dword1x1 - 210))
        | (1ULL << (azslParser::Dword1x2 - 210))
        | (1ULL << (azslParser::Dword1x3 - 210))
        | (1ULL << (azslParser::Dword1x4 - 210))
        | (1ULL << (azslParser::Dword2x1 - 210))
        | (1ULL << (azslParser::Dword2x2 - 210))
        | (1ULL << (azslParser::Dword2x3 - 210))
        | (1ULL << (azslParser::Dword2x4 - 210))
        | (1ULL << (azslParser::Dword3x1 - 210))
        | (1ULL << (azslParser::Dword3x2 - 210))
        | (1ULL << (azslParser::Dword3x3 - 210))
        | (1ULL << (azslParser::Dword3x4 - 210))
        | (1ULL << (azslParser::Dword4x1 - 210))
        | (1ULL << (azslParser::Dword4x2 - 210))
        | (1ULL << (azslParser::Dword4x3 - 210))
        | (1ULL << (azslParser::Dword4x4 - 210))
        | (1ULL << (azslParser::Vector - 210)))) != 0) || ((((_la - 305) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 305)) & ((1ULL << (azslParser::LeftParen - 305))
        | (1ULL << (azslParser::Plus - 305))
        | (1ULL << (azslParser::PlusPlus - 305))
        | (1ULL << (azslParser::Minus - 305))
        | (1ULL << (azslParser::MinusMinus - 305))
        | (1ULL << (azslParser::Not - 305))
        | (1ULL << (azslParser::Tilde - 305))
        | (1ULL << (azslParser::ColonColon - 305))
        | (1ULL << (azslParser::True - 305))
        | (1ULL << (azslParser::False - 305)))) != 0) || ((((_la - 369) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 369)) & ((1ULL << (azslParser::Identifier - 369))
        | (1ULL << (azslParser::IntegerLiteral - 369))
        | (1ULL << (azslParser::FloatLiteral - 369))
        | (1ULL << (azslParser::StringLiteral - 369)))) != 0)) {
        setState(641);
        antlrcpp::downCast<ForStatementContext *>(_localctx)->iterator = expressionExt(0);
      }
      setState(644);
      match(azslParser::RightParen);
      setState(645);
      embeddedStatement();
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<azslParser::BreakStatementContext>(_localctx);
      enterOuterAlt(_localctx, 9);
      setState(646);
      match(azslParser::Break);
      setState(647);
      match(azslParser::Semi);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<azslParser::ContinueStatementContext>(_localctx);
      enterOuterAlt(_localctx, 10);
      setState(648);
      match(azslParser::Continue);
      setState(649);
      match(azslParser::Semi);
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<azslParser::DiscardStatementContext>(_localctx);
      enterOuterAlt(_localctx, 11);
      setState(650);
      match(azslParser::Discard);
      setState(651);
      match(azslParser::Semi);
      break;
    }

    case 12: {
      _localctx = _tracker.createInstance<azslParser::ReturnStatementContext>(_localctx);
      enterOuterAlt(_localctx, 12);
      setState(652);
      match(azslParser::Return);
      setState(654);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << azslParser::Bool)
        | (1ULL << azslParser::Bool1)
        | (1ULL << azslParser::Bool2)
        | (1ULL << azslParser::Bool3)
        | (1ULL << azslParser::Bool4)
        | (1ULL << azslParser::Bool1x1)
        | (1ULL << azslParser::Bool1x2)
        | (1ULL << azslParser::Bool1x3)
        | (1ULL << azslParser::Bool1x4)
        | (1ULL << azslParser::Bool2x1)
        | (1ULL << azslParser::Bool2x2)
        | (1ULL << azslParser::Bool2x3)
        | (1ULL << azslParser::Bool2x4)
        | (1ULL << azslParser::Bool3x1)
        | (1ULL << azslParser::Bool3x2)
        | (1ULL << azslParser::Bool3x3)
        | (1ULL << azslParser::Bool3x4)
        | (1ULL << azslParser::Bool4x1)
        | (1ULL << azslParser::Bool4x2)
        | (1ULL << azslParser::Bool4x3)
        | (1ULL << azslParser::Bool4x4)
        | (1ULL << azslParser::Double)
        | (1ULL << azslParser::Double1)
        | (1ULL << azslParser::Double2)
        | (1ULL << azslParser::Double3)
        | (1ULL << azslParser::Double4)
        | (1ULL << azslParser::Double1x1)
        | (1ULL << azslParser::Double1x2)
        | (1ULL << azslParser::Double1x3)
        | (1ULL << azslParser::Double1x4)
        | (1ULL << azslParser::Double2x1)
        | (1ULL << azslParser::Double2x2)
        | (1ULL << azslParser::Double2x3)
        | (1ULL << azslParser::Double2x4)
        | (1ULL << azslParser::Double3x1)
        | (1ULL << azslParser::Double3x2)
        | (1ULL << azslParser::Double3x3)
        | (1ULL << azslParser::Double3x4)
        | (1ULL << azslParser::Double4x1)
        | (1ULL << azslParser::Double4x2)
        | (1ULL << azslParser::Double4x3)
        | (1ULL << azslParser::Double4x4))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 67)) & ((1ULL << (azslParser::Float - 67))
        | (1ULL << (azslParser::Float1 - 67))
        | (1ULL << (azslParser::Float2 - 67))
        | (1ULL << (azslParser::Float3 - 67))
        | (1ULL << (azslParser::Float4 - 67))
        | (1ULL << (azslParser::Float1x1 - 67))
        | (1ULL << (azslParser::Float1x2 - 67))
        | (1ULL << (azslParser::Float1x3 - 67))
        | (1ULL << (azslParser::Float1x4 - 67))
        | (1ULL << (azslParser::Float2x1 - 67))
        | (1ULL << (azslParser::Float2x2 - 67))
        | (1ULL << (azslParser::Float2x3 - 67))
        | (1ULL << (azslParser::Float2x4 - 67))
        | (1ULL << (azslParser::Float3x1 - 67))
        | (1ULL << (azslParser::Float3x2 - 67))
        | (1ULL << (azslParser::Float3x3 - 67))
        | (1ULL << (azslParser::Float3x4 - 67))
        | (1ULL << (azslParser::Float4x1 - 67))
        | (1ULL << (azslParser::Float4x2 - 67))
        | (1ULL << (azslParser::Float4x3 - 67))
        | (1ULL << (azslParser::Float4x4 - 67))
        | (1ULL << (azslParser::Half - 67))
        | (1ULL << (azslParser::Half1 - 67))
        | (1ULL << (azslParser::Half2 - 67))
        | (1ULL << (azslParser::Half3 - 67))
        | (1ULL << (azslParser::Half4 - 67))
        | (1ULL << (azslParser::Half1x1 - 67))
        | (1ULL << (azslParser::Half1x2 - 67))
        | (1ULL << (azslParser::Half1x3 - 67))
        | (1ULL << (azslParser::Half1x4 - 67))
        | (1ULL << (azslParser::Half2x1 - 67))
        | (1ULL << (azslParser::Half2x2 - 67))
        | (1ULL << (azslParser::Half2x3 - 67))
        | (1ULL << (azslParser::Half2x4 - 67))
        | (1ULL << (azslParser::Half3x1 - 67))
        | (1ULL << (azslParser::Half3x2 - 67))
        | (1ULL << (azslParser::Half3x3 - 67))
        | (1ULL << (azslParser::Half3x4 - 67))
        | (1ULL << (azslParser::Half4x1 - 67))
        | (1ULL << (azslParser::Half4x2 - 67))
        | (1ULL << (azslParser::Half4x3 - 67))
        | (1ULL << (azslParser::Half4x4 - 67))
        | (1ULL << (azslParser::Int - 67))
        | (1ULL << (azslParser::Int16_t - 67))
        | (1ULL << (azslParser::Int32_t - 67))
        | (1ULL << (azslParser::Int64_t - 67))
        | (1ULL << (azslParser::Int1 - 67))
        | (1ULL << (azslParser::Int2 - 67))
        | (1ULL << (azslParser::Int3 - 67))
        | (1ULL << (azslParser::Int4 - 67))
        | (1ULL << (azslParser::Int1x1 - 67))
        | (1ULL << (azslParser::Int1x2 - 67))
        | (1ULL << (azslParser::Int1x3 - 67))
        | (1ULL << (azslParser::Int1x4 - 67)))) != 0) || ((((_la - 131) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 131)) & ((1ULL << (azslParser::Int2x1 - 131))
        | (1ULL << (azslParser::Int2x2 - 131))
        | (1ULL << (azslParser::Int2x3 - 131))
        | (1ULL << (azslParser::Int2x4 - 131))
        | (1ULL << (azslParser::Int3x1 - 131))
        | (1ULL << (azslParser::Int3x2 - 131))
        | (1ULL << (azslParser::Int3x3 - 131))
        | (1ULL << (azslParser::Int3x4 - 131))
        | (1ULL << (azslParser::Int4x1 - 131))
        | (1ULL << (azslParser::Int4x2 - 131))
        | (1ULL << (azslParser::Int4x3 - 131))
        | (1ULL << (azslParser::Int4x4 - 131))
        | (1ULL << (azslParser::Matrix - 131)))) != 0) || ((((_la - 210) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 210)) & ((1ULL << (azslParser::Uint - 210))
        | (1ULL << (azslParser::Uint1 - 210))
        | (1ULL << (azslParser::Uint2 - 210))
        | (1ULL << (azslParser::Uint3 - 210))
        | (1ULL << (azslParser::Uint4 - 210))
        | (1ULL << (azslParser::Uint1x1 - 210))
        | (1ULL << (azslParser::Uint1x2 - 210))
        | (1ULL << (azslParser::Uint1x3 - 210))
        | (1ULL << (azslParser::Uint1x4 - 210))
        | (1ULL << (azslParser::Uint2x1 - 210))
        | (1ULL << (azslParser::Uint2x2 - 210))
        | (1ULL << (azslParser::Uint2x3 - 210))
        | (1ULL << (azslParser::Uint2x4 - 210))
        | (1ULL << (azslParser::Uint3x1 - 210))
        | (1ULL << (azslParser::Uint3x2 - 210))
        | (1ULL << (azslParser::Uint3x3 - 210))
        | (1ULL << (azslParser::Uint3x4 - 210))
        | (1ULL << (azslParser::Uint4x1 - 210))
        | (1ULL << (azslParser::Uint4x2 - 210))
        | (1ULL << (azslParser::Uint4x3 - 210))
        | (1ULL << (azslParser::Uint4x4 - 210))
        | (1ULL << (azslParser::Uint16_t - 210))
        | (1ULL << (azslParser::Uint32_t - 210))
        | (1ULL << (azslParser::Uint64_t - 210))
        | (1ULL << (azslParser::Dword - 210))
        | (1ULL << (azslParser::Dword1 - 210))
        | (1ULL << (azslParser::Dword2 - 210))
        | (1ULL << (azslParser::Dword3 - 210))
        | (1ULL << (azslParser::Dword4 - 210))
        | (1ULL << (azslParser::Dword1x1 - 210))
        | (1ULL << (azslParser::Dword1x2 - 210))
        | (1ULL << (azslParser::Dword1x3 - 210))
        | (1ULL << (azslParser::Dword1x4 - 210))
        | (1ULL << (azslParser::Dword2x1 - 210))
        | (1ULL << (azslParser::Dword2x2 - 210))
        | (1ULL << (azslParser::Dword2x3 - 210))
        | (1ULL << (azslParser::Dword2x4 - 210))
        | (1ULL << (azslParser::Dword3x1 - 210))
        | (1ULL << (azslParser::Dword3x2 - 210))
        | (1ULL << (azslParser::Dword3x3 - 210))
        | (1ULL << (azslParser::Dword3x4 - 210))
        | (1ULL << (azslParser::Dword4x1 - 210))
        | (1ULL << (azslParser::Dword4x2 - 210))
        | (1ULL << (azslParser::Dword4x3 - 210))
        | (1ULL << (azslParser::Dword4x4 - 210))
        | (1ULL << (azslParser::Vector - 210)))) != 0) || ((((_la - 305) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 305)) & ((1ULL << (azslParser::LeftParen - 305))
        | (1ULL << (azslParser::Plus - 305))
        | (1ULL << (azslParser::PlusPlus - 305))
        | (1ULL << (azslParser::Minus - 305))
        | (1ULL << (azslParser::MinusMinus - 305))
        | (1ULL << (azslParser::Not - 305))
        | (1ULL << (azslParser::Tilde - 305))
        | (1ULL << (azslParser::ColonColon - 305))
        | (1ULL << (azslParser::True - 305))
        | (1ULL << (azslParser::False - 305)))) != 0) || ((((_la - 369) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 369)) & ((1ULL << (azslParser::Identifier - 369))
        | (1ULL << (azslParser::IntegerLiteral - 369))
        | (1ULL << (azslParser::FloatLiteral - 369))
        | (1ULL << (azslParser::StringLiteral - 369)))) != 0)) {
        setState(653);
        antlrcpp::downCast<ReturnStatementContext *>(_localctx)->Expr = expressionExt(0);
      }
      setState(656);
      match(azslParser::Semi);
      break;
    }

    case 13: {
      _localctx = _tracker.createInstance<azslParser::ExtenstionStatementContext>(_localctx);
      enterOuterAlt(_localctx, 13);
      setState(657);
      compilerExtensionStatement();
      break;
    }

    case 14: {
      _localctx = _tracker.createInstance<azslParser::TypeAliasingDefinitionStatementLabelContext>(_localctx);
      enterOuterAlt(_localctx, 14);
      setState(658);
      typeAliasingDefinitionStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseClauseContext ------------------------------------------------------------------

azslParser::ElseClauseContext::ElseClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::ElseClauseContext::Else() {
  return getToken(azslParser::Else, 0);
}

azslParser::EmbeddedStatementContext* azslParser::ElseClauseContext::embeddedStatement() {
  return getRuleContext<azslParser::EmbeddedStatementContext>(0);
}


size_t azslParser::ElseClauseContext::getRuleIndex() const {
  return azslParser::RuleElseClause;
}

void azslParser::ElseClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseClause(this);
}

void azslParser::ElseClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseClause(this);
}

azslParser::ElseClauseContext* azslParser::elseClause() {
  ElseClauseContext *_localctx = _tracker.createInstance<ElseClauseContext>(_ctx, getState());
  enterRule(_localctx, 84, azslParser::RuleElseClause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(661);
    match(azslParser::Else);
    setState(662);
    antlrcpp::downCast<ElseClauseContext *>(_localctx)->Stmt = embeddedStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

azslParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t azslParser::ExpressionContext::getRuleIndex() const {
  return azslParser::RuleExpression;
}

void azslParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParenthesizedExpressionContext ------------------------------------------------------------------

tree::TerminalNode* azslParser::ParenthesizedExpressionContext::LeftParen() {
  return getToken(azslParser::LeftParen, 0);
}

tree::TerminalNode* azslParser::ParenthesizedExpressionContext::RightParen() {
  return getToken(azslParser::RightParen, 0);
}

azslParser::ExpressionExtContext* azslParser::ParenthesizedExpressionContext::expressionExt() {
  return getRuleContext<azslParser::ExpressionExtContext>(0);
}

azslParser::ParenthesizedExpressionContext::ParenthesizedExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void azslParser::ParenthesizedExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthesizedExpression(this);
}
void azslParser::ParenthesizedExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthesizedExpression(this);
}
//----------------- MemberAccessExpressionContext ------------------------------------------------------------------

azslParser::ExpressionContext* azslParser::MemberAccessExpressionContext::expression() {
  return getRuleContext<azslParser::ExpressionContext>(0);
}

tree::TerminalNode* azslParser::MemberAccessExpressionContext::Dot() {
  return getToken(azslParser::Dot, 0);
}

azslParser::IdExpressionContext* azslParser::MemberAccessExpressionContext::idExpression() {
  return getRuleContext<azslParser::IdExpressionContext>(0);
}

azslParser::MemberAccessExpressionContext::MemberAccessExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void azslParser::MemberAccessExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberAccessExpression(this);
}
void azslParser::MemberAccessExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberAccessExpression(this);
}
//----------------- PrefixUnaryExpressionContext ------------------------------------------------------------------

azslParser::PrefixUnaryOperatorContext* azslParser::PrefixUnaryExpressionContext::prefixUnaryOperator() {
  return getRuleContext<azslParser::PrefixUnaryOperatorContext>(0);
}

azslParser::ExpressionContext* azslParser::PrefixUnaryExpressionContext::expression() {
  return getRuleContext<azslParser::ExpressionContext>(0);
}

azslParser::PrefixUnaryExpressionContext::PrefixUnaryExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void azslParser::PrefixUnaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixUnaryExpression(this);
}
void azslParser::PrefixUnaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixUnaryExpression(this);
}
//----------------- LiteralExpressionContext ------------------------------------------------------------------

azslParser::LiteralContext* azslParser::LiteralExpressionContext::literal() {
  return getRuleContext<azslParser::LiteralContext>(0);
}

azslParser::LiteralExpressionContext::LiteralExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void azslParser::LiteralExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteralExpression(this);
}
void azslParser::LiteralExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteralExpression(this);
}
//----------------- ConditionalExpressionContext ------------------------------------------------------------------

tree::TerminalNode* azslParser::ConditionalExpressionContext::Question() {
  return getToken(azslParser::Question, 0);
}

tree::TerminalNode* azslParser::ConditionalExpressionContext::Colon() {
  return getToken(azslParser::Colon, 0);
}

azslParser::ExpressionContext* azslParser::ConditionalExpressionContext::expression() {
  return getRuleContext<azslParser::ExpressionContext>(0);
}

std::vector<azslParser::ExpressionExtContext *> azslParser::ConditionalExpressionContext::expressionExt() {
  return getRuleContexts<azslParser::ExpressionExtContext>();
}

azslParser::ExpressionExtContext* azslParser::ConditionalExpressionContext::expressionExt(size_t i) {
  return getRuleContext<azslParser::ExpressionExtContext>(i);
}

azslParser::ConditionalExpressionContext::ConditionalExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void azslParser::ConditionalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalExpression(this);
}
void azslParser::ConditionalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalExpression(this);
}
//----------------- PostfixUnaryExpressionContext ------------------------------------------------------------------

azslParser::ExpressionContext* azslParser::PostfixUnaryExpressionContext::expression() {
  return getRuleContext<azslParser::ExpressionContext>(0);
}

azslParser::PostfixUnaryOperatorContext* azslParser::PostfixUnaryExpressionContext::postfixUnaryOperator() {
  return getRuleContext<azslParser::PostfixUnaryOperatorContext>(0);
}

azslParser::PostfixUnaryExpressionContext::PostfixUnaryExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void azslParser::PostfixUnaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixUnaryExpression(this);
}
void azslParser::PostfixUnaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixUnaryExpression(this);
}
//----------------- NumericConstructorExpressionContext ------------------------------------------------------------------

azslParser::ScalarOrVectorOrMatrixTypeContext* azslParser::NumericConstructorExpressionContext::scalarOrVectorOrMatrixType() {
  return getRuleContext<azslParser::ScalarOrVectorOrMatrixTypeContext>(0);
}

azslParser::ArgumentListContext* azslParser::NumericConstructorExpressionContext::argumentList() {
  return getRuleContext<azslParser::ArgumentListContext>(0);
}

azslParser::NumericConstructorExpressionContext::NumericConstructorExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void azslParser::NumericConstructorExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumericConstructorExpression(this);
}
void azslParser::NumericConstructorExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumericConstructorExpression(this);
}
//----------------- FunctionCallExpressionContext ------------------------------------------------------------------

azslParser::ArgumentListContext* azslParser::FunctionCallExpressionContext::argumentList() {
  return getRuleContext<azslParser::ArgumentListContext>(0);
}

azslParser::ExpressionContext* azslParser::FunctionCallExpressionContext::expression() {
  return getRuleContext<azslParser::ExpressionContext>(0);
}

azslParser::FunctionCallExpressionContext::FunctionCallExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void azslParser::FunctionCallExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCallExpression(this);
}
void azslParser::FunctionCallExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCallExpression(this);
}
//----------------- IdentifierExpressionContext ------------------------------------------------------------------

azslParser::IdExpressionContext* azslParser::IdentifierExpressionContext::idExpression() {
  return getRuleContext<azslParser::IdExpressionContext>(0);
}

azslParser::IdentifierExpressionContext::IdentifierExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void azslParser::IdentifierExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierExpression(this);
}
void azslParser::IdentifierExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierExpression(this);
}
//----------------- BinaryExpressionContext ------------------------------------------------------------------

std::vector<azslParser::ExpressionContext *> azslParser::BinaryExpressionContext::expression() {
  return getRuleContexts<azslParser::ExpressionContext>();
}

azslParser::ExpressionContext* azslParser::BinaryExpressionContext::expression(size_t i) {
  return getRuleContext<azslParser::ExpressionContext>(i);
}

azslParser::BinaryOperatorContext* azslParser::BinaryExpressionContext::binaryOperator() {
  return getRuleContext<azslParser::BinaryOperatorContext>(0);
}

azslParser::BinaryExpressionContext::BinaryExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void azslParser::BinaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryExpression(this);
}
void azslParser::BinaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryExpression(this);
}
//----------------- AssignmentExpressionContext ------------------------------------------------------------------

azslParser::ExpressionContext* azslParser::AssignmentExpressionContext::expression() {
  return getRuleContext<azslParser::ExpressionContext>(0);
}

azslParser::AssignmentOperatorContext* azslParser::AssignmentExpressionContext::assignmentOperator() {
  return getRuleContext<azslParser::AssignmentOperatorContext>(0);
}

azslParser::ExpressionExtContext* azslParser::AssignmentExpressionContext::expressionExt() {
  return getRuleContext<azslParser::ExpressionExtContext>(0);
}

azslParser::AssignmentExpressionContext::AssignmentExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void azslParser::AssignmentExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentExpression(this);
}
void azslParser::AssignmentExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentExpression(this);
}
//----------------- CastExpressionContext ------------------------------------------------------------------

tree::TerminalNode* azslParser::CastExpressionContext::LeftParen() {
  return getToken(azslParser::LeftParen, 0);
}

azslParser::TypeContext* azslParser::CastExpressionContext::type() {
  return getRuleContext<azslParser::TypeContext>(0);
}

tree::TerminalNode* azslParser::CastExpressionContext::RightParen() {
  return getToken(azslParser::RightParen, 0);
}

azslParser::ExpressionContext* azslParser::CastExpressionContext::expression() {
  return getRuleContext<azslParser::ExpressionContext>(0);
}

std::vector<azslParser::ArrayRankSpecifierContext *> azslParser::CastExpressionContext::arrayRankSpecifier() {
  return getRuleContexts<azslParser::ArrayRankSpecifierContext>();
}

azslParser::ArrayRankSpecifierContext* azslParser::CastExpressionContext::arrayRankSpecifier(size_t i) {
  return getRuleContext<azslParser::ArrayRankSpecifierContext>(i);
}

azslParser::CastExpressionContext::CastExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void azslParser::CastExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCastExpression(this);
}
void azslParser::CastExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCastExpression(this);
}
//----------------- ArrayAccessExpressionContext ------------------------------------------------------------------

tree::TerminalNode* azslParser::ArrayAccessExpressionContext::LeftBracket() {
  return getToken(azslParser::LeftBracket, 0);
}

tree::TerminalNode* azslParser::ArrayAccessExpressionContext::RightBracket() {
  return getToken(azslParser::RightBracket, 0);
}

std::vector<azslParser::ExpressionContext *> azslParser::ArrayAccessExpressionContext::expression() {
  return getRuleContexts<azslParser::ExpressionContext>();
}

azslParser::ExpressionContext* azslParser::ArrayAccessExpressionContext::expression(size_t i) {
  return getRuleContext<azslParser::ExpressionContext>(i);
}

azslParser::ArrayAccessExpressionContext::ArrayAccessExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void azslParser::ArrayAccessExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayAccessExpression(this);
}
void azslParser::ArrayAccessExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayAccessExpression(this);
}

azslParser::ExpressionContext* azslParser::expression() {
   return expression(0);
}

azslParser::ExpressionContext* azslParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  azslParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  azslParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 86;
  enterRecursionRule(_localctx, 86, azslParser::RuleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(688);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<LiteralExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(665);
      literal();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<IdentifierExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(666);
      idExpression();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ParenthesizedExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(667);
      match(azslParser::LeftParen);
      setState(668);
      antlrcpp::downCast<ParenthesizedExpressionContext *>(_localctx)->Expr = expressionExt(0);
      setState(669);
      match(azslParser::RightParen);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<NumericConstructorExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(671);
      scalarOrVectorOrMatrixType();
      setState(672);
      argumentList();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<CastExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(674);
      match(azslParser::LeftParen);
      setState(675);
      type();
      setState(679);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == azslParser::LeftBracket) {
        setState(676);
        antlrcpp::downCast<CastExpressionContext *>(_localctx)->arrayRankSpecifierContext = arrayRankSpecifier();
        antlrcpp::downCast<CastExpressionContext *>(_localctx)->ArrayRankSpecifiers.push_back(antlrcpp::downCast<CastExpressionContext *>(_localctx)->arrayRankSpecifierContext);
        setState(681);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(682);
      match(azslParser::RightParen);
      setState(683);
      antlrcpp::downCast<CastExpressionContext *>(_localctx)->Expr = expression(6);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<PrefixUnaryExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(685);
      antlrcpp::downCast<PrefixUnaryExpressionContext *>(_localctx)->Operator = prefixUnaryOperator();
      setState(686);
      antlrcpp::downCast<PrefixUnaryExpressionContext *>(_localctx)->Expr = expression(4);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(718);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(716);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<BinaryExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->Left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(690);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(691);
          antlrcpp::downCast<BinaryExpressionContext *>(_localctx)->Operator = binaryOperator();
          setState(692);
          antlrcpp::downCast<BinaryExpressionContext *>(_localctx)->Right = expression(4);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MemberAccessExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->LHSExpr = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(694);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(695);
          antlrcpp::downCast<MemberAccessExpressionContext *>(_localctx)->DotToken = match(azslParser::Dot);
          setState(696);
          antlrcpp::downCast<MemberAccessExpressionContext *>(_localctx)->Member = idExpression();
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ArrayAccessExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->Expr = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(697);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(698);
          match(azslParser::LeftBracket);
          setState(699);
          antlrcpp::downCast<ArrayAccessExpressionContext *>(_localctx)->Index = expression(0);
          setState(700);
          match(azslParser::RightBracket);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<FunctionCallExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->Expr = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(702);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(703);
          argumentList();
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<PostfixUnaryExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->Expr = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(704);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(705);
          antlrcpp::downCast<PostfixUnaryExpressionContext *>(_localctx)->Operator = postfixUnaryOperator();
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<ConditionalExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->Condition = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(706);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(707);
          match(azslParser::Question);
          setState(708);
          antlrcpp::downCast<ConditionalExpressionContext *>(_localctx)->TrueExpr = expressionExt(0);
          setState(709);
          match(azslParser::Colon);
          setState(710);
          antlrcpp::downCast<ConditionalExpressionContext *>(_localctx)->FalseExpr = expressionExt(0);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<AssignmentExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->Left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(712);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(713);
          antlrcpp::downCast<AssignmentExpressionContext *>(_localctx)->Operator = assignmentOperator();
          setState(714);
          antlrcpp::downCast<AssignmentExpressionContext *>(_localctx)->Right = expressionExt(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(720);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExpressionExtContext ------------------------------------------------------------------

azslParser::ExpressionExtContext::ExpressionExtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t azslParser::ExpressionExtContext::getRuleIndex() const {
  return azslParser::RuleExpressionExt;
}

void azslParser::ExpressionExtContext::copyFrom(ExpressionExtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- OtherExpressionContext ------------------------------------------------------------------

azslParser::ExpressionContext* azslParser::OtherExpressionContext::expression() {
  return getRuleContext<azslParser::ExpressionContext>(0);
}

azslParser::OtherExpressionContext::OtherExpressionContext(ExpressionExtContext *ctx) { copyFrom(ctx); }

void azslParser::OtherExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOtherExpression(this);
}
void azslParser::OtherExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOtherExpression(this);
}
//----------------- CommaExpressionContext ------------------------------------------------------------------

azslParser::ExpressionExtContext* azslParser::CommaExpressionContext::expressionExt() {
  return getRuleContext<azslParser::ExpressionExtContext>(0);
}

tree::TerminalNode* azslParser::CommaExpressionContext::Comma() {
  return getToken(azslParser::Comma, 0);
}

azslParser::ExpressionContext* azslParser::CommaExpressionContext::expression() {
  return getRuleContext<azslParser::ExpressionContext>(0);
}

azslParser::CommaExpressionContext::CommaExpressionContext(ExpressionExtContext *ctx) { copyFrom(ctx); }

void azslParser::CommaExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommaExpression(this);
}
void azslParser::CommaExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommaExpression(this);
}

azslParser::ExpressionExtContext* azslParser::expressionExt() {
   return expressionExt(0);
}

azslParser::ExpressionExtContext* azslParser::expressionExt(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  azslParser::ExpressionExtContext *_localctx = _tracker.createInstance<ExpressionExtContext>(_ctx, parentState);
  azslParser::ExpressionExtContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 88;
  enterRecursionRule(_localctx, 88, azslParser::RuleExpressionExt, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<OtherExpressionContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(722);
    antlrcpp::downCast<OtherExpressionContext *>(_localctx)->Expr = expression(0);
    _ctx->stop = _input->LT(-1);
    setState(729);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<CommaExpressionContext>(_tracker.createInstance<ExpressionExtContext>(parentContext, parentState));
        _localctx = newContext;
        newContext->Left = previousContext;
        pushNewRecursionContext(newContext, startState, RuleExpressionExt);
        setState(724);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(725);
        antlrcpp::downCast<CommaExpressionContext *>(_localctx)->Operator = match(azslParser::Comma);
        setState(726);
        antlrcpp::downCast<CommaExpressionContext *>(_localctx)->Right = expression(0); 
      }
      setState(731);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PostfixUnaryOperatorContext ------------------------------------------------------------------

azslParser::PostfixUnaryOperatorContext::PostfixUnaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::PostfixUnaryOperatorContext::PlusPlus() {
  return getToken(azslParser::PlusPlus, 0);
}

tree::TerminalNode* azslParser::PostfixUnaryOperatorContext::MinusMinus() {
  return getToken(azslParser::MinusMinus, 0);
}


size_t azslParser::PostfixUnaryOperatorContext::getRuleIndex() const {
  return azslParser::RulePostfixUnaryOperator;
}

void azslParser::PostfixUnaryOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixUnaryOperator(this);
}

void azslParser::PostfixUnaryOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixUnaryOperator(this);
}

azslParser::PostfixUnaryOperatorContext* azslParser::postfixUnaryOperator() {
  PostfixUnaryOperatorContext *_localctx = _tracker.createInstance<PostfixUnaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 90, azslParser::RulePostfixUnaryOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(732);
    _la = _input->LA(1);
    if (!(_la == azslParser::PlusPlus

    || _la == azslParser::MinusMinus)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrefixUnaryOperatorContext ------------------------------------------------------------------

azslParser::PrefixUnaryOperatorContext::PrefixUnaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::PrefixUnaryOperatorContext::Plus() {
  return getToken(azslParser::Plus, 0);
}

tree::TerminalNode* azslParser::PrefixUnaryOperatorContext::Minus() {
  return getToken(azslParser::Minus, 0);
}

tree::TerminalNode* azslParser::PrefixUnaryOperatorContext::Not() {
  return getToken(azslParser::Not, 0);
}

tree::TerminalNode* azslParser::PrefixUnaryOperatorContext::Tilde() {
  return getToken(azslParser::Tilde, 0);
}

tree::TerminalNode* azslParser::PrefixUnaryOperatorContext::PlusPlus() {
  return getToken(azslParser::PlusPlus, 0);
}

tree::TerminalNode* azslParser::PrefixUnaryOperatorContext::MinusMinus() {
  return getToken(azslParser::MinusMinus, 0);
}


size_t azslParser::PrefixUnaryOperatorContext::getRuleIndex() const {
  return azslParser::RulePrefixUnaryOperator;
}

void azslParser::PrefixUnaryOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixUnaryOperator(this);
}

void azslParser::PrefixUnaryOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixUnaryOperator(this);
}

azslParser::PrefixUnaryOperatorContext* azslParser::prefixUnaryOperator() {
  PrefixUnaryOperatorContext *_localctx = _tracker.createInstance<PrefixUnaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 92, azslParser::RulePrefixUnaryOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(734);
    _la = _input->LA(1);
    if (!(((((_la - 318) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 318)) & ((1ULL << (azslParser::Plus - 318))
      | (1ULL << (azslParser::PlusPlus - 318))
      | (1ULL << (azslParser::Minus - 318))
      | (1ULL << (azslParser::MinusMinus - 318))
      | (1ULL << (azslParser::Not - 318))
      | (1ULL << (azslParser::Tilde - 318)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BinaryOperatorContext ------------------------------------------------------------------

azslParser::BinaryOperatorContext::BinaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::BinaryOperatorContext::Star() {
  return getToken(azslParser::Star, 0);
}

tree::TerminalNode* azslParser::BinaryOperatorContext::Div() {
  return getToken(azslParser::Div, 0);
}

tree::TerminalNode* azslParser::BinaryOperatorContext::Mod() {
  return getToken(azslParser::Mod, 0);
}

tree::TerminalNode* azslParser::BinaryOperatorContext::Plus() {
  return getToken(azslParser::Plus, 0);
}

tree::TerminalNode* azslParser::BinaryOperatorContext::Minus() {
  return getToken(azslParser::Minus, 0);
}

tree::TerminalNode* azslParser::BinaryOperatorContext::LeftShift() {
  return getToken(azslParser::LeftShift, 0);
}

tree::TerminalNode* azslParser::BinaryOperatorContext::RightShift() {
  return getToken(azslParser::RightShift, 0);
}

tree::TerminalNode* azslParser::BinaryOperatorContext::Less() {
  return getToken(azslParser::Less, 0);
}

tree::TerminalNode* azslParser::BinaryOperatorContext::Greater() {
  return getToken(azslParser::Greater, 0);
}

tree::TerminalNode* azslParser::BinaryOperatorContext::LessEqual() {
  return getToken(azslParser::LessEqual, 0);
}

tree::TerminalNode* azslParser::BinaryOperatorContext::GreaterEqual() {
  return getToken(azslParser::GreaterEqual, 0);
}

tree::TerminalNode* azslParser::BinaryOperatorContext::Equal() {
  return getToken(azslParser::Equal, 0);
}

tree::TerminalNode* azslParser::BinaryOperatorContext::NotEqual() {
  return getToken(azslParser::NotEqual, 0);
}

tree::TerminalNode* azslParser::BinaryOperatorContext::And() {
  return getToken(azslParser::And, 0);
}

tree::TerminalNode* azslParser::BinaryOperatorContext::Caret() {
  return getToken(azslParser::Caret, 0);
}

tree::TerminalNode* azslParser::BinaryOperatorContext::Or() {
  return getToken(azslParser::Or, 0);
}

tree::TerminalNode* azslParser::BinaryOperatorContext::AndAnd() {
  return getToken(azslParser::AndAnd, 0);
}

tree::TerminalNode* azslParser::BinaryOperatorContext::OrOr() {
  return getToken(azslParser::OrOr, 0);
}


size_t azslParser::BinaryOperatorContext::getRuleIndex() const {
  return azslParser::RuleBinaryOperator;
}

void azslParser::BinaryOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryOperator(this);
}

void azslParser::BinaryOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryOperator(this);
}

azslParser::BinaryOperatorContext* azslParser::binaryOperator() {
  BinaryOperatorContext *_localctx = _tracker.createInstance<BinaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 94, azslParser::RuleBinaryOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(736);
    _la = _input->LA(1);
    if (!(((((_la - 312) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 312)) & ((1ULL << (azslParser::Less - 312))
      | (1ULL << (azslParser::LessEqual - 312))
      | (1ULL << (azslParser::Greater - 312))
      | (1ULL << (azslParser::GreaterEqual - 312))
      | (1ULL << (azslParser::LeftShift - 312))
      | (1ULL << (azslParser::RightShift - 312))
      | (1ULL << (azslParser::Plus - 312))
      | (1ULL << (azslParser::Minus - 312))
      | (1ULL << (azslParser::Star - 312))
      | (1ULL << (azslParser::Div - 312))
      | (1ULL << (azslParser::Mod - 312))
      | (1ULL << (azslParser::And - 312))
      | (1ULL << (azslParser::Or - 312))
      | (1ULL << (azslParser::AndAnd - 312))
      | (1ULL << (azslParser::OrOr - 312))
      | (1ULL << (azslParser::Caret - 312))
      | (1ULL << (azslParser::Equal - 312))
      | (1ULL << (azslParser::NotEqual - 312)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentOperatorContext ------------------------------------------------------------------

azslParser::AssignmentOperatorContext::AssignmentOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::AssignmentOperatorContext::Assign() {
  return getToken(azslParser::Assign, 0);
}

tree::TerminalNode* azslParser::AssignmentOperatorContext::StarAssign() {
  return getToken(azslParser::StarAssign, 0);
}

tree::TerminalNode* azslParser::AssignmentOperatorContext::DivAssign() {
  return getToken(azslParser::DivAssign, 0);
}

tree::TerminalNode* azslParser::AssignmentOperatorContext::ModAssign() {
  return getToken(azslParser::ModAssign, 0);
}

tree::TerminalNode* azslParser::AssignmentOperatorContext::PlusAssign() {
  return getToken(azslParser::PlusAssign, 0);
}

tree::TerminalNode* azslParser::AssignmentOperatorContext::MinusAssign() {
  return getToken(azslParser::MinusAssign, 0);
}

tree::TerminalNode* azslParser::AssignmentOperatorContext::LeftShiftAssign() {
  return getToken(azslParser::LeftShiftAssign, 0);
}

tree::TerminalNode* azslParser::AssignmentOperatorContext::RightShiftAssign() {
  return getToken(azslParser::RightShiftAssign, 0);
}

tree::TerminalNode* azslParser::AssignmentOperatorContext::AndAssign() {
  return getToken(azslParser::AndAssign, 0);
}

tree::TerminalNode* azslParser::AssignmentOperatorContext::XorAssign() {
  return getToken(azslParser::XorAssign, 0);
}

tree::TerminalNode* azslParser::AssignmentOperatorContext::OrAssign() {
  return getToken(azslParser::OrAssign, 0);
}


size_t azslParser::AssignmentOperatorContext::getRuleIndex() const {
  return azslParser::RuleAssignmentOperator;
}

void azslParser::AssignmentOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentOperator(this);
}

void azslParser::AssignmentOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentOperator(this);
}

azslParser::AssignmentOperatorContext* azslParser::assignmentOperator() {
  AssignmentOperatorContext *_localctx = _tracker.createInstance<AssignmentOperatorContext>(_ctx, getState());
  enterRule(_localctx, 96, azslParser::RuleAssignmentOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(738);
    _la = _input->LA(1);
    if (!(((((_la - 337) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 337)) & ((1ULL << (azslParser::Assign - 337))
      | (1ULL << (azslParser::StarAssign - 337))
      | (1ULL << (azslParser::DivAssign - 337))
      | (1ULL << (azslParser::ModAssign - 337))
      | (1ULL << (azslParser::PlusAssign - 337))
      | (1ULL << (azslParser::MinusAssign - 337))
      | (1ULL << (azslParser::LeftShiftAssign - 337))
      | (1ULL << (azslParser::RightShiftAssign - 337))
      | (1ULL << (azslParser::AndAssign - 337))
      | (1ULL << (azslParser::XorAssign - 337))
      | (1ULL << (azslParser::OrAssign - 337)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentListContext ------------------------------------------------------------------

azslParser::ArgumentListContext::ArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::ArgumentListContext::LeftParen() {
  return getToken(azslParser::LeftParen, 0);
}

tree::TerminalNode* azslParser::ArgumentListContext::RightParen() {
  return getToken(azslParser::RightParen, 0);
}

azslParser::ArgumentsContext* azslParser::ArgumentListContext::arguments() {
  return getRuleContext<azslParser::ArgumentsContext>(0);
}


size_t azslParser::ArgumentListContext::getRuleIndex() const {
  return azslParser::RuleArgumentList;
}

void azslParser::ArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgumentList(this);
}

void azslParser::ArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgumentList(this);
}

azslParser::ArgumentListContext* azslParser::argumentList() {
  ArgumentListContext *_localctx = _tracker.createInstance<ArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 98, azslParser::RuleArgumentList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(740);
    match(azslParser::LeftParen);
    setState(742);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << azslParser::Bool)
      | (1ULL << azslParser::Bool1)
      | (1ULL << azslParser::Bool2)
      | (1ULL << azslParser::Bool3)
      | (1ULL << azslParser::Bool4)
      | (1ULL << azslParser::Bool1x1)
      | (1ULL << azslParser::Bool1x2)
      | (1ULL << azslParser::Bool1x3)
      | (1ULL << azslParser::Bool1x4)
      | (1ULL << azslParser::Bool2x1)
      | (1ULL << azslParser::Bool2x2)
      | (1ULL << azslParser::Bool2x3)
      | (1ULL << azslParser::Bool2x4)
      | (1ULL << azslParser::Bool3x1)
      | (1ULL << azslParser::Bool3x2)
      | (1ULL << azslParser::Bool3x3)
      | (1ULL << azslParser::Bool3x4)
      | (1ULL << azslParser::Bool4x1)
      | (1ULL << azslParser::Bool4x2)
      | (1ULL << azslParser::Bool4x3)
      | (1ULL << azslParser::Bool4x4)
      | (1ULL << azslParser::Double)
      | (1ULL << azslParser::Double1)
      | (1ULL << azslParser::Double2)
      | (1ULL << azslParser::Double3)
      | (1ULL << azslParser::Double4)
      | (1ULL << azslParser::Double1x1)
      | (1ULL << azslParser::Double1x2)
      | (1ULL << azslParser::Double1x3)
      | (1ULL << azslParser::Double1x4)
      | (1ULL << azslParser::Double2x1)
      | (1ULL << azslParser::Double2x2)
      | (1ULL << azslParser::Double2x3)
      | (1ULL << azslParser::Double2x4)
      | (1ULL << azslParser::Double3x1)
      | (1ULL << azslParser::Double3x2)
      | (1ULL << azslParser::Double3x3)
      | (1ULL << azslParser::Double3x4)
      | (1ULL << azslParser::Double4x1)
      | (1ULL << azslParser::Double4x2)
      | (1ULL << azslParser::Double4x3)
      | (1ULL << azslParser::Double4x4))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (azslParser::Float - 67))
      | (1ULL << (azslParser::Float1 - 67))
      | (1ULL << (azslParser::Float2 - 67))
      | (1ULL << (azslParser::Float3 - 67))
      | (1ULL << (azslParser::Float4 - 67))
      | (1ULL << (azslParser::Float1x1 - 67))
      | (1ULL << (azslParser::Float1x2 - 67))
      | (1ULL << (azslParser::Float1x3 - 67))
      | (1ULL << (azslParser::Float1x4 - 67))
      | (1ULL << (azslParser::Float2x1 - 67))
      | (1ULL << (azslParser::Float2x2 - 67))
      | (1ULL << (azslParser::Float2x3 - 67))
      | (1ULL << (azslParser::Float2x4 - 67))
      | (1ULL << (azslParser::Float3x1 - 67))
      | (1ULL << (azslParser::Float3x2 - 67))
      | (1ULL << (azslParser::Float3x3 - 67))
      | (1ULL << (azslParser::Float3x4 - 67))
      | (1ULL << (azslParser::Float4x1 - 67))
      | (1ULL << (azslParser::Float4x2 - 67))
      | (1ULL << (azslParser::Float4x3 - 67))
      | (1ULL << (azslParser::Float4x4 - 67))
      | (1ULL << (azslParser::Half - 67))
      | (1ULL << (azslParser::Half1 - 67))
      | (1ULL << (azslParser::Half2 - 67))
      | (1ULL << (azslParser::Half3 - 67))
      | (1ULL << (azslParser::Half4 - 67))
      | (1ULL << (azslParser::Half1x1 - 67))
      | (1ULL << (azslParser::Half1x2 - 67))
      | (1ULL << (azslParser::Half1x3 - 67))
      | (1ULL << (azslParser::Half1x4 - 67))
      | (1ULL << (azslParser::Half2x1 - 67))
      | (1ULL << (azslParser::Half2x2 - 67))
      | (1ULL << (azslParser::Half2x3 - 67))
      | (1ULL << (azslParser::Half2x4 - 67))
      | (1ULL << (azslParser::Half3x1 - 67))
      | (1ULL << (azslParser::Half3x2 - 67))
      | (1ULL << (azslParser::Half3x3 - 67))
      | (1ULL << (azslParser::Half3x4 - 67))
      | (1ULL << (azslParser::Half4x1 - 67))
      | (1ULL << (azslParser::Half4x2 - 67))
      | (1ULL << (azslParser::Half4x3 - 67))
      | (1ULL << (azslParser::Half4x4 - 67))
      | (1ULL << (azslParser::Int - 67))
      | (1ULL << (azslParser::Int16_t - 67))
      | (1ULL << (azslParser::Int32_t - 67))
      | (1ULL << (azslParser::Int64_t - 67))
      | (1ULL << (azslParser::Int1 - 67))
      | (1ULL << (azslParser::Int2 - 67))
      | (1ULL << (azslParser::Int3 - 67))
      | (1ULL << (azslParser::Int4 - 67))
      | (1ULL << (azslParser::Int1x1 - 67))
      | (1ULL << (azslParser::Int1x2 - 67))
      | (1ULL << (azslParser::Int1x3 - 67))
      | (1ULL << (azslParser::Int1x4 - 67)))) != 0) || ((((_la - 131) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 131)) & ((1ULL << (azslParser::Int2x1 - 131))
      | (1ULL << (azslParser::Int2x2 - 131))
      | (1ULL << (azslParser::Int2x3 - 131))
      | (1ULL << (azslParser::Int2x4 - 131))
      | (1ULL << (azslParser::Int3x1 - 131))
      | (1ULL << (azslParser::Int3x2 - 131))
      | (1ULL << (azslParser::Int3x3 - 131))
      | (1ULL << (azslParser::Int3x4 - 131))
      | (1ULL << (azslParser::Int4x1 - 131))
      | (1ULL << (azslParser::Int4x2 - 131))
      | (1ULL << (azslParser::Int4x3 - 131))
      | (1ULL << (azslParser::Int4x4 - 131))
      | (1ULL << (azslParser::Matrix - 131)))) != 0) || ((((_la - 210) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 210)) & ((1ULL << (azslParser::Uint - 210))
      | (1ULL << (azslParser::Uint1 - 210))
      | (1ULL << (azslParser::Uint2 - 210))
      | (1ULL << (azslParser::Uint3 - 210))
      | (1ULL << (azslParser::Uint4 - 210))
      | (1ULL << (azslParser::Uint1x1 - 210))
      | (1ULL << (azslParser::Uint1x2 - 210))
      | (1ULL << (azslParser::Uint1x3 - 210))
      | (1ULL << (azslParser::Uint1x4 - 210))
      | (1ULL << (azslParser::Uint2x1 - 210))
      | (1ULL << (azslParser::Uint2x2 - 210))
      | (1ULL << (azslParser::Uint2x3 - 210))
      | (1ULL << (azslParser::Uint2x4 - 210))
      | (1ULL << (azslParser::Uint3x1 - 210))
      | (1ULL << (azslParser::Uint3x2 - 210))
      | (1ULL << (azslParser::Uint3x3 - 210))
      | (1ULL << (azslParser::Uint3x4 - 210))
      | (1ULL << (azslParser::Uint4x1 - 210))
      | (1ULL << (azslParser::Uint4x2 - 210))
      | (1ULL << (azslParser::Uint4x3 - 210))
      | (1ULL << (azslParser::Uint4x4 - 210))
      | (1ULL << (azslParser::Uint16_t - 210))
      | (1ULL << (azslParser::Uint32_t - 210))
      | (1ULL << (azslParser::Uint64_t - 210))
      | (1ULL << (azslParser::Dword - 210))
      | (1ULL << (azslParser::Dword1 - 210))
      | (1ULL << (azslParser::Dword2 - 210))
      | (1ULL << (azslParser::Dword3 - 210))
      | (1ULL << (azslParser::Dword4 - 210))
      | (1ULL << (azslParser::Dword1x1 - 210))
      | (1ULL << (azslParser::Dword1x2 - 210))
      | (1ULL << (azslParser::Dword1x3 - 210))
      | (1ULL << (azslParser::Dword1x4 - 210))
      | (1ULL << (azslParser::Dword2x1 - 210))
      | (1ULL << (azslParser::Dword2x2 - 210))
      | (1ULL << (azslParser::Dword2x3 - 210))
      | (1ULL << (azslParser::Dword2x4 - 210))
      | (1ULL << (azslParser::Dword3x1 - 210))
      | (1ULL << (azslParser::Dword3x2 - 210))
      | (1ULL << (azslParser::Dword3x3 - 210))
      | (1ULL << (azslParser::Dword3x4 - 210))
      | (1ULL << (azslParser::Dword4x1 - 210))
      | (1ULL << (azslParser::Dword4x2 - 210))
      | (1ULL << (azslParser::Dword4x3 - 210))
      | (1ULL << (azslParser::Dword4x4 - 210))
      | (1ULL << (azslParser::Vector - 210)))) != 0) || ((((_la - 305) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 305)) & ((1ULL << (azslParser::LeftParen - 305))
      | (1ULL << (azslParser::Plus - 305))
      | (1ULL << (azslParser::PlusPlus - 305))
      | (1ULL << (azslParser::Minus - 305))
      | (1ULL << (azslParser::MinusMinus - 305))
      | (1ULL << (azslParser::Not - 305))
      | (1ULL << (azslParser::Tilde - 305))
      | (1ULL << (azslParser::ColonColon - 305))
      | (1ULL << (azslParser::True - 305))
      | (1ULL << (azslParser::False - 305)))) != 0) || ((((_la - 369) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 369)) & ((1ULL << (azslParser::Identifier - 369))
      | (1ULL << (azslParser::IntegerLiteral - 369))
      | (1ULL << (azslParser::FloatLiteral - 369))
      | (1ULL << (azslParser::StringLiteral - 369)))) != 0)) {
      setState(741);
      arguments();
    }
    setState(744);
    match(azslParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentsContext ------------------------------------------------------------------

azslParser::ArgumentsContext::ArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<azslParser::ExpressionContext *> azslParser::ArgumentsContext::expression() {
  return getRuleContexts<azslParser::ExpressionContext>();
}

azslParser::ExpressionContext* azslParser::ArgumentsContext::expression(size_t i) {
  return getRuleContext<azslParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> azslParser::ArgumentsContext::Comma() {
  return getTokens(azslParser::Comma);
}

tree::TerminalNode* azslParser::ArgumentsContext::Comma(size_t i) {
  return getToken(azslParser::Comma, i);
}


size_t azslParser::ArgumentsContext::getRuleIndex() const {
  return azslParser::RuleArguments;
}

void azslParser::ArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArguments(this);
}

void azslParser::ArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArguments(this);
}

azslParser::ArgumentsContext* azslParser::arguments() {
  ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 100, azslParser::RuleArguments);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(746);
    expression(0);
    setState(751);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == azslParser::Comma) {
      setState(747);
      match(azslParser::Comma);
      setState(748);
      expression(0);
      setState(753);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

azslParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::TypeContext* azslParser::VariableDeclarationContext::type() {
  return getRuleContext<azslParser::TypeContext>(0);
}

azslParser::VariableDeclaratorsContext* azslParser::VariableDeclarationContext::variableDeclarators() {
  return getRuleContext<azslParser::VariableDeclaratorsContext>(0);
}

std::vector<azslParser::AttributeSpecifierAnyContext *> azslParser::VariableDeclarationContext::attributeSpecifierAny() {
  return getRuleContexts<azslParser::AttributeSpecifierAnyContext>();
}

azslParser::AttributeSpecifierAnyContext* azslParser::VariableDeclarationContext::attributeSpecifierAny(size_t i) {
  return getRuleContext<azslParser::AttributeSpecifierAnyContext>(i);
}


size_t azslParser::VariableDeclarationContext::getRuleIndex() const {
  return azslParser::RuleVariableDeclaration;
}

void azslParser::VariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaration(this);
}

void azslParser::VariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaration(this);
}

azslParser::VariableDeclarationContext* azslParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 102, azslParser::RuleVariableDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(757);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == azslParser::LeftBracket

    || _la == azslParser::LeftDoubleBracket) {
      setState(754);
      attributeSpecifierAny();
      setState(759);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(760);
    type();
    setState(761);
    variableDeclarators();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclaratorsContext ------------------------------------------------------------------

azslParser::VariableDeclaratorsContext::VariableDeclaratorsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<azslParser::NamedVariableDeclaratorContext *> azslParser::VariableDeclaratorsContext::namedVariableDeclarator() {
  return getRuleContexts<azslParser::NamedVariableDeclaratorContext>();
}

azslParser::NamedVariableDeclaratorContext* azslParser::VariableDeclaratorsContext::namedVariableDeclarator(size_t i) {
  return getRuleContext<azslParser::NamedVariableDeclaratorContext>(i);
}

std::vector<tree::TerminalNode *> azslParser::VariableDeclaratorsContext::Comma() {
  return getTokens(azslParser::Comma);
}

tree::TerminalNode* azslParser::VariableDeclaratorsContext::Comma(size_t i) {
  return getToken(azslParser::Comma, i);
}


size_t azslParser::VariableDeclaratorsContext::getRuleIndex() const {
  return azslParser::RuleVariableDeclarators;
}

void azslParser::VariableDeclaratorsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclarators(this);
}

void azslParser::VariableDeclaratorsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclarators(this);
}

azslParser::VariableDeclaratorsContext* azslParser::variableDeclarators() {
  VariableDeclaratorsContext *_localctx = _tracker.createInstance<VariableDeclaratorsContext>(_ctx, getState());
  enterRule(_localctx, 104, azslParser::RuleVariableDeclarators);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(763);
    antlrcpp::downCast<VariableDeclaratorsContext *>(_localctx)->namedVariableDeclaratorContext = namedVariableDeclarator();
    antlrcpp::downCast<VariableDeclaratorsContext *>(_localctx)->VarDecls.push_back(antlrcpp::downCast<VariableDeclaratorsContext *>(_localctx)->namedVariableDeclaratorContext);
    setState(768);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == azslParser::Comma) {
      setState(764);
      match(azslParser::Comma);
      setState(765);
      antlrcpp::downCast<VariableDeclaratorsContext *>(_localctx)->namedVariableDeclaratorContext = namedVariableDeclarator();
      antlrcpp::downCast<VariableDeclaratorsContext *>(_localctx)->VarDecls.push_back(antlrcpp::downCast<VariableDeclaratorsContext *>(_localctx)->namedVariableDeclaratorContext);
      setState(770);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnnamedVariableDeclaratorContext ------------------------------------------------------------------

azslParser::UnnamedVariableDeclaratorContext::UnnamedVariableDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::PackOffsetNodeContext* azslParser::UnnamedVariableDeclaratorContext::packOffsetNode() {
  return getRuleContext<azslParser::PackOffsetNodeContext>(0);
}

azslParser::VariableInitializerContext* azslParser::UnnamedVariableDeclaratorContext::variableInitializer() {
  return getRuleContext<azslParser::VariableInitializerContext>(0);
}

std::vector<azslParser::ArrayRankSpecifierContext *> azslParser::UnnamedVariableDeclaratorContext::arrayRankSpecifier() {
  return getRuleContexts<azslParser::ArrayRankSpecifierContext>();
}

azslParser::ArrayRankSpecifierContext* azslParser::UnnamedVariableDeclaratorContext::arrayRankSpecifier(size_t i) {
  return getRuleContext<azslParser::ArrayRankSpecifierContext>(i);
}

azslParser::HlslSemanticContext* azslParser::UnnamedVariableDeclaratorContext::hlslSemantic() {
  return getRuleContext<azslParser::HlslSemanticContext>(0);
}

azslParser::RegisterAllocationContext* azslParser::UnnamedVariableDeclaratorContext::registerAllocation() {
  return getRuleContext<azslParser::RegisterAllocationContext>(0);
}


size_t azslParser::UnnamedVariableDeclaratorContext::getRuleIndex() const {
  return azslParser::RuleUnnamedVariableDeclarator;
}

void azslParser::UnnamedVariableDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnnamedVariableDeclarator(this);
}

void azslParser::UnnamedVariableDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnnamedVariableDeclarator(this);
}

azslParser::UnnamedVariableDeclaratorContext* azslParser::unnamedVariableDeclarator() {
  UnnamedVariableDeclaratorContext *_localctx = _tracker.createInstance<UnnamedVariableDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 106, azslParser::RuleUnnamedVariableDeclarator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(774);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == azslParser::LeftBracket) {
      setState(771);
      antlrcpp::downCast<UnnamedVariableDeclaratorContext *>(_localctx)->arrayRankSpecifierContext = arrayRankSpecifier();
      antlrcpp::downCast<UnnamedVariableDeclaratorContext *>(_localctx)->ArrayRankSpecifiers.push_back(antlrcpp::downCast<UnnamedVariableDeclaratorContext *>(_localctx)->arrayRankSpecifierContext);
      setState(776);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(778);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx)) {
    case 1: {
      setState(777);
      antlrcpp::downCast<UnnamedVariableDeclaratorContext *>(_localctx)->SemanticOpt = hlslSemantic();
      break;
    }

    default:
      break;
    }
    setState(781);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx)) {
    case 1: {
      setState(780);
      packOffsetNode();
      break;
    }

    default:
      break;
    }
    setState(784);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == azslParser::Colon) {
      setState(783);
      antlrcpp::downCast<UnnamedVariableDeclaratorContext *>(_localctx)->RegisterAllocation = registerAllocation();
    }
    setState(787);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == azslParser::LeftBrace

    || _la == azslParser::Assign) {
      setState(786);
      variableInitializer();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamedVariableDeclaratorContext ------------------------------------------------------------------

azslParser::NamedVariableDeclaratorContext::NamedVariableDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::UnnamedVariableDeclaratorContext* azslParser::NamedVariableDeclaratorContext::unnamedVariableDeclarator() {
  return getRuleContext<azslParser::UnnamedVariableDeclaratorContext>(0);
}

tree::TerminalNode* azslParser::NamedVariableDeclaratorContext::Identifier() {
  return getToken(azslParser::Identifier, 0);
}


size_t azslParser::NamedVariableDeclaratorContext::getRuleIndex() const {
  return azslParser::RuleNamedVariableDeclarator;
}

void azslParser::NamedVariableDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamedVariableDeclarator(this);
}

void azslParser::NamedVariableDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamedVariableDeclarator(this);
}

azslParser::NamedVariableDeclaratorContext* azslParser::namedVariableDeclarator() {
  NamedVariableDeclaratorContext *_localctx = _tracker.createInstance<NamedVariableDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 108, azslParser::RuleNamedVariableDeclarator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(789);
    antlrcpp::downCast<NamedVariableDeclaratorContext *>(_localctx)->Name = match(azslParser::Identifier);
    setState(790);
    unnamedVariableDeclarator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableInitializerContext ------------------------------------------------------------------

azslParser::VariableInitializerContext::VariableInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::VariableInitializerContext::Assign() {
  return getToken(azslParser::Assign, 0);
}

azslParser::StandardVariableInitializerContext* azslParser::VariableInitializerContext::standardVariableInitializer() {
  return getRuleContext<azslParser::StandardVariableInitializerContext>(0);
}

azslParser::SamplerBodyDeclarationContext* azslParser::VariableInitializerContext::samplerBodyDeclaration() {
  return getRuleContext<azslParser::SamplerBodyDeclarationContext>(0);
}


size_t azslParser::VariableInitializerContext::getRuleIndex() const {
  return azslParser::RuleVariableInitializer;
}

void azslParser::VariableInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableInitializer(this);
}

void azslParser::VariableInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableInitializer(this);
}

azslParser::VariableInitializerContext* azslParser::variableInitializer() {
  VariableInitializerContext *_localctx = _tracker.createInstance<VariableInitializerContext>(_ctx, getState());
  enterRule(_localctx, 110, azslParser::RuleVariableInitializer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(795);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case azslParser::Assign: {
        enterOuterAlt(_localctx, 1);
        setState(792);
        match(azslParser::Assign);
        setState(793);
        standardVariableInitializer();
        break;
      }

      case azslParser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(794);
        samplerBodyDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StandardVariableInitializerContext ------------------------------------------------------------------

azslParser::StandardVariableInitializerContext::StandardVariableInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::StandardVariableInitializerContext::LeftBrace() {
  return getToken(azslParser::LeftBrace, 0);
}

azslParser::ArrayElementInitializersContext* azslParser::StandardVariableInitializerContext::arrayElementInitializers() {
  return getRuleContext<azslParser::ArrayElementInitializersContext>(0);
}

tree::TerminalNode* azslParser::StandardVariableInitializerContext::RightBrace() {
  return getToken(azslParser::RightBrace, 0);
}

azslParser::ExpressionContext* azslParser::StandardVariableInitializerContext::expression() {
  return getRuleContext<azslParser::ExpressionContext>(0);
}


size_t azslParser::StandardVariableInitializerContext::getRuleIndex() const {
  return azslParser::RuleStandardVariableInitializer;
}

void azslParser::StandardVariableInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStandardVariableInitializer(this);
}

void azslParser::StandardVariableInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStandardVariableInitializer(this);
}

azslParser::StandardVariableInitializerContext* azslParser::standardVariableInitializer() {
  StandardVariableInitializerContext *_localctx = _tracker.createInstance<StandardVariableInitializerContext>(_ctx, getState());
  enterRule(_localctx, 112, azslParser::RuleStandardVariableInitializer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(802);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case azslParser::LeftBrace: {
        enterOuterAlt(_localctx, 1);
        setState(797);
        match(azslParser::LeftBrace);
        setState(798);
        arrayElementInitializers();
        setState(799);
        match(azslParser::RightBrace);
        break;
      }

      case azslParser::Bool:
      case azslParser::Bool1:
      case azslParser::Bool2:
      case azslParser::Bool3:
      case azslParser::Bool4:
      case azslParser::Bool1x1:
      case azslParser::Bool1x2:
      case azslParser::Bool1x3:
      case azslParser::Bool1x4:
      case azslParser::Bool2x1:
      case azslParser::Bool2x2:
      case azslParser::Bool2x3:
      case azslParser::Bool2x4:
      case azslParser::Bool3x1:
      case azslParser::Bool3x2:
      case azslParser::Bool3x3:
      case azslParser::Bool3x4:
      case azslParser::Bool4x1:
      case azslParser::Bool4x2:
      case azslParser::Bool4x3:
      case azslParser::Bool4x4:
      case azslParser::Double:
      case azslParser::Double1:
      case azslParser::Double2:
      case azslParser::Double3:
      case azslParser::Double4:
      case azslParser::Double1x1:
      case azslParser::Double1x2:
      case azslParser::Double1x3:
      case azslParser::Double1x4:
      case azslParser::Double2x1:
      case azslParser::Double2x2:
      case azslParser::Double2x3:
      case azslParser::Double2x4:
      case azslParser::Double3x1:
      case azslParser::Double3x2:
      case azslParser::Double3x3:
      case azslParser::Double3x4:
      case azslParser::Double4x1:
      case azslParser::Double4x2:
      case azslParser::Double4x3:
      case azslParser::Double4x4:
      case azslParser::Float:
      case azslParser::Float1:
      case azslParser::Float2:
      case azslParser::Float3:
      case azslParser::Float4:
      case azslParser::Float1x1:
      case azslParser::Float1x2:
      case azslParser::Float1x3:
      case azslParser::Float1x4:
      case azslParser::Float2x1:
      case azslParser::Float2x2:
      case azslParser::Float2x3:
      case azslParser::Float2x4:
      case azslParser::Float3x1:
      case azslParser::Float3x2:
      case azslParser::Float3x3:
      case azslParser::Float3x4:
      case azslParser::Float4x1:
      case azslParser::Float4x2:
      case azslParser::Float4x3:
      case azslParser::Float4x4:
      case azslParser::Half:
      case azslParser::Half1:
      case azslParser::Half2:
      case azslParser::Half3:
      case azslParser::Half4:
      case azslParser::Half1x1:
      case azslParser::Half1x2:
      case azslParser::Half1x3:
      case azslParser::Half1x4:
      case azslParser::Half2x1:
      case azslParser::Half2x2:
      case azslParser::Half2x3:
      case azslParser::Half2x4:
      case azslParser::Half3x1:
      case azslParser::Half3x2:
      case azslParser::Half3x3:
      case azslParser::Half3x4:
      case azslParser::Half4x1:
      case azslParser::Half4x2:
      case azslParser::Half4x3:
      case azslParser::Half4x4:
      case azslParser::Int:
      case azslParser::Int16_t:
      case azslParser::Int32_t:
      case azslParser::Int64_t:
      case azslParser::Int1:
      case azslParser::Int2:
      case azslParser::Int3:
      case azslParser::Int4:
      case azslParser::Int1x1:
      case azslParser::Int1x2:
      case azslParser::Int1x3:
      case azslParser::Int1x4:
      case azslParser::Int2x1:
      case azslParser::Int2x2:
      case azslParser::Int2x3:
      case azslParser::Int2x4:
      case azslParser::Int3x1:
      case azslParser::Int3x2:
      case azslParser::Int3x3:
      case azslParser::Int3x4:
      case azslParser::Int4x1:
      case azslParser::Int4x2:
      case azslParser::Int4x3:
      case azslParser::Int4x4:
      case azslParser::Matrix:
      case azslParser::Uint:
      case azslParser::Uint1:
      case azslParser::Uint2:
      case azslParser::Uint3:
      case azslParser::Uint4:
      case azslParser::Uint1x1:
      case azslParser::Uint1x2:
      case azslParser::Uint1x3:
      case azslParser::Uint1x4:
      case azslParser::Uint2x1:
      case azslParser::Uint2x2:
      case azslParser::Uint2x3:
      case azslParser::Uint2x4:
      case azslParser::Uint3x1:
      case azslParser::Uint3x2:
      case azslParser::Uint3x3:
      case azslParser::Uint3x4:
      case azslParser::Uint4x1:
      case azslParser::Uint4x2:
      case azslParser::Uint4x3:
      case azslParser::Uint4x4:
      case azslParser::Uint16_t:
      case azslParser::Uint32_t:
      case azslParser::Uint64_t:
      case azslParser::Dword:
      case azslParser::Dword1:
      case azslParser::Dword2:
      case azslParser::Dword3:
      case azslParser::Dword4:
      case azslParser::Dword1x1:
      case azslParser::Dword1x2:
      case azslParser::Dword1x3:
      case azslParser::Dword1x4:
      case azslParser::Dword2x1:
      case azslParser::Dword2x2:
      case azslParser::Dword2x3:
      case azslParser::Dword2x4:
      case azslParser::Dword3x1:
      case azslParser::Dword3x2:
      case azslParser::Dword3x3:
      case azslParser::Dword3x4:
      case azslParser::Dword4x1:
      case azslParser::Dword4x2:
      case azslParser::Dword4x3:
      case azslParser::Dword4x4:
      case azslParser::Vector:
      case azslParser::LeftParen:
      case azslParser::Plus:
      case azslParser::PlusPlus:
      case azslParser::Minus:
      case azslParser::MinusMinus:
      case azslParser::Not:
      case azslParser::Tilde:
      case azslParser::ColonColon:
      case azslParser::True:
      case azslParser::False:
      case azslParser::Identifier:
      case azslParser::IntegerLiteral:
      case azslParser::FloatLiteral:
      case azslParser::StringLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(801);
        antlrcpp::downCast<StandardVariableInitializerContext *>(_localctx)->Expr = expression(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayElementInitializersContext ------------------------------------------------------------------

azslParser::ArrayElementInitializersContext::ArrayElementInitializersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<azslParser::StandardVariableInitializerContext *> azslParser::ArrayElementInitializersContext::standardVariableInitializer() {
  return getRuleContexts<azslParser::StandardVariableInitializerContext>();
}

azslParser::StandardVariableInitializerContext* azslParser::ArrayElementInitializersContext::standardVariableInitializer(size_t i) {
  return getRuleContext<azslParser::StandardVariableInitializerContext>(i);
}

std::vector<tree::TerminalNode *> azslParser::ArrayElementInitializersContext::Comma() {
  return getTokens(azslParser::Comma);
}

tree::TerminalNode* azslParser::ArrayElementInitializersContext::Comma(size_t i) {
  return getToken(azslParser::Comma, i);
}


size_t azslParser::ArrayElementInitializersContext::getRuleIndex() const {
  return azslParser::RuleArrayElementInitializers;
}

void azslParser::ArrayElementInitializersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayElementInitializers(this);
}

void azslParser::ArrayElementInitializersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayElementInitializers(this);
}

azslParser::ArrayElementInitializersContext* azslParser::arrayElementInitializers() {
  ArrayElementInitializersContext *_localctx = _tracker.createInstance<ArrayElementInitializersContext>(_ctx, getState());
  enterRule(_localctx, 114, azslParser::RuleArrayElementInitializers);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(804);
    standardVariableInitializer();
    setState(809);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(805);
        match(azslParser::Comma);
        setState(806);
        standardVariableInitializer(); 
      }
      setState(811);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    }
    setState(813);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == azslParser::Comma) {
      setState(812);
      match(azslParser::Comma);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayRankSpecifierContext ------------------------------------------------------------------

azslParser::ArrayRankSpecifierContext::ArrayRankSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::ArrayRankSpecifierContext::LeftBracket() {
  return getToken(azslParser::LeftBracket, 0);
}

tree::TerminalNode* azslParser::ArrayRankSpecifierContext::RightBracket() {
  return getToken(azslParser::RightBracket, 0);
}

azslParser::ExpressionContext* azslParser::ArrayRankSpecifierContext::expression() {
  return getRuleContext<azslParser::ExpressionContext>(0);
}


size_t azslParser::ArrayRankSpecifierContext::getRuleIndex() const {
  return azslParser::RuleArrayRankSpecifier;
}

void azslParser::ArrayRankSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayRankSpecifier(this);
}

void azslParser::ArrayRankSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayRankSpecifier(this);
}

azslParser::ArrayRankSpecifierContext* azslParser::arrayRankSpecifier() {
  ArrayRankSpecifierContext *_localctx = _tracker.createInstance<ArrayRankSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 116, azslParser::RuleArrayRankSpecifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(815);
    match(azslParser::LeftBracket);
    setState(817);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << azslParser::Bool)
      | (1ULL << azslParser::Bool1)
      | (1ULL << azslParser::Bool2)
      | (1ULL << azslParser::Bool3)
      | (1ULL << azslParser::Bool4)
      | (1ULL << azslParser::Bool1x1)
      | (1ULL << azslParser::Bool1x2)
      | (1ULL << azslParser::Bool1x3)
      | (1ULL << azslParser::Bool1x4)
      | (1ULL << azslParser::Bool2x1)
      | (1ULL << azslParser::Bool2x2)
      | (1ULL << azslParser::Bool2x3)
      | (1ULL << azslParser::Bool2x4)
      | (1ULL << azslParser::Bool3x1)
      | (1ULL << azslParser::Bool3x2)
      | (1ULL << azslParser::Bool3x3)
      | (1ULL << azslParser::Bool3x4)
      | (1ULL << azslParser::Bool4x1)
      | (1ULL << azslParser::Bool4x2)
      | (1ULL << azslParser::Bool4x3)
      | (1ULL << azslParser::Bool4x4)
      | (1ULL << azslParser::Double)
      | (1ULL << azslParser::Double1)
      | (1ULL << azslParser::Double2)
      | (1ULL << azslParser::Double3)
      | (1ULL << azslParser::Double4)
      | (1ULL << azslParser::Double1x1)
      | (1ULL << azslParser::Double1x2)
      | (1ULL << azslParser::Double1x3)
      | (1ULL << azslParser::Double1x4)
      | (1ULL << azslParser::Double2x1)
      | (1ULL << azslParser::Double2x2)
      | (1ULL << azslParser::Double2x3)
      | (1ULL << azslParser::Double2x4)
      | (1ULL << azslParser::Double3x1)
      | (1ULL << azslParser::Double3x2)
      | (1ULL << azslParser::Double3x3)
      | (1ULL << azslParser::Double3x4)
      | (1ULL << azslParser::Double4x1)
      | (1ULL << azslParser::Double4x2)
      | (1ULL << azslParser::Double4x3)
      | (1ULL << azslParser::Double4x4))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (azslParser::Float - 67))
      | (1ULL << (azslParser::Float1 - 67))
      | (1ULL << (azslParser::Float2 - 67))
      | (1ULL << (azslParser::Float3 - 67))
      | (1ULL << (azslParser::Float4 - 67))
      | (1ULL << (azslParser::Float1x1 - 67))
      | (1ULL << (azslParser::Float1x2 - 67))
      | (1ULL << (azslParser::Float1x3 - 67))
      | (1ULL << (azslParser::Float1x4 - 67))
      | (1ULL << (azslParser::Float2x1 - 67))
      | (1ULL << (azslParser::Float2x2 - 67))
      | (1ULL << (azslParser::Float2x3 - 67))
      | (1ULL << (azslParser::Float2x4 - 67))
      | (1ULL << (azslParser::Float3x1 - 67))
      | (1ULL << (azslParser::Float3x2 - 67))
      | (1ULL << (azslParser::Float3x3 - 67))
      | (1ULL << (azslParser::Float3x4 - 67))
      | (1ULL << (azslParser::Float4x1 - 67))
      | (1ULL << (azslParser::Float4x2 - 67))
      | (1ULL << (azslParser::Float4x3 - 67))
      | (1ULL << (azslParser::Float4x4 - 67))
      | (1ULL << (azslParser::Half - 67))
      | (1ULL << (azslParser::Half1 - 67))
      | (1ULL << (azslParser::Half2 - 67))
      | (1ULL << (azslParser::Half3 - 67))
      | (1ULL << (azslParser::Half4 - 67))
      | (1ULL << (azslParser::Half1x1 - 67))
      | (1ULL << (azslParser::Half1x2 - 67))
      | (1ULL << (azslParser::Half1x3 - 67))
      | (1ULL << (azslParser::Half1x4 - 67))
      | (1ULL << (azslParser::Half2x1 - 67))
      | (1ULL << (azslParser::Half2x2 - 67))
      | (1ULL << (azslParser::Half2x3 - 67))
      | (1ULL << (azslParser::Half2x4 - 67))
      | (1ULL << (azslParser::Half3x1 - 67))
      | (1ULL << (azslParser::Half3x2 - 67))
      | (1ULL << (azslParser::Half3x3 - 67))
      | (1ULL << (azslParser::Half3x4 - 67))
      | (1ULL << (azslParser::Half4x1 - 67))
      | (1ULL << (azslParser::Half4x2 - 67))
      | (1ULL << (azslParser::Half4x3 - 67))
      | (1ULL << (azslParser::Half4x4 - 67))
      | (1ULL << (azslParser::Int - 67))
      | (1ULL << (azslParser::Int16_t - 67))
      | (1ULL << (azslParser::Int32_t - 67))
      | (1ULL << (azslParser::Int64_t - 67))
      | (1ULL << (azslParser::Int1 - 67))
      | (1ULL << (azslParser::Int2 - 67))
      | (1ULL << (azslParser::Int3 - 67))
      | (1ULL << (azslParser::Int4 - 67))
      | (1ULL << (azslParser::Int1x1 - 67))
      | (1ULL << (azslParser::Int1x2 - 67))
      | (1ULL << (azslParser::Int1x3 - 67))
      | (1ULL << (azslParser::Int1x4 - 67)))) != 0) || ((((_la - 131) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 131)) & ((1ULL << (azslParser::Int2x1 - 131))
      | (1ULL << (azslParser::Int2x2 - 131))
      | (1ULL << (azslParser::Int2x3 - 131))
      | (1ULL << (azslParser::Int2x4 - 131))
      | (1ULL << (azslParser::Int3x1 - 131))
      | (1ULL << (azslParser::Int3x2 - 131))
      | (1ULL << (azslParser::Int3x3 - 131))
      | (1ULL << (azslParser::Int3x4 - 131))
      | (1ULL << (azslParser::Int4x1 - 131))
      | (1ULL << (azslParser::Int4x2 - 131))
      | (1ULL << (azslParser::Int4x3 - 131))
      | (1ULL << (azslParser::Int4x4 - 131))
      | (1ULL << (azslParser::Matrix - 131)))) != 0) || ((((_la - 210) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 210)) & ((1ULL << (azslParser::Uint - 210))
      | (1ULL << (azslParser::Uint1 - 210))
      | (1ULL << (azslParser::Uint2 - 210))
      | (1ULL << (azslParser::Uint3 - 210))
      | (1ULL << (azslParser::Uint4 - 210))
      | (1ULL << (azslParser::Uint1x1 - 210))
      | (1ULL << (azslParser::Uint1x2 - 210))
      | (1ULL << (azslParser::Uint1x3 - 210))
      | (1ULL << (azslParser::Uint1x4 - 210))
      | (1ULL << (azslParser::Uint2x1 - 210))
      | (1ULL << (azslParser::Uint2x2 - 210))
      | (1ULL << (azslParser::Uint2x3 - 210))
      | (1ULL << (azslParser::Uint2x4 - 210))
      | (1ULL << (azslParser::Uint3x1 - 210))
      | (1ULL << (azslParser::Uint3x2 - 210))
      | (1ULL << (azslParser::Uint3x3 - 210))
      | (1ULL << (azslParser::Uint3x4 - 210))
      | (1ULL << (azslParser::Uint4x1 - 210))
      | (1ULL << (azslParser::Uint4x2 - 210))
      | (1ULL << (azslParser::Uint4x3 - 210))
      | (1ULL << (azslParser::Uint4x4 - 210))
      | (1ULL << (azslParser::Uint16_t - 210))
      | (1ULL << (azslParser::Uint32_t - 210))
      | (1ULL << (azslParser::Uint64_t - 210))
      | (1ULL << (azslParser::Dword - 210))
      | (1ULL << (azslParser::Dword1 - 210))
      | (1ULL << (azslParser::Dword2 - 210))
      | (1ULL << (azslParser::Dword3 - 210))
      | (1ULL << (azslParser::Dword4 - 210))
      | (1ULL << (azslParser::Dword1x1 - 210))
      | (1ULL << (azslParser::Dword1x2 - 210))
      | (1ULL << (azslParser::Dword1x3 - 210))
      | (1ULL << (azslParser::Dword1x4 - 210))
      | (1ULL << (azslParser::Dword2x1 - 210))
      | (1ULL << (azslParser::Dword2x2 - 210))
      | (1ULL << (azslParser::Dword2x3 - 210))
      | (1ULL << (azslParser::Dword2x4 - 210))
      | (1ULL << (azslParser::Dword3x1 - 210))
      | (1ULL << (azslParser::Dword3x2 - 210))
      | (1ULL << (azslParser::Dword3x3 - 210))
      | (1ULL << (azslParser::Dword3x4 - 210))
      | (1ULL << (azslParser::Dword4x1 - 210))
      | (1ULL << (azslParser::Dword4x2 - 210))
      | (1ULL << (azslParser::Dword4x3 - 210))
      | (1ULL << (azslParser::Dword4x4 - 210))
      | (1ULL << (azslParser::Vector - 210)))) != 0) || ((((_la - 305) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 305)) & ((1ULL << (azslParser::LeftParen - 305))
      | (1ULL << (azslParser::Plus - 305))
      | (1ULL << (azslParser::PlusPlus - 305))
      | (1ULL << (azslParser::Minus - 305))
      | (1ULL << (azslParser::MinusMinus - 305))
      | (1ULL << (azslParser::Not - 305))
      | (1ULL << (azslParser::Tilde - 305))
      | (1ULL << (azslParser::ColonColon - 305))
      | (1ULL << (azslParser::True - 305))
      | (1ULL << (azslParser::False - 305)))) != 0) || ((((_la - 369) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 369)) & ((1ULL << (azslParser::Identifier - 369))
      | (1ULL << (azslParser::IntegerLiteral - 369))
      | (1ULL << (azslParser::FloatLiteral - 369))
      | (1ULL << (azslParser::StringLiteral - 369)))) != 0)) {
      setState(816);
      antlrcpp::downCast<ArrayRankSpecifierContext *>(_localctx)->Dimension = expression(0);
    }
    setState(819);
    match(azslParser::RightBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PackOffsetNodeContext ------------------------------------------------------------------

azslParser::PackOffsetNodeContext::PackOffsetNodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::PackOffsetNodeContext::Colon() {
  return getToken(azslParser::Colon, 0);
}

tree::TerminalNode* azslParser::PackOffsetNodeContext::LeftParen() {
  return getToken(azslParser::LeftParen, 0);
}

tree::TerminalNode* azslParser::PackOffsetNodeContext::RightParen() {
  return getToken(azslParser::RightParen, 0);
}

tree::TerminalNode* azslParser::PackOffsetNodeContext::Packoffset() {
  return getToken(azslParser::Packoffset, 0);
}

std::vector<tree::TerminalNode *> azslParser::PackOffsetNodeContext::Identifier() {
  return getTokens(azslParser::Identifier);
}

tree::TerminalNode* azslParser::PackOffsetNodeContext::Identifier(size_t i) {
  return getToken(azslParser::Identifier, i);
}

tree::TerminalNode* azslParser::PackOffsetNodeContext::Dot() {
  return getToken(azslParser::Dot, 0);
}


size_t azslParser::PackOffsetNodeContext::getRuleIndex() const {
  return azslParser::RulePackOffsetNode;
}

void azslParser::PackOffsetNodeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPackOffsetNode(this);
}

void azslParser::PackOffsetNodeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPackOffsetNode(this);
}

azslParser::PackOffsetNodeContext* azslParser::packOffsetNode() {
  PackOffsetNodeContext *_localctx = _tracker.createInstance<PackOffsetNodeContext>(_ctx, getState());
  enterRule(_localctx, 118, azslParser::RulePackOffsetNode);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(821);
    match(azslParser::Colon);
    setState(822);
    antlrcpp::downCast<PackOffsetNodeContext *>(_localctx)->PackoffsetKeyword = match(azslParser::Packoffset);
    setState(823);
    match(azslParser::LeftParen);
    setState(824);
    antlrcpp::downCast<PackOffsetNodeContext *>(_localctx)->PackOffsetRegister = match(azslParser::Identifier);
    setState(827);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == azslParser::Dot) {
      setState(825);
      match(azslParser::Dot);
      setState(826);
      antlrcpp::downCast<PackOffsetNodeContext *>(_localctx)->PackOffsetComponent = match(azslParser::Identifier);
    }
    setState(829);
    match(azslParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StorageFlagsContext ------------------------------------------------------------------

azslParser::StorageFlagsContext::StorageFlagsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<azslParser::StorageFlagContext *> azslParser::StorageFlagsContext::storageFlag() {
  return getRuleContexts<azslParser::StorageFlagContext>();
}

azslParser::StorageFlagContext* azslParser::StorageFlagsContext::storageFlag(size_t i) {
  return getRuleContext<azslParser::StorageFlagContext>(i);
}


size_t azslParser::StorageFlagsContext::getRuleIndex() const {
  return azslParser::RuleStorageFlags;
}

void azslParser::StorageFlagsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStorageFlags(this);
}

void azslParser::StorageFlagsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStorageFlags(this);
}

azslParser::StorageFlagsContext* azslParser::storageFlags() {
  StorageFlagsContext *_localctx = _tracker.createInstance<StorageFlagsContext>(_ctx, getState());
  enterRule(_localctx, 120, azslParser::RuleStorageFlags);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(834);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(831);
        storageFlag(); 
      }
      setState(836);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StorageFlagContext ------------------------------------------------------------------

azslParser::StorageFlagContext::StorageFlagContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::StorageFlagContext::Const() {
  return getToken(azslParser::Const, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::Unsigned() {
  return getToken(azslParser::Unsigned, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::RowMajor() {
  return getToken(azslParser::RowMajor, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::ColumnMajor() {
  return getToken(azslParser::ColumnMajor, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::Extern() {
  return getToken(azslParser::Extern, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::Inline() {
  return getToken(azslParser::Inline, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::Rootconstant() {
  return getToken(azslParser::Rootconstant, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::Option() {
  return getToken(azslParser::Option, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::Precise() {
  return getToken(azslParser::Precise, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::Shared() {
  return getToken(azslParser::Shared, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::Groupshared() {
  return getToken(azslParser::Groupshared, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::Static() {
  return getToken(azslParser::Static, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::Uniform() {
  return getToken(azslParser::Uniform, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::Volatile() {
  return getToken(azslParser::Volatile, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::Globallycoherent() {
  return getToken(azslParser::Globallycoherent, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::SNorm() {
  return getToken(azslParser::SNorm, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::UNorm() {
  return getToken(azslParser::UNorm, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::Linear() {
  return getToken(azslParser::Linear, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::Centroid() {
  return getToken(azslParser::Centroid, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::Nointerpolation() {
  return getToken(azslParser::Nointerpolation, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::Noperspective() {
  return getToken(azslParser::Noperspective, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::Sample() {
  return getToken(azslParser::Sample, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::In() {
  return getToken(azslParser::In, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::Out() {
  return getToken(azslParser::Out, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::Inout() {
  return getToken(azslParser::Inout, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::Point() {
  return getToken(azslParser::Point, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::Line_() {
  return getToken(azslParser::Line_, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::Triangle() {
  return getToken(azslParser::Triangle, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::LineAdj() {
  return getToken(azslParser::LineAdj, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::TriangleAdj() {
  return getToken(azslParser::TriangleAdj, 0);
}

tree::TerminalNode* azslParser::StorageFlagContext::Identifier() {
  return getToken(azslParser::Identifier, 0);
}


size_t azslParser::StorageFlagContext::getRuleIndex() const {
  return azslParser::RuleStorageFlag;
}

void azslParser::StorageFlagContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStorageFlag(this);
}

void azslParser::StorageFlagContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStorageFlag(this);
}

azslParser::StorageFlagContext* azslParser::storageFlag() {
  StorageFlagContext *_localctx = _tracker.createInstance<StorageFlagContext>(_ctx, getState());
  enterRule(_localctx, 122, azslParser::RuleStorageFlag);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(837);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << azslParser::Centroid)
      | (1ULL << azslParser::ColumnMajor)
      | (1ULL << azslParser::Const))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (azslParser::Extern - 64))
      | (1ULL << (azslParser::Groupshared - 64))
      | (1ULL << (azslParser::Globallycoherent - 64))
      | (1ULL << (azslParser::In - 64))
      | (1ULL << (azslParser::Inline - 64))
      | (1ULL << (azslParser::Rootconstant - 64))
      | (1ULL << (azslParser::Inout - 64)))) != 0) || ((((_la - 144) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 144)) & ((1ULL << (azslParser::Line_ - 144))
      | (1ULL << (azslParser::LineAdj - 144))
      | (1ULL << (azslParser::Linear - 144))
      | (1ULL << (azslParser::Nointerpolation - 144))
      | (1ULL << (azslParser::Noperspective - 144))
      | (1ULL << (azslParser::Option - 144))
      | (1ULL << (azslParser::Out - 144))
      | (1ULL << (azslParser::Point - 144))
      | (1ULL << (azslParser::Precise - 144))
      | (1ULL << (azslParser::RowMajor - 144))
      | (1ULL << (azslParser::Sample - 144))
      | (1ULL << (azslParser::Shared - 144))
      | (1ULL << (azslParser::SNorm - 144))
      | (1ULL << (azslParser::Static - 144))
      | (1ULL << (azslParser::Triangle - 144))
      | (1ULL << (azslParser::TriangleAdj - 144)))) != 0) || ((((_la - 209) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 209)) & ((1ULL << (azslParser::Uniform - 209))
      | (1ULL << (azslParser::UNorm - 209))
      | (1ULL << (azslParser::Unsigned - 209))
      | (1ULL << (azslParser::Volatile - 209)))) != 0) || _la == azslParser::Identifier)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

azslParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::StorageFlagsContext* azslParser::TypeContext::storageFlags() {
  return getRuleContext<azslParser::StorageFlagsContext>(0);
}

azslParser::PredefinedTypeContext* azslParser::TypeContext::predefinedType() {
  return getRuleContext<azslParser::PredefinedTypeContext>(0);
}

azslParser::UserDefinedTypeContext* azslParser::TypeContext::userDefinedType() {
  return getRuleContext<azslParser::UserDefinedTypeContext>(0);
}

azslParser::TypeofExpressionContext* azslParser::TypeContext::typeofExpression() {
  return getRuleContext<azslParser::TypeofExpressionContext>(0);
}

tree::TerminalNode* azslParser::TypeContext::Void() {
  return getToken(azslParser::Void, 0);
}


size_t azslParser::TypeContext::getRuleIndex() const {
  return azslParser::RuleType;
}

void azslParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void azslParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

azslParser::TypeContext* azslParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 124, azslParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(839);
    storageFlags();
    setState(844);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case azslParser::AppendStructuredBuffer:
      case azslParser::Bool:
      case azslParser::Bool1:
      case azslParser::Bool2:
      case azslParser::Bool3:
      case azslParser::Bool4:
      case azslParser::Bool1x1:
      case azslParser::Bool1x2:
      case azslParser::Bool1x3:
      case azslParser::Bool1x4:
      case azslParser::Bool2x1:
      case azslParser::Bool2x2:
      case azslParser::Bool2x3:
      case azslParser::Bool2x4:
      case azslParser::Bool3x1:
      case azslParser::Bool3x2:
      case azslParser::Bool3x3:
      case azslParser::Bool3x4:
      case azslParser::Bool4x1:
      case azslParser::Bool4x2:
      case azslParser::Bool4x3:
      case azslParser::Bool4x4:
      case azslParser::Buffer:
      case azslParser::BuiltInTriangleIntersectionAttributes:
      case azslParser::ByteAddressBuffer:
      case azslParser::ConstantBuffer:
      case azslParser::ConstantBufferCamel:
      case azslParser::ConsumeStructuredBuffer:
      case azslParser::Double:
      case azslParser::Double1:
      case azslParser::Double2:
      case azslParser::Double3:
      case azslParser::Double4:
      case azslParser::Double1x1:
      case azslParser::Double1x2:
      case azslParser::Double1x3:
      case azslParser::Double1x4:
      case azslParser::Double2x1:
      case azslParser::Double2x2:
      case azslParser::Double2x3:
      case azslParser::Double2x4:
      case azslParser::Double3x1:
      case azslParser::Double3x2:
      case azslParser::Double3x3:
      case azslParser::Double3x4:
      case azslParser::Double4x1:
      case azslParser::Double4x2:
      case azslParser::Double4x3:
      case azslParser::Double4x4:
      case azslParser::Float:
      case azslParser::Float1:
      case azslParser::Float2:
      case azslParser::Float3:
      case azslParser::Float4:
      case azslParser::Float1x1:
      case azslParser::Float1x2:
      case azslParser::Float1x3:
      case azslParser::Float1x4:
      case azslParser::Float2x1:
      case azslParser::Float2x2:
      case azslParser::Float2x3:
      case azslParser::Float2x4:
      case azslParser::Float3x1:
      case azslParser::Float3x2:
      case azslParser::Float3x3:
      case azslParser::Float3x4:
      case azslParser::Float4x1:
      case azslParser::Float4x2:
      case azslParser::Float4x3:
      case azslParser::Float4x4:
      case azslParser::Half:
      case azslParser::Half1:
      case azslParser::Half2:
      case azslParser::Half3:
      case azslParser::Half4:
      case azslParser::Half1x1:
      case azslParser::Half1x2:
      case azslParser::Half1x3:
      case azslParser::Half1x4:
      case azslParser::Half2x1:
      case azslParser::Half2x2:
      case azslParser::Half2x3:
      case azslParser::Half2x4:
      case azslParser::Half3x1:
      case azslParser::Half3x2:
      case azslParser::Half3x3:
      case azslParser::Half3x4:
      case azslParser::Half4x1:
      case azslParser::Half4x2:
      case azslParser::Half4x3:
      case azslParser::Half4x4:
      case azslParser::InputPatch:
      case azslParser::Int:
      case azslParser::Int16_t:
      case azslParser::Int32_t:
      case azslParser::Int64_t:
      case azslParser::Int1:
      case azslParser::Int2:
      case azslParser::Int3:
      case azslParser::Int4:
      case azslParser::Int1x1:
      case azslParser::Int1x2:
      case azslParser::Int1x3:
      case azslParser::Int1x4:
      case azslParser::Int2x1:
      case azslParser::Int2x2:
      case azslParser::Int2x3:
      case azslParser::Int2x4:
      case azslParser::Int3x1:
      case azslParser::Int3x2:
      case azslParser::Int3x3:
      case azslParser::Int3x4:
      case azslParser::Int4x1:
      case azslParser::Int4x2:
      case azslParser::Int4x3:
      case azslParser::Int4x4:
      case azslParser::LineStream:
      case azslParser::Matrix:
      case azslParser::OutputPatch:
      case azslParser::PointStream:
      case azslParser::RasterizerOrderedBuffer:
      case azslParser::RasterizerOrderedByteAddressBuffer:
      case azslParser::RasterizerOrderedStructuredBuffer:
      case azslParser::RasterizerOrderedTexture1D:
      case azslParser::RasterizerOrderedTexture1DArray:
      case azslParser::RasterizerOrderedTexture2D:
      case azslParser::RasterizerOrderedTexture2DArray:
      case azslParser::RasterizerOrderedTexture3D:
      case azslParser::RayDesc:
      case azslParser::RaytracingAccelerationStructure:
      case azslParser::RWBuffer:
      case azslParser::RWByteAddressBuffer:
      case azslParser::RWStructuredBuffer:
      case azslParser::RWTexture1D:
      case azslParser::RWTexture1DArray:
      case azslParser::RWTexture2D:
      case azslParser::RWTexture2DArray:
      case azslParser::RWTexture3D:
      case azslParser::Sampler:
      case azslParser::SamplerCapitalS:
      case azslParser::SamplerComparisonState:
      case azslParser::SamplerStateCamel:
      case azslParser::SamplerState:
      case azslParser::StructuredBuffer:
      case azslParser::SubpassInput:
      case azslParser::SubpassInputMS:
      case azslParser::Texture1D:
      case azslParser::Texture1DArray:
      case azslParser::Texture2D:
      case azslParser::Texture2DArray:
      case azslParser::Texture2DMS:
      case azslParser::Texture2DMSArray:
      case azslParser::Texture3D:
      case azslParser::TextureCube:
      case azslParser::TextureCubeArray:
      case azslParser::TriangleStream:
      case azslParser::Uint:
      case azslParser::Uint1:
      case azslParser::Uint2:
      case azslParser::Uint3:
      case azslParser::Uint4:
      case azslParser::Uint1x1:
      case azslParser::Uint1x2:
      case azslParser::Uint1x3:
      case azslParser::Uint1x4:
      case azslParser::Uint2x1:
      case azslParser::Uint2x2:
      case azslParser::Uint2x3:
      case azslParser::Uint2x4:
      case azslParser::Uint3x1:
      case azslParser::Uint3x2:
      case azslParser::Uint3x3:
      case azslParser::Uint3x4:
      case azslParser::Uint4x1:
      case azslParser::Uint4x2:
      case azslParser::Uint4x3:
      case azslParser::Uint4x4:
      case azslParser::Uint16_t:
      case azslParser::Uint32_t:
      case azslParser::Uint64_t:
      case azslParser::Dword:
      case azslParser::Dword1:
      case azslParser::Dword2:
      case azslParser::Dword3:
      case azslParser::Dword4:
      case azslParser::Dword1x1:
      case azslParser::Dword1x2:
      case azslParser::Dword1x3:
      case azslParser::Dword1x4:
      case azslParser::Dword2x1:
      case azslParser::Dword2x2:
      case azslParser::Dword2x3:
      case azslParser::Dword2x4:
      case azslParser::Dword3x1:
      case azslParser::Dword3x2:
      case azslParser::Dword3x3:
      case azslParser::Dword3x4:
      case azslParser::Dword4x1:
      case azslParser::Dword4x2:
      case azslParser::Dword4x3:
      case azslParser::Dword4x4:
      case azslParser::Vector:
      case azslParser::StateObjectConfig:
      case azslParser::LocalRootSignature:
      case azslParser::GlobalRootSignature:
      case azslParser::SubobjectToExportsAssociation:
      case azslParser::RaytracingShaderConfig:
      case azslParser::RaytracingPipelineConfig:
      case azslParser::RaytracingPipelineConfig1:
      case azslParser::TriangleHitGroup:
      case azslParser::ProceduralPrimitiveHitGroup: {
        setState(840);
        predefinedType();
        break;
      }

      case azslParser::Class:
      case azslParser::Enum:
      case azslParser::Interface:
      case azslParser::Struct:
      case azslParser::ColonColon:
      case azslParser::Identifier: {
        setState(841);
        userDefinedType();
        break;
      }

      case azslParser::KW_Typeof: {
        setState(842);
        typeofExpression();
        break;
      }

      case azslParser::Void: {
        setState(843);
        match(azslParser::Void);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PredefinedTypeContext ------------------------------------------------------------------

azslParser::PredefinedTypeContext::PredefinedTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::BufferPredefinedTypeContext* azslParser::PredefinedTypeContext::bufferPredefinedType() {
  return getRuleContext<azslParser::BufferPredefinedTypeContext>(0);
}

azslParser::ByteAddressBufferTypesContext* azslParser::PredefinedTypeContext::byteAddressBufferTypes() {
  return getRuleContext<azslParser::ByteAddressBufferTypesContext>(0);
}

azslParser::PatchPredefinedTypeContext* azslParser::PredefinedTypeContext::patchPredefinedType() {
  return getRuleContext<azslParser::PatchPredefinedTypeContext>(0);
}

azslParser::MatrixTypeContext* azslParser::PredefinedTypeContext::matrixType() {
  return getRuleContext<azslParser::MatrixTypeContext>(0);
}

azslParser::GenericMatrixPredefinedTypeContext* azslParser::PredefinedTypeContext::genericMatrixPredefinedType() {
  return getRuleContext<azslParser::GenericMatrixPredefinedTypeContext>(0);
}

azslParser::SamplerStatePredefinedTypeContext* azslParser::PredefinedTypeContext::samplerStatePredefinedType() {
  return getRuleContext<azslParser::SamplerStatePredefinedTypeContext>(0);
}

azslParser::ScalarTypeContext* azslParser::PredefinedTypeContext::scalarType() {
  return getRuleContext<azslParser::ScalarTypeContext>(0);
}

azslParser::StreamOutputPredefinedTypeContext* azslParser::PredefinedTypeContext::streamOutputPredefinedType() {
  return getRuleContext<azslParser::StreamOutputPredefinedTypeContext>(0);
}

azslParser::StructuredBufferPredefinedTypeContext* azslParser::PredefinedTypeContext::structuredBufferPredefinedType() {
  return getRuleContext<azslParser::StructuredBufferPredefinedTypeContext>(0);
}

azslParser::TexturePredefinedTypeContext* azslParser::PredefinedTypeContext::texturePredefinedType() {
  return getRuleContext<azslParser::TexturePredefinedTypeContext>(0);
}

azslParser::GenericTexturePredefinedTypeContext* azslParser::PredefinedTypeContext::genericTexturePredefinedType() {
  return getRuleContext<azslParser::GenericTexturePredefinedTypeContext>(0);
}

azslParser::MsTexturePredefinedTypeContext* azslParser::PredefinedTypeContext::msTexturePredefinedType() {
  return getRuleContext<azslParser::MsTexturePredefinedTypeContext>(0);
}

azslParser::VectorTypeContext* azslParser::PredefinedTypeContext::vectorType() {
  return getRuleContext<azslParser::VectorTypeContext>(0);
}

azslParser::GenericVectorTypeContext* azslParser::PredefinedTypeContext::genericVectorType() {
  return getRuleContext<azslParser::GenericVectorTypeContext>(0);
}

azslParser::ConstantBufferTemplatedContext* azslParser::PredefinedTypeContext::constantBufferTemplated() {
  return getRuleContext<azslParser::ConstantBufferTemplatedContext>(0);
}

azslParser::OtherViewResourceTypeContext* azslParser::PredefinedTypeContext::otherViewResourceType() {
  return getRuleContext<azslParser::OtherViewResourceTypeContext>(0);
}

azslParser::SubobjectTypeContext* azslParser::PredefinedTypeContext::subobjectType() {
  return getRuleContext<azslParser::SubobjectTypeContext>(0);
}

azslParser::RtxBuiltInTypesContext* azslParser::PredefinedTypeContext::rtxBuiltInTypes() {
  return getRuleContext<azslParser::RtxBuiltInTypesContext>(0);
}


size_t azslParser::PredefinedTypeContext::getRuleIndex() const {
  return azslParser::RulePredefinedType;
}

void azslParser::PredefinedTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPredefinedType(this);
}

void azslParser::PredefinedTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPredefinedType(this);
}

azslParser::PredefinedTypeContext* azslParser::predefinedType() {
  PredefinedTypeContext *_localctx = _tracker.createInstance<PredefinedTypeContext>(_ctx, getState());
  enterRule(_localctx, 126, azslParser::RulePredefinedType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(864);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(846);
      bufferPredefinedType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(847);
      byteAddressBufferTypes();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(848);
      patchPredefinedType();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(849);
      matrixType();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(850);
      genericMatrixPredefinedType();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(851);
      samplerStatePredefinedType();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(852);
      scalarType();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(853);
      streamOutputPredefinedType();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(854);
      structuredBufferPredefinedType();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(855);
      texturePredefinedType();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(856);
      genericTexturePredefinedType();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(857);
      msTexturePredefinedType();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(858);
      vectorType();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(859);
      genericVectorType();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(860);
      constantBufferTemplated();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(861);
      otherViewResourceType();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(862);
      subobjectType();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(863);
      rtxBuiltInTypes();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubobjectTypeContext ------------------------------------------------------------------

azslParser::SubobjectTypeContext::SubobjectTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::SubobjectTypeContext::StateObjectConfig() {
  return getToken(azslParser::StateObjectConfig, 0);
}

tree::TerminalNode* azslParser::SubobjectTypeContext::LocalRootSignature() {
  return getToken(azslParser::LocalRootSignature, 0);
}

tree::TerminalNode* azslParser::SubobjectTypeContext::GlobalRootSignature() {
  return getToken(azslParser::GlobalRootSignature, 0);
}

tree::TerminalNode* azslParser::SubobjectTypeContext::SubobjectToExportsAssociation() {
  return getToken(azslParser::SubobjectToExportsAssociation, 0);
}

tree::TerminalNode* azslParser::SubobjectTypeContext::RaytracingShaderConfig() {
  return getToken(azslParser::RaytracingShaderConfig, 0);
}

tree::TerminalNode* azslParser::SubobjectTypeContext::RaytracingPipelineConfig() {
  return getToken(azslParser::RaytracingPipelineConfig, 0);
}

tree::TerminalNode* azslParser::SubobjectTypeContext::RaytracingPipelineConfig1() {
  return getToken(azslParser::RaytracingPipelineConfig1, 0);
}

tree::TerminalNode* azslParser::SubobjectTypeContext::TriangleHitGroup() {
  return getToken(azslParser::TriangleHitGroup, 0);
}

tree::TerminalNode* azslParser::SubobjectTypeContext::ProceduralPrimitiveHitGroup() {
  return getToken(azslParser::ProceduralPrimitiveHitGroup, 0);
}


size_t azslParser::SubobjectTypeContext::getRuleIndex() const {
  return azslParser::RuleSubobjectType;
}

void azslParser::SubobjectTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubobjectType(this);
}

void azslParser::SubobjectTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubobjectType(this);
}

azslParser::SubobjectTypeContext* azslParser::subobjectType() {
  SubobjectTypeContext *_localctx = _tracker.createInstance<SubobjectTypeContext>(_ctx, getState());
  enterRule(_localctx, 128, azslParser::RuleSubobjectType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(866);
    _la = _input->LA(1);
    if (!(((((_la - 261) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 261)) & ((1ULL << (azslParser::StateObjectConfig - 261))
      | (1ULL << (azslParser::LocalRootSignature - 261))
      | (1ULL << (azslParser::GlobalRootSignature - 261))
      | (1ULL << (azslParser::SubobjectToExportsAssociation - 261))
      | (1ULL << (azslParser::RaytracingShaderConfig - 261))
      | (1ULL << (azslParser::RaytracingPipelineConfig - 261))
      | (1ULL << (azslParser::RaytracingPipelineConfig1 - 261))
      | (1ULL << (azslParser::TriangleHitGroup - 261))
      | (1ULL << (azslParser::ProceduralPrimitiveHitGroup - 261)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OtherViewResourceTypeContext ------------------------------------------------------------------

azslParser::OtherViewResourceTypeContext::OtherViewResourceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::OtherViewResourceTypeContext::RaytracingAccelerationStructure() {
  return getToken(azslParser::RaytracingAccelerationStructure, 0);
}


size_t azslParser::OtherViewResourceTypeContext::getRuleIndex() const {
  return azslParser::RuleOtherViewResourceType;
}

void azslParser::OtherViewResourceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOtherViewResourceType(this);
}

void azslParser::OtherViewResourceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOtherViewResourceType(this);
}

azslParser::OtherViewResourceTypeContext* azslParser::otherViewResourceType() {
  OtherViewResourceTypeContext *_localctx = _tracker.createInstance<OtherViewResourceTypeContext>(_ctx, getState());
  enterRule(_localctx, 130, azslParser::RuleOtherViewResourceType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(868);
    match(azslParser::RaytracingAccelerationStructure);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RtxBuiltInTypesContext ------------------------------------------------------------------

azslParser::RtxBuiltInTypesContext::RtxBuiltInTypesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::RtxBuiltInTypesContext::BuiltInTriangleIntersectionAttributes() {
  return getToken(azslParser::BuiltInTriangleIntersectionAttributes, 0);
}

tree::TerminalNode* azslParser::RtxBuiltInTypesContext::RayDesc() {
  return getToken(azslParser::RayDesc, 0);
}


size_t azslParser::RtxBuiltInTypesContext::getRuleIndex() const {
  return azslParser::RuleRtxBuiltInTypes;
}

void azslParser::RtxBuiltInTypesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRtxBuiltInTypes(this);
}

void azslParser::RtxBuiltInTypesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRtxBuiltInTypes(this);
}

azslParser::RtxBuiltInTypesContext* azslParser::rtxBuiltInTypes() {
  RtxBuiltInTypesContext *_localctx = _tracker.createInstance<RtxBuiltInTypesContext>(_ctx, getState());
  enterRule(_localctx, 132, azslParser::RuleRtxBuiltInTypes);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(870);
    _la = _input->LA(1);
    if (!(_la == azslParser::BuiltInTriangleIntersectionAttributes || _la == azslParser::RayDesc)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BufferPredefinedTypeContext ------------------------------------------------------------------

azslParser::BufferPredefinedTypeContext::BufferPredefinedTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::BufferTypeContext* azslParser::BufferPredefinedTypeContext::bufferType() {
  return getRuleContext<azslParser::BufferTypeContext>(0);
}

tree::TerminalNode* azslParser::BufferPredefinedTypeContext::Less() {
  return getToken(azslParser::Less, 0);
}

azslParser::ScalarOrVectorOrMatrixTypeContext* azslParser::BufferPredefinedTypeContext::scalarOrVectorOrMatrixType() {
  return getRuleContext<azslParser::ScalarOrVectorOrMatrixTypeContext>(0);
}

tree::TerminalNode* azslParser::BufferPredefinedTypeContext::Greater() {
  return getToken(azslParser::Greater, 0);
}


size_t azslParser::BufferPredefinedTypeContext::getRuleIndex() const {
  return azslParser::RuleBufferPredefinedType;
}

void azslParser::BufferPredefinedTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBufferPredefinedType(this);
}

void azslParser::BufferPredefinedTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBufferPredefinedType(this);
}

azslParser::BufferPredefinedTypeContext* azslParser::bufferPredefinedType() {
  BufferPredefinedTypeContext *_localctx = _tracker.createInstance<BufferPredefinedTypeContext>(_ctx, getState());
  enterRule(_localctx, 134, azslParser::RuleBufferPredefinedType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(872);
    bufferType();
    setState(873);
    match(azslParser::Less);
    setState(874);
    scalarOrVectorOrMatrixType();
    setState(875);
    match(azslParser::Greater);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BufferTypeContext ------------------------------------------------------------------

azslParser::BufferTypeContext::BufferTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::BufferTypeContext::Buffer() {
  return getToken(azslParser::Buffer, 0);
}

tree::TerminalNode* azslParser::BufferTypeContext::RWBuffer() {
  return getToken(azslParser::RWBuffer, 0);
}

tree::TerminalNode* azslParser::BufferTypeContext::RasterizerOrderedBuffer() {
  return getToken(azslParser::RasterizerOrderedBuffer, 0);
}


size_t azslParser::BufferTypeContext::getRuleIndex() const {
  return azslParser::RuleBufferType;
}

void azslParser::BufferTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBufferType(this);
}

void azslParser::BufferTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBufferType(this);
}

azslParser::BufferTypeContext* azslParser::bufferType() {
  BufferTypeContext *_localctx = _tracker.createInstance<BufferTypeContext>(_ctx, getState());
  enterRule(_localctx, 136, azslParser::RuleBufferType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(877);
    _la = _input->LA(1);
    if (!(_la == azslParser::Buffer || _la == azslParser::RasterizerOrderedBuffer

    || _la == azslParser::RWBuffer)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ByteAddressBufferTypesContext ------------------------------------------------------------------

azslParser::ByteAddressBufferTypesContext::ByteAddressBufferTypesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::ByteAddressBufferTypesContext::ByteAddressBuffer() {
  return getToken(azslParser::ByteAddressBuffer, 0);
}

tree::TerminalNode* azslParser::ByteAddressBufferTypesContext::RWByteAddressBuffer() {
  return getToken(azslParser::RWByteAddressBuffer, 0);
}

tree::TerminalNode* azslParser::ByteAddressBufferTypesContext::RasterizerOrderedByteAddressBuffer() {
  return getToken(azslParser::RasterizerOrderedByteAddressBuffer, 0);
}


size_t azslParser::ByteAddressBufferTypesContext::getRuleIndex() const {
  return azslParser::RuleByteAddressBufferTypes;
}

void azslParser::ByteAddressBufferTypesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterByteAddressBufferTypes(this);
}

void azslParser::ByteAddressBufferTypesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitByteAddressBufferTypes(this);
}

azslParser::ByteAddressBufferTypesContext* azslParser::byteAddressBufferTypes() {
  ByteAddressBufferTypesContext *_localctx = _tracker.createInstance<ByteAddressBufferTypesContext>(_ctx, getState());
  enterRule(_localctx, 138, azslParser::RuleByteAddressBufferTypes);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(879);
    _la = _input->LA(1);
    if (!(_la == azslParser::ByteAddressBuffer || _la == azslParser::RasterizerOrderedByteAddressBuffer

    || _la == azslParser::RWByteAddressBuffer)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PatchPredefinedTypeContext ------------------------------------------------------------------

azslParser::PatchPredefinedTypeContext::PatchPredefinedTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::PatchTypeContext* azslParser::PatchPredefinedTypeContext::patchType() {
  return getRuleContext<azslParser::PatchTypeContext>(0);
}

tree::TerminalNode* azslParser::PatchPredefinedTypeContext::Less() {
  return getToken(azslParser::Less, 0);
}

tree::TerminalNode* azslParser::PatchPredefinedTypeContext::Comma() {
  return getToken(azslParser::Comma, 0);
}

tree::TerminalNode* azslParser::PatchPredefinedTypeContext::Greater() {
  return getToken(azslParser::Greater, 0);
}

azslParser::UserDefinedTypeContext* azslParser::PatchPredefinedTypeContext::userDefinedType() {
  return getRuleContext<azslParser::UserDefinedTypeContext>(0);
}

tree::TerminalNode* azslParser::PatchPredefinedTypeContext::IntegerLiteral() {
  return getToken(azslParser::IntegerLiteral, 0);
}


size_t azslParser::PatchPredefinedTypeContext::getRuleIndex() const {
  return azslParser::RulePatchPredefinedType;
}

void azslParser::PatchPredefinedTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPatchPredefinedType(this);
}

void azslParser::PatchPredefinedTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPatchPredefinedType(this);
}

azslParser::PatchPredefinedTypeContext* azslParser::patchPredefinedType() {
  PatchPredefinedTypeContext *_localctx = _tracker.createInstance<PatchPredefinedTypeContext>(_ctx, getState());
  enterRule(_localctx, 140, azslParser::RulePatchPredefinedType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(881);
    patchType();
    setState(882);
    match(azslParser::Less);
    setState(883);
    antlrcpp::downCast<PatchPredefinedTypeContext *>(_localctx)->Name = userDefinedType();
    setState(884);
    match(azslParser::Comma);
    setState(885);
    antlrcpp::downCast<PatchPredefinedTypeContext *>(_localctx)->ControlPoints = match(azslParser::IntegerLiteral);
    setState(886);
    match(azslParser::Greater);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PatchTypeContext ------------------------------------------------------------------

azslParser::PatchTypeContext::PatchTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::PatchTypeContext::InputPatch() {
  return getToken(azslParser::InputPatch, 0);
}

tree::TerminalNode* azslParser::PatchTypeContext::OutputPatch() {
  return getToken(azslParser::OutputPatch, 0);
}


size_t azslParser::PatchTypeContext::getRuleIndex() const {
  return azslParser::RulePatchType;
}

void azslParser::PatchTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPatchType(this);
}

void azslParser::PatchTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPatchType(this);
}

azslParser::PatchTypeContext* azslParser::patchType() {
  PatchTypeContext *_localctx = _tracker.createInstance<PatchTypeContext>(_ctx, getState());
  enterRule(_localctx, 142, azslParser::RulePatchType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(888);
    _la = _input->LA(1);
    if (!(_la == azslParser::InputPatch

    || _la == azslParser::OutputPatch)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SamplerStatePredefinedTypeContext ------------------------------------------------------------------

azslParser::SamplerStatePredefinedTypeContext::SamplerStatePredefinedTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::SamplerStatePredefinedTypeContext::Sampler() {
  return getToken(azslParser::Sampler, 0);
}

tree::TerminalNode* azslParser::SamplerStatePredefinedTypeContext::SamplerCapitalS() {
  return getToken(azslParser::SamplerCapitalS, 0);
}

tree::TerminalNode* azslParser::SamplerStatePredefinedTypeContext::SamplerState() {
  return getToken(azslParser::SamplerState, 0);
}

tree::TerminalNode* azslParser::SamplerStatePredefinedTypeContext::SamplerStateCamel() {
  return getToken(azslParser::SamplerStateCamel, 0);
}

tree::TerminalNode* azslParser::SamplerStatePredefinedTypeContext::SamplerComparisonState() {
  return getToken(azslParser::SamplerComparisonState, 0);
}


size_t azslParser::SamplerStatePredefinedTypeContext::getRuleIndex() const {
  return azslParser::RuleSamplerStatePredefinedType;
}

void azslParser::SamplerStatePredefinedTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSamplerStatePredefinedType(this);
}

void azslParser::SamplerStatePredefinedTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSamplerStatePredefinedType(this);
}

azslParser::SamplerStatePredefinedTypeContext* azslParser::samplerStatePredefinedType() {
  SamplerStatePredefinedTypeContext *_localctx = _tracker.createInstance<SamplerStatePredefinedTypeContext>(_ctx, getState());
  enterRule(_localctx, 144, azslParser::RuleSamplerStatePredefinedType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(890);
    _la = _input->LA(1);
    if (!(((((_la - 183) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 183)) & ((1ULL << (azslParser::Sampler - 183))
      | (1ULL << (azslParser::SamplerCapitalS - 183))
      | (1ULL << (azslParser::SamplerComparisonState - 183))
      | (1ULL << (azslParser::SamplerStateCamel - 183))
      | (1ULL << (azslParser::SamplerState - 183)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScalarTypeContext ------------------------------------------------------------------

azslParser::ScalarTypeContext::ScalarTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::ScalarTypeContext::Bool() {
  return getToken(azslParser::Bool, 0);
}

tree::TerminalNode* azslParser::ScalarTypeContext::Int() {
  return getToken(azslParser::Int, 0);
}

tree::TerminalNode* azslParser::ScalarTypeContext::Int16_t() {
  return getToken(azslParser::Int16_t, 0);
}

tree::TerminalNode* azslParser::ScalarTypeContext::Int32_t() {
  return getToken(azslParser::Int32_t, 0);
}

tree::TerminalNode* azslParser::ScalarTypeContext::Int64_t() {
  return getToken(azslParser::Int64_t, 0);
}

tree::TerminalNode* azslParser::ScalarTypeContext::Uint() {
  return getToken(azslParser::Uint, 0);
}

tree::TerminalNode* azslParser::ScalarTypeContext::Uint16_t() {
  return getToken(azslParser::Uint16_t, 0);
}

tree::TerminalNode* azslParser::ScalarTypeContext::Uint32_t() {
  return getToken(azslParser::Uint32_t, 0);
}

tree::TerminalNode* azslParser::ScalarTypeContext::Uint64_t() {
  return getToken(azslParser::Uint64_t, 0);
}

tree::TerminalNode* azslParser::ScalarTypeContext::Dword() {
  return getToken(azslParser::Dword, 0);
}

tree::TerminalNode* azslParser::ScalarTypeContext::Half() {
  return getToken(azslParser::Half, 0);
}

tree::TerminalNode* azslParser::ScalarTypeContext::Float() {
  return getToken(azslParser::Float, 0);
}

tree::TerminalNode* azslParser::ScalarTypeContext::Double() {
  return getToken(azslParser::Double, 0);
}


size_t azslParser::ScalarTypeContext::getRuleIndex() const {
  return azslParser::RuleScalarType;
}

void azslParser::ScalarTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScalarType(this);
}

void azslParser::ScalarTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScalarType(this);
}

azslParser::ScalarTypeContext* azslParser::scalarType() {
  ScalarTypeContext *_localctx = _tracker.createInstance<ScalarTypeContext>(_ctx, getState());
  enterRule(_localctx, 146, azslParser::RuleScalarType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(892);
    _la = _input->LA(1);
    if (!(_la == azslParser::Bool

    || _la == azslParser::Double || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (azslParser::Float - 67))
      | (1ULL << (azslParser::Half - 67))
      | (1ULL << (azslParser::Int - 67))
      | (1ULL << (azslParser::Int16_t - 67))
      | (1ULL << (azslParser::Int32_t - 67))
      | (1ULL << (azslParser::Int64_t - 67)))) != 0) || ((((_la - 210) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 210)) & ((1ULL << (azslParser::Uint - 210))
      | (1ULL << (azslParser::Uint16_t - 210))
      | (1ULL << (azslParser::Uint32_t - 210))
      | (1ULL << (azslParser::Uint64_t - 210))
      | (1ULL << (azslParser::Dword - 210)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StreamOutputPredefinedTypeContext ------------------------------------------------------------------

azslParser::StreamOutputPredefinedTypeContext::StreamOutputPredefinedTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::StreamOutputObjectTypeContext* azslParser::StreamOutputPredefinedTypeContext::streamOutputObjectType() {
  return getRuleContext<azslParser::StreamOutputObjectTypeContext>(0);
}

tree::TerminalNode* azslParser::StreamOutputPredefinedTypeContext::Less() {
  return getToken(azslParser::Less, 0);
}

azslParser::TypeContext* azslParser::StreamOutputPredefinedTypeContext::type() {
  return getRuleContext<azslParser::TypeContext>(0);
}

tree::TerminalNode* azslParser::StreamOutputPredefinedTypeContext::Greater() {
  return getToken(azslParser::Greater, 0);
}


size_t azslParser::StreamOutputPredefinedTypeContext::getRuleIndex() const {
  return azslParser::RuleStreamOutputPredefinedType;
}

void azslParser::StreamOutputPredefinedTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStreamOutputPredefinedType(this);
}

void azslParser::StreamOutputPredefinedTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStreamOutputPredefinedType(this);
}

azslParser::StreamOutputPredefinedTypeContext* azslParser::streamOutputPredefinedType() {
  StreamOutputPredefinedTypeContext *_localctx = _tracker.createInstance<StreamOutputPredefinedTypeContext>(_ctx, getState());
  enterRule(_localctx, 148, azslParser::RuleStreamOutputPredefinedType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(894);
    streamOutputObjectType();
    setState(895);
    match(azslParser::Less);
    setState(896);
    type();
    setState(897);
    match(azslParser::Greater);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StreamOutputObjectTypeContext ------------------------------------------------------------------

azslParser::StreamOutputObjectTypeContext::StreamOutputObjectTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::StreamOutputObjectTypeContext::PointStream() {
  return getToken(azslParser::PointStream, 0);
}

tree::TerminalNode* azslParser::StreamOutputObjectTypeContext::LineStream() {
  return getToken(azslParser::LineStream, 0);
}

tree::TerminalNode* azslParser::StreamOutputObjectTypeContext::TriangleStream() {
  return getToken(azslParser::TriangleStream, 0);
}


size_t azslParser::StreamOutputObjectTypeContext::getRuleIndex() const {
  return azslParser::RuleStreamOutputObjectType;
}

void azslParser::StreamOutputObjectTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStreamOutputObjectType(this);
}

void azslParser::StreamOutputObjectTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStreamOutputObjectType(this);
}

azslParser::StreamOutputObjectTypeContext* azslParser::streamOutputObjectType() {
  StreamOutputObjectTypeContext *_localctx = _tracker.createInstance<StreamOutputObjectTypeContext>(_ctx, getState());
  enterRule(_localctx, 150, azslParser::RuleStreamOutputObjectType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(899);
    _la = _input->LA(1);
    if (!(((((_la - 147) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 147)) & ((1ULL << (azslParser::LineStream - 147))
      | (1ULL << (azslParser::PointStream - 147))
      | (1ULL << (azslParser::TriangleStream - 147)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructuredBufferPredefinedTypeContext ------------------------------------------------------------------

azslParser::StructuredBufferPredefinedTypeContext::StructuredBufferPredefinedTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::StructuredBufferNameContext* azslParser::StructuredBufferPredefinedTypeContext::structuredBufferName() {
  return getRuleContext<azslParser::StructuredBufferNameContext>(0);
}

tree::TerminalNode* azslParser::StructuredBufferPredefinedTypeContext::Less() {
  return getToken(azslParser::Less, 0);
}

azslParser::TypeContext* azslParser::StructuredBufferPredefinedTypeContext::type() {
  return getRuleContext<azslParser::TypeContext>(0);
}

tree::TerminalNode* azslParser::StructuredBufferPredefinedTypeContext::Greater() {
  return getToken(azslParser::Greater, 0);
}


size_t azslParser::StructuredBufferPredefinedTypeContext::getRuleIndex() const {
  return azslParser::RuleStructuredBufferPredefinedType;
}

void azslParser::StructuredBufferPredefinedTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructuredBufferPredefinedType(this);
}

void azslParser::StructuredBufferPredefinedTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructuredBufferPredefinedType(this);
}

azslParser::StructuredBufferPredefinedTypeContext* azslParser::structuredBufferPredefinedType() {
  StructuredBufferPredefinedTypeContext *_localctx = _tracker.createInstance<StructuredBufferPredefinedTypeContext>(_ctx, getState());
  enterRule(_localctx, 152, azslParser::RuleStructuredBufferPredefinedType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(901);
    structuredBufferName();
    setState(902);
    match(azslParser::Less);
    setState(903);
    type();
    setState(904);
    match(azslParser::Greater);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructuredBufferNameContext ------------------------------------------------------------------

azslParser::StructuredBufferNameContext::StructuredBufferNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::StructuredBufferNameContext::AppendStructuredBuffer() {
  return getToken(azslParser::AppendStructuredBuffer, 0);
}

tree::TerminalNode* azslParser::StructuredBufferNameContext::ConsumeStructuredBuffer() {
  return getToken(azslParser::ConsumeStructuredBuffer, 0);
}

tree::TerminalNode* azslParser::StructuredBufferNameContext::RWStructuredBuffer() {
  return getToken(azslParser::RWStructuredBuffer, 0);
}

tree::TerminalNode* azslParser::StructuredBufferNameContext::StructuredBuffer() {
  return getToken(azslParser::StructuredBuffer, 0);
}

tree::TerminalNode* azslParser::StructuredBufferNameContext::RasterizerOrderedStructuredBuffer() {
  return getToken(azslParser::RasterizerOrderedStructuredBuffer, 0);
}


size_t azslParser::StructuredBufferNameContext::getRuleIndex() const {
  return azslParser::RuleStructuredBufferName;
}

void azslParser::StructuredBufferNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructuredBufferName(this);
}

void azslParser::StructuredBufferNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructuredBufferName(this);
}

azslParser::StructuredBufferNameContext* azslParser::structuredBufferName() {
  StructuredBufferNameContext *_localctx = _tracker.createInstance<StructuredBufferNameContext>(_ctx, getState());
  enterRule(_localctx, 154, azslParser::RuleStructuredBufferName);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(906);
    _la = _input->LA(1);
    if (!(_la == azslParser::AppendStructuredBuffer

    || _la == azslParser::ConsumeStructuredBuffer || ((((_la - 163) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 163)) & ((1ULL << (azslParser::RasterizerOrderedStructuredBuffer - 163))
      | (1ULL << (azslParser::RWStructuredBuffer - 163))
      | (1ULL << (azslParser::StructuredBuffer - 163)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TextureTypeContext ------------------------------------------------------------------

azslParser::TextureTypeContext::TextureTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::TextureTypeContext::Texture1D() {
  return getToken(azslParser::Texture1D, 0);
}

tree::TerminalNode* azslParser::TextureTypeContext::Texture1DArray() {
  return getToken(azslParser::Texture1DArray, 0);
}

tree::TerminalNode* azslParser::TextureTypeContext::RasterizerOrderedTexture1D() {
  return getToken(azslParser::RasterizerOrderedTexture1D, 0);
}

tree::TerminalNode* azslParser::TextureTypeContext::RasterizerOrderedTexture1DArray() {
  return getToken(azslParser::RasterizerOrderedTexture1DArray, 0);
}

tree::TerminalNode* azslParser::TextureTypeContext::Texture2D() {
  return getToken(azslParser::Texture2D, 0);
}

tree::TerminalNode* azslParser::TextureTypeContext::Texture2DArray() {
  return getToken(azslParser::Texture2DArray, 0);
}

tree::TerminalNode* azslParser::TextureTypeContext::RasterizerOrderedTexture2D() {
  return getToken(azslParser::RasterizerOrderedTexture2D, 0);
}

tree::TerminalNode* azslParser::TextureTypeContext::RasterizerOrderedTexture2DArray() {
  return getToken(azslParser::RasterizerOrderedTexture2DArray, 0);
}

tree::TerminalNode* azslParser::TextureTypeContext::Texture3D() {
  return getToken(azslParser::Texture3D, 0);
}

tree::TerminalNode* azslParser::TextureTypeContext::RasterizerOrderedTexture3D() {
  return getToken(azslParser::RasterizerOrderedTexture3D, 0);
}

tree::TerminalNode* azslParser::TextureTypeContext::TextureCube() {
  return getToken(azslParser::TextureCube, 0);
}

tree::TerminalNode* azslParser::TextureTypeContext::TextureCubeArray() {
  return getToken(azslParser::TextureCubeArray, 0);
}

tree::TerminalNode* azslParser::TextureTypeContext::RWTexture1D() {
  return getToken(azslParser::RWTexture1D, 0);
}

tree::TerminalNode* azslParser::TextureTypeContext::RWTexture1DArray() {
  return getToken(azslParser::RWTexture1DArray, 0);
}

tree::TerminalNode* azslParser::TextureTypeContext::RWTexture2D() {
  return getToken(azslParser::RWTexture2D, 0);
}

tree::TerminalNode* azslParser::TextureTypeContext::RWTexture2DArray() {
  return getToken(azslParser::RWTexture2DArray, 0);
}

tree::TerminalNode* azslParser::TextureTypeContext::RWTexture3D() {
  return getToken(azslParser::RWTexture3D, 0);
}

tree::TerminalNode* azslParser::TextureTypeContext::SubpassInput() {
  return getToken(azslParser::SubpassInput, 0);
}

tree::TerminalNode* azslParser::TextureTypeContext::SubpassInputMS() {
  return getToken(azslParser::SubpassInputMS, 0);
}


size_t azslParser::TextureTypeContext::getRuleIndex() const {
  return azslParser::RuleTextureType;
}

void azslParser::TextureTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTextureType(this);
}

void azslParser::TextureTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTextureType(this);
}

azslParser::TextureTypeContext* azslParser::textureType() {
  TextureTypeContext *_localctx = _tracker.createInstance<TextureTypeContext>(_ctx, getState());
  enterRule(_localctx, 156, azslParser::RuleTextureType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(908);
    _la = _input->LA(1);
    if (!(((((_la - 164) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 164)) & ((1ULL << (azslParser::RasterizerOrderedTexture1D - 164))
      | (1ULL << (azslParser::RasterizerOrderedTexture1DArray - 164))
      | (1ULL << (azslParser::RasterizerOrderedTexture2D - 164))
      | (1ULL << (azslParser::RasterizerOrderedTexture2DArray - 164))
      | (1ULL << (azslParser::RasterizerOrderedTexture3D - 164))
      | (1ULL << (azslParser::RWTexture1D - 164))
      | (1ULL << (azslParser::RWTexture1DArray - 164))
      | (1ULL << (azslParser::RWTexture2D - 164))
      | (1ULL << (azslParser::RWTexture2DArray - 164))
      | (1ULL << (azslParser::RWTexture3D - 164))
      | (1ULL << (azslParser::SubpassInput - 164))
      | (1ULL << (azslParser::SubpassInputMS - 164))
      | (1ULL << (azslParser::Texture1D - 164))
      | (1ULL << (azslParser::Texture1DArray - 164))
      | (1ULL << (azslParser::Texture2D - 164))
      | (1ULL << (azslParser::Texture2DArray - 164))
      | (1ULL << (azslParser::Texture3D - 164))
      | (1ULL << (azslParser::TextureCube - 164))
      | (1ULL << (azslParser::TextureCubeArray - 164)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TexturePredefinedTypeContext ------------------------------------------------------------------

azslParser::TexturePredefinedTypeContext::TexturePredefinedTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::TextureTypeContext* azslParser::TexturePredefinedTypeContext::textureType() {
  return getRuleContext<azslParser::TextureTypeContext>(0);
}


size_t azslParser::TexturePredefinedTypeContext::getRuleIndex() const {
  return azslParser::RuleTexturePredefinedType;
}

void azslParser::TexturePredefinedTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTexturePredefinedType(this);
}

void azslParser::TexturePredefinedTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTexturePredefinedType(this);
}

azslParser::TexturePredefinedTypeContext* azslParser::texturePredefinedType() {
  TexturePredefinedTypeContext *_localctx = _tracker.createInstance<TexturePredefinedTypeContext>(_ctx, getState());
  enterRule(_localctx, 158, azslParser::RuleTexturePredefinedType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(910);
    textureType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GenericTexturePredefinedTypeContext ------------------------------------------------------------------

azslParser::GenericTexturePredefinedTypeContext::GenericTexturePredefinedTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::TextureTypeContext* azslParser::GenericTexturePredefinedTypeContext::textureType() {
  return getRuleContext<azslParser::TextureTypeContext>(0);
}

tree::TerminalNode* azslParser::GenericTexturePredefinedTypeContext::Less() {
  return getToken(azslParser::Less, 0);
}

azslParser::ScalarOrVectorTypeContext* azslParser::GenericTexturePredefinedTypeContext::scalarOrVectorType() {
  return getRuleContext<azslParser::ScalarOrVectorTypeContext>(0);
}

tree::TerminalNode* azslParser::GenericTexturePredefinedTypeContext::Greater() {
  return getToken(azslParser::Greater, 0);
}


size_t azslParser::GenericTexturePredefinedTypeContext::getRuleIndex() const {
  return azslParser::RuleGenericTexturePredefinedType;
}

void azslParser::GenericTexturePredefinedTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGenericTexturePredefinedType(this);
}

void azslParser::GenericTexturePredefinedTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGenericTexturePredefinedType(this);
}

azslParser::GenericTexturePredefinedTypeContext* azslParser::genericTexturePredefinedType() {
  GenericTexturePredefinedTypeContext *_localctx = _tracker.createInstance<GenericTexturePredefinedTypeContext>(_ctx, getState());
  enterRule(_localctx, 160, azslParser::RuleGenericTexturePredefinedType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(912);
    textureType();
    setState(913);
    match(azslParser::Less);
    setState(914);
    scalarOrVectorType();
    setState(915);
    match(azslParser::Greater);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TextureTypeMSContext ------------------------------------------------------------------

azslParser::TextureTypeMSContext::TextureTypeMSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::TextureTypeMSContext::Texture2DMS() {
  return getToken(azslParser::Texture2DMS, 0);
}

tree::TerminalNode* azslParser::TextureTypeMSContext::Texture2DMSArray() {
  return getToken(azslParser::Texture2DMSArray, 0);
}


size_t azslParser::TextureTypeMSContext::getRuleIndex() const {
  return azslParser::RuleTextureTypeMS;
}

void azslParser::TextureTypeMSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTextureTypeMS(this);
}

void azslParser::TextureTypeMSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTextureTypeMS(this);
}

azslParser::TextureTypeMSContext* azslParser::textureTypeMS() {
  TextureTypeMSContext *_localctx = _tracker.createInstance<TextureTypeMSContext>(_ctx, getState());
  enterRule(_localctx, 162, azslParser::RuleTextureTypeMS);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(917);
    _la = _input->LA(1);
    if (!(_la == azslParser::Texture2DMS

    || _la == azslParser::Texture2DMSArray)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MsTexturePredefinedTypeContext ------------------------------------------------------------------

azslParser::MsTexturePredefinedTypeContext::MsTexturePredefinedTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::TextureTypeMSContext* azslParser::MsTexturePredefinedTypeContext::textureTypeMS() {
  return getRuleContext<azslParser::TextureTypeMSContext>(0);
}

tree::TerminalNode* azslParser::MsTexturePredefinedTypeContext::Less() {
  return getToken(azslParser::Less, 0);
}

azslParser::ScalarOrVectorTypeContext* azslParser::MsTexturePredefinedTypeContext::scalarOrVectorType() {
  return getRuleContext<azslParser::ScalarOrVectorTypeContext>(0);
}

tree::TerminalNode* azslParser::MsTexturePredefinedTypeContext::Greater() {
  return getToken(azslParser::Greater, 0);
}

tree::TerminalNode* azslParser::MsTexturePredefinedTypeContext::Comma() {
  return getToken(azslParser::Comma, 0);
}

tree::TerminalNode* azslParser::MsTexturePredefinedTypeContext::IntegerLiteral() {
  return getToken(azslParser::IntegerLiteral, 0);
}


size_t azslParser::MsTexturePredefinedTypeContext::getRuleIndex() const {
  return azslParser::RuleMsTexturePredefinedType;
}

void azslParser::MsTexturePredefinedTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMsTexturePredefinedType(this);
}

void azslParser::MsTexturePredefinedTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMsTexturePredefinedType(this);
}

azslParser::MsTexturePredefinedTypeContext* azslParser::msTexturePredefinedType() {
  MsTexturePredefinedTypeContext *_localctx = _tracker.createInstance<MsTexturePredefinedTypeContext>(_ctx, getState());
  enterRule(_localctx, 164, azslParser::RuleMsTexturePredefinedType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(919);
    textureTypeMS();
    setState(920);
    match(azslParser::Less);
    setState(921);
    scalarOrVectorType();
    setState(924);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == azslParser::Comma) {
      setState(922);
      match(azslParser::Comma);
      setState(923);
      antlrcpp::downCast<MsTexturePredefinedTypeContext *>(_localctx)->Samples = match(azslParser::IntegerLiteral);
    }
    setState(926);
    match(azslParser::Greater);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VectorTypeContext ------------------------------------------------------------------

azslParser::VectorTypeContext::VectorTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::VectorTypeContext::Vector() {
  return getToken(azslParser::Vector, 0);
}

tree::TerminalNode* azslParser::VectorTypeContext::Bool1() {
  return getToken(azslParser::Bool1, 0);
}

tree::TerminalNode* azslParser::VectorTypeContext::Bool2() {
  return getToken(azslParser::Bool2, 0);
}

tree::TerminalNode* azslParser::VectorTypeContext::Bool3() {
  return getToken(azslParser::Bool3, 0);
}

tree::TerminalNode* azslParser::VectorTypeContext::Bool4() {
  return getToken(azslParser::Bool4, 0);
}

tree::TerminalNode* azslParser::VectorTypeContext::Int1() {
  return getToken(azslParser::Int1, 0);
}

tree::TerminalNode* azslParser::VectorTypeContext::Int2() {
  return getToken(azslParser::Int2, 0);
}

tree::TerminalNode* azslParser::VectorTypeContext::Int3() {
  return getToken(azslParser::Int3, 0);
}

tree::TerminalNode* azslParser::VectorTypeContext::Int4() {
  return getToken(azslParser::Int4, 0);
}

tree::TerminalNode* azslParser::VectorTypeContext::Uint1() {
  return getToken(azslParser::Uint1, 0);
}

tree::TerminalNode* azslParser::VectorTypeContext::Uint2() {
  return getToken(azslParser::Uint2, 0);
}

tree::TerminalNode* azslParser::VectorTypeContext::Uint3() {
  return getToken(azslParser::Uint3, 0);
}

tree::TerminalNode* azslParser::VectorTypeContext::Uint4() {
  return getToken(azslParser::Uint4, 0);
}

tree::TerminalNode* azslParser::VectorTypeContext::Dword1() {
  return getToken(azslParser::Dword1, 0);
}

tree::TerminalNode* azslParser::VectorTypeContext::Dword2() {
  return getToken(azslParser::Dword2, 0);
}

tree::TerminalNode* azslParser::VectorTypeContext::Dword3() {
  return getToken(azslParser::Dword3, 0);
}

tree::TerminalNode* azslParser::VectorTypeContext::Dword4() {
  return getToken(azslParser::Dword4, 0);
}

tree::TerminalNode* azslParser::VectorTypeContext::Half1() {
  return getToken(azslParser::Half1, 0);
}

tree::TerminalNode* azslParser::VectorTypeContext::Half2() {
  return getToken(azslParser::Half2, 0);
}

tree::TerminalNode* azslParser::VectorTypeContext::Half3() {
  return getToken(azslParser::Half3, 0);
}

tree::TerminalNode* azslParser::VectorTypeContext::Half4() {
  return getToken(azslParser::Half4, 0);
}

tree::TerminalNode* azslParser::VectorTypeContext::Float1() {
  return getToken(azslParser::Float1, 0);
}

tree::TerminalNode* azslParser::VectorTypeContext::Float2() {
  return getToken(azslParser::Float2, 0);
}

tree::TerminalNode* azslParser::VectorTypeContext::Float3() {
  return getToken(azslParser::Float3, 0);
}

tree::TerminalNode* azslParser::VectorTypeContext::Float4() {
  return getToken(azslParser::Float4, 0);
}

tree::TerminalNode* azslParser::VectorTypeContext::Double1() {
  return getToken(azslParser::Double1, 0);
}

tree::TerminalNode* azslParser::VectorTypeContext::Double2() {
  return getToken(azslParser::Double2, 0);
}

tree::TerminalNode* azslParser::VectorTypeContext::Double3() {
  return getToken(azslParser::Double3, 0);
}

tree::TerminalNode* azslParser::VectorTypeContext::Double4() {
  return getToken(azslParser::Double4, 0);
}


size_t azslParser::VectorTypeContext::getRuleIndex() const {
  return azslParser::RuleVectorType;
}

void azslParser::VectorTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVectorType(this);
}

void azslParser::VectorTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVectorType(this);
}

azslParser::VectorTypeContext* azslParser::vectorType() {
  VectorTypeContext *_localctx = _tracker.createInstance<VectorTypeContext>(_ctx, getState());
  enterRule(_localctx, 166, azslParser::RuleVectorType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(928);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << azslParser::Bool1)
      | (1ULL << azslParser::Bool2)
      | (1ULL << azslParser::Bool3)
      | (1ULL << azslParser::Bool4)
      | (1ULL << azslParser::Double1)
      | (1ULL << azslParser::Double2)
      | (1ULL << azslParser::Double3)
      | (1ULL << azslParser::Double4))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (azslParser::Float1 - 68))
      | (1ULL << (azslParser::Float2 - 68))
      | (1ULL << (azslParser::Float3 - 68))
      | (1ULL << (azslParser::Float4 - 68))
      | (1ULL << (azslParser::Half1 - 68))
      | (1ULL << (azslParser::Half2 - 68))
      | (1ULL << (azslParser::Half3 - 68))
      | (1ULL << (azslParser::Half4 - 68))
      | (1ULL << (azslParser::Int1 - 68))
      | (1ULL << (azslParser::Int2 - 68))
      | (1ULL << (azslParser::Int3 - 68))
      | (1ULL << (azslParser::Int4 - 68)))) != 0) || ((((_la - 211) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 211)) & ((1ULL << (azslParser::Uint1 - 211))
      | (1ULL << (azslParser::Uint2 - 211))
      | (1ULL << (azslParser::Uint3 - 211))
      | (1ULL << (azslParser::Uint4 - 211))
      | (1ULL << (azslParser::Dword1 - 211))
      | (1ULL << (azslParser::Dword2 - 211))
      | (1ULL << (azslParser::Dword3 - 211))
      | (1ULL << (azslParser::Dword4 - 211))
      | (1ULL << (azslParser::Vector - 211)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GenericVectorTypeContext ------------------------------------------------------------------

azslParser::GenericVectorTypeContext::GenericVectorTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::GenericVectorTypeContext::Vector() {
  return getToken(azslParser::Vector, 0);
}

tree::TerminalNode* azslParser::GenericVectorTypeContext::Less() {
  return getToken(azslParser::Less, 0);
}

azslParser::ScalarTypeContext* azslParser::GenericVectorTypeContext::scalarType() {
  return getRuleContext<azslParser::ScalarTypeContext>(0);
}

tree::TerminalNode* azslParser::GenericVectorTypeContext::Comma() {
  return getToken(azslParser::Comma, 0);
}

tree::TerminalNode* azslParser::GenericVectorTypeContext::Greater() {
  return getToken(azslParser::Greater, 0);
}

tree::TerminalNode* azslParser::GenericVectorTypeContext::IntegerLiteral() {
  return getToken(azslParser::IntegerLiteral, 0);
}


size_t azslParser::GenericVectorTypeContext::getRuleIndex() const {
  return azslParser::RuleGenericVectorType;
}

void azslParser::GenericVectorTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGenericVectorType(this);
}

void azslParser::GenericVectorTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGenericVectorType(this);
}

azslParser::GenericVectorTypeContext* azslParser::genericVectorType() {
  GenericVectorTypeContext *_localctx = _tracker.createInstance<GenericVectorTypeContext>(_ctx, getState());
  enterRule(_localctx, 168, azslParser::RuleGenericVectorType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(930);
    match(azslParser::Vector);
    setState(931);
    match(azslParser::Less);
    setState(932);
    scalarType();
    setState(933);
    match(azslParser::Comma);
    setState(934);
    antlrcpp::downCast<GenericVectorTypeContext *>(_localctx)->Size_ = match(azslParser::IntegerLiteral);
    setState(935);
    match(azslParser::Greater);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScalarOrVectorTypeContext ------------------------------------------------------------------

azslParser::ScalarOrVectorTypeContext::ScalarOrVectorTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::ScalarTypeContext* azslParser::ScalarOrVectorTypeContext::scalarType() {
  return getRuleContext<azslParser::ScalarTypeContext>(0);
}

azslParser::VectorTypeContext* azslParser::ScalarOrVectorTypeContext::vectorType() {
  return getRuleContext<azslParser::VectorTypeContext>(0);
}


size_t azslParser::ScalarOrVectorTypeContext::getRuleIndex() const {
  return azslParser::RuleScalarOrVectorType;
}

void azslParser::ScalarOrVectorTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScalarOrVectorType(this);
}

void azslParser::ScalarOrVectorTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScalarOrVectorType(this);
}

azslParser::ScalarOrVectorTypeContext* azslParser::scalarOrVectorType() {
  ScalarOrVectorTypeContext *_localctx = _tracker.createInstance<ScalarOrVectorTypeContext>(_ctx, getState());
  enterRule(_localctx, 170, azslParser::RuleScalarOrVectorType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(939);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case azslParser::Bool:
      case azslParser::Double:
      case azslParser::Float:
      case azslParser::Half:
      case azslParser::Int:
      case azslParser::Int16_t:
      case azslParser::Int32_t:
      case azslParser::Int64_t:
      case azslParser::Uint:
      case azslParser::Uint16_t:
      case azslParser::Uint32_t:
      case azslParser::Uint64_t:
      case azslParser::Dword: {
        enterOuterAlt(_localctx, 1);
        setState(937);
        scalarType();
        break;
      }

      case azslParser::Bool1:
      case azslParser::Bool2:
      case azslParser::Bool3:
      case azslParser::Bool4:
      case azslParser::Double1:
      case azslParser::Double2:
      case azslParser::Double3:
      case azslParser::Double4:
      case azslParser::Float1:
      case azslParser::Float2:
      case azslParser::Float3:
      case azslParser::Float4:
      case azslParser::Half1:
      case azslParser::Half2:
      case azslParser::Half3:
      case azslParser::Half4:
      case azslParser::Int1:
      case azslParser::Int2:
      case azslParser::Int3:
      case azslParser::Int4:
      case azslParser::Uint1:
      case azslParser::Uint2:
      case azslParser::Uint3:
      case azslParser::Uint4:
      case azslParser::Dword1:
      case azslParser::Dword2:
      case azslParser::Dword3:
      case azslParser::Dword4:
      case azslParser::Vector: {
        enterOuterAlt(_localctx, 2);
        setState(938);
        vectorType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScalarOrVectorOrMatrixTypeContext ------------------------------------------------------------------

azslParser::ScalarOrVectorOrMatrixTypeContext::ScalarOrVectorOrMatrixTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::ScalarTypeContext* azslParser::ScalarOrVectorOrMatrixTypeContext::scalarType() {
  return getRuleContext<azslParser::ScalarTypeContext>(0);
}

azslParser::VectorTypeContext* azslParser::ScalarOrVectorOrMatrixTypeContext::vectorType() {
  return getRuleContext<azslParser::VectorTypeContext>(0);
}

azslParser::MatrixTypeContext* azslParser::ScalarOrVectorOrMatrixTypeContext::matrixType() {
  return getRuleContext<azslParser::MatrixTypeContext>(0);
}


size_t azslParser::ScalarOrVectorOrMatrixTypeContext::getRuleIndex() const {
  return azslParser::RuleScalarOrVectorOrMatrixType;
}

void azslParser::ScalarOrVectorOrMatrixTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScalarOrVectorOrMatrixType(this);
}

void azslParser::ScalarOrVectorOrMatrixTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScalarOrVectorOrMatrixType(this);
}

azslParser::ScalarOrVectorOrMatrixTypeContext* azslParser::scalarOrVectorOrMatrixType() {
  ScalarOrVectorOrMatrixTypeContext *_localctx = _tracker.createInstance<ScalarOrVectorOrMatrixTypeContext>(_ctx, getState());
  enterRule(_localctx, 172, azslParser::RuleScalarOrVectorOrMatrixType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(944);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case azslParser::Bool:
      case azslParser::Double:
      case azslParser::Float:
      case azslParser::Half:
      case azslParser::Int:
      case azslParser::Int16_t:
      case azslParser::Int32_t:
      case azslParser::Int64_t:
      case azslParser::Uint:
      case azslParser::Uint16_t:
      case azslParser::Uint32_t:
      case azslParser::Uint64_t:
      case azslParser::Dword: {
        enterOuterAlt(_localctx, 1);
        setState(941);
        scalarType();
        break;
      }

      case azslParser::Bool1:
      case azslParser::Bool2:
      case azslParser::Bool3:
      case azslParser::Bool4:
      case azslParser::Double1:
      case azslParser::Double2:
      case azslParser::Double3:
      case azslParser::Double4:
      case azslParser::Float1:
      case azslParser::Float2:
      case azslParser::Float3:
      case azslParser::Float4:
      case azslParser::Half1:
      case azslParser::Half2:
      case azslParser::Half3:
      case azslParser::Half4:
      case azslParser::Int1:
      case azslParser::Int2:
      case azslParser::Int3:
      case azslParser::Int4:
      case azslParser::Uint1:
      case azslParser::Uint2:
      case azslParser::Uint3:
      case azslParser::Uint4:
      case azslParser::Dword1:
      case azslParser::Dword2:
      case azslParser::Dword3:
      case azslParser::Dword4:
      case azslParser::Vector: {
        enterOuterAlt(_localctx, 2);
        setState(942);
        vectorType();
        break;
      }

      case azslParser::Bool1x1:
      case azslParser::Bool1x2:
      case azslParser::Bool1x3:
      case azslParser::Bool1x4:
      case azslParser::Bool2x1:
      case azslParser::Bool2x2:
      case azslParser::Bool2x3:
      case azslParser::Bool2x4:
      case azslParser::Bool3x1:
      case azslParser::Bool3x2:
      case azslParser::Bool3x3:
      case azslParser::Bool3x4:
      case azslParser::Bool4x1:
      case azslParser::Bool4x2:
      case azslParser::Bool4x3:
      case azslParser::Bool4x4:
      case azslParser::Double1x1:
      case azslParser::Double1x2:
      case azslParser::Double1x3:
      case azslParser::Double1x4:
      case azslParser::Double2x1:
      case azslParser::Double2x2:
      case azslParser::Double2x3:
      case azslParser::Double2x4:
      case azslParser::Double3x1:
      case azslParser::Double3x2:
      case azslParser::Double3x3:
      case azslParser::Double3x4:
      case azslParser::Double4x1:
      case azslParser::Double4x2:
      case azslParser::Double4x3:
      case azslParser::Double4x4:
      case azslParser::Float1x1:
      case azslParser::Float1x2:
      case azslParser::Float1x3:
      case azslParser::Float1x4:
      case azslParser::Float2x1:
      case azslParser::Float2x2:
      case azslParser::Float2x3:
      case azslParser::Float2x4:
      case azslParser::Float3x1:
      case azslParser::Float3x2:
      case azslParser::Float3x3:
      case azslParser::Float3x4:
      case azslParser::Float4x1:
      case azslParser::Float4x2:
      case azslParser::Float4x3:
      case azslParser::Float4x4:
      case azslParser::Half1x1:
      case azslParser::Half1x2:
      case azslParser::Half1x3:
      case azslParser::Half1x4:
      case azslParser::Half2x1:
      case azslParser::Half2x2:
      case azslParser::Half2x3:
      case azslParser::Half2x4:
      case azslParser::Half3x1:
      case azslParser::Half3x2:
      case azslParser::Half3x3:
      case azslParser::Half3x4:
      case azslParser::Half4x1:
      case azslParser::Half4x2:
      case azslParser::Half4x3:
      case azslParser::Half4x4:
      case azslParser::Int1x1:
      case azslParser::Int1x2:
      case azslParser::Int1x3:
      case azslParser::Int1x4:
      case azslParser::Int2x1:
      case azslParser::Int2x2:
      case azslParser::Int2x3:
      case azslParser::Int2x4:
      case azslParser::Int3x1:
      case azslParser::Int3x2:
      case azslParser::Int3x3:
      case azslParser::Int3x4:
      case azslParser::Int4x1:
      case azslParser::Int4x2:
      case azslParser::Int4x3:
      case azslParser::Int4x4:
      case azslParser::Matrix:
      case azslParser::Uint1x1:
      case azslParser::Uint1x2:
      case azslParser::Uint1x3:
      case azslParser::Uint1x4:
      case azslParser::Uint2x1:
      case azslParser::Uint2x2:
      case azslParser::Uint2x3:
      case azslParser::Uint2x4:
      case azslParser::Uint3x1:
      case azslParser::Uint3x2:
      case azslParser::Uint3x3:
      case azslParser::Uint3x4:
      case azslParser::Uint4x1:
      case azslParser::Uint4x2:
      case azslParser::Uint4x3:
      case azslParser::Uint4x4:
      case azslParser::Dword1x1:
      case azslParser::Dword1x2:
      case azslParser::Dword1x3:
      case azslParser::Dword1x4:
      case azslParser::Dword2x1:
      case azslParser::Dword2x2:
      case azslParser::Dword2x3:
      case azslParser::Dword2x4:
      case azslParser::Dword3x1:
      case azslParser::Dword3x2:
      case azslParser::Dword3x3:
      case azslParser::Dword3x4:
      case azslParser::Dword4x1:
      case azslParser::Dword4x2:
      case azslParser::Dword4x3:
      case azslParser::Dword4x4: {
        enterOuterAlt(_localctx, 3);
        setState(943);
        matrixType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MatrixTypeContext ------------------------------------------------------------------

azslParser::MatrixTypeContext::MatrixTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::MatrixTypeContext::Matrix() {
  return getToken(azslParser::Matrix, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Bool1x1() {
  return getToken(azslParser::Bool1x1, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Bool1x2() {
  return getToken(azslParser::Bool1x2, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Bool1x3() {
  return getToken(azslParser::Bool1x3, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Bool1x4() {
  return getToken(azslParser::Bool1x4, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Bool2x1() {
  return getToken(azslParser::Bool2x1, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Bool2x2() {
  return getToken(azslParser::Bool2x2, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Bool2x3() {
  return getToken(azslParser::Bool2x3, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Bool2x4() {
  return getToken(azslParser::Bool2x4, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Bool3x1() {
  return getToken(azslParser::Bool3x1, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Bool3x2() {
  return getToken(azslParser::Bool3x2, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Bool3x3() {
  return getToken(azslParser::Bool3x3, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Bool3x4() {
  return getToken(azslParser::Bool3x4, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Bool4x1() {
  return getToken(azslParser::Bool4x1, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Bool4x2() {
  return getToken(azslParser::Bool4x2, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Bool4x3() {
  return getToken(azslParser::Bool4x3, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Bool4x4() {
  return getToken(azslParser::Bool4x4, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Int1x1() {
  return getToken(azslParser::Int1x1, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Int1x2() {
  return getToken(azslParser::Int1x2, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Int1x3() {
  return getToken(azslParser::Int1x3, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Int1x4() {
  return getToken(azslParser::Int1x4, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Int2x1() {
  return getToken(azslParser::Int2x1, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Int2x2() {
  return getToken(azslParser::Int2x2, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Int2x3() {
  return getToken(azslParser::Int2x3, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Int2x4() {
  return getToken(azslParser::Int2x4, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Int3x1() {
  return getToken(azslParser::Int3x1, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Int3x2() {
  return getToken(azslParser::Int3x2, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Int3x3() {
  return getToken(azslParser::Int3x3, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Int3x4() {
  return getToken(azslParser::Int3x4, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Int4x1() {
  return getToken(azslParser::Int4x1, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Int4x2() {
  return getToken(azslParser::Int4x2, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Int4x3() {
  return getToken(azslParser::Int4x3, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Int4x4() {
  return getToken(azslParser::Int4x4, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Uint1x1() {
  return getToken(azslParser::Uint1x1, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Uint1x2() {
  return getToken(azslParser::Uint1x2, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Uint1x3() {
  return getToken(azslParser::Uint1x3, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Uint1x4() {
  return getToken(azslParser::Uint1x4, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Uint2x1() {
  return getToken(azslParser::Uint2x1, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Uint2x2() {
  return getToken(azslParser::Uint2x2, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Uint2x3() {
  return getToken(azslParser::Uint2x3, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Uint2x4() {
  return getToken(azslParser::Uint2x4, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Uint3x1() {
  return getToken(azslParser::Uint3x1, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Uint3x2() {
  return getToken(azslParser::Uint3x2, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Uint3x3() {
  return getToken(azslParser::Uint3x3, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Uint3x4() {
  return getToken(azslParser::Uint3x4, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Uint4x1() {
  return getToken(azslParser::Uint4x1, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Uint4x2() {
  return getToken(azslParser::Uint4x2, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Uint4x3() {
  return getToken(azslParser::Uint4x3, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Uint4x4() {
  return getToken(azslParser::Uint4x4, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Dword1x1() {
  return getToken(azslParser::Dword1x1, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Dword1x2() {
  return getToken(azslParser::Dword1x2, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Dword1x3() {
  return getToken(azslParser::Dword1x3, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Dword1x4() {
  return getToken(azslParser::Dword1x4, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Dword2x1() {
  return getToken(azslParser::Dword2x1, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Dword2x2() {
  return getToken(azslParser::Dword2x2, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Dword2x3() {
  return getToken(azslParser::Dword2x3, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Dword2x4() {
  return getToken(azslParser::Dword2x4, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Dword3x1() {
  return getToken(azslParser::Dword3x1, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Dword3x2() {
  return getToken(azslParser::Dword3x2, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Dword3x3() {
  return getToken(azslParser::Dword3x3, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Dword3x4() {
  return getToken(azslParser::Dword3x4, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Dword4x1() {
  return getToken(azslParser::Dword4x1, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Dword4x2() {
  return getToken(azslParser::Dword4x2, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Dword4x3() {
  return getToken(azslParser::Dword4x3, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Dword4x4() {
  return getToken(azslParser::Dword4x4, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Half1x1() {
  return getToken(azslParser::Half1x1, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Half1x2() {
  return getToken(azslParser::Half1x2, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Half1x3() {
  return getToken(azslParser::Half1x3, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Half1x4() {
  return getToken(azslParser::Half1x4, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Half2x1() {
  return getToken(azslParser::Half2x1, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Half2x2() {
  return getToken(azslParser::Half2x2, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Half2x3() {
  return getToken(azslParser::Half2x3, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Half2x4() {
  return getToken(azslParser::Half2x4, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Half3x1() {
  return getToken(azslParser::Half3x1, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Half3x2() {
  return getToken(azslParser::Half3x2, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Half3x3() {
  return getToken(azslParser::Half3x3, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Half3x4() {
  return getToken(azslParser::Half3x4, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Half4x1() {
  return getToken(azslParser::Half4x1, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Half4x2() {
  return getToken(azslParser::Half4x2, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Half4x3() {
  return getToken(azslParser::Half4x3, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Half4x4() {
  return getToken(azslParser::Half4x4, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Float1x1() {
  return getToken(azslParser::Float1x1, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Float1x2() {
  return getToken(azslParser::Float1x2, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Float1x3() {
  return getToken(azslParser::Float1x3, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Float1x4() {
  return getToken(azslParser::Float1x4, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Float2x1() {
  return getToken(azslParser::Float2x1, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Float2x2() {
  return getToken(azslParser::Float2x2, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Float2x3() {
  return getToken(azslParser::Float2x3, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Float2x4() {
  return getToken(azslParser::Float2x4, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Float3x1() {
  return getToken(azslParser::Float3x1, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Float3x2() {
  return getToken(azslParser::Float3x2, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Float3x3() {
  return getToken(azslParser::Float3x3, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Float3x4() {
  return getToken(azslParser::Float3x4, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Float4x1() {
  return getToken(azslParser::Float4x1, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Float4x2() {
  return getToken(azslParser::Float4x2, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Float4x3() {
  return getToken(azslParser::Float4x3, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Float4x4() {
  return getToken(azslParser::Float4x4, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Double1x1() {
  return getToken(azslParser::Double1x1, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Double1x2() {
  return getToken(azslParser::Double1x2, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Double1x3() {
  return getToken(azslParser::Double1x3, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Double1x4() {
  return getToken(azslParser::Double1x4, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Double2x1() {
  return getToken(azslParser::Double2x1, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Double2x2() {
  return getToken(azslParser::Double2x2, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Double2x3() {
  return getToken(azslParser::Double2x3, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Double2x4() {
  return getToken(azslParser::Double2x4, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Double3x1() {
  return getToken(azslParser::Double3x1, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Double3x2() {
  return getToken(azslParser::Double3x2, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Double3x3() {
  return getToken(azslParser::Double3x3, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Double3x4() {
  return getToken(azslParser::Double3x4, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Double4x1() {
  return getToken(azslParser::Double4x1, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Double4x2() {
  return getToken(azslParser::Double4x2, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Double4x3() {
  return getToken(azslParser::Double4x3, 0);
}

tree::TerminalNode* azslParser::MatrixTypeContext::Double4x4() {
  return getToken(azslParser::Double4x4, 0);
}


size_t azslParser::MatrixTypeContext::getRuleIndex() const {
  return azslParser::RuleMatrixType;
}

void azslParser::MatrixTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatrixType(this);
}

void azslParser::MatrixTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatrixType(this);
}

azslParser::MatrixTypeContext* azslParser::matrixType() {
  MatrixTypeContext *_localctx = _tracker.createInstance<MatrixTypeContext>(_ctx, getState());
  enterRule(_localctx, 174, azslParser::RuleMatrixType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(946);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << azslParser::Bool1x1)
      | (1ULL << azslParser::Bool1x2)
      | (1ULL << azslParser::Bool1x3)
      | (1ULL << azslParser::Bool1x4)
      | (1ULL << azslParser::Bool2x1)
      | (1ULL << azslParser::Bool2x2)
      | (1ULL << azslParser::Bool2x3)
      | (1ULL << azslParser::Bool2x4)
      | (1ULL << azslParser::Bool3x1)
      | (1ULL << azslParser::Bool3x2)
      | (1ULL << azslParser::Bool3x3)
      | (1ULL << azslParser::Bool3x4)
      | (1ULL << azslParser::Bool4x1)
      | (1ULL << azslParser::Bool4x2)
      | (1ULL << azslParser::Bool4x3)
      | (1ULL << azslParser::Bool4x4)
      | (1ULL << azslParser::Double1x1)
      | (1ULL << azslParser::Double1x2)
      | (1ULL << azslParser::Double1x3)
      | (1ULL << azslParser::Double1x4)
      | (1ULL << azslParser::Double2x1)
      | (1ULL << azslParser::Double2x2)
      | (1ULL << azslParser::Double2x3)
      | (1ULL << azslParser::Double2x4)
      | (1ULL << azslParser::Double3x1)
      | (1ULL << azslParser::Double3x2)
      | (1ULL << azslParser::Double3x3)
      | (1ULL << azslParser::Double3x4)
      | (1ULL << azslParser::Double4x1)
      | (1ULL << azslParser::Double4x2)
      | (1ULL << azslParser::Double4x3)
      | (1ULL << azslParser::Double4x4))) != 0) || ((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & ((1ULL << (azslParser::Float1x1 - 72))
      | (1ULL << (azslParser::Float1x2 - 72))
      | (1ULL << (azslParser::Float1x3 - 72))
      | (1ULL << (azslParser::Float1x4 - 72))
      | (1ULL << (azslParser::Float2x1 - 72))
      | (1ULL << (azslParser::Float2x2 - 72))
      | (1ULL << (azslParser::Float2x3 - 72))
      | (1ULL << (azslParser::Float2x4 - 72))
      | (1ULL << (azslParser::Float3x1 - 72))
      | (1ULL << (azslParser::Float3x2 - 72))
      | (1ULL << (azslParser::Float3x3 - 72))
      | (1ULL << (azslParser::Float3x4 - 72))
      | (1ULL << (azslParser::Float4x1 - 72))
      | (1ULL << (azslParser::Float4x2 - 72))
      | (1ULL << (azslParser::Float4x3 - 72))
      | (1ULL << (azslParser::Float4x4 - 72))
      | (1ULL << (azslParser::Half1x1 - 72))
      | (1ULL << (azslParser::Half1x2 - 72))
      | (1ULL << (azslParser::Half1x3 - 72))
      | (1ULL << (azslParser::Half1x4 - 72))
      | (1ULL << (azslParser::Half2x1 - 72))
      | (1ULL << (azslParser::Half2x2 - 72))
      | (1ULL << (azslParser::Half2x3 - 72))
      | (1ULL << (azslParser::Half2x4 - 72))
      | (1ULL << (azslParser::Half3x1 - 72))
      | (1ULL << (azslParser::Half3x2 - 72))
      | (1ULL << (azslParser::Half3x3 - 72))
      | (1ULL << (azslParser::Half3x4 - 72))
      | (1ULL << (azslParser::Half4x1 - 72))
      | (1ULL << (azslParser::Half4x2 - 72))
      | (1ULL << (azslParser::Half4x3 - 72))
      | (1ULL << (azslParser::Half4x4 - 72))
      | (1ULL << (azslParser::Int1x1 - 72))
      | (1ULL << (azslParser::Int1x2 - 72))
      | (1ULL << (azslParser::Int1x3 - 72))
      | (1ULL << (azslParser::Int1x4 - 72))
      | (1ULL << (azslParser::Int2x1 - 72))
      | (1ULL << (azslParser::Int2x2 - 72))
      | (1ULL << (azslParser::Int2x3 - 72))
      | (1ULL << (azslParser::Int2x4 - 72))
      | (1ULL << (azslParser::Int3x1 - 72)))) != 0) || ((((_la - 136) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 136)) & ((1ULL << (azslParser::Int3x2 - 136))
      | (1ULL << (azslParser::Int3x3 - 136))
      | (1ULL << (azslParser::Int3x4 - 136))
      | (1ULL << (azslParser::Int4x1 - 136))
      | (1ULL << (azslParser::Int4x2 - 136))
      | (1ULL << (azslParser::Int4x3 - 136))
      | (1ULL << (azslParser::Int4x4 - 136))
      | (1ULL << (azslParser::Matrix - 136)))) != 0) || ((((_la - 215) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 215)) & ((1ULL << (azslParser::Uint1x1 - 215))
      | (1ULL << (azslParser::Uint1x2 - 215))
      | (1ULL << (azslParser::Uint1x3 - 215))
      | (1ULL << (azslParser::Uint1x4 - 215))
      | (1ULL << (azslParser::Uint2x1 - 215))
      | (1ULL << (azslParser::Uint2x2 - 215))
      | (1ULL << (azslParser::Uint2x3 - 215))
      | (1ULL << (azslParser::Uint2x4 - 215))
      | (1ULL << (azslParser::Uint3x1 - 215))
      | (1ULL << (azslParser::Uint3x2 - 215))
      | (1ULL << (azslParser::Uint3x3 - 215))
      | (1ULL << (azslParser::Uint3x4 - 215))
      | (1ULL << (azslParser::Uint4x1 - 215))
      | (1ULL << (azslParser::Uint4x2 - 215))
      | (1ULL << (azslParser::Uint4x3 - 215))
      | (1ULL << (azslParser::Uint4x4 - 215))
      | (1ULL << (azslParser::Dword1x1 - 215))
      | (1ULL << (azslParser::Dword1x2 - 215))
      | (1ULL << (azslParser::Dword1x3 - 215))
      | (1ULL << (azslParser::Dword1x4 - 215))
      | (1ULL << (azslParser::Dword2x1 - 215))
      | (1ULL << (azslParser::Dword2x2 - 215))
      | (1ULL << (azslParser::Dword2x3 - 215))
      | (1ULL << (azslParser::Dword2x4 - 215))
      | (1ULL << (azslParser::Dword3x1 - 215))
      | (1ULL << (azslParser::Dword3x2 - 215))
      | (1ULL << (azslParser::Dword3x3 - 215))
      | (1ULL << (azslParser::Dword3x4 - 215))
      | (1ULL << (azslParser::Dword4x1 - 215))
      | (1ULL << (azslParser::Dword4x2 - 215))
      | (1ULL << (azslParser::Dword4x3 - 215))
      | (1ULL << (azslParser::Dword4x4 - 215)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GenericMatrixPredefinedTypeContext ------------------------------------------------------------------

azslParser::GenericMatrixPredefinedTypeContext::GenericMatrixPredefinedTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::GenericMatrixPredefinedTypeContext::Matrix() {
  return getToken(azslParser::Matrix, 0);
}

tree::TerminalNode* azslParser::GenericMatrixPredefinedTypeContext::Less() {
  return getToken(azslParser::Less, 0);
}

azslParser::ScalarTypeContext* azslParser::GenericMatrixPredefinedTypeContext::scalarType() {
  return getRuleContext<azslParser::ScalarTypeContext>(0);
}

std::vector<tree::TerminalNode *> azslParser::GenericMatrixPredefinedTypeContext::Comma() {
  return getTokens(azslParser::Comma);
}

tree::TerminalNode* azslParser::GenericMatrixPredefinedTypeContext::Comma(size_t i) {
  return getToken(azslParser::Comma, i);
}

tree::TerminalNode* azslParser::GenericMatrixPredefinedTypeContext::Greater() {
  return getToken(azslParser::Greater, 0);
}

std::vector<tree::TerminalNode *> azslParser::GenericMatrixPredefinedTypeContext::IntegerLiteral() {
  return getTokens(azslParser::IntegerLiteral);
}

tree::TerminalNode* azslParser::GenericMatrixPredefinedTypeContext::IntegerLiteral(size_t i) {
  return getToken(azslParser::IntegerLiteral, i);
}


size_t azslParser::GenericMatrixPredefinedTypeContext::getRuleIndex() const {
  return azslParser::RuleGenericMatrixPredefinedType;
}

void azslParser::GenericMatrixPredefinedTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGenericMatrixPredefinedType(this);
}

void azslParser::GenericMatrixPredefinedTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGenericMatrixPredefinedType(this);
}

azslParser::GenericMatrixPredefinedTypeContext* azslParser::genericMatrixPredefinedType() {
  GenericMatrixPredefinedTypeContext *_localctx = _tracker.createInstance<GenericMatrixPredefinedTypeContext>(_ctx, getState());
  enterRule(_localctx, 176, azslParser::RuleGenericMatrixPredefinedType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(948);
    match(azslParser::Matrix);
    setState(949);
    match(azslParser::Less);
    setState(950);
    scalarType();
    setState(951);
    match(azslParser::Comma);
    setState(952);
    antlrcpp::downCast<GenericMatrixPredefinedTypeContext *>(_localctx)->Rows_ = match(azslParser::IntegerLiteral);
    setState(953);
    match(azslParser::Comma);
    setState(954);
    antlrcpp::downCast<GenericMatrixPredefinedTypeContext *>(_localctx)->Cols_ = match(azslParser::IntegerLiteral);
    setState(955);
    match(azslParser::Greater);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RegisterAllocationContext ------------------------------------------------------------------

azslParser::RegisterAllocationContext::RegisterAllocationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::RegisterAllocationContext::Colon() {
  return getToken(azslParser::Colon, 0);
}

tree::TerminalNode* azslParser::RegisterAllocationContext::Register() {
  return getToken(azslParser::Register, 0);
}

tree::TerminalNode* azslParser::RegisterAllocationContext::LeftParen() {
  return getToken(azslParser::LeftParen, 0);
}

tree::TerminalNode* azslParser::RegisterAllocationContext::RightParen() {
  return getToken(azslParser::RightParen, 0);
}

tree::TerminalNode* azslParser::RegisterAllocationContext::Identifier() {
  return getToken(azslParser::Identifier, 0);
}


size_t azslParser::RegisterAllocationContext::getRuleIndex() const {
  return azslParser::RuleRegisterAllocation;
}

void azslParser::RegisterAllocationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRegisterAllocation(this);
}

void azslParser::RegisterAllocationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRegisterAllocation(this);
}

azslParser::RegisterAllocationContext* azslParser::registerAllocation() {
  RegisterAllocationContext *_localctx = _tracker.createInstance<RegisterAllocationContext>(_ctx, getState());
  enterRule(_localctx, 178, azslParser::RuleRegisterAllocation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(957);
    match(azslParser::Colon);
    setState(958);
    match(azslParser::Register);
    setState(959);
    match(azslParser::LeftParen);
    setState(960);
    antlrcpp::downCast<RegisterAllocationContext *>(_localctx)->Address = match(azslParser::Identifier);
    setState(961);
    match(azslParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SamplerStatePropertyContext ------------------------------------------------------------------

azslParser::SamplerStatePropertyContext::SamplerStatePropertyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::SamplerStatePropertyContext::Semi() {
  return getToken(azslParser::Semi, 0);
}

tree::TerminalNode* azslParser::SamplerStatePropertyContext::Identifier() {
  return getToken(azslParser::Identifier, 0);
}

tree::TerminalNode* azslParser::SamplerStatePropertyContext::Assign() {
  return getToken(azslParser::Assign, 0);
}

azslParser::ExpressionContext* azslParser::SamplerStatePropertyContext::expression() {
  return getRuleContext<azslParser::ExpressionContext>(0);
}


size_t azslParser::SamplerStatePropertyContext::getRuleIndex() const {
  return azslParser::RuleSamplerStateProperty;
}

void azslParser::SamplerStatePropertyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSamplerStateProperty(this);
}

void azslParser::SamplerStatePropertyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSamplerStateProperty(this);
}

azslParser::SamplerStatePropertyContext* azslParser::samplerStateProperty() {
  SamplerStatePropertyContext *_localctx = _tracker.createInstance<SamplerStatePropertyContext>(_ctx, getState());
  enterRule(_localctx, 180, azslParser::RuleSamplerStateProperty);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(963);
    antlrcpp::downCast<SamplerStatePropertyContext *>(_localctx)->Name = match(azslParser::Identifier);
    setState(964);
    antlrcpp::downCast<SamplerStatePropertyContext *>(_localctx)->EqualsToken = match(azslParser::Assign);
    setState(965);
    antlrcpp::downCast<SamplerStatePropertyContext *>(_localctx)->Expr = expression(0);
    setState(966);
    match(azslParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

azslParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::LiteralContext::True() {
  return getToken(azslParser::True, 0);
}

tree::TerminalNode* azslParser::LiteralContext::False() {
  return getToken(azslParser::False, 0);
}

tree::TerminalNode* azslParser::LiteralContext::FloatLiteral() {
  return getToken(azslParser::FloatLiteral, 0);
}

tree::TerminalNode* azslParser::LiteralContext::IntegerLiteral() {
  return getToken(azslParser::IntegerLiteral, 0);
}

std::vector<tree::TerminalNode *> azslParser::LiteralContext::StringLiteral() {
  return getTokens(azslParser::StringLiteral);
}

tree::TerminalNode* azslParser::LiteralContext::StringLiteral(size_t i) {
  return getToken(azslParser::StringLiteral, i);
}


size_t azslParser::LiteralContext::getRuleIndex() const {
  return azslParser::RuleLiteral;
}

void azslParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void azslParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}

azslParser::LiteralContext* azslParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 182, azslParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(977);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case azslParser::True: {
        enterOuterAlt(_localctx, 1);
        setState(968);
        match(azslParser::True);
        break;
      }

      case azslParser::False: {
        enterOuterAlt(_localctx, 2);
        setState(969);
        match(azslParser::False);
        break;
      }

      case azslParser::FloatLiteral: {
        enterOuterAlt(_localctx, 3);
        setState(970);
        match(azslParser::FloatLiteral);
        break;
      }

      case azslParser::IntegerLiteral: {
        enterOuterAlt(_localctx, 4);
        setState(971);
        match(azslParser::IntegerLiteral);
        break;
      }

      case azslParser::StringLiteral: {
        enterOuterAlt(_localctx, 5);
        setState(973); 
        _errHandler->sync(this);
        alt = 1;
        do {
          switch (alt) {
            case 1: {
                  setState(972);
                  match(azslParser::StringLiteral);
                  break;
                }

          default:
            throw NoViableAltException(this);
          }
          setState(975); 
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LeadingTypeFunctionSignatureContext ------------------------------------------------------------------

azslParser::LeadingTypeFunctionSignatureContext::LeadingTypeFunctionSignatureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::TypeContext* azslParser::LeadingTypeFunctionSignatureContext::type() {
  return getRuleContext<azslParser::TypeContext>(0);
}

tree::TerminalNode* azslParser::LeadingTypeFunctionSignatureContext::LeftParen() {
  return getToken(azslParser::LeftParen, 0);
}

tree::TerminalNode* azslParser::LeadingTypeFunctionSignatureContext::RightParen() {
  return getToken(azslParser::RightParen, 0);
}

tree::TerminalNode* azslParser::LeadingTypeFunctionSignatureContext::Identifier() {
  return getToken(azslParser::Identifier, 0);
}

tree::TerminalNode* azslParser::LeadingTypeFunctionSignatureContext::ColonColon() {
  return getToken(azslParser::ColonColon, 0);
}

azslParser::GenericParameterListContext* azslParser::LeadingTypeFunctionSignatureContext::genericParameterList() {
  return getRuleContext<azslParser::GenericParameterListContext>(0);
}

azslParser::FunctionParamsContext* azslParser::LeadingTypeFunctionSignatureContext::functionParams() {
  return getRuleContext<azslParser::FunctionParamsContext>(0);
}

tree::TerminalNode* azslParser::LeadingTypeFunctionSignatureContext::Override() {
  return getToken(azslParser::Override, 0);
}

azslParser::HlslSemanticContext* azslParser::LeadingTypeFunctionSignatureContext::hlslSemantic() {
  return getRuleContext<azslParser::HlslSemanticContext>(0);
}

azslParser::UserDefinedTypeContext* azslParser::LeadingTypeFunctionSignatureContext::userDefinedType() {
  return getRuleContext<azslParser::UserDefinedTypeContext>(0);
}


size_t azslParser::LeadingTypeFunctionSignatureContext::getRuleIndex() const {
  return azslParser::RuleLeadingTypeFunctionSignature;
}

void azslParser::LeadingTypeFunctionSignatureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLeadingTypeFunctionSignature(this);
}

void azslParser::LeadingTypeFunctionSignatureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLeadingTypeFunctionSignature(this);
}

azslParser::LeadingTypeFunctionSignatureContext* azslParser::leadingTypeFunctionSignature() {
  LeadingTypeFunctionSignatureContext *_localctx = _tracker.createInstance<LeadingTypeFunctionSignatureContext>(_ctx, getState());
  enterRule(_localctx, 184, azslParser::RuleLeadingTypeFunctionSignature);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(979);
    type();
    setState(983);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx)) {
    case 1: {
      setState(980);
      antlrcpp::downCast<LeadingTypeFunctionSignatureContext *>(_localctx)->ClassName = userDefinedType();
      setState(981);
      match(azslParser::ColonColon);
      break;
    }

    default:
      break;
    }
    setState(985);
    antlrcpp::downCast<LeadingTypeFunctionSignatureContext *>(_localctx)->Name = match(azslParser::Identifier);
    setState(987);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == azslParser::Less) {
      setState(986);
      genericParameterList();
    }
    setState(989);
    match(azslParser::LeftParen);
    setState(991);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << azslParser::AppendStructuredBuffer)
      | (1ULL << azslParser::Bool)
      | (1ULL << azslParser::Bool1)
      | (1ULL << azslParser::Bool2)
      | (1ULL << azslParser::Bool3)
      | (1ULL << azslParser::Bool4)
      | (1ULL << azslParser::Bool1x1)
      | (1ULL << azslParser::Bool1x2)
      | (1ULL << azslParser::Bool1x3)
      | (1ULL << azslParser::Bool1x4)
      | (1ULL << azslParser::Bool2x1)
      | (1ULL << azslParser::Bool2x2)
      | (1ULL << azslParser::Bool2x3)
      | (1ULL << azslParser::Bool2x4)
      | (1ULL << azslParser::Bool3x1)
      | (1ULL << azslParser::Bool3x2)
      | (1ULL << azslParser::Bool3x3)
      | (1ULL << azslParser::Bool3x4)
      | (1ULL << azslParser::Bool4x1)
      | (1ULL << azslParser::Bool4x2)
      | (1ULL << azslParser::Bool4x3)
      | (1ULL << azslParser::Bool4x4)
      | (1ULL << azslParser::Buffer)
      | (1ULL << azslParser::BuiltInTriangleIntersectionAttributes)
      | (1ULL << azslParser::ByteAddressBuffer)
      | (1ULL << azslParser::Centroid)
      | (1ULL << azslParser::ConstantBuffer)
      | (1ULL << azslParser::ConstantBufferCamel)
      | (1ULL << azslParser::Class)
      | (1ULL << azslParser::ColumnMajor)
      | (1ULL << azslParser::Const)
      | (1ULL << azslParser::ConsumeStructuredBuffer)
      | (1ULL << azslParser::Double)
      | (1ULL << azslParser::Double1)
      | (1ULL << azslParser::Double2)
      | (1ULL << azslParser::Double3)
      | (1ULL << azslParser::Double4)
      | (1ULL << azslParser::Double1x1)
      | (1ULL << azslParser::Double1x2)
      | (1ULL << azslParser::Double1x3)
      | (1ULL << azslParser::Double1x4)
      | (1ULL << azslParser::Double2x1)
      | (1ULL << azslParser::Double2x2)
      | (1ULL << azslParser::Double2x3)
      | (1ULL << azslParser::Double2x4)
      | (1ULL << azslParser::Double3x1)
      | (1ULL << azslParser::Double3x2)
      | (1ULL << azslParser::Double3x3)
      | (1ULL << azslParser::Double3x4)
      | (1ULL << azslParser::Double4x1)
      | (1ULL << azslParser::Double4x2)
      | (1ULL << azslParser::Double4x3)
      | (1ULL << azslParser::Double4x4)
      | (1ULL << azslParser::Enum))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (azslParser::Extern - 64))
      | (1ULL << (azslParser::Float - 64))
      | (1ULL << (azslParser::Float1 - 64))
      | (1ULL << (azslParser::Float2 - 64))
      | (1ULL << (azslParser::Float3 - 64))
      | (1ULL << (azslParser::Float4 - 64))
      | (1ULL << (azslParser::Float1x1 - 64))
      | (1ULL << (azslParser::Float1x2 - 64))
      | (1ULL << (azslParser::Float1x3 - 64))
      | (1ULL << (azslParser::Float1x4 - 64))
      | (1ULL << (azslParser::Float2x1 - 64))
      | (1ULL << (azslParser::Float2x2 - 64))
      | (1ULL << (azslParser::Float2x3 - 64))
      | (1ULL << (azslParser::Float2x4 - 64))
      | (1ULL << (azslParser::Float3x1 - 64))
      | (1ULL << (azslParser::Float3x2 - 64))
      | (1ULL << (azslParser::Float3x3 - 64))
      | (1ULL << (azslParser::Float3x4 - 64))
      | (1ULL << (azslParser::Float4x1 - 64))
      | (1ULL << (azslParser::Float4x2 - 64))
      | (1ULL << (azslParser::Float4x3 - 64))
      | (1ULL << (azslParser::Float4x4 - 64))
      | (1ULL << (azslParser::Groupshared - 64))
      | (1ULL << (azslParser::Globallycoherent - 64))
      | (1ULL << (azslParser::Half - 64))
      | (1ULL << (azslParser::Half1 - 64))
      | (1ULL << (azslParser::Half2 - 64))
      | (1ULL << (azslParser::Half3 - 64))
      | (1ULL << (azslParser::Half4 - 64))
      | (1ULL << (azslParser::Half1x1 - 64))
      | (1ULL << (azslParser::Half1x2 - 64))
      | (1ULL << (azslParser::Half1x3 - 64))
      | (1ULL << (azslParser::Half1x4 - 64))
      | (1ULL << (azslParser::Half2x1 - 64))
      | (1ULL << (azslParser::Half2x2 - 64))
      | (1ULL << (azslParser::Half2x3 - 64))
      | (1ULL << (azslParser::Half2x4 - 64))
      | (1ULL << (azslParser::Half3x1 - 64))
      | (1ULL << (azslParser::Half3x2 - 64))
      | (1ULL << (azslParser::Half3x3 - 64))
      | (1ULL << (azslParser::Half3x4 - 64))
      | (1ULL << (azslParser::Half4x1 - 64))
      | (1ULL << (azslParser::Half4x2 - 64))
      | (1ULL << (azslParser::Half4x3 - 64))
      | (1ULL << (azslParser::Half4x4 - 64))
      | (1ULL << (azslParser::In - 64))
      | (1ULL << (azslParser::Inline - 64))
      | (1ULL << (azslParser::Rootconstant - 64))
      | (1ULL << (azslParser::Inout - 64))
      | (1ULL << (azslParser::InputPatch - 64))
      | (1ULL << (azslParser::Int - 64))
      | (1ULL << (azslParser::Int16_t - 64))
      | (1ULL << (azslParser::Int32_t - 64))
      | (1ULL << (azslParser::Int64_t - 64))
      | (1ULL << (azslParser::Int1 - 64))
      | (1ULL << (azslParser::Int2 - 64))
      | (1ULL << (azslParser::Int3 - 64))
      | (1ULL << (azslParser::Int4 - 64))
      | (1ULL << (azslParser::Int1x1 - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (azslParser::Int1x2 - 128))
      | (1ULL << (azslParser::Int1x3 - 128))
      | (1ULL << (azslParser::Int1x4 - 128))
      | (1ULL << (azslParser::Int2x1 - 128))
      | (1ULL << (azslParser::Int2x2 - 128))
      | (1ULL << (azslParser::Int2x3 - 128))
      | (1ULL << (azslParser::Int2x4 - 128))
      | (1ULL << (azslParser::Int3x1 - 128))
      | (1ULL << (azslParser::Int3x2 - 128))
      | (1ULL << (azslParser::Int3x3 - 128))
      | (1ULL << (azslParser::Int3x4 - 128))
      | (1ULL << (azslParser::Int4x1 - 128))
      | (1ULL << (azslParser::Int4x2 - 128))
      | (1ULL << (azslParser::Int4x3 - 128))
      | (1ULL << (azslParser::Int4x4 - 128))
      | (1ULL << (azslParser::Interface - 128))
      | (1ULL << (azslParser::Line_ - 128))
      | (1ULL << (azslParser::LineAdj - 128))
      | (1ULL << (azslParser::Linear - 128))
      | (1ULL << (azslParser::LineStream - 128))
      | (1ULL << (azslParser::Matrix - 128))
      | (1ULL << (azslParser::Nointerpolation - 128))
      | (1ULL << (azslParser::Noperspective - 128))
      | (1ULL << (azslParser::Option - 128))
      | (1ULL << (azslParser::Out - 128))
      | (1ULL << (azslParser::OutputPatch - 128))
      | (1ULL << (azslParser::Point - 128))
      | (1ULL << (azslParser::PointStream - 128))
      | (1ULL << (azslParser::Precise - 128))
      | (1ULL << (azslParser::RasterizerOrderedBuffer - 128))
      | (1ULL << (azslParser::RasterizerOrderedByteAddressBuffer - 128))
      | (1ULL << (azslParser::RasterizerOrderedStructuredBuffer - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture1D - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture1DArray - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture2D - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture2DArray - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture3D - 128))
      | (1ULL << (azslParser::RayDesc - 128))
      | (1ULL << (azslParser::RaytracingAccelerationStructure - 128))
      | (1ULL << (azslParser::RowMajor - 128))
      | (1ULL << (azslParser::RWBuffer - 128))
      | (1ULL << (azslParser::RWByteAddressBuffer - 128))
      | (1ULL << (azslParser::RWStructuredBuffer - 128))
      | (1ULL << (azslParser::RWTexture1D - 128))
      | (1ULL << (azslParser::RWTexture1DArray - 128))
      | (1ULL << (azslParser::RWTexture2D - 128))
      | (1ULL << (azslParser::RWTexture2DArray - 128))
      | (1ULL << (azslParser::RWTexture3D - 128))
      | (1ULL << (azslParser::Sample - 128))
      | (1ULL << (azslParser::Sampler - 128))
      | (1ULL << (azslParser::SamplerCapitalS - 128))
      | (1ULL << (azslParser::SamplerComparisonState - 128))
      | (1ULL << (azslParser::SamplerStateCamel - 128))
      | (1ULL << (azslParser::SamplerState - 128))
      | (1ULL << (azslParser::Shared - 128))
      | (1ULL << (azslParser::SNorm - 128))
      | (1ULL << (azslParser::Static - 128))
      | (1ULL << (azslParser::Struct - 128)))) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 192)) & ((1ULL << (azslParser::StructuredBuffer - 192))
      | (1ULL << (azslParser::SubpassInput - 192))
      | (1ULL << (azslParser::SubpassInputMS - 192))
      | (1ULL << (azslParser::Texture1D - 192))
      | (1ULL << (azslParser::Texture1DArray - 192))
      | (1ULL << (azslParser::Texture2D - 192))
      | (1ULL << (azslParser::Texture2DArray - 192))
      | (1ULL << (azslParser::Texture2DMS - 192))
      | (1ULL << (azslParser::Texture2DMSArray - 192))
      | (1ULL << (azslParser::Texture3D - 192))
      | (1ULL << (azslParser::TextureCube - 192))
      | (1ULL << (azslParser::TextureCubeArray - 192))
      | (1ULL << (azslParser::Triangle - 192))
      | (1ULL << (azslParser::TriangleAdj - 192))
      | (1ULL << (azslParser::TriangleStream - 192))
      | (1ULL << (azslParser::Uniform - 192))
      | (1ULL << (azslParser::Uint - 192))
      | (1ULL << (azslParser::Uint1 - 192))
      | (1ULL << (azslParser::Uint2 - 192))
      | (1ULL << (azslParser::Uint3 - 192))
      | (1ULL << (azslParser::Uint4 - 192))
      | (1ULL << (azslParser::Uint1x1 - 192))
      | (1ULL << (azslParser::Uint1x2 - 192))
      | (1ULL << (azslParser::Uint1x3 - 192))
      | (1ULL << (azslParser::Uint1x4 - 192))
      | (1ULL << (azslParser::Uint2x1 - 192))
      | (1ULL << (azslParser::Uint2x2 - 192))
      | (1ULL << (azslParser::Uint2x3 - 192))
      | (1ULL << (azslParser::Uint2x4 - 192))
      | (1ULL << (azslParser::Uint3x1 - 192))
      | (1ULL << (azslParser::Uint3x2 - 192))
      | (1ULL << (azslParser::Uint3x3 - 192))
      | (1ULL << (azslParser::Uint3x4 - 192))
      | (1ULL << (azslParser::Uint4x1 - 192))
      | (1ULL << (azslParser::Uint4x2 - 192))
      | (1ULL << (azslParser::Uint4x3 - 192))
      | (1ULL << (azslParser::Uint4x4 - 192))
      | (1ULL << (azslParser::Uint16_t - 192))
      | (1ULL << (azslParser::Uint32_t - 192))
      | (1ULL << (azslParser::Uint64_t - 192))
      | (1ULL << (azslParser::UNorm - 192))
      | (1ULL << (azslParser::Unsigned - 192))
      | (1ULL << (azslParser::Dword - 192))
      | (1ULL << (azslParser::Dword1 - 192))
      | (1ULL << (azslParser::Dword2 - 192))
      | (1ULL << (azslParser::Dword3 - 192))
      | (1ULL << (azslParser::Dword4 - 192))
      | (1ULL << (azslParser::Dword1x1 - 192))
      | (1ULL << (azslParser::Dword1x2 - 192))
      | (1ULL << (azslParser::Dword1x3 - 192))
      | (1ULL << (azslParser::Dword1x4 - 192))
      | (1ULL << (azslParser::Dword2x1 - 192))
      | (1ULL << (azslParser::Dword2x2 - 192))
      | (1ULL << (azslParser::Dword2x3 - 192))
      | (1ULL << (azslParser::Dword2x4 - 192))
      | (1ULL << (azslParser::Dword3x1 - 192))
      | (1ULL << (azslParser::Dword3x2 - 192))
      | (1ULL << (azslParser::Dword3x3 - 192))
      | (1ULL << (azslParser::Dword3x4 - 192))
      | (1ULL << (azslParser::Dword4x1 - 192))
      | (1ULL << (azslParser::Dword4x2 - 192))
      | (1ULL << (azslParser::Dword4x3 - 192)))) != 0) || ((((_la - 256) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 256)) & ((1ULL << (azslParser::Dword4x4 - 256))
      | (1ULL << (azslParser::Vector - 256))
      | (1ULL << (azslParser::Volatile - 256))
      | (1ULL << (azslParser::Void - 256))
      | (1ULL << (azslParser::StateObjectConfig - 256))
      | (1ULL << (azslParser::LocalRootSignature - 256))
      | (1ULL << (azslParser::GlobalRootSignature - 256))
      | (1ULL << (azslParser::SubobjectToExportsAssociation - 256))
      | (1ULL << (azslParser::RaytracingShaderConfig - 256))
      | (1ULL << (azslParser::RaytracingPipelineConfig - 256))
      | (1ULL << (azslParser::RaytracingPipelineConfig1 - 256))
      | (1ULL << (azslParser::TriangleHitGroup - 256))
      | (1ULL << (azslParser::ProceduralPrimitiveHitGroup - 256))
      | (1ULL << (azslParser::LeftBracket - 256))
      | (1ULL << (azslParser::LeftDoubleBracket - 256)))) != 0) || ((((_la - 334) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 334)) & ((1ULL << (azslParser::ColonColon - 334))
      | (1ULL << (azslParser::KW_Typeof - 334))
      | (1ULL << (azslParser::Identifier - 334)))) != 0)) {
      setState(990);
      functionParams();
    }
    setState(993);
    match(azslParser::RightParen);
    setState(995);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == azslParser::Override) {
      setState(994);
      match(azslParser::Override);
    }
    setState(998);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == azslParser::Colon) {
      setState(997);
      hlslSemantic();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HlslFunctionDefinitionContext ------------------------------------------------------------------

azslParser::HlslFunctionDefinitionContext::HlslFunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::LeadingTypeFunctionSignatureContext* azslParser::HlslFunctionDefinitionContext::leadingTypeFunctionSignature() {
  return getRuleContext<azslParser::LeadingTypeFunctionSignatureContext>(0);
}

azslParser::BlockContext* azslParser::HlslFunctionDefinitionContext::block() {
  return getRuleContext<azslParser::BlockContext>(0);
}


size_t azslParser::HlslFunctionDefinitionContext::getRuleIndex() const {
  return azslParser::RuleHlslFunctionDefinition;
}

void azslParser::HlslFunctionDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHlslFunctionDefinition(this);
}

void azslParser::HlslFunctionDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHlslFunctionDefinition(this);
}

azslParser::HlslFunctionDefinitionContext* azslParser::hlslFunctionDefinition() {
  HlslFunctionDefinitionContext *_localctx = _tracker.createInstance<HlslFunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 186, azslParser::RuleHlslFunctionDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1000);
    leadingTypeFunctionSignature();
    setState(1001);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HlslFunctionDeclarationContext ------------------------------------------------------------------

azslParser::HlslFunctionDeclarationContext::HlslFunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::LeadingTypeFunctionSignatureContext* azslParser::HlslFunctionDeclarationContext::leadingTypeFunctionSignature() {
  return getRuleContext<azslParser::LeadingTypeFunctionSignatureContext>(0);
}

tree::TerminalNode* azslParser::HlslFunctionDeclarationContext::Semi() {
  return getToken(azslParser::Semi, 0);
}


size_t azslParser::HlslFunctionDeclarationContext::getRuleIndex() const {
  return azslParser::RuleHlslFunctionDeclaration;
}

void azslParser::HlslFunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHlslFunctionDeclaration(this);
}

void azslParser::HlslFunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHlslFunctionDeclaration(this);
}

azslParser::HlslFunctionDeclarationContext* azslParser::hlslFunctionDeclaration() {
  HlslFunctionDeclarationContext *_localctx = _tracker.createInstance<HlslFunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 188, azslParser::RuleHlslFunctionDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1003);
    leadingTypeFunctionSignature();
    setState(1004);
    match(azslParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UserDefinedTypeContext ------------------------------------------------------------------

azslParser::UserDefinedTypeContext::UserDefinedTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::IdExpressionContext* azslParser::UserDefinedTypeContext::idExpression() {
  return getRuleContext<azslParser::IdExpressionContext>(0);
}

azslParser::AnyStructuredTypeDefinitionContext* azslParser::UserDefinedTypeContext::anyStructuredTypeDefinition() {
  return getRuleContext<azslParser::AnyStructuredTypeDefinitionContext>(0);
}


size_t azslParser::UserDefinedTypeContext::getRuleIndex() const {
  return azslParser::RuleUserDefinedType;
}

void azslParser::UserDefinedTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUserDefinedType(this);
}

void azslParser::UserDefinedTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUserDefinedType(this);
}

azslParser::UserDefinedTypeContext* azslParser::userDefinedType() {
  UserDefinedTypeContext *_localctx = _tracker.createInstance<UserDefinedTypeContext>(_ctx, getState());
  enterRule(_localctx, 190, azslParser::RuleUserDefinedType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1008);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case azslParser::ColonColon:
      case azslParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1006);
        idExpression();
        break;
      }

      case azslParser::Class:
      case azslParser::Enum:
      case azslParser::Interface:
      case azslParser::Struct: {
        enterOuterAlt(_localctx, 2);
        setState(1007);
        anyStructuredTypeDefinition();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssociatedTypeDeclarationContext ------------------------------------------------------------------

azslParser::AssociatedTypeDeclarationContext::AssociatedTypeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::AssociatedTypeDeclarationContext::KW_AssociatedType() {
  return getToken(azslParser::KW_AssociatedType, 0);
}

tree::TerminalNode* azslParser::AssociatedTypeDeclarationContext::Semi() {
  return getToken(azslParser::Semi, 0);
}

tree::TerminalNode* azslParser::AssociatedTypeDeclarationContext::Identifier() {
  return getToken(azslParser::Identifier, 0);
}

azslParser::GenericConstraintContext* azslParser::AssociatedTypeDeclarationContext::genericConstraint() {
  return getRuleContext<azslParser::GenericConstraintContext>(0);
}


size_t azslParser::AssociatedTypeDeclarationContext::getRuleIndex() const {
  return azslParser::RuleAssociatedTypeDeclaration;
}

void azslParser::AssociatedTypeDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssociatedTypeDeclaration(this);
}

void azslParser::AssociatedTypeDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssociatedTypeDeclaration(this);
}

azslParser::AssociatedTypeDeclarationContext* azslParser::associatedTypeDeclaration() {
  AssociatedTypeDeclarationContext *_localctx = _tracker.createInstance<AssociatedTypeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 192, azslParser::RuleAssociatedTypeDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1010);
    match(azslParser::KW_AssociatedType);
    setState(1011);
    antlrcpp::downCast<AssociatedTypeDeclarationContext *>(_localctx)->Name = match(azslParser::Identifier);
    setState(1013);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == azslParser::Colon) {
      setState(1012);
      genericConstraint();
    }
    setState(1015);
    match(azslParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypedefStatementContext ------------------------------------------------------------------

azslParser::TypedefStatementContext::TypedefStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::TypedefStatementContext::KW_Typedef() {
  return getToken(azslParser::KW_Typedef, 0);
}

tree::TerminalNode* azslParser::TypedefStatementContext::Semi() {
  return getToken(azslParser::Semi, 0);
}

azslParser::TypeContext* azslParser::TypedefStatementContext::type() {
  return getRuleContext<azslParser::TypeContext>(0);
}

tree::TerminalNode* azslParser::TypedefStatementContext::Identifier() {
  return getToken(azslParser::Identifier, 0);
}


size_t azslParser::TypedefStatementContext::getRuleIndex() const {
  return azslParser::RuleTypedefStatement;
}

void azslParser::TypedefStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypedefStatement(this);
}

void azslParser::TypedefStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypedefStatement(this);
}

azslParser::TypedefStatementContext* azslParser::typedefStatement() {
  TypedefStatementContext *_localctx = _tracker.createInstance<TypedefStatementContext>(_ctx, getState());
  enterRule(_localctx, 194, azslParser::RuleTypedefStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1017);
    match(azslParser::KW_Typedef);
    setState(1018);
    antlrcpp::downCast<TypedefStatementContext *>(_localctx)->ExistingType = type();
    setState(1019);
    antlrcpp::downCast<TypedefStatementContext *>(_localctx)->NewTypeName = match(azslParser::Identifier);
    setState(1020);
    match(azslParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypealiasStatementContext ------------------------------------------------------------------

azslParser::TypealiasStatementContext::TypealiasStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::TypealiasStatementContext::KW_TypeAlias() {
  return getToken(azslParser::KW_TypeAlias, 0);
}

tree::TerminalNode* azslParser::TypealiasStatementContext::Assign() {
  return getToken(azslParser::Assign, 0);
}

tree::TerminalNode* azslParser::TypealiasStatementContext::Semi() {
  return getToken(azslParser::Semi, 0);
}

tree::TerminalNode* azslParser::TypealiasStatementContext::Identifier() {
  return getToken(azslParser::Identifier, 0);
}

azslParser::TypeContext* azslParser::TypealiasStatementContext::type() {
  return getRuleContext<azslParser::TypeContext>(0);
}


size_t azslParser::TypealiasStatementContext::getRuleIndex() const {
  return azslParser::RuleTypealiasStatement;
}

void azslParser::TypealiasStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypealiasStatement(this);
}

void azslParser::TypealiasStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypealiasStatement(this);
}

azslParser::TypealiasStatementContext* azslParser::typealiasStatement() {
  TypealiasStatementContext *_localctx = _tracker.createInstance<TypealiasStatementContext>(_ctx, getState());
  enterRule(_localctx, 196, azslParser::RuleTypealiasStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1022);
    match(azslParser::KW_TypeAlias);
    setState(1023);
    antlrcpp::downCast<TypealiasStatementContext *>(_localctx)->NewTypeName = match(azslParser::Identifier);
    setState(1024);
    match(azslParser::Assign);
    setState(1025);
    antlrcpp::downCast<TypealiasStatementContext *>(_localctx)->ExistingType = type();
    setState(1026);
    match(azslParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeAliasingDefinitionStatementContext ------------------------------------------------------------------

azslParser::TypeAliasingDefinitionStatementContext::TypeAliasingDefinitionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::TypealiasStatementContext* azslParser::TypeAliasingDefinitionStatementContext::typealiasStatement() {
  return getRuleContext<azslParser::TypealiasStatementContext>(0);
}

azslParser::TypedefStatementContext* azslParser::TypeAliasingDefinitionStatementContext::typedefStatement() {
  return getRuleContext<azslParser::TypedefStatementContext>(0);
}


size_t azslParser::TypeAliasingDefinitionStatementContext::getRuleIndex() const {
  return azslParser::RuleTypeAliasingDefinitionStatement;
}

void azslParser::TypeAliasingDefinitionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeAliasingDefinitionStatement(this);
}

void azslParser::TypeAliasingDefinitionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeAliasingDefinitionStatement(this);
}

azslParser::TypeAliasingDefinitionStatementContext* azslParser::typeAliasingDefinitionStatement() {
  TypeAliasingDefinitionStatementContext *_localctx = _tracker.createInstance<TypeAliasingDefinitionStatementContext>(_ctx, getState());
  enterRule(_localctx, 198, azslParser::RuleTypeAliasingDefinitionStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1030);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case azslParser::KW_TypeAlias: {
        enterOuterAlt(_localctx, 1);
        setState(1028);
        typealiasStatement();
        break;
      }

      case azslParser::KW_Typedef: {
        enterOuterAlt(_localctx, 2);
        setState(1029);
        typedefStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeofExpressionContext ------------------------------------------------------------------

azslParser::TypeofExpressionContext::TypeofExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::TypeofExpressionContext::KW_Typeof() {
  return getToken(azslParser::KW_Typeof, 0);
}

tree::TerminalNode* azslParser::TypeofExpressionContext::LeftParen() {
  return getToken(azslParser::LeftParen, 0);
}

tree::TerminalNode* azslParser::TypeofExpressionContext::RightParen() {
  return getToken(azslParser::RightParen, 0);
}

azslParser::TypeContext* azslParser::TypeofExpressionContext::type() {
  return getRuleContext<azslParser::TypeContext>(0);
}

azslParser::ExpressionExtContext* azslParser::TypeofExpressionContext::expressionExt() {
  return getRuleContext<azslParser::ExpressionExtContext>(0);
}

tree::TerminalNode* azslParser::TypeofExpressionContext::ColonColon() {
  return getToken(azslParser::ColonColon, 0);
}

azslParser::IdExpressionContext* azslParser::TypeofExpressionContext::idExpression() {
  return getRuleContext<azslParser::IdExpressionContext>(0);
}


size_t azslParser::TypeofExpressionContext::getRuleIndex() const {
  return azslParser::RuleTypeofExpression;
}

void azslParser::TypeofExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeofExpression(this);
}

void azslParser::TypeofExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeofExpression(this);
}

azslParser::TypeofExpressionContext* azslParser::typeofExpression() {
  TypeofExpressionContext *_localctx = _tracker.createInstance<TypeofExpressionContext>(_ctx, getState());
  enterRule(_localctx, 200, azslParser::RuleTypeofExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1032);
    match(azslParser::KW_Typeof);
    setState(1033);
    match(azslParser::LeftParen);
    setState(1036);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx)) {
    case 1: {
      setState(1034);
      antlrcpp::downCast<TypeofExpressionContext *>(_localctx)->Expr = expressionExt(0);
      break;
    }

    case 2: {
      setState(1035);
      type();
      break;
    }

    default:
      break;
    }
    setState(1038);
    match(azslParser::RightParen);
    setState(1041);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx)) {
    case 1: {
      setState(1039);
      match(azslParser::ColonColon);
      setState(1040);
      antlrcpp::downCast<TypeofExpressionContext *>(_localctx)->SubQualification = idExpression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GenericParameterListContext ------------------------------------------------------------------

azslParser::GenericParameterListContext::GenericParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::GenericParameterListContext::Less() {
  return getToken(azslParser::Less, 0);
}

std::vector<azslParser::GenericTypeDefinitionContext *> azslParser::GenericParameterListContext::genericTypeDefinition() {
  return getRuleContexts<azslParser::GenericTypeDefinitionContext>();
}

azslParser::GenericTypeDefinitionContext* azslParser::GenericParameterListContext::genericTypeDefinition(size_t i) {
  return getRuleContext<azslParser::GenericTypeDefinitionContext>(i);
}

tree::TerminalNode* azslParser::GenericParameterListContext::Greater() {
  return getToken(azslParser::Greater, 0);
}

std::vector<tree::TerminalNode *> azslParser::GenericParameterListContext::Comma() {
  return getTokens(azslParser::Comma);
}

tree::TerminalNode* azslParser::GenericParameterListContext::Comma(size_t i) {
  return getToken(azslParser::Comma, i);
}


size_t azslParser::GenericParameterListContext::getRuleIndex() const {
  return azslParser::RuleGenericParameterList;
}

void azslParser::GenericParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGenericParameterList(this);
}

void azslParser::GenericParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGenericParameterList(this);
}

azslParser::GenericParameterListContext* azslParser::genericParameterList() {
  GenericParameterListContext *_localctx = _tracker.createInstance<GenericParameterListContext>(_ctx, getState());
  enterRule(_localctx, 202, azslParser::RuleGenericParameterList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1043);
    match(azslParser::Less);
    setState(1044);
    genericTypeDefinition();
    setState(1049);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == azslParser::Comma) {
      setState(1045);
      match(azslParser::Comma);
      setState(1046);
      genericTypeDefinition();
      setState(1051);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1052);
    match(azslParser::Greater);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GenericTypeDefinitionContext ------------------------------------------------------------------

azslParser::GenericTypeDefinitionContext::GenericTypeDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::GenericTypeDefinitionContext::Identifier() {
  return getToken(azslParser::Identifier, 0);
}

azslParser::GenericConstraintContext* azslParser::GenericTypeDefinitionContext::genericConstraint() {
  return getRuleContext<azslParser::GenericConstraintContext>(0);
}


size_t azslParser::GenericTypeDefinitionContext::getRuleIndex() const {
  return azslParser::RuleGenericTypeDefinition;
}

void azslParser::GenericTypeDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGenericTypeDefinition(this);
}

void azslParser::GenericTypeDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGenericTypeDefinition(this);
}

azslParser::GenericTypeDefinitionContext* azslParser::genericTypeDefinition() {
  GenericTypeDefinitionContext *_localctx = _tracker.createInstance<GenericTypeDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 204, azslParser::RuleGenericTypeDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1054);
    antlrcpp::downCast<GenericTypeDefinitionContext *>(_localctx)->GenericTypeName = match(azslParser::Identifier);
    setState(1056);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == azslParser::Colon) {
      setState(1055);
      genericConstraint();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GenericConstraintContext ------------------------------------------------------------------

azslParser::GenericConstraintContext::GenericConstraintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::GenericConstraintContext::Colon() {
  return getToken(azslParser::Colon, 0);
}

azslParser::UserDefinedTypeContext* azslParser::GenericConstraintContext::userDefinedType() {
  return getRuleContext<azslParser::UserDefinedTypeContext>(0);
}


size_t azslParser::GenericConstraintContext::getRuleIndex() const {
  return azslParser::RuleGenericConstraint;
}

void azslParser::GenericConstraintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGenericConstraint(this);
}

void azslParser::GenericConstraintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGenericConstraint(this);
}

azslParser::GenericConstraintContext* azslParser::genericConstraint() {
  GenericConstraintContext *_localctx = _tracker.createInstance<GenericConstraintContext>(_ctx, getState());
  enterRule(_localctx, 206, azslParser::RuleGenericConstraint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1058);
    match(azslParser::Colon);
    setState(1059);
    userDefinedType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LanguageDefinedConstraintContext ------------------------------------------------------------------

azslParser::LanguageDefinedConstraintContext::LanguageDefinedConstraintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::LanguageDefinedConstraintContext::KW_Fundamental() {
  return getToken(azslParser::KW_Fundamental, 0);
}


size_t azslParser::LanguageDefinedConstraintContext::getRuleIndex() const {
  return azslParser::RuleLanguageDefinedConstraint;
}

void azslParser::LanguageDefinedConstraintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLanguageDefinedConstraint(this);
}

void azslParser::LanguageDefinedConstraintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLanguageDefinedConstraint(this);
}

azslParser::LanguageDefinedConstraintContext* azslParser::languageDefinedConstraint() {
  LanguageDefinedConstraintContext *_localctx = _tracker.createInstance<LanguageDefinedConstraintContext>(_ctx, getState());
  enterRule(_localctx, 208, azslParser::RuleLanguageDefinedConstraint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1061);
    match(azslParser::KW_Fundamental);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

azslParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::HlslFunctionDeclarationContext* azslParser::FunctionDeclarationContext::hlslFunctionDeclaration() {
  return getRuleContext<azslParser::HlslFunctionDeclarationContext>(0);
}


size_t azslParser::FunctionDeclarationContext::getRuleIndex() const {
  return azslParser::RuleFunctionDeclaration;
}

void azslParser::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}

void azslParser::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}

azslParser::FunctionDeclarationContext* azslParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 210, azslParser::RuleFunctionDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1063);
    hlslFunctionDeclaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributedFunctionDeclarationContext ------------------------------------------------------------------

azslParser::AttributedFunctionDeclarationContext::AttributedFunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::FunctionDeclarationContext* azslParser::AttributedFunctionDeclarationContext::functionDeclaration() {
  return getRuleContext<azslParser::FunctionDeclarationContext>(0);
}

std::vector<azslParser::AttributeSpecifierAnyContext *> azslParser::AttributedFunctionDeclarationContext::attributeSpecifierAny() {
  return getRuleContexts<azslParser::AttributeSpecifierAnyContext>();
}

azslParser::AttributeSpecifierAnyContext* azslParser::AttributedFunctionDeclarationContext::attributeSpecifierAny(size_t i) {
  return getRuleContext<azslParser::AttributeSpecifierAnyContext>(i);
}


size_t azslParser::AttributedFunctionDeclarationContext::getRuleIndex() const {
  return azslParser::RuleAttributedFunctionDeclaration;
}

void azslParser::AttributedFunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributedFunctionDeclaration(this);
}

void azslParser::AttributedFunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributedFunctionDeclaration(this);
}

azslParser::AttributedFunctionDeclarationContext* azslParser::attributedFunctionDeclaration() {
  AttributedFunctionDeclarationContext *_localctx = _tracker.createInstance<AttributedFunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 212, azslParser::RuleAttributedFunctionDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1068);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == azslParser::LeftBracket

    || _la == azslParser::LeftDoubleBracket) {
      setState(1065);
      attributeSpecifierAny();
      setState(1070);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1071);
    functionDeclaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefinitionContext ------------------------------------------------------------------

azslParser::FunctionDefinitionContext::FunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::HlslFunctionDefinitionContext* azslParser::FunctionDefinitionContext::hlslFunctionDefinition() {
  return getRuleContext<azslParser::HlslFunctionDefinitionContext>(0);
}


size_t azslParser::FunctionDefinitionContext::getRuleIndex() const {
  return azslParser::RuleFunctionDefinition;
}

void azslParser::FunctionDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDefinition(this);
}

void azslParser::FunctionDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDefinition(this);
}

azslParser::FunctionDefinitionContext* azslParser::functionDefinition() {
  FunctionDefinitionContext *_localctx = _tracker.createInstance<FunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 214, azslParser::RuleFunctionDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1073);
    hlslFunctionDefinition();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributedFunctionDefinitionContext ------------------------------------------------------------------

azslParser::AttributedFunctionDefinitionContext::AttributedFunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::FunctionDefinitionContext* azslParser::AttributedFunctionDefinitionContext::functionDefinition() {
  return getRuleContext<azslParser::FunctionDefinitionContext>(0);
}

std::vector<azslParser::AttributeSpecifierAnyContext *> azslParser::AttributedFunctionDefinitionContext::attributeSpecifierAny() {
  return getRuleContexts<azslParser::AttributeSpecifierAnyContext>();
}

azslParser::AttributeSpecifierAnyContext* azslParser::AttributedFunctionDefinitionContext::attributeSpecifierAny(size_t i) {
  return getRuleContext<azslParser::AttributeSpecifierAnyContext>(i);
}


size_t azslParser::AttributedFunctionDefinitionContext::getRuleIndex() const {
  return azslParser::RuleAttributedFunctionDefinition;
}

void azslParser::AttributedFunctionDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributedFunctionDefinition(this);
}

void azslParser::AttributedFunctionDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributedFunctionDefinition(this);
}

azslParser::AttributedFunctionDefinitionContext* azslParser::attributedFunctionDefinition() {
  AttributedFunctionDefinitionContext *_localctx = _tracker.createInstance<AttributedFunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 216, azslParser::RuleAttributedFunctionDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1078);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == azslParser::LeftBracket

    || _la == azslParser::LeftDoubleBracket) {
      setState(1075);
      attributeSpecifierAny();
      setState(1080);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1081);
    functionDefinition();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompilerExtensionStatementContext ------------------------------------------------------------------

azslParser::CompilerExtensionStatementContext::CompilerExtensionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::CompilerExtensionStatementContext::KW_ext_print_message() {
  return getToken(azslParser::KW_ext_print_message, 0);
}

tree::TerminalNode* azslParser::CompilerExtensionStatementContext::LeftParen() {
  return getToken(azslParser::LeftParen, 0);
}

tree::TerminalNode* azslParser::CompilerExtensionStatementContext::RightParen() {
  return getToken(azslParser::RightParen, 0);
}

tree::TerminalNode* azslParser::CompilerExtensionStatementContext::Semi() {
  return getToken(azslParser::Semi, 0);
}

tree::TerminalNode* azslParser::CompilerExtensionStatementContext::StringLiteral() {
  return getToken(azslParser::StringLiteral, 0);
}

tree::TerminalNode* azslParser::CompilerExtensionStatementContext::KW_ext_print_symbol() {
  return getToken(azslParser::KW_ext_print_symbol, 0);
}

tree::TerminalNode* azslParser::CompilerExtensionStatementContext::Comma() {
  return getToken(azslParser::Comma, 0);
}

tree::TerminalNode* azslParser::CompilerExtensionStatementContext::KW_ext_prtsym_fully_qualified() {
  return getToken(azslParser::KW_ext_prtsym_fully_qualified, 0);
}

tree::TerminalNode* azslParser::CompilerExtensionStatementContext::KW_ext_prtsym_least_qualified() {
  return getToken(azslParser::KW_ext_prtsym_least_qualified, 0);
}

tree::TerminalNode* azslParser::CompilerExtensionStatementContext::KW_ext_prtsym_constint_value() {
  return getToken(azslParser::KW_ext_prtsym_constint_value, 0);
}

azslParser::IdExpressionContext* azslParser::CompilerExtensionStatementContext::idExpression() {
  return getRuleContext<azslParser::IdExpressionContext>(0);
}

azslParser::TypeofExpressionContext* azslParser::CompilerExtensionStatementContext::typeofExpression() {
  return getRuleContext<azslParser::TypeofExpressionContext>(0);
}


size_t azslParser::CompilerExtensionStatementContext::getRuleIndex() const {
  return azslParser::RuleCompilerExtensionStatement;
}

void azslParser::CompilerExtensionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompilerExtensionStatement(this);
}

void azslParser::CompilerExtensionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompilerExtensionStatement(this);
}

azslParser::CompilerExtensionStatementContext* azslParser::compilerExtensionStatement() {
  CompilerExtensionStatementContext *_localctx = _tracker.createInstance<CompilerExtensionStatementContext>(_ctx, getState());
  enterRule(_localctx, 218, azslParser::RuleCompilerExtensionStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1099);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case azslParser::KW_ext_print_message: {
        enterOuterAlt(_localctx, 1);
        setState(1083);
        match(azslParser::KW_ext_print_message);
        setState(1084);
        match(azslParser::LeftParen);
        setState(1085);
        antlrcpp::downCast<CompilerExtensionStatementContext *>(_localctx)->Message = match(azslParser::StringLiteral);
        setState(1086);
        match(azslParser::RightParen);
        setState(1087);
        match(azslParser::Semi);
        break;
      }

      case azslParser::KW_ext_print_symbol: {
        enterOuterAlt(_localctx, 2);
        setState(1088);
        match(azslParser::KW_ext_print_symbol);
        setState(1089);
        match(azslParser::LeftParen);
        setState(1092);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case azslParser::ColonColon:
          case azslParser::Identifier: {
            setState(1090);
            idExpression();
            break;
          }

          case azslParser::KW_Typeof: {
            setState(1091);
            typeofExpression();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(1094);
        match(azslParser::Comma);
        setState(1095);
        _la = _input->LA(1);
        if (!(((((_la - 364) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 364)) & ((1ULL << (azslParser::KW_ext_prtsym_fully_qualified - 364))
          | (1ULL << (azslParser::KW_ext_prtsym_least_qualified - 364))
          | (1ULL << (azslParser::KW_ext_prtsym_constint_value - 364)))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(1096);
        match(azslParser::RightParen);
        setState(1097);
        match(azslParser::Semi);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SrgDefinitionContext ------------------------------------------------------------------

azslParser::SrgDefinitionContext::SrgDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::SrgDefinitionContext::ShaderResourceGroup() {
  return getToken(azslParser::ShaderResourceGroup, 0);
}

tree::TerminalNode* azslParser::SrgDefinitionContext::LeftBrace() {
  return getToken(azslParser::LeftBrace, 0);
}

tree::TerminalNode* azslParser::SrgDefinitionContext::RightBrace() {
  return getToken(azslParser::RightBrace, 0);
}

std::vector<tree::TerminalNode *> azslParser::SrgDefinitionContext::Identifier() {
  return getTokens(azslParser::Identifier);
}

tree::TerminalNode* azslParser::SrgDefinitionContext::Identifier(size_t i) {
  return getToken(azslParser::Identifier, i);
}

tree::TerminalNode* azslParser::SrgDefinitionContext::Partial() {
  return getToken(azslParser::Partial, 0);
}

tree::TerminalNode* azslParser::SrgDefinitionContext::Colon() {
  return getToken(azslParser::Colon, 0);
}

std::vector<azslParser::SrgMemberDeclarationContext *> azslParser::SrgDefinitionContext::srgMemberDeclaration() {
  return getRuleContexts<azslParser::SrgMemberDeclarationContext>();
}

azslParser::SrgMemberDeclarationContext* azslParser::SrgDefinitionContext::srgMemberDeclaration(size_t i) {
  return getRuleContext<azslParser::SrgMemberDeclarationContext>(i);
}


size_t azslParser::SrgDefinitionContext::getRuleIndex() const {
  return azslParser::RuleSrgDefinition;
}

void azslParser::SrgDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSrgDefinition(this);
}

void azslParser::SrgDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSrgDefinition(this);
}

azslParser::SrgDefinitionContext* azslParser::srgDefinition() {
  SrgDefinitionContext *_localctx = _tracker.createInstance<SrgDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 220, azslParser::RuleSrgDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1102);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == azslParser::Partial) {
      setState(1101);
      match(azslParser::Partial);
    }
    setState(1104);
    match(azslParser::ShaderResourceGroup);
    setState(1105);
    antlrcpp::downCast<SrgDefinitionContext *>(_localctx)->Name = match(azslParser::Identifier);
    setState(1108);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == azslParser::Colon) {
      setState(1106);
      match(azslParser::Colon);
      setState(1107);
      antlrcpp::downCast<SrgDefinitionContext *>(_localctx)->Semantic = match(azslParser::Identifier);
    }
    setState(1110);
    match(azslParser::LeftBrace);
    setState(1114);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << azslParser::AppendStructuredBuffer)
      | (1ULL << azslParser::Bool)
      | (1ULL << azslParser::Bool1)
      | (1ULL << azslParser::Bool2)
      | (1ULL << azslParser::Bool3)
      | (1ULL << azslParser::Bool4)
      | (1ULL << azslParser::Bool1x1)
      | (1ULL << azslParser::Bool1x2)
      | (1ULL << azslParser::Bool1x3)
      | (1ULL << azslParser::Bool1x4)
      | (1ULL << azslParser::Bool2x1)
      | (1ULL << azslParser::Bool2x2)
      | (1ULL << azslParser::Bool2x3)
      | (1ULL << azslParser::Bool2x4)
      | (1ULL << azslParser::Bool3x1)
      | (1ULL << azslParser::Bool3x2)
      | (1ULL << azslParser::Bool3x3)
      | (1ULL << azslParser::Bool3x4)
      | (1ULL << azslParser::Bool4x1)
      | (1ULL << azslParser::Bool4x2)
      | (1ULL << azslParser::Bool4x3)
      | (1ULL << azslParser::Bool4x4)
      | (1ULL << azslParser::Buffer)
      | (1ULL << azslParser::BuiltInTriangleIntersectionAttributes)
      | (1ULL << azslParser::ByteAddressBuffer)
      | (1ULL << azslParser::Centroid)
      | (1ULL << azslParser::ConstantBuffer)
      | (1ULL << azslParser::ConstantBufferCamel)
      | (1ULL << azslParser::Class)
      | (1ULL << azslParser::ColumnMajor)
      | (1ULL << azslParser::Const)
      | (1ULL << azslParser::ConsumeStructuredBuffer)
      | (1ULL << azslParser::Double)
      | (1ULL << azslParser::Double1)
      | (1ULL << azslParser::Double2)
      | (1ULL << azslParser::Double3)
      | (1ULL << azslParser::Double4)
      | (1ULL << azslParser::Double1x1)
      | (1ULL << azslParser::Double1x2)
      | (1ULL << azslParser::Double1x3)
      | (1ULL << azslParser::Double1x4)
      | (1ULL << azslParser::Double2x1)
      | (1ULL << azslParser::Double2x2)
      | (1ULL << azslParser::Double2x3)
      | (1ULL << azslParser::Double2x4)
      | (1ULL << azslParser::Double3x1)
      | (1ULL << azslParser::Double3x2)
      | (1ULL << azslParser::Double3x3)
      | (1ULL << azslParser::Double3x4)
      | (1ULL << azslParser::Double4x1)
      | (1ULL << azslParser::Double4x2)
      | (1ULL << azslParser::Double4x3)
      | (1ULL << azslParser::Double4x4)
      | (1ULL << azslParser::Enum))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (azslParser::Extern - 64))
      | (1ULL << (azslParser::Float - 64))
      | (1ULL << (azslParser::Float1 - 64))
      | (1ULL << (azslParser::Float2 - 64))
      | (1ULL << (azslParser::Float3 - 64))
      | (1ULL << (azslParser::Float4 - 64))
      | (1ULL << (azslParser::Float1x1 - 64))
      | (1ULL << (azslParser::Float1x2 - 64))
      | (1ULL << (azslParser::Float1x3 - 64))
      | (1ULL << (azslParser::Float1x4 - 64))
      | (1ULL << (azslParser::Float2x1 - 64))
      | (1ULL << (azslParser::Float2x2 - 64))
      | (1ULL << (azslParser::Float2x3 - 64))
      | (1ULL << (azslParser::Float2x4 - 64))
      | (1ULL << (azslParser::Float3x1 - 64))
      | (1ULL << (azslParser::Float3x2 - 64))
      | (1ULL << (azslParser::Float3x3 - 64))
      | (1ULL << (azslParser::Float3x4 - 64))
      | (1ULL << (azslParser::Float4x1 - 64))
      | (1ULL << (azslParser::Float4x2 - 64))
      | (1ULL << (azslParser::Float4x3 - 64))
      | (1ULL << (azslParser::Float4x4 - 64))
      | (1ULL << (azslParser::Groupshared - 64))
      | (1ULL << (azslParser::Globallycoherent - 64))
      | (1ULL << (azslParser::Half - 64))
      | (1ULL << (azslParser::Half1 - 64))
      | (1ULL << (azslParser::Half2 - 64))
      | (1ULL << (azslParser::Half3 - 64))
      | (1ULL << (azslParser::Half4 - 64))
      | (1ULL << (azslParser::Half1x1 - 64))
      | (1ULL << (azslParser::Half1x2 - 64))
      | (1ULL << (azslParser::Half1x3 - 64))
      | (1ULL << (azslParser::Half1x4 - 64))
      | (1ULL << (azslParser::Half2x1 - 64))
      | (1ULL << (azslParser::Half2x2 - 64))
      | (1ULL << (azslParser::Half2x3 - 64))
      | (1ULL << (azslParser::Half2x4 - 64))
      | (1ULL << (azslParser::Half3x1 - 64))
      | (1ULL << (azslParser::Half3x2 - 64))
      | (1ULL << (azslParser::Half3x3 - 64))
      | (1ULL << (azslParser::Half3x4 - 64))
      | (1ULL << (azslParser::Half4x1 - 64))
      | (1ULL << (azslParser::Half4x2 - 64))
      | (1ULL << (azslParser::Half4x3 - 64))
      | (1ULL << (azslParser::Half4x4 - 64))
      | (1ULL << (azslParser::In - 64))
      | (1ULL << (azslParser::Inline - 64))
      | (1ULL << (azslParser::Rootconstant - 64))
      | (1ULL << (azslParser::Inout - 64))
      | (1ULL << (azslParser::InputPatch - 64))
      | (1ULL << (azslParser::Int - 64))
      | (1ULL << (azslParser::Int16_t - 64))
      | (1ULL << (azslParser::Int32_t - 64))
      | (1ULL << (azslParser::Int64_t - 64))
      | (1ULL << (azslParser::Int1 - 64))
      | (1ULL << (azslParser::Int2 - 64))
      | (1ULL << (azslParser::Int3 - 64))
      | (1ULL << (azslParser::Int4 - 64))
      | (1ULL << (azslParser::Int1x1 - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (azslParser::Int1x2 - 128))
      | (1ULL << (azslParser::Int1x3 - 128))
      | (1ULL << (azslParser::Int1x4 - 128))
      | (1ULL << (azslParser::Int2x1 - 128))
      | (1ULL << (azslParser::Int2x2 - 128))
      | (1ULL << (azslParser::Int2x3 - 128))
      | (1ULL << (azslParser::Int2x4 - 128))
      | (1ULL << (azslParser::Int3x1 - 128))
      | (1ULL << (azslParser::Int3x2 - 128))
      | (1ULL << (azslParser::Int3x3 - 128))
      | (1ULL << (azslParser::Int3x4 - 128))
      | (1ULL << (azslParser::Int4x1 - 128))
      | (1ULL << (azslParser::Int4x2 - 128))
      | (1ULL << (azslParser::Int4x3 - 128))
      | (1ULL << (azslParser::Int4x4 - 128))
      | (1ULL << (azslParser::Interface - 128))
      | (1ULL << (azslParser::Line_ - 128))
      | (1ULL << (azslParser::LineAdj - 128))
      | (1ULL << (azslParser::Linear - 128))
      | (1ULL << (azslParser::LineStream - 128))
      | (1ULL << (azslParser::Matrix - 128))
      | (1ULL << (azslParser::Nointerpolation - 128))
      | (1ULL << (azslParser::Noperspective - 128))
      | (1ULL << (azslParser::Option - 128))
      | (1ULL << (azslParser::Out - 128))
      | (1ULL << (azslParser::OutputPatch - 128))
      | (1ULL << (azslParser::Point - 128))
      | (1ULL << (azslParser::PointStream - 128))
      | (1ULL << (azslParser::Precise - 128))
      | (1ULL << (azslParser::RasterizerOrderedBuffer - 128))
      | (1ULL << (azslParser::RasterizerOrderedByteAddressBuffer - 128))
      | (1ULL << (azslParser::RasterizerOrderedStructuredBuffer - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture1D - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture1DArray - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture2D - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture2DArray - 128))
      | (1ULL << (azslParser::RasterizerOrderedTexture3D - 128))
      | (1ULL << (azslParser::RayDesc - 128))
      | (1ULL << (azslParser::RaytracingAccelerationStructure - 128))
      | (1ULL << (azslParser::RowMajor - 128))
      | (1ULL << (azslParser::RWBuffer - 128))
      | (1ULL << (azslParser::RWByteAddressBuffer - 128))
      | (1ULL << (azslParser::RWStructuredBuffer - 128))
      | (1ULL << (azslParser::RWTexture1D - 128))
      | (1ULL << (azslParser::RWTexture1DArray - 128))
      | (1ULL << (azslParser::RWTexture2D - 128))
      | (1ULL << (azslParser::RWTexture2DArray - 128))
      | (1ULL << (azslParser::RWTexture3D - 128))
      | (1ULL << (azslParser::Sample - 128))
      | (1ULL << (azslParser::Sampler - 128))
      | (1ULL << (azslParser::SamplerCapitalS - 128))
      | (1ULL << (azslParser::SamplerComparisonState - 128))
      | (1ULL << (azslParser::SamplerStateCamel - 128))
      | (1ULL << (azslParser::SamplerState - 128))
      | (1ULL << (azslParser::Shared - 128))
      | (1ULL << (azslParser::SNorm - 128))
      | (1ULL << (azslParser::Static - 128))
      | (1ULL << (azslParser::Struct - 128)))) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 192)) & ((1ULL << (azslParser::StructuredBuffer - 192))
      | (1ULL << (azslParser::SubpassInput - 192))
      | (1ULL << (azslParser::SubpassInputMS - 192))
      | (1ULL << (azslParser::Texture1D - 192))
      | (1ULL << (azslParser::Texture1DArray - 192))
      | (1ULL << (azslParser::Texture2D - 192))
      | (1ULL << (azslParser::Texture2DArray - 192))
      | (1ULL << (azslParser::Texture2DMS - 192))
      | (1ULL << (azslParser::Texture2DMSArray - 192))
      | (1ULL << (azslParser::Texture3D - 192))
      | (1ULL << (azslParser::TextureCube - 192))
      | (1ULL << (azslParser::TextureCubeArray - 192))
      | (1ULL << (azslParser::Triangle - 192))
      | (1ULL << (azslParser::TriangleAdj - 192))
      | (1ULL << (azslParser::TriangleStream - 192))
      | (1ULL << (azslParser::Uniform - 192))
      | (1ULL << (azslParser::Uint - 192))
      | (1ULL << (azslParser::Uint1 - 192))
      | (1ULL << (azslParser::Uint2 - 192))
      | (1ULL << (azslParser::Uint3 - 192))
      | (1ULL << (azslParser::Uint4 - 192))
      | (1ULL << (azslParser::Uint1x1 - 192))
      | (1ULL << (azslParser::Uint1x2 - 192))
      | (1ULL << (azslParser::Uint1x3 - 192))
      | (1ULL << (azslParser::Uint1x4 - 192))
      | (1ULL << (azslParser::Uint2x1 - 192))
      | (1ULL << (azslParser::Uint2x2 - 192))
      | (1ULL << (azslParser::Uint2x3 - 192))
      | (1ULL << (azslParser::Uint2x4 - 192))
      | (1ULL << (azslParser::Uint3x1 - 192))
      | (1ULL << (azslParser::Uint3x2 - 192))
      | (1ULL << (azslParser::Uint3x3 - 192))
      | (1ULL << (azslParser::Uint3x4 - 192))
      | (1ULL << (azslParser::Uint4x1 - 192))
      | (1ULL << (azslParser::Uint4x2 - 192))
      | (1ULL << (azslParser::Uint4x3 - 192))
      | (1ULL << (azslParser::Uint4x4 - 192))
      | (1ULL << (azslParser::Uint16_t - 192))
      | (1ULL << (azslParser::Uint32_t - 192))
      | (1ULL << (azslParser::Uint64_t - 192))
      | (1ULL << (azslParser::UNorm - 192))
      | (1ULL << (azslParser::Unsigned - 192))
      | (1ULL << (azslParser::Dword - 192))
      | (1ULL << (azslParser::Dword1 - 192))
      | (1ULL << (azslParser::Dword2 - 192))
      | (1ULL << (azslParser::Dword3 - 192))
      | (1ULL << (azslParser::Dword4 - 192))
      | (1ULL << (azslParser::Dword1x1 - 192))
      | (1ULL << (azslParser::Dword1x2 - 192))
      | (1ULL << (azslParser::Dword1x3 - 192))
      | (1ULL << (azslParser::Dword1x4 - 192))
      | (1ULL << (azslParser::Dword2x1 - 192))
      | (1ULL << (azslParser::Dword2x2 - 192))
      | (1ULL << (azslParser::Dword2x3 - 192))
      | (1ULL << (azslParser::Dword2x4 - 192))
      | (1ULL << (azslParser::Dword3x1 - 192))
      | (1ULL << (azslParser::Dword3x2 - 192))
      | (1ULL << (azslParser::Dword3x3 - 192))
      | (1ULL << (azslParser::Dword3x4 - 192))
      | (1ULL << (azslParser::Dword4x1 - 192))
      | (1ULL << (azslParser::Dword4x2 - 192))
      | (1ULL << (azslParser::Dword4x3 - 192)))) != 0) || ((((_la - 256) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 256)) & ((1ULL << (azslParser::Dword4x4 - 256))
      | (1ULL << (azslParser::Vector - 256))
      | (1ULL << (azslParser::Volatile - 256))
      | (1ULL << (azslParser::Void - 256))
      | (1ULL << (azslParser::StateObjectConfig - 256))
      | (1ULL << (azslParser::LocalRootSignature - 256))
      | (1ULL << (azslParser::GlobalRootSignature - 256))
      | (1ULL << (azslParser::SubobjectToExportsAssociation - 256))
      | (1ULL << (azslParser::RaytracingShaderConfig - 256))
      | (1ULL << (azslParser::RaytracingPipelineConfig - 256))
      | (1ULL << (azslParser::RaytracingPipelineConfig1 - 256))
      | (1ULL << (azslParser::TriangleHitGroup - 256))
      | (1ULL << (azslParser::ProceduralPrimitiveHitGroup - 256))
      | (1ULL << (azslParser::LeftBracket - 256))
      | (1ULL << (azslParser::LeftDoubleBracket - 256)))) != 0) || ((((_la - 334) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 334)) & ((1ULL << (azslParser::ColonColon - 334))
      | (1ULL << (azslParser::KW_TypeAlias - 334))
      | (1ULL << (azslParser::KW_Typedef - 334))
      | (1ULL << (azslParser::KW_Typeof - 334))
      | (1ULL << (azslParser::Identifier - 334)))) != 0)) {
      setState(1111);
      srgMemberDeclaration();
      setState(1116);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1117);
    match(azslParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributedSrgDefinitionContext ------------------------------------------------------------------

azslParser::AttributedSrgDefinitionContext::AttributedSrgDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::SrgDefinitionContext* azslParser::AttributedSrgDefinitionContext::srgDefinition() {
  return getRuleContext<azslParser::SrgDefinitionContext>(0);
}

std::vector<azslParser::AttributeSpecifierAnyContext *> azslParser::AttributedSrgDefinitionContext::attributeSpecifierAny() {
  return getRuleContexts<azslParser::AttributeSpecifierAnyContext>();
}

azslParser::AttributeSpecifierAnyContext* azslParser::AttributedSrgDefinitionContext::attributeSpecifierAny(size_t i) {
  return getRuleContext<azslParser::AttributeSpecifierAnyContext>(i);
}


size_t azslParser::AttributedSrgDefinitionContext::getRuleIndex() const {
  return azslParser::RuleAttributedSrgDefinition;
}

void azslParser::AttributedSrgDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributedSrgDefinition(this);
}

void azslParser::AttributedSrgDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributedSrgDefinition(this);
}

azslParser::AttributedSrgDefinitionContext* azslParser::attributedSrgDefinition() {
  AttributedSrgDefinitionContext *_localctx = _tracker.createInstance<AttributedSrgDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 222, azslParser::RuleAttributedSrgDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1122);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == azslParser::LeftBracket

    || _la == azslParser::LeftDoubleBracket) {
      setState(1119);
      attributeSpecifierAny();
      setState(1124);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1125);
    srgDefinition();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SrgMemberDeclarationContext ------------------------------------------------------------------

azslParser::SrgMemberDeclarationContext::SrgMemberDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::StructDefinitionStatementContext* azslParser::SrgMemberDeclarationContext::structDefinitionStatement() {
  return getRuleContext<azslParser::StructDefinitionStatementContext>(0);
}

azslParser::AttributedFunctionDeclarationContext* azslParser::SrgMemberDeclarationContext::attributedFunctionDeclaration() {
  return getRuleContext<azslParser::AttributedFunctionDeclarationContext>(0);
}

azslParser::AttributedFunctionDefinitionContext* azslParser::SrgMemberDeclarationContext::attributedFunctionDefinition() {
  return getRuleContext<azslParser::AttributedFunctionDefinitionContext>(0);
}

azslParser::VariableDeclarationStatementContext* azslParser::SrgMemberDeclarationContext::variableDeclarationStatement() {
  return getRuleContext<azslParser::VariableDeclarationStatementContext>(0);
}

azslParser::EnumDefinitionStatementContext* azslParser::SrgMemberDeclarationContext::enumDefinitionStatement() {
  return getRuleContext<azslParser::EnumDefinitionStatementContext>(0);
}

azslParser::TypeAliasingDefinitionStatementContext* azslParser::SrgMemberDeclarationContext::typeAliasingDefinitionStatement() {
  return getRuleContext<azslParser::TypeAliasingDefinitionStatementContext>(0);
}

azslParser::AttributeSpecifierAnyContext* azslParser::SrgMemberDeclarationContext::attributeSpecifierAny() {
  return getRuleContext<azslParser::AttributeSpecifierAnyContext>(0);
}


size_t azslParser::SrgMemberDeclarationContext::getRuleIndex() const {
  return azslParser::RuleSrgMemberDeclaration;
}

void azslParser::SrgMemberDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSrgMemberDeclaration(this);
}

void azslParser::SrgMemberDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSrgMemberDeclaration(this);
}

azslParser::SrgMemberDeclarationContext* azslParser::srgMemberDeclaration() {
  SrgMemberDeclarationContext *_localctx = _tracker.createInstance<SrgMemberDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 224, azslParser::RuleSrgMemberDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1134);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 98, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1127);
      structDefinitionStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1128);
      attributedFunctionDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1129);
      attributedFunctionDefinition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1130);
      variableDeclarationStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1131);
      enumDefinitionStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1132);
      typeAliasingDefinitionStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1133);
      attributeSpecifierAny();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SrgSemanticContext ------------------------------------------------------------------

azslParser::SrgSemanticContext::SrgSemanticContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::SrgSemanticContext::ShaderResourceGroupSemantic() {
  return getToken(azslParser::ShaderResourceGroupSemantic, 0);
}

azslParser::SrgSemanticBodyDeclarationContext* azslParser::SrgSemanticContext::srgSemanticBodyDeclaration() {
  return getRuleContext<azslParser::SrgSemanticBodyDeclarationContext>(0);
}

tree::TerminalNode* azslParser::SrgSemanticContext::Identifier() {
  return getToken(azslParser::Identifier, 0);
}


size_t azslParser::SrgSemanticContext::getRuleIndex() const {
  return azslParser::RuleSrgSemantic;
}

void azslParser::SrgSemanticContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSrgSemantic(this);
}

void azslParser::SrgSemanticContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSrgSemantic(this);
}

azslParser::SrgSemanticContext* azslParser::srgSemantic() {
  SrgSemanticContext *_localctx = _tracker.createInstance<SrgSemanticContext>(_ctx, getState());
  enterRule(_localctx, 226, azslParser::RuleSrgSemantic);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1136);
    match(azslParser::ShaderResourceGroupSemantic);
    setState(1137);
    antlrcpp::downCast<SrgSemanticContext *>(_localctx)->Name = match(azslParser::Identifier);
    setState(1138);
    srgSemanticBodyDeclaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributedSrgSemanticContext ------------------------------------------------------------------

azslParser::AttributedSrgSemanticContext::AttributedSrgSemanticContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::SrgSemanticContext* azslParser::AttributedSrgSemanticContext::srgSemantic() {
  return getRuleContext<azslParser::SrgSemanticContext>(0);
}

std::vector<azslParser::AttributeSpecifierAnyContext *> azslParser::AttributedSrgSemanticContext::attributeSpecifierAny() {
  return getRuleContexts<azslParser::AttributeSpecifierAnyContext>();
}

azslParser::AttributeSpecifierAnyContext* azslParser::AttributedSrgSemanticContext::attributeSpecifierAny(size_t i) {
  return getRuleContext<azslParser::AttributeSpecifierAnyContext>(i);
}


size_t azslParser::AttributedSrgSemanticContext::getRuleIndex() const {
  return azslParser::RuleAttributedSrgSemantic;
}

void azslParser::AttributedSrgSemanticContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributedSrgSemantic(this);
}

void azslParser::AttributedSrgSemanticContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributedSrgSemantic(this);
}

azslParser::AttributedSrgSemanticContext* azslParser::attributedSrgSemantic() {
  AttributedSrgSemanticContext *_localctx = _tracker.createInstance<AttributedSrgSemanticContext>(_ctx, getState());
  enterRule(_localctx, 228, azslParser::RuleAttributedSrgSemantic);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1143);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == azslParser::LeftBracket

    || _la == azslParser::LeftDoubleBracket) {
      setState(1140);
      attributeSpecifierAny();
      setState(1145);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1146);
    srgSemantic();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SrgSemanticBodyDeclarationContext ------------------------------------------------------------------

azslParser::SrgSemanticBodyDeclarationContext::SrgSemanticBodyDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::SrgSemanticBodyDeclarationContext::LeftBrace() {
  return getToken(azslParser::LeftBrace, 0);
}

tree::TerminalNode* azslParser::SrgSemanticBodyDeclarationContext::RightBrace() {
  return getToken(azslParser::RightBrace, 0);
}

std::vector<azslParser::SrgSemanticMemberDeclarationContext *> azslParser::SrgSemanticBodyDeclarationContext::srgSemanticMemberDeclaration() {
  return getRuleContexts<azslParser::SrgSemanticMemberDeclarationContext>();
}

azslParser::SrgSemanticMemberDeclarationContext* azslParser::SrgSemanticBodyDeclarationContext::srgSemanticMemberDeclaration(size_t i) {
  return getRuleContext<azslParser::SrgSemanticMemberDeclarationContext>(i);
}


size_t azslParser::SrgSemanticBodyDeclarationContext::getRuleIndex() const {
  return azslParser::RuleSrgSemanticBodyDeclaration;
}

void azslParser::SrgSemanticBodyDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSrgSemanticBodyDeclaration(this);
}

void azslParser::SrgSemanticBodyDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSrgSemanticBodyDeclaration(this);
}

azslParser::SrgSemanticBodyDeclarationContext* azslParser::srgSemanticBodyDeclaration() {
  SrgSemanticBodyDeclarationContext *_localctx = _tracker.createInstance<SrgSemanticBodyDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 230, azslParser::RuleSrgSemanticBodyDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1148);
    match(azslParser::LeftBrace);
    setState(1152);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == azslParser::FrequencyId

    || _la == azslParser::ShaderVariantFallback) {
      setState(1149);
      srgSemanticMemberDeclaration();
      setState(1154);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1155);
    match(azslParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SrgSemanticMemberDeclarationContext ------------------------------------------------------------------

azslParser::SrgSemanticMemberDeclarationContext::SrgSemanticMemberDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::SrgSemanticMemberDeclarationContext::Assign() {
  return getToken(azslParser::Assign, 0);
}

tree::TerminalNode* azslParser::SrgSemanticMemberDeclarationContext::Semi() {
  return getToken(azslParser::Semi, 0);
}

tree::TerminalNode* azslParser::SrgSemanticMemberDeclarationContext::FrequencyId() {
  return getToken(azslParser::FrequencyId, 0);
}

azslParser::LiteralContext* azslParser::SrgSemanticMemberDeclarationContext::literal() {
  return getRuleContext<azslParser::LiteralContext>(0);
}

tree::TerminalNode* azslParser::SrgSemanticMemberDeclarationContext::ShaderVariantFallback() {
  return getToken(azslParser::ShaderVariantFallback, 0);
}


size_t azslParser::SrgSemanticMemberDeclarationContext::getRuleIndex() const {
  return azslParser::RuleSrgSemanticMemberDeclaration;
}

void azslParser::SrgSemanticMemberDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSrgSemanticMemberDeclaration(this);
}

void azslParser::SrgSemanticMemberDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSrgSemanticMemberDeclaration(this);
}

azslParser::SrgSemanticMemberDeclarationContext* azslParser::srgSemanticMemberDeclaration() {
  SrgSemanticMemberDeclarationContext *_localctx = _tracker.createInstance<SrgSemanticMemberDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 232, azslParser::RuleSrgSemanticMemberDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1167);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case azslParser::FrequencyId: {
        enterOuterAlt(_localctx, 1);
        setState(1157);
        antlrcpp::downCast<SrgSemanticMemberDeclarationContext *>(_localctx)->Frequency = match(azslParser::FrequencyId);
        setState(1158);
        match(azslParser::Assign);
        setState(1159);
        antlrcpp::downCast<SrgSemanticMemberDeclarationContext *>(_localctx)->FrequencyValue = literal();
        setState(1160);
        match(azslParser::Semi);
        break;
      }

      case azslParser::ShaderVariantFallback: {
        enterOuterAlt(_localctx, 2);
        setState(1162);
        antlrcpp::downCast<SrgSemanticMemberDeclarationContext *>(_localctx)->VariantFallback = match(azslParser::ShaderVariantFallback);
        setState(1163);
        match(azslParser::Assign);
        setState(1164);
        antlrcpp::downCast<SrgSemanticMemberDeclarationContext *>(_localctx)->VariantFallbackValue = literal();
        setState(1165);
        match(azslParser::Semi);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SamplerBodyDeclarationContext ------------------------------------------------------------------

azslParser::SamplerBodyDeclarationContext::SamplerBodyDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::SamplerBodyDeclarationContext::LeftBrace() {
  return getToken(azslParser::LeftBrace, 0);
}

tree::TerminalNode* azslParser::SamplerBodyDeclarationContext::RightBrace() {
  return getToken(azslParser::RightBrace, 0);
}

std::vector<azslParser::SamplerMemberDeclarationContext *> azslParser::SamplerBodyDeclarationContext::samplerMemberDeclaration() {
  return getRuleContexts<azslParser::SamplerMemberDeclarationContext>();
}

azslParser::SamplerMemberDeclarationContext* azslParser::SamplerBodyDeclarationContext::samplerMemberDeclaration(size_t i) {
  return getRuleContext<azslParser::SamplerMemberDeclarationContext>(i);
}


size_t azslParser::SamplerBodyDeclarationContext::getRuleIndex() const {
  return azslParser::RuleSamplerBodyDeclaration;
}

void azslParser::SamplerBodyDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSamplerBodyDeclaration(this);
}

void azslParser::SamplerBodyDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSamplerBodyDeclaration(this);
}

azslParser::SamplerBodyDeclarationContext* azslParser::samplerBodyDeclaration() {
  SamplerBodyDeclarationContext *_localctx = _tracker.createInstance<SamplerBodyDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 234, azslParser::RuleSamplerBodyDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1169);
    match(azslParser::LeftBrace);
    setState(1173);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 270) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 270)) & ((1ULL << (azslParser::ADDRESS_U - 270))
      | (1ULL << (azslParser::ADDRESS_V - 270))
      | (1ULL << (azslParser::ADDRESS_W - 270))
      | (1ULL << (azslParser::BORDER_COLOR - 270))
      | (1ULL << (azslParser::MIN_FILTER - 270))
      | (1ULL << (azslParser::MAG_FILTER - 270))
      | (1ULL << (azslParser::MIP_FILTER - 270))
      | (1ULL << (azslParser::MAX_ANISOTROPY - 270))
      | (1ULL << (azslParser::MAX_LOD - 270))
      | (1ULL << (azslParser::MIN_LOD - 270))
      | (1ULL << (azslParser::MIP_LOD_BIAS - 270))
      | (1ULL << (azslParser::COMPARISON_FUNC - 270))
      | (1ULL << (azslParser::REDUCTION_TYPE - 270)))) != 0)) {
      setState(1170);
      samplerMemberDeclaration();
      setState(1175);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1176);
    match(azslParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SamplerMemberDeclarationContext ------------------------------------------------------------------

azslParser::SamplerMemberDeclarationContext::SamplerMemberDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

azslParser::MaxAnisotropyOptionContext* azslParser::SamplerMemberDeclarationContext::maxAnisotropyOption() {
  return getRuleContext<azslParser::MaxAnisotropyOptionContext>(0);
}

azslParser::MinFilterOptionContext* azslParser::SamplerMemberDeclarationContext::minFilterOption() {
  return getRuleContext<azslParser::MinFilterOptionContext>(0);
}

azslParser::MagFilterOptionContext* azslParser::SamplerMemberDeclarationContext::magFilterOption() {
  return getRuleContext<azslParser::MagFilterOptionContext>(0);
}

azslParser::MipFilterOptionContext* azslParser::SamplerMemberDeclarationContext::mipFilterOption() {
  return getRuleContext<azslParser::MipFilterOptionContext>(0);
}

azslParser::ReductionTypeOptionContext* azslParser::SamplerMemberDeclarationContext::reductionTypeOption() {
  return getRuleContext<azslParser::ReductionTypeOptionContext>(0);
}

azslParser::ComparisonFunctionOptionContext* azslParser::SamplerMemberDeclarationContext::comparisonFunctionOption() {
  return getRuleContext<azslParser::ComparisonFunctionOptionContext>(0);
}

azslParser::AddressUOptionContext* azslParser::SamplerMemberDeclarationContext::addressUOption() {
  return getRuleContext<azslParser::AddressUOptionContext>(0);
}

azslParser::AddressVOptionContext* azslParser::SamplerMemberDeclarationContext::addressVOption() {
  return getRuleContext<azslParser::AddressVOptionContext>(0);
}

azslParser::AddressWOptionContext* azslParser::SamplerMemberDeclarationContext::addressWOption() {
  return getRuleContext<azslParser::AddressWOptionContext>(0);
}

azslParser::MinLodOptionContext* azslParser::SamplerMemberDeclarationContext::minLodOption() {
  return getRuleContext<azslParser::MinLodOptionContext>(0);
}

azslParser::MaxLodOptionContext* azslParser::SamplerMemberDeclarationContext::maxLodOption() {
  return getRuleContext<azslParser::MaxLodOptionContext>(0);
}

azslParser::MipLodBiasOptionContext* azslParser::SamplerMemberDeclarationContext::mipLodBiasOption() {
  return getRuleContext<azslParser::MipLodBiasOptionContext>(0);
}

azslParser::BorderColorOptionContext* azslParser::SamplerMemberDeclarationContext::borderColorOption() {
  return getRuleContext<azslParser::BorderColorOptionContext>(0);
}


size_t azslParser::SamplerMemberDeclarationContext::getRuleIndex() const {
  return azslParser::RuleSamplerMemberDeclaration;
}

void azslParser::SamplerMemberDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSamplerMemberDeclaration(this);
}

void azslParser::SamplerMemberDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSamplerMemberDeclaration(this);
}

azslParser::SamplerMemberDeclarationContext* azslParser::samplerMemberDeclaration() {
  SamplerMemberDeclarationContext *_localctx = _tracker.createInstance<SamplerMemberDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 236, azslParser::RuleSamplerMemberDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1191);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case azslParser::MAX_ANISOTROPY: {
        enterOuterAlt(_localctx, 1);
        setState(1178);
        maxAnisotropyOption();
        break;
      }

      case azslParser::MIN_FILTER: {
        enterOuterAlt(_localctx, 2);
        setState(1179);
        minFilterOption();
        break;
      }

      case azslParser::MAG_FILTER: {
        enterOuterAlt(_localctx, 3);
        setState(1180);
        magFilterOption();
        break;
      }

      case azslParser::MIP_FILTER: {
        enterOuterAlt(_localctx, 4);
        setState(1181);
        mipFilterOption();
        break;
      }

      case azslParser::REDUCTION_TYPE: {
        enterOuterAlt(_localctx, 5);
        setState(1182);
        reductionTypeOption();
        break;
      }

      case azslParser::COMPARISON_FUNC: {
        enterOuterAlt(_localctx, 6);
        setState(1183);
        comparisonFunctionOption();
        break;
      }

      case azslParser::ADDRESS_U: {
        enterOuterAlt(_localctx, 7);
        setState(1184);
        addressUOption();
        break;
      }

      case azslParser::ADDRESS_V: {
        enterOuterAlt(_localctx, 8);
        setState(1185);
        addressVOption();
        break;
      }

      case azslParser::ADDRESS_W: {
        enterOuterAlt(_localctx, 9);
        setState(1186);
        addressWOption();
        break;
      }

      case azslParser::MIN_LOD: {
        enterOuterAlt(_localctx, 10);
        setState(1187);
        minLodOption();
        break;
      }

      case azslParser::MAX_LOD: {
        enterOuterAlt(_localctx, 11);
        setState(1188);
        maxLodOption();
        break;
      }

      case azslParser::MIP_LOD_BIAS: {
        enterOuterAlt(_localctx, 12);
        setState(1189);
        mipLodBiasOption();
        break;
      }

      case azslParser::BORDER_COLOR: {
        enterOuterAlt(_localctx, 13);
        setState(1190);
        borderColorOption();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MaxAnisotropyOptionContext ------------------------------------------------------------------

azslParser::MaxAnisotropyOptionContext::MaxAnisotropyOptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::MaxAnisotropyOptionContext::MAX_ANISOTROPY() {
  return getToken(azslParser::MAX_ANISOTROPY, 0);
}

tree::TerminalNode* azslParser::MaxAnisotropyOptionContext::Assign() {
  return getToken(azslParser::Assign, 0);
}

tree::TerminalNode* azslParser::MaxAnisotropyOptionContext::IntegerLiteral() {
  return getToken(azslParser::IntegerLiteral, 0);
}

tree::TerminalNode* azslParser::MaxAnisotropyOptionContext::Semi() {
  return getToken(azslParser::Semi, 0);
}


size_t azslParser::MaxAnisotropyOptionContext::getRuleIndex() const {
  return azslParser::RuleMaxAnisotropyOption;
}

void azslParser::MaxAnisotropyOptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMaxAnisotropyOption(this);
}

void azslParser::MaxAnisotropyOptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMaxAnisotropyOption(this);
}

azslParser::MaxAnisotropyOptionContext* azslParser::maxAnisotropyOption() {
  MaxAnisotropyOptionContext *_localctx = _tracker.createInstance<MaxAnisotropyOptionContext>(_ctx, getState());
  enterRule(_localctx, 238, azslParser::RuleMaxAnisotropyOption);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1193);
    match(azslParser::MAX_ANISOTROPY);
    setState(1194);
    match(azslParser::Assign);
    setState(1195);
    match(azslParser::IntegerLiteral);
    setState(1196);
    match(azslParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MinFilterOptionContext ------------------------------------------------------------------

azslParser::MinFilterOptionContext::MinFilterOptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::MinFilterOptionContext::MIN_FILTER() {
  return getToken(azslParser::MIN_FILTER, 0);
}

tree::TerminalNode* azslParser::MinFilterOptionContext::Assign() {
  return getToken(azslParser::Assign, 0);
}

azslParser::FilterModeEnumContext* azslParser::MinFilterOptionContext::filterModeEnum() {
  return getRuleContext<azslParser::FilterModeEnumContext>(0);
}

tree::TerminalNode* azslParser::MinFilterOptionContext::Semi() {
  return getToken(azslParser::Semi, 0);
}


size_t azslParser::MinFilterOptionContext::getRuleIndex() const {
  return azslParser::RuleMinFilterOption;
}

void azslParser::MinFilterOptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMinFilterOption(this);
}

void azslParser::MinFilterOptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMinFilterOption(this);
}

azslParser::MinFilterOptionContext* azslParser::minFilterOption() {
  MinFilterOptionContext *_localctx = _tracker.createInstance<MinFilterOptionContext>(_ctx, getState());
  enterRule(_localctx, 240, azslParser::RuleMinFilterOption);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1198);
    match(azslParser::MIN_FILTER);
    setState(1199);
    match(azslParser::Assign);
    setState(1200);
    filterModeEnum();
    setState(1201);
    match(azslParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MagFilterOptionContext ------------------------------------------------------------------

azslParser::MagFilterOptionContext::MagFilterOptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::MagFilterOptionContext::MAG_FILTER() {
  return getToken(azslParser::MAG_FILTER, 0);
}

tree::TerminalNode* azslParser::MagFilterOptionContext::Assign() {
  return getToken(azslParser::Assign, 0);
}

azslParser::FilterModeEnumContext* azslParser::MagFilterOptionContext::filterModeEnum() {
  return getRuleContext<azslParser::FilterModeEnumContext>(0);
}

tree::TerminalNode* azslParser::MagFilterOptionContext::Semi() {
  return getToken(azslParser::Semi, 0);
}


size_t azslParser::MagFilterOptionContext::getRuleIndex() const {
  return azslParser::RuleMagFilterOption;
}

void azslParser::MagFilterOptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMagFilterOption(this);
}

void azslParser::MagFilterOptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMagFilterOption(this);
}

azslParser::MagFilterOptionContext* azslParser::magFilterOption() {
  MagFilterOptionContext *_localctx = _tracker.createInstance<MagFilterOptionContext>(_ctx, getState());
  enterRule(_localctx, 242, azslParser::RuleMagFilterOption);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1203);
    match(azslParser::MAG_FILTER);
    setState(1204);
    match(azslParser::Assign);
    setState(1205);
    filterModeEnum();
    setState(1206);
    match(azslParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MipFilterOptionContext ------------------------------------------------------------------

azslParser::MipFilterOptionContext::MipFilterOptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::MipFilterOptionContext::MIP_FILTER() {
  return getToken(azslParser::MIP_FILTER, 0);
}

tree::TerminalNode* azslParser::MipFilterOptionContext::Assign() {
  return getToken(azslParser::Assign, 0);
}

azslParser::FilterModeEnumContext* azslParser::MipFilterOptionContext::filterModeEnum() {
  return getRuleContext<azslParser::FilterModeEnumContext>(0);
}

tree::TerminalNode* azslParser::MipFilterOptionContext::Semi() {
  return getToken(azslParser::Semi, 0);
}


size_t azslParser::MipFilterOptionContext::getRuleIndex() const {
  return azslParser::RuleMipFilterOption;
}

void azslParser::MipFilterOptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMipFilterOption(this);
}

void azslParser::MipFilterOptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMipFilterOption(this);
}

azslParser::MipFilterOptionContext* azslParser::mipFilterOption() {
  MipFilterOptionContext *_localctx = _tracker.createInstance<MipFilterOptionContext>(_ctx, getState());
  enterRule(_localctx, 244, azslParser::RuleMipFilterOption);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1208);
    match(azslParser::MIP_FILTER);
    setState(1209);
    match(azslParser::Assign);
    setState(1210);
    filterModeEnum();
    setState(1211);
    match(azslParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReductionTypeOptionContext ------------------------------------------------------------------

azslParser::ReductionTypeOptionContext::ReductionTypeOptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::ReductionTypeOptionContext::REDUCTION_TYPE() {
  return getToken(azslParser::REDUCTION_TYPE, 0);
}

tree::TerminalNode* azslParser::ReductionTypeOptionContext::Assign() {
  return getToken(azslParser::Assign, 0);
}

azslParser::ReductionTypeEnumContext* azslParser::ReductionTypeOptionContext::reductionTypeEnum() {
  return getRuleContext<azslParser::ReductionTypeEnumContext>(0);
}

tree::TerminalNode* azslParser::ReductionTypeOptionContext::Semi() {
  return getToken(azslParser::Semi, 0);
}


size_t azslParser::ReductionTypeOptionContext::getRuleIndex() const {
  return azslParser::RuleReductionTypeOption;
}

void azslParser::ReductionTypeOptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReductionTypeOption(this);
}

void azslParser::ReductionTypeOptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReductionTypeOption(this);
}

azslParser::ReductionTypeOptionContext* azslParser::reductionTypeOption() {
  ReductionTypeOptionContext *_localctx = _tracker.createInstance<ReductionTypeOptionContext>(_ctx, getState());
  enterRule(_localctx, 246, azslParser::RuleReductionTypeOption);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1213);
    match(azslParser::REDUCTION_TYPE);
    setState(1214);
    match(azslParser::Assign);
    setState(1215);
    reductionTypeEnum();
    setState(1216);
    match(azslParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonFunctionOptionContext ------------------------------------------------------------------

azslParser::ComparisonFunctionOptionContext::ComparisonFunctionOptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::ComparisonFunctionOptionContext::COMPARISON_FUNC() {
  return getToken(azslParser::COMPARISON_FUNC, 0);
}

tree::TerminalNode* azslParser::ComparisonFunctionOptionContext::Assign() {
  return getToken(azslParser::Assign, 0);
}

azslParser::ComparisonFunctionEnumContext* azslParser::ComparisonFunctionOptionContext::comparisonFunctionEnum() {
  return getRuleContext<azslParser::ComparisonFunctionEnumContext>(0);
}

tree::TerminalNode* azslParser::ComparisonFunctionOptionContext::Semi() {
  return getToken(azslParser::Semi, 0);
}


size_t azslParser::ComparisonFunctionOptionContext::getRuleIndex() const {
  return azslParser::RuleComparisonFunctionOption;
}

void azslParser::ComparisonFunctionOptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparisonFunctionOption(this);
}

void azslParser::ComparisonFunctionOptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparisonFunctionOption(this);
}

azslParser::ComparisonFunctionOptionContext* azslParser::comparisonFunctionOption() {
  ComparisonFunctionOptionContext *_localctx = _tracker.createInstance<ComparisonFunctionOptionContext>(_ctx, getState());
  enterRule(_localctx, 248, azslParser::RuleComparisonFunctionOption);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1218);
    match(azslParser::COMPARISON_FUNC);
    setState(1219);
    match(azslParser::Assign);
    setState(1220);
    comparisonFunctionEnum();
    setState(1221);
    match(azslParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddressUOptionContext ------------------------------------------------------------------

azslParser::AddressUOptionContext::AddressUOptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::AddressUOptionContext::ADDRESS_U() {
  return getToken(azslParser::ADDRESS_U, 0);
}

tree::TerminalNode* azslParser::AddressUOptionContext::Assign() {
  return getToken(azslParser::Assign, 0);
}

azslParser::AddressModeEnumContext* azslParser::AddressUOptionContext::addressModeEnum() {
  return getRuleContext<azslParser::AddressModeEnumContext>(0);
}

tree::TerminalNode* azslParser::AddressUOptionContext::Semi() {
  return getToken(azslParser::Semi, 0);
}


size_t azslParser::AddressUOptionContext::getRuleIndex() const {
  return azslParser::RuleAddressUOption;
}

void azslParser::AddressUOptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddressUOption(this);
}

void azslParser::AddressUOptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddressUOption(this);
}

azslParser::AddressUOptionContext* azslParser::addressUOption() {
  AddressUOptionContext *_localctx = _tracker.createInstance<AddressUOptionContext>(_ctx, getState());
  enterRule(_localctx, 250, azslParser::RuleAddressUOption);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1223);
    match(azslParser::ADDRESS_U);
    setState(1224);
    match(azslParser::Assign);
    setState(1225);
    addressModeEnum();
    setState(1226);
    match(azslParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddressVOptionContext ------------------------------------------------------------------

azslParser::AddressVOptionContext::AddressVOptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::AddressVOptionContext::ADDRESS_V() {
  return getToken(azslParser::ADDRESS_V, 0);
}

tree::TerminalNode* azslParser::AddressVOptionContext::Assign() {
  return getToken(azslParser::Assign, 0);
}

azslParser::AddressModeEnumContext* azslParser::AddressVOptionContext::addressModeEnum() {
  return getRuleContext<azslParser::AddressModeEnumContext>(0);
}

tree::TerminalNode* azslParser::AddressVOptionContext::Semi() {
  return getToken(azslParser::Semi, 0);
}


size_t azslParser::AddressVOptionContext::getRuleIndex() const {
  return azslParser::RuleAddressVOption;
}

void azslParser::AddressVOptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddressVOption(this);
}

void azslParser::AddressVOptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddressVOption(this);
}

azslParser::AddressVOptionContext* azslParser::addressVOption() {
  AddressVOptionContext *_localctx = _tracker.createInstance<AddressVOptionContext>(_ctx, getState());
  enterRule(_localctx, 252, azslParser::RuleAddressVOption);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1228);
    match(azslParser::ADDRESS_V);
    setState(1229);
    match(azslParser::Assign);
    setState(1230);
    addressModeEnum();
    setState(1231);
    match(azslParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddressWOptionContext ------------------------------------------------------------------

azslParser::AddressWOptionContext::AddressWOptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::AddressWOptionContext::ADDRESS_W() {
  return getToken(azslParser::ADDRESS_W, 0);
}

tree::TerminalNode* azslParser::AddressWOptionContext::Assign() {
  return getToken(azslParser::Assign, 0);
}

azslParser::AddressModeEnumContext* azslParser::AddressWOptionContext::addressModeEnum() {
  return getRuleContext<azslParser::AddressModeEnumContext>(0);
}

tree::TerminalNode* azslParser::AddressWOptionContext::Semi() {
  return getToken(azslParser::Semi, 0);
}


size_t azslParser::AddressWOptionContext::getRuleIndex() const {
  return azslParser::RuleAddressWOption;
}

void azslParser::AddressWOptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddressWOption(this);
}

void azslParser::AddressWOptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddressWOption(this);
}

azslParser::AddressWOptionContext* azslParser::addressWOption() {
  AddressWOptionContext *_localctx = _tracker.createInstance<AddressWOptionContext>(_ctx, getState());
  enterRule(_localctx, 254, azslParser::RuleAddressWOption);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1233);
    match(azslParser::ADDRESS_W);
    setState(1234);
    match(azslParser::Assign);
    setState(1235);
    addressModeEnum();
    setState(1236);
    match(azslParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MinLodOptionContext ------------------------------------------------------------------

azslParser::MinLodOptionContext::MinLodOptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::MinLodOptionContext::MIN_LOD() {
  return getToken(azslParser::MIN_LOD, 0);
}

tree::TerminalNode* azslParser::MinLodOptionContext::Assign() {
  return getToken(azslParser::Assign, 0);
}

tree::TerminalNode* azslParser::MinLodOptionContext::FloatLiteral() {
  return getToken(azslParser::FloatLiteral, 0);
}

tree::TerminalNode* azslParser::MinLodOptionContext::Semi() {
  return getToken(azslParser::Semi, 0);
}


size_t azslParser::MinLodOptionContext::getRuleIndex() const {
  return azslParser::RuleMinLodOption;
}

void azslParser::MinLodOptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMinLodOption(this);
}

void azslParser::MinLodOptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMinLodOption(this);
}

azslParser::MinLodOptionContext* azslParser::minLodOption() {
  MinLodOptionContext *_localctx = _tracker.createInstance<MinLodOptionContext>(_ctx, getState());
  enterRule(_localctx, 256, azslParser::RuleMinLodOption);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1238);
    match(azslParser::MIN_LOD);
    setState(1239);
    match(azslParser::Assign);
    setState(1240);
    match(azslParser::FloatLiteral);
    setState(1241);
    match(azslParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MaxLodOptionContext ------------------------------------------------------------------

azslParser::MaxLodOptionContext::MaxLodOptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::MaxLodOptionContext::MAX_LOD() {
  return getToken(azslParser::MAX_LOD, 0);
}

tree::TerminalNode* azslParser::MaxLodOptionContext::Assign() {
  return getToken(azslParser::Assign, 0);
}

tree::TerminalNode* azslParser::MaxLodOptionContext::FloatLiteral() {
  return getToken(azslParser::FloatLiteral, 0);
}

tree::TerminalNode* azslParser::MaxLodOptionContext::Semi() {
  return getToken(azslParser::Semi, 0);
}


size_t azslParser::MaxLodOptionContext::getRuleIndex() const {
  return azslParser::RuleMaxLodOption;
}

void azslParser::MaxLodOptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMaxLodOption(this);
}

void azslParser::MaxLodOptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMaxLodOption(this);
}

azslParser::MaxLodOptionContext* azslParser::maxLodOption() {
  MaxLodOptionContext *_localctx = _tracker.createInstance<MaxLodOptionContext>(_ctx, getState());
  enterRule(_localctx, 258, azslParser::RuleMaxLodOption);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1243);
    match(azslParser::MAX_LOD);
    setState(1244);
    match(azslParser::Assign);
    setState(1245);
    match(azslParser::FloatLiteral);
    setState(1246);
    match(azslParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MipLodBiasOptionContext ------------------------------------------------------------------

azslParser::MipLodBiasOptionContext::MipLodBiasOptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::MipLodBiasOptionContext::MIP_LOD_BIAS() {
  return getToken(azslParser::MIP_LOD_BIAS, 0);
}

tree::TerminalNode* azslParser::MipLodBiasOptionContext::Assign() {
  return getToken(azslParser::Assign, 0);
}

tree::TerminalNode* azslParser::MipLodBiasOptionContext::FloatLiteral() {
  return getToken(azslParser::FloatLiteral, 0);
}

tree::TerminalNode* azslParser::MipLodBiasOptionContext::Semi() {
  return getToken(azslParser::Semi, 0);
}


size_t azslParser::MipLodBiasOptionContext::getRuleIndex() const {
  return azslParser::RuleMipLodBiasOption;
}

void azslParser::MipLodBiasOptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMipLodBiasOption(this);
}

void azslParser::MipLodBiasOptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMipLodBiasOption(this);
}

azslParser::MipLodBiasOptionContext* azslParser::mipLodBiasOption() {
  MipLodBiasOptionContext *_localctx = _tracker.createInstance<MipLodBiasOptionContext>(_ctx, getState());
  enterRule(_localctx, 260, azslParser::RuleMipLodBiasOption);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1248);
    match(azslParser::MIP_LOD_BIAS);
    setState(1249);
    match(azslParser::Assign);
    setState(1250);
    match(azslParser::FloatLiteral);
    setState(1251);
    match(azslParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BorderColorOptionContext ------------------------------------------------------------------

azslParser::BorderColorOptionContext::BorderColorOptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::BorderColorOptionContext::BORDER_COLOR() {
  return getToken(azslParser::BORDER_COLOR, 0);
}

tree::TerminalNode* azslParser::BorderColorOptionContext::Assign() {
  return getToken(azslParser::Assign, 0);
}

azslParser::BorderColorEnumContext* azslParser::BorderColorOptionContext::borderColorEnum() {
  return getRuleContext<azslParser::BorderColorEnumContext>(0);
}

tree::TerminalNode* azslParser::BorderColorOptionContext::Semi() {
  return getToken(azslParser::Semi, 0);
}


size_t azslParser::BorderColorOptionContext::getRuleIndex() const {
  return azslParser::RuleBorderColorOption;
}

void azslParser::BorderColorOptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBorderColorOption(this);
}

void azslParser::BorderColorOptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBorderColorOption(this);
}

azslParser::BorderColorOptionContext* azslParser::borderColorOption() {
  BorderColorOptionContext *_localctx = _tracker.createInstance<BorderColorOptionContext>(_ctx, getState());
  enterRule(_localctx, 262, azslParser::RuleBorderColorOption);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1253);
    match(azslParser::BORDER_COLOR);
    setState(1254);
    match(azslParser::Assign);
    setState(1255);
    borderColorEnum();
    setState(1256);
    match(azslParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FilterModeEnumContext ------------------------------------------------------------------

azslParser::FilterModeEnumContext::FilterModeEnumContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::FilterModeEnumContext::FILTER_MODE_POINT() {
  return getToken(azslParser::FILTER_MODE_POINT, 0);
}

tree::TerminalNode* azslParser::FilterModeEnumContext::FILTER_MODE_LINEAR() {
  return getToken(azslParser::FILTER_MODE_LINEAR, 0);
}


size_t azslParser::FilterModeEnumContext::getRuleIndex() const {
  return azslParser::RuleFilterModeEnum;
}

void azslParser::FilterModeEnumContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFilterModeEnum(this);
}

void azslParser::FilterModeEnumContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFilterModeEnum(this);
}

azslParser::FilterModeEnumContext* azslParser::filterModeEnum() {
  FilterModeEnumContext *_localctx = _tracker.createInstance<FilterModeEnumContext>(_ctx, getState());
  enterRule(_localctx, 264, azslParser::RuleFilterModeEnum);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1258);
    _la = _input->LA(1);
    if (!(_la == azslParser::FILTER_MODE_POINT

    || _la == azslParser::FILTER_MODE_LINEAR)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReductionTypeEnumContext ------------------------------------------------------------------

azslParser::ReductionTypeEnumContext::ReductionTypeEnumContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::ReductionTypeEnumContext::REDUCTION_TYPE_FILTER() {
  return getToken(azslParser::REDUCTION_TYPE_FILTER, 0);
}

tree::TerminalNode* azslParser::ReductionTypeEnumContext::REDUCTION_TYPE_COMPARISON() {
  return getToken(azslParser::REDUCTION_TYPE_COMPARISON, 0);
}

tree::TerminalNode* azslParser::ReductionTypeEnumContext::REDUCTION_TYPE_MINIMUM() {
  return getToken(azslParser::REDUCTION_TYPE_MINIMUM, 0);
}

tree::TerminalNode* azslParser::ReductionTypeEnumContext::REDUCTION_TYPE_MAXIMUM() {
  return getToken(azslParser::REDUCTION_TYPE_MAXIMUM, 0);
}


size_t azslParser::ReductionTypeEnumContext::getRuleIndex() const {
  return azslParser::RuleReductionTypeEnum;
}

void azslParser::ReductionTypeEnumContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReductionTypeEnum(this);
}

void azslParser::ReductionTypeEnumContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReductionTypeEnum(this);
}

azslParser::ReductionTypeEnumContext* azslParser::reductionTypeEnum() {
  ReductionTypeEnumContext *_localctx = _tracker.createInstance<ReductionTypeEnumContext>(_ctx, getState());
  enterRule(_localctx, 266, azslParser::RuleReductionTypeEnum);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1260);
    _la = _input->LA(1);
    if (!(((((_la - 285) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 285)) & ((1ULL << (azslParser::REDUCTION_TYPE_FILTER - 285))
      | (1ULL << (azslParser::REDUCTION_TYPE_COMPARISON - 285))
      | (1ULL << (azslParser::REDUCTION_TYPE_MINIMUM - 285))
      | (1ULL << (azslParser::REDUCTION_TYPE_MAXIMUM - 285)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddressModeEnumContext ------------------------------------------------------------------

azslParser::AddressModeEnumContext::AddressModeEnumContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::AddressModeEnumContext::ADDRESS_MODE_WRAP() {
  return getToken(azslParser::ADDRESS_MODE_WRAP, 0);
}

tree::TerminalNode* azslParser::AddressModeEnumContext::ADDRESS_MODE_MIRROR() {
  return getToken(azslParser::ADDRESS_MODE_MIRROR, 0);
}

tree::TerminalNode* azslParser::AddressModeEnumContext::ADDRESS_MODE_CLAMP() {
  return getToken(azslParser::ADDRESS_MODE_CLAMP, 0);
}

tree::TerminalNode* azslParser::AddressModeEnumContext::ADDRESS_MODE_BORDER() {
  return getToken(azslParser::ADDRESS_MODE_BORDER, 0);
}

tree::TerminalNode* azslParser::AddressModeEnumContext::ADDRESS_MODE_MIRROR_ONCE() {
  return getToken(azslParser::ADDRESS_MODE_MIRROR_ONCE, 0);
}


size_t azslParser::AddressModeEnumContext::getRuleIndex() const {
  return azslParser::RuleAddressModeEnum;
}

void azslParser::AddressModeEnumContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddressModeEnum(this);
}

void azslParser::AddressModeEnumContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddressModeEnum(this);
}

azslParser::AddressModeEnumContext* azslParser::addressModeEnum() {
  AddressModeEnumContext *_localctx = _tracker.createInstance<AddressModeEnumContext>(_ctx, getState());
  enterRule(_localctx, 268, azslParser::RuleAddressModeEnum);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1262);
    _la = _input->LA(1);
    if (!(((((_la - 289) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 289)) & ((1ULL << (azslParser::ADDRESS_MODE_WRAP - 289))
      | (1ULL << (azslParser::ADDRESS_MODE_MIRROR - 289))
      | (1ULL << (azslParser::ADDRESS_MODE_CLAMP - 289))
      | (1ULL << (azslParser::ADDRESS_MODE_BORDER - 289))
      | (1ULL << (azslParser::ADDRESS_MODE_MIRROR_ONCE - 289)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonFunctionEnumContext ------------------------------------------------------------------

azslParser::ComparisonFunctionEnumContext::ComparisonFunctionEnumContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::ComparisonFunctionEnumContext::COMPARISON_FUNCTION_NEVER() {
  return getToken(azslParser::COMPARISON_FUNCTION_NEVER, 0);
}

tree::TerminalNode* azslParser::ComparisonFunctionEnumContext::COMPARISON_FUNCTION_LESS() {
  return getToken(azslParser::COMPARISON_FUNCTION_LESS, 0);
}

tree::TerminalNode* azslParser::ComparisonFunctionEnumContext::COMPARISON_FUNCTION_EQUAL() {
  return getToken(azslParser::COMPARISON_FUNCTION_EQUAL, 0);
}

tree::TerminalNode* azslParser::ComparisonFunctionEnumContext::COMPARISON_FUNCTION_LESS_EQUAL() {
  return getToken(azslParser::COMPARISON_FUNCTION_LESS_EQUAL, 0);
}

tree::TerminalNode* azslParser::ComparisonFunctionEnumContext::COMPARISON_FUNCTION_GREATER() {
  return getToken(azslParser::COMPARISON_FUNCTION_GREATER, 0);
}

tree::TerminalNode* azslParser::ComparisonFunctionEnumContext::COMPARISON_FUNCTION_NOT_EQUAL() {
  return getToken(azslParser::COMPARISON_FUNCTION_NOT_EQUAL, 0);
}

tree::TerminalNode* azslParser::ComparisonFunctionEnumContext::COMPARISON_FUNCTION_GREATER_EQUAL() {
  return getToken(azslParser::COMPARISON_FUNCTION_GREATER_EQUAL, 0);
}

tree::TerminalNode* azslParser::ComparisonFunctionEnumContext::COMPARISON_FUNCTION_ALWAYS() {
  return getToken(azslParser::COMPARISON_FUNCTION_ALWAYS, 0);
}


size_t azslParser::ComparisonFunctionEnumContext::getRuleIndex() const {
  return azslParser::RuleComparisonFunctionEnum;
}

void azslParser::ComparisonFunctionEnumContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparisonFunctionEnum(this);
}

void azslParser::ComparisonFunctionEnumContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparisonFunctionEnum(this);
}

azslParser::ComparisonFunctionEnumContext* azslParser::comparisonFunctionEnum() {
  ComparisonFunctionEnumContext *_localctx = _tracker.createInstance<ComparisonFunctionEnumContext>(_ctx, getState());
  enterRule(_localctx, 270, azslParser::RuleComparisonFunctionEnum);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1264);
    _la = _input->LA(1);
    if (!(((((_la - 294) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 294)) & ((1ULL << (azslParser::COMPARISON_FUNCTION_NEVER - 294))
      | (1ULL << (azslParser::COMPARISON_FUNCTION_LESS - 294))
      | (1ULL << (azslParser::COMPARISON_FUNCTION_EQUAL - 294))
      | (1ULL << (azslParser::COMPARISON_FUNCTION_LESS_EQUAL - 294))
      | (1ULL << (azslParser::COMPARISON_FUNCTION_GREATER - 294))
      | (1ULL << (azslParser::COMPARISON_FUNCTION_NOT_EQUAL - 294))
      | (1ULL << (azslParser::COMPARISON_FUNCTION_GREATER_EQUAL - 294))
      | (1ULL << (azslParser::COMPARISON_FUNCTION_ALWAYS - 294)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BorderColorEnumContext ------------------------------------------------------------------

azslParser::BorderColorEnumContext::BorderColorEnumContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* azslParser::BorderColorEnumContext::BORDER_COLOR_OPAQUE_BLACK() {
  return getToken(azslParser::BORDER_COLOR_OPAQUE_BLACK, 0);
}

tree::TerminalNode* azslParser::BorderColorEnumContext::BORDER_COLOR_TRANSPARENT_BLACK() {
  return getToken(azslParser::BORDER_COLOR_TRANSPARENT_BLACK, 0);
}

tree::TerminalNode* azslParser::BorderColorEnumContext::BORDER_COLOR_OPAQUE_WHITE() {
  return getToken(azslParser::BORDER_COLOR_OPAQUE_WHITE, 0);
}


size_t azslParser::BorderColorEnumContext::getRuleIndex() const {
  return azslParser::RuleBorderColorEnum;
}

void azslParser::BorderColorEnumContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBorderColorEnum(this);
}

void azslParser::BorderColorEnumContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<azslParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBorderColorEnum(this);
}

azslParser::BorderColorEnumContext* azslParser::borderColorEnum() {
  BorderColorEnumContext *_localctx = _tracker.createInstance<BorderColorEnumContext>(_ctx, getState());
  enterRule(_localctx, 272, azslParser::RuleBorderColorEnum);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1266);
    _la = _input->LA(1);
    if (!(((((_la - 302) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 302)) & ((1ULL << (azslParser::BORDER_COLOR_OPAQUE_BLACK - 302))
      | (1ULL << (azslParser::BORDER_COLOR_TRANSPARENT_BLACK - 302))
      | (1ULL << (azslParser::BORDER_COLOR_OPAQUE_WHITE - 302)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool azslParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 43: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);
    case 44: return expressionExtSempred(antlrcpp::downCast<ExpressionExtContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool azslParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 10);
    case 2: return precpred(_ctx, 9);
    case 3: return precpred(_ctx, 8);
    case 4: return precpred(_ctx, 5);
    case 5: return precpred(_ctx, 2);
    case 6: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool azslParser::expressionExtSempred(ExpressionExtContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> azslParser::_decisionToDFA;
atn::PredictionContextCache azslParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN azslParser::_atn;
std::vector<uint16_t> azslParser::_serializedATN;

std::vector<std::string> azslParser::_ruleNames = {
  "compilationUnit", "topLevelDeclaration", "idExpression", "unqualifiedId", 
  "qualifiedId", "nestedNameSpecifier", "classDefinitionStatement", "classDefinition", 
  "baseList", "classMemberDeclaration", "structDefinitionStatement", "structDefinition", 
  "structMemberDeclaration", "anyStructuredTypeDefinitionStatement", "enumDefinitionStatement", 
  "enumDefinition", "enumKey", "enumeratorListDefinition", "enumeratorDeclarator", 
  "anyStructuredTypeDefinition", "interfaceDefinitionStatement", "interfaceDefinition", 
  "interfaceMemberDeclaration", "constantBufferTemplated", "variableDeclarationStatement", 
  "functionParams", "functionParam", "hlslSemantic", "hlslSemanticName", 
  "attributeArguments", "attributeArgumentList", "attribute", "attributeSpecifier", 
  "attributeSpecifierSequence", "attributeSpecifierAny", "block", "statement", 
  "forInitializer", "switchLabel", "switchSection", "switchBlock", "embeddedStatement", 
  "elseClause", "expression", "expressionExt", "postfixUnaryOperator", "prefixUnaryOperator", 
  "binaryOperator", "assignmentOperator", "argumentList", "arguments", "variableDeclaration", 
  "variableDeclarators", "unnamedVariableDeclarator", "namedVariableDeclarator", 
  "variableInitializer", "standardVariableInitializer", "arrayElementInitializers", 
  "arrayRankSpecifier", "packOffsetNode", "storageFlags", "storageFlag", 
  "type", "predefinedType", "subobjectType", "otherViewResourceType", "rtxBuiltInTypes", 
  "bufferPredefinedType", "bufferType", "byteAddressBufferTypes", "patchPredefinedType", 
  "patchType", "samplerStatePredefinedType", "scalarType", "streamOutputPredefinedType", 
  "streamOutputObjectType", "structuredBufferPredefinedType", "structuredBufferName", 
  "textureType", "texturePredefinedType", "genericTexturePredefinedType", 
  "textureTypeMS", "msTexturePredefinedType", "vectorType", "genericVectorType", 
  "scalarOrVectorType", "scalarOrVectorOrMatrixType", "matrixType", "genericMatrixPredefinedType", 
  "registerAllocation", "samplerStateProperty", "literal", "leadingTypeFunctionSignature", 
  "hlslFunctionDefinition", "hlslFunctionDeclaration", "userDefinedType", 
  "associatedTypeDeclaration", "typedefStatement", "typealiasStatement", 
  "typeAliasingDefinitionStatement", "typeofExpression", "genericParameterList", 
  "genericTypeDefinition", "genericConstraint", "languageDefinedConstraint", 
  "functionDeclaration", "attributedFunctionDeclaration", "functionDefinition", 
  "attributedFunctionDefinition", "compilerExtensionStatement", "srgDefinition", 
  "attributedSrgDefinition", "srgMemberDeclaration", "srgSemantic", "attributedSrgSemantic", 
  "srgSemanticBodyDeclaration", "srgSemanticMemberDeclaration", "samplerBodyDeclaration", 
  "samplerMemberDeclaration", "maxAnisotropyOption", "minFilterOption", 
  "magFilterOption", "mipFilterOption", "reductionTypeOption", "comparisonFunctionOption", 
  "addressUOption", "addressVOption", "addressWOption", "minLodOption", 
  "maxLodOption", "mipLodBiasOption", "borderColorOption", "filterModeEnum", 
  "reductionTypeEnum", "addressModeEnum", "comparisonFunctionEnum", "borderColorEnum"
};

std::vector<std::string> azslParser::_literalNames = {
  "", "'AppendStructuredBuffer'", "'bool'", "'bool1'", "'bool2'", "'bool3'", 
  "'bool4'", "'bool1x1'", "'bool1x2'", "'bool1x3'", "'bool1x4'", "'bool2x1'", 
  "'bool2x2'", "'bool2x3'", "'bool2x4'", "'bool3x1'", "'bool3x2'", "'bool3x3'", 
  "'bool3x4'", "'bool4x1'", "'bool4x2'", "'bool4x3'", "'bool4x4'", "'Buffer'", 
  "'BuiltInTriangleIntersectionAttributes'", "'ByteAddressBuffer'", "'break'", 
  "'case'", "'cbuffer'", "'centroid'", "'constantbuffer'", "'ConstantBuffer'", 
  "'class'", "'column_major'", "'const'", "'ConsumeStructuredBuffer'", "'continue'", 
  "'default'", "'discard'", "'do'", "'double'", "'double1'", "'double2'", 
  "'double3'", "'double4'", "'double1x1'", "'double1x2'", "'double1x3'", 
  "'double1x4'", "'double2x1'", "'double2x2'", "'double2x3'", "'double2x4'", 
  "'double3x1'", "'double3x2'", "'double3x3'", "'double3x4'", "'double4x1'", 
  "'double4x2'", "'double4x3'", "'double4x4'", "'else'", "'enum'", "'export'", 
  "'extern'", "'FeedbackTexture2D'", "'FeedbackTexture2DArray'", "'float'", 
  "'float1'", "'float2'", "'float3'", "'float4'", "'float1x1'", "'float1x2'", 
  "'float1x3'", "'float1x4'", "'float2x1'", "'float2x2'", "'float2x3'", 
  "'float2x4'", "'float3x1'", "'float3x2'", "'float3x3'", "'float3x4'", 
  "'float4x1'", "'float4x2'", "'float4x3'", "'float4x4'", "'for'", "'groupshared'", 
  "'globallycoherent'", "'global'", "'half'", "'half1'", "'half2'", "'half3'", 
  "'half4'", "'half1x1'", "'half1x2'", "'half1x3'", "'half1x4'", "'half2x1'", 
  "'half2x2'", "'half2x3'", "'half2x4'", "'half3x1'", "'half3x2'", "'half3x3'", 
  "'half3x4'", "'half4x1'", "'half4x2'", "'half4x3'", "'half4x4'", "'if'", 
  "'in'", "'inline'", "'rootconstant'", "", "'InputPatch'", "'int'", "'int16_t'", 
  "'int32_t'", "'int64_t'", "'int1'", "'int2'", "'int3'", "'int4'", "'int1x1'", 
  "'int1x2'", "'int1x3'", "'int1x4'", "'int2x1'", "'int2x2'", "'int2x3'", 
  "'int2x4'", "'int3x1'", "'int3x2'", "'int3x3'", "'int3x4'", "'int4x1'", 
  "'int4x2'", "'int4x3'", "'int4x4'", "'interface'", "'line'", "'lineadj'", 
  "'linear'", "'LineStream'", "'long'", "'matrix'", "'nointerpolation'", 
  "'noperspective'", "'option'", "'out'", "'OutputPatch'", "'override'", 
  "'partial'", "'packoffset'", "'point'", "'PointStream'", "'precise'", 
  "'RasterizerOrderedBuffer'", "'RasterizerOrderedByteAddressBuffer'", "'RasterizerOrderedStructuredBuffer'", 
  "'RasterizerOrderedTexture1D'", "'RasterizerOrderedTexture1DArray'", "'RasterizerOrderedTexture2D'", 
  "'RasterizerOrderedTexture2DArray'", "'RasterizerOrderedTexture3D'", "'RayDesc'", 
  "'RaytracingAccelerationStructure'", "'register'", "'return'", "'row_major'", 
  "'RWBuffer'", "'RWByteAddressBuffer'", "'RWStructuredBuffer'", "'RWTexture1D'", 
  "'RWTexture1DArray'", "'RWTexture2D'", "'RWTexture2DArray'", "'RWTexture3D'", 
  "'sample'", "'sampler'", "'Sampler'", "'SamplerComparisonState'", "'SamplerState'", 
  "'sampler_state'", "'shared'", "'snorm'", "'static'", "'struct'", "'StructuredBuffer'", 
  "'SubpassInput'", "'SubpassInputMS'", "'switch'", "'tbuffer'", "'Texture1D'", 
  "'Texture1DArray'", "'Texture2D'", "'Texture2DArray'", "'Texture2DMS'", 
  "'Texture2DMSArray'", "'Texture3D'", "'TextureCube'", "'TextureCubeArray'", 
  "'triangle'", "'triangleadj'", "'TriangleStream'", "'uniform'", "'uint'", 
  "'uint1'", "'uint2'", "'uint3'", "'uint4'", "'uint1x1'", "'uint1x2'", 
  "'uint1x3'", "'uint1x4'", "'uint2x1'", "'uint2x2'", "'uint2x3'", "'uint2x4'", 
  "'uint3x1'", "'uint3x2'", "'uint3x3'", "'uint3x4'", "'uint4x1'", "'uint4x2'", 
  "'uint4x3'", "'uint4x4'", "'uint16_t'", "'uint32_t'", "'uint64_t'", "'unorm'", 
  "'unsigned'", "'dword'", "'dword1'", "'dword2'", "'dword3'", "'dword4'", 
  "'dword1x1'", "'dword1x2'", "'dword1x3'", "'dword1x4'", "'dword2x1'", 
  "'dword2x2'", "'dword2x3'", "'dword2x4'", "'dword3x1'", "'dword3x2'", 
  "'dword3x3'", "'dword3x4'", "'dword4x1'", "'dword4x2'", "'dword4x3'", 
  "'dword4x4'", "'vector'", "'volatile'", "'void'", "'while'", "'StateObjectConfig'", 
  "'LocalRootSignature'", "'GlobalRootSignature'", "'SubobjectToExportsAssociation'", 
  "'RaytracingShaderConfig'", "'RaytracingPipelineConfig'", "'RaytracingPipelineConfig1'", 
  "'TriangleHitGroup'", "'ProceduralPrimitiveHitGroup'", "'AddressU'", "'AddressV'", 
  "'AddressW'", "'BorderColor'", "'MinFilter'", "'MagFilter'", "'MipFilter'", 
  "'MaxAnisotropy'", "'MaxLOD'", "'MinLOD'", "'MipLODBias'", "'ComparisonFunc'", 
  "'ReductionType'", "'Point'", "'Linear'", "'Filter'", "'Comparison'", 
  "'Minimum'", "'Maximum'", "'Wrap'", "'Mirror'", "'Clamp'", "'Border'", 
  "'MirrorOnce'", "'Never'", "'Less'", "'Equal'", "'LessEqual'", "'Greater'", 
  "'NotEqual'", "'GreaterEqual'", "'Always'", "'OpaqueBlack'", "'TransparentBlack'", 
  "'OpaqueWhite'", "'('", "')'", "'['", "']'", "'{'", "'}'", "'[['", "'<'", 
  "'<='", "'>'", "'>='", "'<<'", "'>>'", "'+'", "'++'", "'-'", "'--'", "'*'", 
  "'/'", "'%'", "'&'", "'|'", "'&&'", "'||'", "'^'", "'!'", "'~'", "'\u003F'", 
  "':'", "'::'", "';'", "','", "'='", "'*='", "'/='", "'%='", "'+='", "'-='", 
  "'<<='", "'>>='", "'&='", "'^='", "'|='", "'=='", "'!='", "'.'", "'true'", 
  "'false'", "'associatedtype'", "'typealias'", "'typedef'", "'fundamental'", 
  "'typeof'", "'FrequencyId'", "'ShaderVariantFallback'", "'ShaderResourceGroupSemantic'", 
  "'ShaderResourceGroup'", "'__azslc_print_message'", "'__azslc_print_symbol'", 
  "'__azslc_prtsym_fully_qualified'", "'__azslc_prtsym_least_qualified'", 
  "'__azslc_prtsym_constint_value'"
};

std::vector<std::string> azslParser::_symbolicNames = {
  "", "AppendStructuredBuffer", "Bool", "Bool1", "Bool2", "Bool3", "Bool4", 
  "Bool1x1", "Bool1x2", "Bool1x3", "Bool1x4", "Bool2x1", "Bool2x2", "Bool2x3", 
  "Bool2x4", "Bool3x1", "Bool3x2", "Bool3x3", "Bool3x4", "Bool4x1", "Bool4x2", 
  "Bool4x3", "Bool4x4", "Buffer", "BuiltInTriangleIntersectionAttributes", 
  "ByteAddressBuffer", "Break", "Case", "CBuffer", "Centroid", "ConstantBuffer", 
  "ConstantBufferCamel", "Class", "ColumnMajor", "Const", "ConsumeStructuredBuffer", 
  "Continue", "Default", "Discard", "Do", "Double", "Double1", "Double2", 
  "Double3", "Double4", "Double1x1", "Double1x2", "Double1x3", "Double1x4", 
  "Double2x1", "Double2x2", "Double2x3", "Double2x4", "Double3x1", "Double3x2", 
  "Double3x3", "Double3x4", "Double4x1", "Double4x2", "Double4x3", "Double4x4", 
  "Else", "Enum", "Export", "Extern", "FeedbackTexture2D", "FeedbackTexture2DArray", 
  "Float", "Float1", "Float2", "Float3", "Float4", "Float1x1", "Float1x2", 
  "Float1x3", "Float1x4", "Float2x1", "Float2x2", "Float2x3", "Float2x4", 
  "Float3x1", "Float3x2", "Float3x3", "Float3x4", "Float4x1", "Float4x2", 
  "Float4x3", "Float4x4", "For", "Groupshared", "Globallycoherent", "Global", 
  "Half", "Half1", "Half2", "Half3", "Half4", "Half1x1", "Half1x2", "Half1x3", 
  "Half1x4", "Half2x1", "Half2x2", "Half2x3", "Half2x4", "Half3x1", "Half3x2", 
  "Half3x3", "Half3x4", "Half4x1", "Half4x2", "Half4x3", "Half4x4", "If", 
  "In", "Inline", "Rootconstant", "Inout", "InputPatch", "Int", "Int16_t", 
  "Int32_t", "Int64_t", "Int1", "Int2", "Int3", "Int4", "Int1x1", "Int1x2", 
  "Int1x3", "Int1x4", "Int2x1", "Int2x2", "Int2x3", "Int2x4", "Int3x1", 
  "Int3x2", "Int3x3", "Int3x4", "Int4x1", "Int4x2", "Int4x3", "Int4x4", 
  "Interface", "Line_", "LineAdj", "Linear", "LineStream", "Long", "Matrix", 
  "Nointerpolation", "Noperspective", "Option", "Out", "OutputPatch", "Override", 
  "Partial", "Packoffset", "Point", "PointStream", "Precise", "RasterizerOrderedBuffer", 
  "RasterizerOrderedByteAddressBuffer", "RasterizerOrderedStructuredBuffer", 
  "RasterizerOrderedTexture1D", "RasterizerOrderedTexture1DArray", "RasterizerOrderedTexture2D", 
  "RasterizerOrderedTexture2DArray", "RasterizerOrderedTexture3D", "RayDesc", 
  "RaytracingAccelerationStructure", "Register", "Return", "RowMajor", "RWBuffer", 
  "RWByteAddressBuffer", "RWStructuredBuffer", "RWTexture1D", "RWTexture1DArray", 
  "RWTexture2D", "RWTexture2DArray", "RWTexture3D", "Sample", "Sampler", 
  "SamplerCapitalS", "SamplerComparisonState", "SamplerStateCamel", "SamplerState", 
  "Shared", "SNorm", "Static", "Struct", "StructuredBuffer", "SubpassInput", 
  "SubpassInputMS", "Switch", "TBuffer", "Texture1D", "Texture1DArray", 
  "Texture2D", "Texture2DArray", "Texture2DMS", "Texture2DMSArray", "Texture3D", 
  "TextureCube", "TextureCubeArray", "Triangle", "TriangleAdj", "TriangleStream", 
  "Uniform", "Uint", "Uint1", "Uint2", "Uint3", "Uint4", "Uint1x1", "Uint1x2", 
  "Uint1x3", "Uint1x4", "Uint2x1", "Uint2x2", "Uint2x3", "Uint2x4", "Uint3x1", 
  "Uint3x2", "Uint3x3", "Uint3x4", "Uint4x1", "Uint4x2", "Uint4x3", "Uint4x4", 
  "Uint16_t", "Uint32_t", "Uint64_t", "UNorm", "Unsigned", "Dword", "Dword1", 
  "Dword2", "Dword3", "Dword4", "Dword1x1", "Dword1x2", "Dword1x3", "Dword1x4", 
  "Dword2x1", "Dword2x2", "Dword2x3", "Dword2x4", "Dword3x1", "Dword3x2", 
  "Dword3x3", "Dword3x4", "Dword4x1", "Dword4x2", "Dword4x3", "Dword4x4", 
  "Vector", "Volatile", "Void", "While", "StateObjectConfig", "LocalRootSignature", 
  "GlobalRootSignature", "SubobjectToExportsAssociation", "RaytracingShaderConfig", 
  "RaytracingPipelineConfig", "RaytracingPipelineConfig1", "TriangleHitGroup", 
  "ProceduralPrimitiveHitGroup", "ADDRESS_U", "ADDRESS_V", "ADDRESS_W", 
  "BORDER_COLOR", "MIN_FILTER", "MAG_FILTER", "MIP_FILTER", "MAX_ANISOTROPY", 
  "MAX_LOD", "MIN_LOD", "MIP_LOD_BIAS", "COMPARISON_FUNC", "REDUCTION_TYPE", 
  "FILTER_MODE_POINT", "FILTER_MODE_LINEAR", "REDUCTION_TYPE_FILTER", "REDUCTION_TYPE_COMPARISON", 
  "REDUCTION_TYPE_MINIMUM", "REDUCTION_TYPE_MAXIMUM", "ADDRESS_MODE_WRAP", 
  "ADDRESS_MODE_MIRROR", "ADDRESS_MODE_CLAMP", "ADDRESS_MODE_BORDER", "ADDRESS_MODE_MIRROR_ONCE", 
  "COMPARISON_FUNCTION_NEVER", "COMPARISON_FUNCTION_LESS", "COMPARISON_FUNCTION_EQUAL", 
  "COMPARISON_FUNCTION_LESS_EQUAL", "COMPARISON_FUNCTION_GREATER", "COMPARISON_FUNCTION_NOT_EQUAL", 
  "COMPARISON_FUNCTION_GREATER_EQUAL", "COMPARISON_FUNCTION_ALWAYS", "BORDER_COLOR_OPAQUE_BLACK", 
  "BORDER_COLOR_TRANSPARENT_BLACK", "BORDER_COLOR_OPAQUE_WHITE", "LeftParen", 
  "RightParen", "LeftBracket", "RightBracket", "LeftBrace", "RightBrace", 
  "LeftDoubleBracket", "Less", "LessEqual", "Greater", "GreaterEqual", "LeftShift", 
  "RightShift", "Plus", "PlusPlus", "Minus", "MinusMinus", "Star", "Div", 
  "Mod", "And", "Or", "AndAnd", "OrOr", "Caret", "Not", "Tilde", "Question", 
  "Colon", "ColonColon", "Semi", "Comma", "Assign", "StarAssign", "DivAssign", 
  "ModAssign", "PlusAssign", "MinusAssign", "LeftShiftAssign", "RightShiftAssign", 
  "AndAssign", "XorAssign", "OrAssign", "Equal", "NotEqual", "Dot", "True", 
  "False", "KW_AssociatedType", "KW_TypeAlias", "KW_Typedef", "KW_Fundamental", 
  "KW_Typeof", "FrequencyId", "ShaderVariantFallback", "ShaderResourceGroupSemantic", 
  "ShaderResourceGroup", "KW_ext_print_message", "KW_ext_print_symbol", 
  "KW_ext_prtsym_fully_qualified", "KW_ext_prtsym_least_qualified", "KW_ext_prtsym_constint_value", 
  "HLSLSemanticStream", "HLSLSemanticSystem", "Identifier", "IntegerLiteral", 
  "FloatLiteral", "StringLiteral", "PragmaDirective", "LineDirective", "Whitespace", 
  "Newline", "BlockComment", "LineComment"
};

dfa::Vocabulary azslParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> azslParser::_tokenNames;

azslParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x17c, 0x4f7, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
       0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 
       0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 
       0x9, 0x35, 0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 
       0x9, 0x38, 0x4, 0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 
       0x9, 0x3b, 0x4, 0x3c, 0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 
       0x9, 0x3e, 0x4, 0x3f, 0x9, 0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 
       0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 
       0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 0x46, 0x9, 0x46, 0x4, 0x47, 
       0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 0x9, 0x49, 0x4, 0x4a, 
       0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 0x4c, 0x4, 0x4d, 
       0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 0x4, 0x50, 
       0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 0x53, 
       0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
       0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 
       0x9, 0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 
       0x9, 0x5c, 0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 
       0x9, 0x5f, 0x4, 0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 
       0x9, 0x62, 0x4, 0x63, 0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 
       0x9, 0x65, 0x4, 0x66, 0x9, 0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 
       0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 
       0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 0x6d, 0x9, 0x6d, 0x4, 0x6e, 
       0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 0x9, 0x70, 0x4, 0x71, 
       0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 0x73, 0x4, 0x74, 
       0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 0x4, 0x77, 
       0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 0x7a, 
       0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 
       0x9, 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 
       0x9, 0x80, 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 
       0x9, 0x83, 0x4, 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 
       0x9, 0x86, 0x4, 0x87, 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 
       0x9, 0x89, 0x4, 0x8a, 0x9, 0x8a, 0x3, 0x2, 0x7, 0x2, 0x116, 0xa, 
       0x2, 0xc, 0x2, 0xe, 0x2, 0x119, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x127, 0xa, 0x3, 0x3, 0x4, 
       0x3, 0x4, 0x5, 0x4, 0x12b, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x5, 0x7, 0x133, 0xa, 0x7, 0x3, 0x7, 
       0x3, 0x7, 0x7, 0x7, 0x137, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x13a, 0xb, 
       0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
       0x5, 0x9, 0x142, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x146, 0xa, 
       0x9, 0xc, 0x9, 0xe, 0x9, 0x149, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
       0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x151, 0xa, 0xa, 0xc, 
       0xa, 0xe, 0xa, 0x154, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
       0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x15c, 0xa, 0xb, 0x3, 0xc, 0x3, 
       0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 
       0x165, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x168, 0xb, 0xd, 0x3, 0xd, 0x3, 
       0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
       0x5, 0xe, 0x172, 0xa, 0xe, 0x3, 0xf, 0x7, 0xf, 0x175, 0xa, 0xf, 0xc, 
       0xf, 0xe, 0xf, 0x178, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
       0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x5, 0x11, 0x184, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 
       0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x18b, 0xa, 0x12, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x7, 0x13, 0x190, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 
       0x193, 0xb, 0x13, 0x3, 0x13, 0x5, 0x13, 0x196, 0xa, 0x13, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x19b, 0xa, 0x14, 0x3, 0x15, 0x3, 
       0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x1a1, 0xa, 0x15, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
       0x7, 0x17, 0x1aa, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x1ad, 0xb, 0x17, 
       0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 
       0x1b4, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
       0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
       0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x1c2, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 
       0x1c5, 0xb, 0x1b, 0x5, 0x1b, 0x1c7, 0xa, 0x1b, 0x3, 0x1c, 0x7, 0x1c, 
       0x1ca, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x1cd, 0xb, 0x1c, 0x3, 0x1c, 
       0x3, 0x1c, 0x5, 0x1c, 0x1d1, 0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
       0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 
       0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x1dd, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 
       0x1e0, 0xb, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
       0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x1ea, 0xa, 0x21, 
       0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x1ee, 0xa, 0x21, 0x3, 0x21, 0x3, 
       0x21, 0x5, 0x21, 0x1f2, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 
       0x1f6, 0xa, 0x21, 0x5, 0x21, 0x1f8, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 
       0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
       0x7, 0x23, 0x202, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x205, 0xb, 0x23, 
       0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 
       0x20c, 0xa, 0x24, 0x3, 0x25, 0x3, 0x25, 0x7, 0x25, 0x210, 0xa, 0x25, 
       0xc, 0x25, 0xe, 0x25, 0x213, 0xb, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 
       0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x21a, 0xa, 0x26, 0x3, 0x27, 
       0x3, 0x27, 0x5, 0x27, 0x21e, 0xa, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 
       0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x226, 0xa, 0x28, 
       0x3, 0x29, 0x6, 0x29, 0x229, 0xa, 0x29, 0xd, 0x29, 0xe, 0x29, 0x22a, 
       0x3, 0x29, 0x6, 0x29, 0x22e, 0xa, 0x29, 0xd, 0x29, 0xe, 0x29, 0x22f, 
       0x3, 0x2a, 0x3, 0x2a, 0x7, 0x2a, 0x234, 0xa, 0x2a, 0xc, 0x2a, 0xe, 
       0x2a, 0x237, 0xb, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 
       0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x7, 0x2b, 0x241, 0xa, 
       0x2b, 0xc, 0x2b, 0xe, 0x2b, 0x244, 0xb, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
       0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x24c, 0xa, 
       0x2b, 0x3, 0x2b, 0x7, 0x2b, 0x24f, 0xa, 0x2b, 0xc, 0x2b, 0xe, 0x2b, 
       0x252, 0xb, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 
       0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x7, 0x2b, 0x25b, 0xa, 0x2b, 0xc, 0x2b, 
       0xe, 0x2b, 0x25e, 0xb, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 
       0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x7, 0x2b, 0x267, 0xa, 0x2b, 
       0xc, 0x2b, 0xe, 0x2b, 0x26a, 0xb, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 
       0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 
       0x2b, 0x7, 0x2b, 0x275, 0xa, 0x2b, 0xc, 0x2b, 0xe, 0x2b, 0x278, 0xb, 
       0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x27d, 0xa, 0x2b, 
       0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x281, 0xa, 0x2b, 0x3, 0x2b, 0x3, 
       0x2b, 0x5, 0x2b, 0x285, 0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
       0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
       0x3, 0x2b, 0x5, 0x2b, 0x291, 0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 
       0x2b, 0x5, 0x2b, 0x296, 0xa, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
       0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
       0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
       0x3, 0x2d, 0x7, 0x2d, 0x2a8, 0xa, 0x2d, 0xc, 0x2d, 0xe, 0x2d, 0x2ab, 
       0xb, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
       0x3, 0x2d, 0x5, 0x2d, 0x2b3, 0xa, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
       0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
       0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
       0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
       0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x7, 
       0x2d, 0x2cf, 0xa, 0x2d, 0xc, 0x2d, 0xe, 0x2d, 0x2d2, 0xb, 0x2d, 0x3, 
       0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x7, 
       0x2e, 0x2da, 0xa, 0x2e, 0xc, 0x2e, 0xe, 0x2e, 0x2dd, 0xb, 0x2e, 0x3, 
       0x2f, 0x3, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 
       0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 0x2e9, 0xa, 0x33, 
       0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x7, 0x34, 
       0x2f0, 0xa, 0x34, 0xc, 0x34, 0xe, 0x34, 0x2f3, 0xb, 0x34, 0x3, 0x35, 
       0x7, 0x35, 0x2f6, 0xa, 0x35, 0xc, 0x35, 0xe, 0x35, 0x2f9, 0xb, 0x35, 
       0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 
       0x7, 0x36, 0x301, 0xa, 0x36, 0xc, 0x36, 0xe, 0x36, 0x304, 0xb, 0x36, 
       0x3, 0x37, 0x7, 0x37, 0x307, 0xa, 0x37, 0xc, 0x37, 0xe, 0x37, 0x30a, 
       0xb, 0x37, 0x3, 0x37, 0x5, 0x37, 0x30d, 0xa, 0x37, 0x3, 0x37, 0x5, 
       0x37, 0x310, 0xa, 0x37, 0x3, 0x37, 0x5, 0x37, 0x313, 0xa, 0x37, 0x3, 
       0x37, 0x5, 0x37, 0x316, 0xa, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 
       0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x31e, 0xa, 0x39, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x325, 
       0xa, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x7, 0x3b, 0x32a, 0xa, 
       0x3b, 0xc, 0x3b, 0xe, 0x3b, 0x32d, 0xb, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 
       0x330, 0xa, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x334, 0xa, 0x3c, 
       0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 
       0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 0x33e, 0xa, 0x3d, 0x3, 0x3d, 0x3, 
       0x3d, 0x3, 0x3e, 0x7, 0x3e, 0x343, 0xa, 0x3e, 0xc, 0x3e, 0xe, 0x3e, 
       0x346, 0xb, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 
       0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 0x34f, 0xa, 0x40, 0x3, 0x41, 
       0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
       0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
       0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 
       0x363, 0xa, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 
       0x44, 0x3, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 
       0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x48, 0x3, 
       0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 
       0x49, 0x3, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 
       0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4d, 0x3, 
       0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
       0x4f, 0x3, 0x4f, 0x3, 0x50, 0x3, 0x50, 0x3, 0x51, 0x3, 0x51, 0x3, 
       0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x53, 0x3, 
       0x53, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x5, 
       0x54, 0x39f, 0xa, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x55, 0x3, 0x55, 
       0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 
       0x3, 0x56, 0x3, 0x57, 0x3, 0x57, 0x5, 0x57, 0x3ae, 0xa, 0x57, 0x3, 
       0x58, 0x3, 0x58, 0x3, 0x58, 0x5, 0x58, 0x3b3, 0xa, 0x58, 0x3, 0x59, 
       0x3, 0x59, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 
       0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 
       0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5c, 0x3, 0x5c, 
       0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 
       0x3, 0x5d, 0x3, 0x5d, 0x6, 0x5d, 0x3d0, 0xa, 0x5d, 0xd, 0x5d, 0xe, 
       0x5d, 0x3d1, 0x5, 0x5d, 0x3d4, 0xa, 0x5d, 0x3, 0x5e, 0x3, 0x5e, 0x3, 
       0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x3da, 0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 
       0x5, 0x5e, 0x3de, 0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x3e2, 
       0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x3e6, 0xa, 0x5e, 0x3, 
       0x5e, 0x5, 0x5e, 0x3e9, 0xa, 0x5e, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 
       0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x61, 0x3, 0x61, 0x5, 0x61, 
       0x3f3, 0xa, 0x61, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x5, 0x62, 0x3f8, 
       0xa, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 
       0x3, 0x63, 0x3, 0x63, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 
       0x3, 0x64, 0x3, 0x64, 0x3, 0x65, 0x3, 0x65, 0x5, 0x65, 0x409, 0xa, 
       0x65, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x5, 0x66, 0x40f, 
       0xa, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x5, 0x66, 0x414, 0xa, 
       0x66, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x7, 0x67, 0x41a, 
       0xa, 0x67, 0xc, 0x67, 0xe, 0x67, 0x41d, 0xb, 0x67, 0x3, 0x67, 0x3, 
       0x67, 0x3, 0x68, 0x3, 0x68, 0x5, 0x68, 0x423, 0xa, 0x68, 0x3, 0x69, 
       0x3, 0x69, 0x3, 0x69, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6b, 0x3, 0x6b, 
       0x3, 0x6c, 0x7, 0x6c, 0x42d, 0xa, 0x6c, 0xc, 0x6c, 0xe, 0x6c, 0x430, 
       0xb, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6e, 
       0x7, 0x6e, 0x437, 0xa, 0x6e, 0xc, 0x6e, 0xe, 0x6e, 0x43a, 0xb, 0x6e, 
       0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 
       0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x5, 0x6f, 
       0x447, 0xa, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 
       0x6f, 0x5, 0x6f, 0x44e, 0xa, 0x6f, 0x3, 0x70, 0x5, 0x70, 0x451, 0xa, 
       0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x5, 0x70, 0x457, 
       0xa, 0x70, 0x3, 0x70, 0x3, 0x70, 0x7, 0x70, 0x45b, 0xa, 0x70, 0xc, 
       0x70, 0xe, 0x70, 0x45e, 0xb, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x71, 
       0x7, 0x71, 0x463, 0xa, 0x71, 0xc, 0x71, 0xe, 0x71, 0x466, 0xb, 0x71, 
       0x3, 0x71, 0x3, 0x71, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 
       0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x5, 0x72, 0x471, 0xa, 0x72, 0x3, 
       0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x74, 0x7, 0x74, 0x478, 
       0xa, 0x74, 0xc, 0x74, 0xe, 0x74, 0x47b, 0xb, 0x74, 0x3, 0x74, 0x3, 
       0x74, 0x3, 0x75, 0x3, 0x75, 0x7, 0x75, 0x481, 0xa, 0x75, 0xc, 0x75, 
       0xe, 0x75, 0x484, 0xb, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x76, 0x3, 
       0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 
       0x76, 0x3, 0x76, 0x3, 0x76, 0x5, 0x76, 0x492, 0xa, 0x76, 0x3, 0x77, 
       0x3, 0x77, 0x7, 0x77, 0x496, 0xa, 0x77, 0xc, 0x77, 0xe, 0x77, 0x499, 
       0xb, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 
       0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 
       0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x5, 0x78, 0x4aa, 0xa, 
       0x78, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 
       0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7b, 0x3, 
       0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7c, 0x3, 0x7c, 0x3, 
       0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 
       0x7d, 0x3, 0x7d, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 
       0x7e, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 
       0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x81, 0x3, 
       0x81, 0x3, 0x81, 0x3, 0x81, 0x3, 0x81, 0x3, 0x82, 0x3, 0x82, 0x3, 
       0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 
       0x83, 0x3, 0x83, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 
       0x84, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 
       0x86, 0x3, 0x86, 0x3, 0x87, 0x3, 0x87, 0x3, 0x88, 0x3, 0x88, 0x3, 
       0x89, 0x3, 0x89, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x344, 0x4, 
       0x58, 0x5a, 0x8b, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
       0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
       0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 
       0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 
       0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 
       0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 
       0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 
       0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 
       0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 0xc2, 
       0xc4, 0xc6, 0xc8, 0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 0xd8, 
       0xda, 0xdc, 0xde, 0xe0, 0xe2, 0xe4, 0xe6, 0xe8, 0xea, 0xec, 0xee, 
       0xf0, 0xf2, 0xf4, 0xf6, 0xf8, 0xfa, 0xfc, 0xfe, 0x100, 0x102, 0x104, 
       0x106, 0x108, 0x10a, 0x10c, 0x10e, 0x110, 0x112, 0x2, 0x1d, 0x4, 
       0x2, 0x22, 0x22, 0xc1, 0xc1, 0x3, 0x2, 0x20, 0x21, 0x3, 0x2, 0x171, 
       0x173, 0x4, 0x2, 0x141, 0x141, 0x143, 0x143, 0x4, 0x2, 0x140, 0x143, 
       0x14c, 0x14d, 0x6, 0x2, 0x13a, 0x140, 0x142, 0x142, 0x144, 0x14b, 
       0x15e, 0x15f, 0x3, 0x2, 0x153, 0x15d, 0x13, 0x2, 0x1f, 0x1f, 0x23, 
       0x24, 0x42, 0x42, 0x5b, 0x5c, 0x74, 0x77, 0x92, 0x94, 0x98, 0x9b, 
       0xa0, 0xa0, 0xa2, 0xa2, 0xaf, 0xaf, 0xb8, 0xb8, 0xbe, 0xc0, 0xd0, 
       0xd1, 0xd3, 0xd3, 0xec, 0xed, 0x104, 0x104, 0x173, 0x173, 0x3, 0x2, 
       0x107, 0x10f, 0x4, 0x2, 0x1a, 0x1a, 0xab, 0xab, 0x5, 0x2, 0x19, 0x19, 
       0xa3, 0xa3, 0xb0, 0xb0, 0x5, 0x2, 0x1b, 0x1b, 0xa4, 0xa4, 0xb1, 0xb1, 
       0x4, 0x2, 0x78, 0x78, 0x9c, 0x9c, 0x3, 0x2, 0xb9, 0xbd, 0xa, 0x2, 
       0x4, 0x4, 0x2a, 0x2a, 0x45, 0x45, 0x5e, 0x5e, 0x79, 0x7c, 0xd4, 0xd4, 
       0xe9, 0xeb, 0xee, 0xee, 0x5, 0x2, 0x95, 0x95, 0xa1, 0xa1, 0xd2, 0xd2, 
       0x7, 0x2, 0x3, 0x3, 0x25, 0x25, 0xa5, 0xa5, 0xb2, 0xb2, 0xc2, 0xc2, 
       0x7, 0x2, 0xa6, 0xaa, 0xb3, 0xb7, 0xc3, 0xc4, 0xc7, 0xca, 0xcd, 0xcf, 
       0x3, 0x2, 0xcb, 0xcc, 0xa, 0x2, 0x5, 0x8, 0x2b, 0x2e, 0x46, 0x49, 
       0x5f, 0x62, 0x7d, 0x80, 0xd5, 0xd8, 0xef, 0xf2, 0x103, 0x103, 0xa, 
       0x2, 0x9, 0x18, 0x2f, 0x3e, 0x4a, 0x59, 0x63, 0x72, 0x81, 0x90, 0x97, 
       0x97, 0xd9, 0xe8, 0xf3, 0x102, 0x3, 0x2, 0x16e, 0x170, 0x3, 0x2, 
       0x11d, 0x11e, 0x3, 0x2, 0x11f, 0x122, 0x3, 0x2, 0x123, 0x127, 0x3, 
       0x2, 0x128, 0x12f, 0x3, 0x2, 0x130, 0x132, 0x2, 0x524, 0x2, 0x117, 
       0x3, 0x2, 0x2, 0x2, 0x4, 0x126, 0x3, 0x2, 0x2, 0x2, 0x6, 0x12a, 0x3, 
       0x2, 0x2, 0x2, 0x8, 0x12c, 0x3, 0x2, 0x2, 0x2, 0xa, 0x12e, 0x3, 0x2, 
       0x2, 0x2, 0xc, 0x132, 0x3, 0x2, 0x2, 0x2, 0xe, 0x13b, 0x3, 0x2, 0x2, 
       0x2, 0x10, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x12, 0x14c, 0x3, 0x2, 0x2, 
       0x2, 0x14, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x16, 0x15d, 0x3, 0x2, 0x2, 
       0x2, 0x18, 0x160, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x171, 0x3, 0x2, 0x2, 
       0x2, 0x1c, 0x176, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x17c, 0x3, 0x2, 0x2, 
       0x2, 0x20, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x22, 0x18a, 0x3, 0x2, 0x2, 
       0x2, 0x24, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x26, 0x197, 0x3, 0x2, 0x2, 
       0x2, 0x28, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x1a2, 0x3, 0x2, 0x2, 
       0x2, 0x2c, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x1b3, 0x3, 0x2, 0x2, 
       0x2, 0x30, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x32, 0x1ba, 0x3, 0x2, 0x2, 
       0x2, 0x34, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x36, 0x1cb, 0x3, 0x2, 0x2, 
       0x2, 0x38, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x1d7, 0x3, 0x2, 0x2, 
       0x2, 0x3c, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x1e1, 0x3, 0x2, 0x2, 
       0x2, 0x40, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x42, 0x1f9, 0x3, 0x2, 0x2, 
       0x2, 0x44, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x46, 0x20b, 0x3, 0x2, 0x2, 
       0x2, 0x48, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x219, 0x3, 0x2, 0x2, 
       0x2, 0x4c, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x225, 0x3, 0x2, 0x2, 
       0x2, 0x50, 0x228, 0x3, 0x2, 0x2, 0x2, 0x52, 0x231, 0x3, 0x2, 0x2, 
       0x2, 0x54, 0x295, 0x3, 0x2, 0x2, 0x2, 0x56, 0x297, 0x3, 0x2, 0x2, 
       0x2, 0x58, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x2d3, 0x3, 0x2, 0x2, 
       0x2, 0x5c, 0x2de, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x2e0, 0x3, 0x2, 0x2, 
       0x2, 0x60, 0x2e2, 0x3, 0x2, 0x2, 0x2, 0x62, 0x2e4, 0x3, 0x2, 0x2, 
       0x2, 0x64, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x66, 0x2ec, 0x3, 0x2, 0x2, 
       0x2, 0x68, 0x2f7, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x2fd, 0x3, 0x2, 0x2, 
       0x2, 0x6c, 0x308, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x317, 0x3, 0x2, 0x2, 
       0x2, 0x70, 0x31d, 0x3, 0x2, 0x2, 0x2, 0x72, 0x324, 0x3, 0x2, 0x2, 
       0x2, 0x74, 0x326, 0x3, 0x2, 0x2, 0x2, 0x76, 0x331, 0x3, 0x2, 0x2, 
       0x2, 0x78, 0x337, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x344, 0x3, 0x2, 0x2, 
       0x2, 0x7c, 0x347, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x349, 0x3, 0x2, 0x2, 
       0x2, 0x80, 0x362, 0x3, 0x2, 0x2, 0x2, 0x82, 0x364, 0x3, 0x2, 0x2, 
       0x2, 0x84, 0x366, 0x3, 0x2, 0x2, 0x2, 0x86, 0x368, 0x3, 0x2, 0x2, 
       0x2, 0x88, 0x36a, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x36f, 0x3, 0x2, 0x2, 
       0x2, 0x8c, 0x371, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x373, 0x3, 0x2, 0x2, 
       0x2, 0x90, 0x37a, 0x3, 0x2, 0x2, 0x2, 0x92, 0x37c, 0x3, 0x2, 0x2, 
       0x2, 0x94, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x96, 0x380, 0x3, 0x2, 0x2, 
       0x2, 0x98, 0x385, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x387, 0x3, 0x2, 0x2, 
       0x2, 0x9c, 0x38c, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x38e, 0x3, 0x2, 0x2, 
       0x2, 0xa0, 0x390, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x392, 0x3, 0x2, 0x2, 
       0x2, 0xa4, 0x397, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x399, 0x3, 0x2, 0x2, 
       0x2, 0xa8, 0x3a2, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x3a4, 0x3, 0x2, 0x2, 
       0x2, 0xac, 0x3ad, 0x3, 0x2, 0x2, 0x2, 0xae, 0x3b2, 0x3, 0x2, 0x2, 
       0x2, 0xb0, 0x3b4, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x3b6, 0x3, 0x2, 0x2, 
       0x2, 0xb4, 0x3bf, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x3c5, 0x3, 0x2, 0x2, 
       0x2, 0xb8, 0x3d3, 0x3, 0x2, 0x2, 0x2, 0xba, 0x3d5, 0x3, 0x2, 0x2, 
       0x2, 0xbc, 0x3ea, 0x3, 0x2, 0x2, 0x2, 0xbe, 0x3ed, 0x3, 0x2, 0x2, 
       0x2, 0xc0, 0x3f2, 0x3, 0x2, 0x2, 0x2, 0xc2, 0x3f4, 0x3, 0x2, 0x2, 
       0x2, 0xc4, 0x3fb, 0x3, 0x2, 0x2, 0x2, 0xc6, 0x400, 0x3, 0x2, 0x2, 
       0x2, 0xc8, 0x408, 0x3, 0x2, 0x2, 0x2, 0xca, 0x40a, 0x3, 0x2, 0x2, 
       0x2, 0xcc, 0x415, 0x3, 0x2, 0x2, 0x2, 0xce, 0x420, 0x3, 0x2, 0x2, 
       0x2, 0xd0, 0x424, 0x3, 0x2, 0x2, 0x2, 0xd2, 0x427, 0x3, 0x2, 0x2, 
       0x2, 0xd4, 0x429, 0x3, 0x2, 0x2, 0x2, 0xd6, 0x42e, 0x3, 0x2, 0x2, 
       0x2, 0xd8, 0x433, 0x3, 0x2, 0x2, 0x2, 0xda, 0x438, 0x3, 0x2, 0x2, 
       0x2, 0xdc, 0x44d, 0x3, 0x2, 0x2, 0x2, 0xde, 0x450, 0x3, 0x2, 0x2, 
       0x2, 0xe0, 0x464, 0x3, 0x2, 0x2, 0x2, 0xe2, 0x470, 0x3, 0x2, 0x2, 
       0x2, 0xe4, 0x472, 0x3, 0x2, 0x2, 0x2, 0xe6, 0x479, 0x3, 0x2, 0x2, 
       0x2, 0xe8, 0x47e, 0x3, 0x2, 0x2, 0x2, 0xea, 0x491, 0x3, 0x2, 0x2, 
       0x2, 0xec, 0x493, 0x3, 0x2, 0x2, 0x2, 0xee, 0x4a9, 0x3, 0x2, 0x2, 
       0x2, 0xf0, 0x4ab, 0x3, 0x2, 0x2, 0x2, 0xf2, 0x4b0, 0x3, 0x2, 0x2, 
       0x2, 0xf4, 0x4b5, 0x3, 0x2, 0x2, 0x2, 0xf6, 0x4ba, 0x3, 0x2, 0x2, 
       0x2, 0xf8, 0x4bf, 0x3, 0x2, 0x2, 0x2, 0xfa, 0x4c4, 0x3, 0x2, 0x2, 
       0x2, 0xfc, 0x4c9, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x4ce, 0x3, 0x2, 0x2, 
       0x2, 0x100, 0x4d3, 0x3, 0x2, 0x2, 0x2, 0x102, 0x4d8, 0x3, 0x2, 0x2, 
       0x2, 0x104, 0x4dd, 0x3, 0x2, 0x2, 0x2, 0x106, 0x4e2, 0x3, 0x2, 0x2, 
       0x2, 0x108, 0x4e7, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x4ec, 0x3, 0x2, 0x2, 
       0x2, 0x10c, 0x4ee, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x4f0, 0x3, 0x2, 0x2, 
       0x2, 0x110, 0x4f2, 0x3, 0x2, 0x2, 0x2, 0x112, 0x4f4, 0x3, 0x2, 0x2, 
       0x2, 0x114, 0x116, 0x5, 0x4, 0x3, 0x2, 0x115, 0x114, 0x3, 0x2, 0x2, 
       0x2, 0x116, 0x119, 0x3, 0x2, 0x2, 0x2, 0x117, 0x115, 0x3, 0x2, 0x2, 
       0x2, 0x117, 0x118, 0x3, 0x2, 0x2, 0x2, 0x118, 0x11a, 0x3, 0x2, 0x2, 
       0x2, 0x119, 0x117, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 0x7, 0x2, 0x2, 
       0x3, 0x11b, 0x3, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x127, 0x5, 0x1c, 0xf, 
       0x2, 0x11d, 0x127, 0x5, 0x32, 0x1a, 0x2, 0x11e, 0x127, 0x5, 0xda, 
       0x6e, 0x2, 0x11f, 0x127, 0x5, 0xd6, 0x6c, 0x2, 0x120, 0x127, 0x5, 
       0x44, 0x23, 0x2, 0x121, 0x127, 0x5, 0xdc, 0x6f, 0x2, 0x122, 0x127, 
       0x5, 0xc8, 0x65, 0x2, 0x123, 0x127, 0x5, 0xe0, 0x71, 0x2, 0x124, 
       0x127, 0x5, 0xe6, 0x74, 0x2, 0x125, 0x127, 0x7, 0x151, 0x2, 0x2, 
       0x126, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x126, 0x11d, 0x3, 0x2, 0x2, 0x2, 
       0x126, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x126, 0x11f, 0x3, 0x2, 0x2, 0x2, 
       0x126, 0x120, 0x3, 0x2, 0x2, 0x2, 0x126, 0x121, 0x3, 0x2, 0x2, 0x2, 
       0x126, 0x122, 0x3, 0x2, 0x2, 0x2, 0x126, 0x123, 0x3, 0x2, 0x2, 0x2, 
       0x126, 0x124, 0x3, 0x2, 0x2, 0x2, 0x126, 0x125, 0x3, 0x2, 0x2, 0x2, 
       0x127, 0x5, 0x3, 0x2, 0x2, 0x2, 0x128, 0x12b, 0x5, 0x8, 0x5, 0x2, 
       0x129, 0x12b, 0x5, 0xa, 0x6, 0x2, 0x12a, 0x128, 0x3, 0x2, 0x2, 0x2, 
       0x12a, 0x129, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x7, 0x3, 0x2, 0x2, 0x2, 
       0x12c, 0x12d, 0x7, 0x173, 0x2, 0x2, 0x12d, 0x9, 0x3, 0x2, 0x2, 0x2, 
       0x12e, 0x12f, 0x5, 0xc, 0x7, 0x2, 0x12f, 0x130, 0x5, 0x8, 0x5, 0x2, 
       0x130, 0xb, 0x3, 0x2, 0x2, 0x2, 0x131, 0x133, 0x7, 0x150, 0x2, 0x2, 
       0x132, 0x131, 0x3, 0x2, 0x2, 0x2, 0x132, 0x133, 0x3, 0x2, 0x2, 0x2, 
       0x133, 0x138, 0x3, 0x2, 0x2, 0x2, 0x134, 0x135, 0x7, 0x173, 0x2, 
       0x2, 0x135, 0x137, 0x7, 0x150, 0x2, 0x2, 0x136, 0x134, 0x3, 0x2, 
       0x2, 0x2, 0x137, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x138, 0x136, 0x3, 0x2, 
       0x2, 0x2, 0x138, 0x139, 0x3, 0x2, 0x2, 0x2, 0x139, 0xd, 0x3, 0x2, 
       0x2, 0x2, 0x13a, 0x138, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 0x5, 0x10, 
       0x9, 0x2, 0x13c, 0x13d, 0x7, 0x151, 0x2, 0x2, 0x13d, 0xf, 0x3, 0x2, 
       0x2, 0x2, 0x13e, 0x13f, 0x7, 0x22, 0x2, 0x2, 0x13f, 0x141, 0x7, 0x173, 
       0x2, 0x2, 0x140, 0x142, 0x5, 0x12, 0xa, 0x2, 0x141, 0x140, 0x3, 0x2, 
       0x2, 0x2, 0x141, 0x142, 0x3, 0x2, 0x2, 0x2, 0x142, 0x143, 0x3, 0x2, 
       0x2, 0x2, 0x143, 0x147, 0x7, 0x137, 0x2, 0x2, 0x144, 0x146, 0x5, 
       0x14, 0xb, 0x2, 0x145, 0x144, 0x3, 0x2, 0x2, 0x2, 0x146, 0x149, 0x3, 
       0x2, 0x2, 0x2, 0x147, 0x145, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x3, 
       0x2, 0x2, 0x2, 0x148, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x149, 0x147, 0x3, 
       0x2, 0x2, 0x2, 0x14a, 0x14b, 0x7, 0x138, 0x2, 0x2, 0x14b, 0x11, 0x3, 
       0x2, 0x2, 0x2, 0x14c, 0x14d, 0x7, 0x14f, 0x2, 0x2, 0x14d, 0x152, 
       0x5, 0x6, 0x4, 0x2, 0x14e, 0x14f, 0x7, 0x152, 0x2, 0x2, 0x14f, 0x151, 
       0x5, 0x6, 0x4, 0x2, 0x150, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x151, 0x154, 
       0x3, 0x2, 0x2, 0x2, 0x152, 0x150, 0x3, 0x2, 0x2, 0x2, 0x152, 0x153, 
       0x3, 0x2, 0x2, 0x2, 0x153, 0x13, 0x3, 0x2, 0x2, 0x2, 0x154, 0x152, 
       0x3, 0x2, 0x2, 0x2, 0x155, 0x15c, 0x5, 0x32, 0x1a, 0x2, 0x156, 0x15c, 
       0x5, 0xda, 0x6e, 0x2, 0x157, 0x15c, 0x5, 0xd6, 0x6c, 0x2, 0x158, 
       0x15c, 0x5, 0xc8, 0x65, 0x2, 0x159, 0x15c, 0x5, 0x1c, 0xf, 0x2, 0x15a, 
       0x15c, 0x5, 0x46, 0x24, 0x2, 0x15b, 0x155, 0x3, 0x2, 0x2, 0x2, 0x15b, 
       0x156, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x157, 0x3, 0x2, 0x2, 0x2, 0x15b, 
       0x158, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x159, 0x3, 0x2, 0x2, 0x2, 0x15b, 
       0x15a, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15, 0x3, 0x2, 0x2, 0x2, 0x15d, 
       0x15e, 0x5, 0x18, 0xd, 0x2, 0x15e, 0x15f, 0x7, 0x151, 0x2, 0x2, 0x15f, 
       0x17, 0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 0x7, 0xc1, 0x2, 0x2, 0x161, 
       0x162, 0x7, 0x173, 0x2, 0x2, 0x162, 0x166, 0x7, 0x137, 0x2, 0x2, 
       0x163, 0x165, 0x5, 0x1a, 0xe, 0x2, 0x164, 0x163, 0x3, 0x2, 0x2, 0x2, 
       0x165, 0x168, 0x3, 0x2, 0x2, 0x2, 0x166, 0x164, 0x3, 0x2, 0x2, 0x2, 
       0x166, 0x167, 0x3, 0x2, 0x2, 0x2, 0x167, 0x169, 0x3, 0x2, 0x2, 0x2, 
       0x168, 0x166, 0x3, 0x2, 0x2, 0x2, 0x169, 0x16a, 0x7, 0x138, 0x2, 
       0x2, 0x16a, 0x19, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x172, 0x5, 0x32, 0x1a, 
       0x2, 0x16c, 0x172, 0x5, 0xda, 0x6e, 0x2, 0x16d, 0x172, 0x5, 0xd6, 
       0x6c, 0x2, 0x16e, 0x172, 0x5, 0x1c, 0xf, 0x2, 0x16f, 0x172, 0x5, 
       0xc8, 0x65, 0x2, 0x170, 0x172, 0x5, 0x46, 0x24, 0x2, 0x171, 0x16b, 
       0x3, 0x2, 0x2, 0x2, 0x171, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x171, 0x16d, 
       0x3, 0x2, 0x2, 0x2, 0x171, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x171, 0x16f, 
       0x3, 0x2, 0x2, 0x2, 0x171, 0x170, 0x3, 0x2, 0x2, 0x2, 0x172, 0x1b, 
       0x3, 0x2, 0x2, 0x2, 0x173, 0x175, 0x5, 0x46, 0x24, 0x2, 0x174, 0x173, 
       0x3, 0x2, 0x2, 0x2, 0x175, 0x178, 0x3, 0x2, 0x2, 0x2, 0x176, 0x174, 
       0x3, 0x2, 0x2, 0x2, 0x176, 0x177, 0x3, 0x2, 0x2, 0x2, 0x177, 0x179, 
       0x3, 0x2, 0x2, 0x2, 0x178, 0x176, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17a, 
       0x5, 0x28, 0x15, 0x2, 0x17a, 0x17b, 0x7, 0x151, 0x2, 0x2, 0x17b, 
       0x1d, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17d, 0x5, 0x20, 0x11, 0x2, 0x17d, 
       0x17e, 0x7, 0x151, 0x2, 0x2, 0x17e, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x17f, 
       0x180, 0x5, 0x22, 0x12, 0x2, 0x180, 0x181, 0x7, 0x173, 0x2, 0x2, 
       0x181, 0x183, 0x7, 0x137, 0x2, 0x2, 0x182, 0x184, 0x5, 0x24, 0x13, 
       0x2, 0x183, 0x182, 0x3, 0x2, 0x2, 0x2, 0x183, 0x184, 0x3, 0x2, 0x2, 
       0x2, 0x184, 0x185, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 0x7, 0x138, 
       0x2, 0x2, 0x186, 0x21, 0x3, 0x2, 0x2, 0x2, 0x187, 0x18b, 0x7, 0x40, 
       0x2, 0x2, 0x188, 0x189, 0x7, 0x40, 0x2, 0x2, 0x189, 0x18b, 0x9, 0x2, 
       0x2, 0x2, 0x18a, 0x187, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x188, 0x3, 0x2, 
       0x2, 0x2, 0x18b, 0x23, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x191, 0x5, 0x26, 
       0x14, 0x2, 0x18d, 0x18e, 0x7, 0x152, 0x2, 0x2, 0x18e, 0x190, 0x5, 
       0x26, 0x14, 0x2, 0x18f, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x190, 0x193, 
       0x3, 0x2, 0x2, 0x2, 0x191, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x191, 0x192, 
       0x3, 0x2, 0x2, 0x2, 0x192, 0x195, 0x3, 0x2, 0x2, 0x2, 0x193, 0x191, 
       0x3, 0x2, 0x2, 0x2, 0x194, 0x196, 0x7, 0x152, 0x2, 0x2, 0x195, 0x194, 
       0x3, 0x2, 0x2, 0x2, 0x195, 0x196, 0x3, 0x2, 0x2, 0x2, 0x196, 0x25, 
       0x3, 0x2, 0x2, 0x2, 0x197, 0x19a, 0x7, 0x173, 0x2, 0x2, 0x198, 0x199, 
       0x7, 0x153, 0x2, 0x2, 0x199, 0x19b, 0x5, 0x58, 0x2d, 0x2, 0x19a, 
       0x198, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x19b, 
       0x27, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x1a1, 0x5, 0x10, 0x9, 0x2, 0x19d, 
       0x1a1, 0x5, 0x2c, 0x17, 0x2, 0x19e, 0x1a1, 0x5, 0x18, 0xd, 0x2, 0x19f, 
       0x1a1, 0x5, 0x20, 0x11, 0x2, 0x1a0, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x1a0, 
       0x19d, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x1a0, 
       0x19f, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x29, 0x3, 0x2, 0x2, 0x2, 0x1a2, 
       0x1a3, 0x5, 0x2c, 0x17, 0x2, 0x1a3, 0x1a4, 0x7, 0x151, 0x2, 0x2, 
       0x1a4, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a6, 0x7, 0x91, 0x2, 0x2, 
       0x1a6, 0x1a7, 0x7, 0x173, 0x2, 0x2, 0x1a7, 0x1ab, 0x7, 0x137, 0x2, 
       0x2, 0x1a8, 0x1aa, 0x5, 0x2e, 0x18, 0x2, 0x1a9, 0x1a8, 0x3, 0x2, 
       0x2, 0x2, 0x1aa, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1a9, 0x3, 0x2, 
       0x2, 0x2, 0x1ab, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1ae, 0x3, 0x2, 
       0x2, 0x2, 0x1ad, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1af, 0x7, 0x138, 
       0x2, 0x2, 0x1af, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b4, 0x5, 0xd6, 
       0x6c, 0x2, 0x1b1, 0x1b4, 0x5, 0xc2, 0x62, 0x2, 0x1b2, 0x1b4, 0x5, 
       0x1c, 0xf, 0x2, 0x1b3, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b1, 0x3, 
       0x2, 0x2, 0x2, 0x1b3, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x2f, 0x3, 
       0x2, 0x2, 0x2, 0x1b5, 0x1b6, 0x9, 0x3, 0x2, 0x2, 0x1b6, 0x1b7, 0x7, 
       0x13a, 0x2, 0x2, 0x1b7, 0x1b8, 0x5, 0x7e, 0x40, 0x2, 0x1b8, 0x1b9, 
       0x7, 0x13c, 0x2, 0x2, 0x1b9, 0x31, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1bb, 
       0x5, 0x68, 0x35, 0x2, 0x1bb, 0x1bc, 0x7, 0x151, 0x2, 0x2, 0x1bc, 
       0x33, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1c7, 0x7, 0x105, 0x2, 0x2, 0x1be, 
       0x1c3, 0x5, 0x36, 0x1c, 0x2, 0x1bf, 0x1c0, 0x7, 0x152, 0x2, 0x2, 
       0x1c0, 0x1c2, 0x5, 0x36, 0x1c, 0x2, 0x1c1, 0x1bf, 0x3, 0x2, 0x2, 
       0x2, 0x1c2, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c1, 0x3, 0x2, 0x2, 
       0x2, 0x1c3, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c7, 0x3, 0x2, 0x2, 
       0x2, 0x1c5, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1bd, 0x3, 0x2, 0x2, 
       0x2, 0x1c6, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x35, 0x3, 0x2, 0x2, 
       0x2, 0x1c8, 0x1ca, 0x5, 0x46, 0x24, 0x2, 0x1c9, 0x1c8, 0x3, 0x2, 
       0x2, 0x2, 0x1ca, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1c9, 0x3, 0x2, 
       0x2, 0x2, 0x1cb, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1ce, 0x3, 0x2, 
       0x2, 0x2, 0x1cd, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1d0, 0x5, 0x7e, 
       0x40, 0x2, 0x1cf, 0x1d1, 0x7, 0x173, 0x2, 0x2, 0x1d0, 0x1cf, 0x3, 
       0x2, 0x2, 0x2, 0x1d0, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1d2, 0x3, 
       0x2, 0x2, 0x2, 0x1d2, 0x1d3, 0x5, 0x6c, 0x37, 0x2, 0x1d3, 0x37, 0x3, 
       0x2, 0x2, 0x2, 0x1d4, 0x1d5, 0x7, 0x14f, 0x2, 0x2, 0x1d5, 0x1d6, 
       0x5, 0x3a, 0x1e, 0x2, 0x1d6, 0x39, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d8, 
       0x9, 0x4, 0x2, 0x2, 0x1d8, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1de, 
       0x5, 0xb8, 0x5d, 0x2, 0x1da, 0x1db, 0x7, 0x152, 0x2, 0x2, 0x1db, 
       0x1dd, 0x5, 0xb8, 0x5d, 0x2, 0x1dc, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1dd, 
       0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1de, 
       0x1df, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x1e0, 
       0x1de, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e2, 0x7, 0x133, 0x2, 0x2, 0x1e2, 
       0x1e3, 0x5, 0x3c, 0x1f, 0x2, 0x1e3, 0x1e4, 0x7, 0x134, 0x2, 0x2, 
       0x1e4, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e6, 0x7, 0x5d, 0x2, 0x2, 
       0x1e6, 0x1e9, 0x7, 0x150, 0x2, 0x2, 0x1e7, 0x1e8, 0x7, 0x173, 0x2, 
       0x2, 0x1e8, 0x1ea, 0x7, 0x150, 0x2, 0x2, 0x1e9, 0x1e7, 0x3, 0x2, 
       0x2, 0x2, 0x1e9, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1eb, 0x3, 0x2, 
       0x2, 0x2, 0x1eb, 0x1ed, 0x7, 0x173, 0x2, 0x2, 0x1ec, 0x1ee, 0x5, 
       0x3e, 0x20, 0x2, 0x1ed, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ee, 
       0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f0, 
       0x7, 0x173, 0x2, 0x2, 0x1f0, 0x1f2, 0x7, 0x150, 0x2, 0x2, 0x1f1, 
       0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f2, 
       0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f5, 0x7, 0x173, 0x2, 0x2, 0x1f4, 
       0x1f6, 0x5, 0x3e, 0x20, 0x2, 0x1f5, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f5, 
       0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1f7, 
       0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1f8, 
       0x41, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fa, 0x7, 0x135, 0x2, 0x2, 0x1fa, 
       0x1fb, 0x5, 0x40, 0x21, 0x2, 0x1fb, 0x1fc, 0x7, 0x136, 0x2, 0x2, 
       0x1fc, 0x43, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1fe, 0x7, 0x139, 0x2, 0x2, 
       0x1fe, 0x203, 0x5, 0x40, 0x21, 0x2, 0x1ff, 0x200, 0x7, 0x152, 0x2, 
       0x2, 0x200, 0x202, 0x5, 0x40, 0x21, 0x2, 0x201, 0x1ff, 0x3, 0x2, 
       0x2, 0x2, 0x202, 0x205, 0x3, 0x2, 0x2, 0x2, 0x203, 0x201, 0x3, 0x2, 
       0x2, 0x2, 0x203, 0x204, 0x3, 0x2, 0x2, 0x2, 0x204, 0x206, 0x3, 0x2, 
       0x2, 0x2, 0x205, 0x203, 0x3, 0x2, 0x2, 0x2, 0x206, 0x207, 0x7, 0x136, 
       0x2, 0x2, 0x207, 0x208, 0x7, 0x136, 0x2, 0x2, 0x208, 0x45, 0x3, 0x2, 
       0x2, 0x2, 0x209, 0x20c, 0x5, 0x42, 0x22, 0x2, 0x20a, 0x20c, 0x5, 
       0x44, 0x23, 0x2, 0x20b, 0x209, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x20a, 
       0x3, 0x2, 0x2, 0x2, 0x20c, 0x47, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x211, 
       0x7, 0x137, 0x2, 0x2, 0x20e, 0x210, 0x5, 0x4a, 0x26, 0x2, 0x20f, 
       0x20e, 0x3, 0x2, 0x2, 0x2, 0x210, 0x213, 0x3, 0x2, 0x2, 0x2, 0x211, 
       0x20f, 0x3, 0x2, 0x2, 0x2, 0x211, 0x212, 0x3, 0x2, 0x2, 0x2, 0x212, 
       0x214, 0x3, 0x2, 0x2, 0x2, 0x213, 0x211, 0x3, 0x2, 0x2, 0x2, 0x214, 
       0x215, 0x7, 0x138, 0x2, 0x2, 0x215, 0x49, 0x3, 0x2, 0x2, 0x2, 0x216, 
       0x21a, 0x5, 0x32, 0x1a, 0x2, 0x217, 0x21a, 0x5, 0x54, 0x2b, 0x2, 
       0x218, 0x21a, 0x5, 0x1c, 0xf, 0x2, 0x219, 0x216, 0x3, 0x2, 0x2, 0x2, 
       0x219, 0x217, 0x3, 0x2, 0x2, 0x2, 0x219, 0x218, 0x3, 0x2, 0x2, 0x2, 
       0x21a, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x21e, 0x5, 0x68, 0x35, 0x2, 
       0x21c, 0x21e, 0x5, 0x5a, 0x2e, 0x2, 0x21d, 0x21b, 0x3, 0x2, 0x2, 
       0x2, 0x21d, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x4d, 0x3, 0x2, 0x2, 
       0x2, 0x21f, 0x220, 0x7, 0x1d, 0x2, 0x2, 0x220, 0x221, 0x5, 0x58, 
       0x2d, 0x2, 0x221, 0x222, 0x7, 0x14f, 0x2, 0x2, 0x222, 0x226, 0x3, 
       0x2, 0x2, 0x2, 0x223, 0x224, 0x7, 0x27, 0x2, 0x2, 0x224, 0x226, 0x7, 
       0x14f, 0x2, 0x2, 0x225, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x225, 0x223, 
       0x3, 0x2, 0x2, 0x2, 0x226, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x227, 0x229, 
       0x5, 0x4e, 0x28, 0x2, 0x228, 0x227, 0x3, 0x2, 0x2, 0x2, 0x229, 0x22a, 
       0x3, 0x2, 0x2, 0x2, 0x22a, 0x228, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x22b, 
       0x3, 0x2, 0x2, 0x2, 0x22b, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x22e, 
       0x5, 0x4a, 0x26, 0x2, 0x22d, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x22f, 
       0x3, 0x2, 0x2, 0x2, 0x22f, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x230, 
       0x3, 0x2, 0x2, 0x2, 0x230, 0x51, 0x3, 0x2, 0x2, 0x2, 0x231, 0x235, 
       0x7, 0x137, 0x2, 0x2, 0x232, 0x234, 0x5, 0x50, 0x29, 0x2, 0x233, 
       0x232, 0x3, 0x2, 0x2, 0x2, 0x234, 0x237, 0x3, 0x2, 0x2, 0x2, 0x235, 
       0x233, 0x3, 0x2, 0x2, 0x2, 0x235, 0x236, 0x3, 0x2, 0x2, 0x2, 0x236, 
       0x238, 0x3, 0x2, 0x2, 0x2, 0x237, 0x235, 0x3, 0x2, 0x2, 0x2, 0x238, 
       0x239, 0x7, 0x138, 0x2, 0x2, 0x239, 0x53, 0x3, 0x2, 0x2, 0x2, 0x23a, 
       0x296, 0x7, 0x151, 0x2, 0x2, 0x23b, 0x296, 0x5, 0x48, 0x25, 0x2, 
       0x23c, 0x23d, 0x5, 0x5a, 0x2e, 0x2, 0x23d, 0x23e, 0x7, 0x151, 0x2, 
       0x2, 0x23e, 0x296, 0x3, 0x2, 0x2, 0x2, 0x23f, 0x241, 0x5, 0x42, 0x22, 
       0x2, 0x240, 0x23f, 0x3, 0x2, 0x2, 0x2, 0x241, 0x244, 0x3, 0x2, 0x2, 
       0x2, 0x242, 0x240, 0x3, 0x2, 0x2, 0x2, 0x242, 0x243, 0x3, 0x2, 0x2, 
       0x2, 0x243, 0x245, 0x3, 0x2, 0x2, 0x2, 0x244, 0x242, 0x3, 0x2, 0x2, 
       0x2, 0x245, 0x246, 0x7, 0x73, 0x2, 0x2, 0x246, 0x247, 0x7, 0x133, 
       0x2, 0x2, 0x247, 0x248, 0x5, 0x5a, 0x2e, 0x2, 0x248, 0x249, 0x7, 
       0x134, 0x2, 0x2, 0x249, 0x24b, 0x5, 0x54, 0x2b, 0x2, 0x24a, 0x24c, 
       0x5, 0x56, 0x2c, 0x2, 0x24b, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x24c, 
       0x3, 0x2, 0x2, 0x2, 0x24c, 0x296, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x24f, 
       0x5, 0x42, 0x22, 0x2, 0x24e, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x252, 
       0x3, 0x2, 0x2, 0x2, 0x250, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x250, 0x251, 
       0x3, 0x2, 0x2, 0x2, 0x251, 0x253, 0x3, 0x2, 0x2, 0x2, 0x252, 0x250, 
       0x3, 0x2, 0x2, 0x2, 0x253, 0x254, 0x7, 0xc5, 0x2, 0x2, 0x254, 0x255, 
       0x7, 0x133, 0x2, 0x2, 0x255, 0x256, 0x5, 0x5a, 0x2e, 0x2, 0x256, 
       0x257, 0x7, 0x134, 0x2, 0x2, 0x257, 0x258, 0x5, 0x52, 0x2a, 0x2, 
       0x258, 0x296, 0x3, 0x2, 0x2, 0x2, 0x259, 0x25b, 0x5, 0x42, 0x22, 
       0x2, 0x25a, 0x259, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x25e, 0x3, 0x2, 0x2, 
       0x2, 0x25c, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25d, 0x3, 0x2, 0x2, 
       0x2, 0x25d, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x25c, 0x3, 0x2, 0x2, 
       0x2, 0x25f, 0x260, 0x7, 0x106, 0x2, 0x2, 0x260, 0x261, 0x7, 0x133, 
       0x2, 0x2, 0x261, 0x262, 0x5, 0x5a, 0x2e, 0x2, 0x262, 0x263, 0x7, 
       0x134, 0x2, 0x2, 0x263, 0x264, 0x5, 0x54, 0x2b, 0x2, 0x264, 0x296, 
       0x3, 0x2, 0x2, 0x2, 0x265, 0x267, 0x5, 0x42, 0x22, 0x2, 0x266, 0x265, 
       0x3, 0x2, 0x2, 0x2, 0x267, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x268, 0x266, 
       0x3, 0x2, 0x2, 0x2, 0x268, 0x269, 0x3, 0x2, 0x2, 0x2, 0x269, 0x26b, 
       0x3, 0x2, 0x2, 0x2, 0x26a, 0x268, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x26c, 
       0x7, 0x29, 0x2, 0x2, 0x26c, 0x26d, 0x5, 0x54, 0x2b, 0x2, 0x26d, 0x26e, 
       0x7, 0x106, 0x2, 0x2, 0x26e, 0x26f, 0x7, 0x133, 0x2, 0x2, 0x26f, 
       0x270, 0x5, 0x5a, 0x2e, 0x2, 0x270, 0x271, 0x7, 0x134, 0x2, 0x2, 
       0x271, 0x272, 0x7, 0x151, 0x2, 0x2, 0x272, 0x296, 0x3, 0x2, 0x2, 
       0x2, 0x273, 0x275, 0x5, 0x42, 0x22, 0x2, 0x274, 0x273, 0x3, 0x2, 
       0x2, 0x2, 0x275, 0x278, 0x3, 0x2, 0x2, 0x2, 0x276, 0x274, 0x3, 0x2, 
       0x2, 0x2, 0x276, 0x277, 0x3, 0x2, 0x2, 0x2, 0x277, 0x279, 0x3, 0x2, 
       0x2, 0x2, 0x278, 0x276, 0x3, 0x2, 0x2, 0x2, 0x279, 0x27a, 0x7, 0x5a, 
       0x2, 0x2, 0x27a, 0x27c, 0x7, 0x133, 0x2, 0x2, 0x27b, 0x27d, 0x5, 
       0x4c, 0x27, 0x2, 0x27c, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x27d, 
       0x3, 0x2, 0x2, 0x2, 0x27d, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x280, 
       0x7, 0x151, 0x2, 0x2, 0x27f, 0x281, 0x5, 0x5a, 0x2e, 0x2, 0x280, 
       0x27f, 0x3, 0x2, 0x2, 0x2, 0x280, 0x281, 0x3, 0x2, 0x2, 0x2, 0x281, 
       0x282, 0x3, 0x2, 0x2, 0x2, 0x282, 0x284, 0x7, 0x151, 0x2, 0x2, 0x283, 
       0x285, 0x5, 0x5a, 0x2e, 0x2, 0x284, 0x283, 0x3, 0x2, 0x2, 0x2, 0x284, 
       0x285, 0x3, 0x2, 0x2, 0x2, 0x285, 0x286, 0x3, 0x2, 0x2, 0x2, 0x286, 
       0x287, 0x7, 0x134, 0x2, 0x2, 0x287, 0x296, 0x5, 0x54, 0x2b, 0x2, 
       0x288, 0x289, 0x7, 0x1c, 0x2, 0x2, 0x289, 0x296, 0x7, 0x151, 0x2, 
       0x2, 0x28a, 0x28b, 0x7, 0x26, 0x2, 0x2, 0x28b, 0x296, 0x7, 0x151, 
       0x2, 0x2, 0x28c, 0x28d, 0x7, 0x28, 0x2, 0x2, 0x28d, 0x296, 0x7, 0x151, 
       0x2, 0x2, 0x28e, 0x290, 0x7, 0xae, 0x2, 0x2, 0x28f, 0x291, 0x5, 0x5a, 
       0x2e, 0x2, 0x290, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x290, 0x291, 0x3, 0x2, 
       0x2, 0x2, 0x291, 0x292, 0x3, 0x2, 0x2, 0x2, 0x292, 0x296, 0x7, 0x151, 
       0x2, 0x2, 0x293, 0x296, 0x5, 0xdc, 0x6f, 0x2, 0x294, 0x296, 0x5, 
       0xc8, 0x65, 0x2, 0x295, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x295, 0x23b, 
       0x3, 0x2, 0x2, 0x2, 0x295, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x295, 0x242, 
       0x3, 0x2, 0x2, 0x2, 0x295, 0x250, 0x3, 0x2, 0x2, 0x2, 0x295, 0x25c, 
       0x3, 0x2, 0x2, 0x2, 0x295, 0x268, 0x3, 0x2, 0x2, 0x2, 0x295, 0x276, 
       0x3, 0x2, 0x2, 0x2, 0x295, 0x288, 0x3, 0x2, 0x2, 0x2, 0x295, 0x28a, 
       0x3, 0x2, 0x2, 0x2, 0x295, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x295, 0x28e, 
       0x3, 0x2, 0x2, 0x2, 0x295, 0x293, 0x3, 0x2, 0x2, 0x2, 0x295, 0x294, 
       0x3, 0x2, 0x2, 0x2, 0x296, 0x55, 0x3, 0x2, 0x2, 0x2, 0x297, 0x298, 
       0x7, 0x3f, 0x2, 0x2, 0x298, 0x299, 0x5, 0x54, 0x2b, 0x2, 0x299, 0x57, 
       0x3, 0x2, 0x2, 0x2, 0x29a, 0x29b, 0x8, 0x2d, 0x1, 0x2, 0x29b, 0x2b3, 
       0x5, 0xb8, 0x5d, 0x2, 0x29c, 0x2b3, 0x5, 0x6, 0x4, 0x2, 0x29d, 0x29e, 
       0x7, 0x133, 0x2, 0x2, 0x29e, 0x29f, 0x5, 0x5a, 0x2e, 0x2, 0x29f, 
       0x2a0, 0x7, 0x134, 0x2, 0x2, 0x2a0, 0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2a1, 
       0x2a2, 0x5, 0xae, 0x58, 0x2, 0x2a2, 0x2a3, 0x5, 0x64, 0x33, 0x2, 
       0x2a3, 0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2a4, 0x2a5, 0x7, 0x133, 0x2, 
       0x2, 0x2a5, 0x2a9, 0x5, 0x7e, 0x40, 0x2, 0x2a6, 0x2a8, 0x5, 0x76, 
       0x3c, 0x2, 0x2a7, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2a8, 0x2ab, 0x3, 0x2, 
       0x2, 0x2, 0x2a9, 0x2a7, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2aa, 0x3, 0x2, 
       0x2, 0x2, 0x2aa, 0x2ac, 0x3, 0x2, 0x2, 0x2, 0x2ab, 0x2a9, 0x3, 0x2, 
       0x2, 0x2, 0x2ac, 0x2ad, 0x7, 0x134, 0x2, 0x2, 0x2ad, 0x2ae, 0x5, 
       0x58, 0x2d, 0x8, 0x2ae, 0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2af, 0x2b0, 
       0x5, 0x5e, 0x30, 0x2, 0x2b0, 0x2b1, 0x5, 0x58, 0x2d, 0x6, 0x2b1, 
       0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x29a, 0x3, 0x2, 0x2, 0x2, 0x2b2, 
       0x29c, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x29d, 0x3, 0x2, 0x2, 0x2, 0x2b2, 
       0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x2b2, 
       0x2af, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2b4, 
       0x2b5, 0xc, 0x5, 0x2, 0x2, 0x2b5, 0x2b6, 0x5, 0x60, 0x31, 0x2, 0x2b6, 
       0x2b7, 0x5, 0x58, 0x2d, 0x6, 0x2b7, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2b8, 
       0x2b9, 0xc, 0xc, 0x2, 0x2, 0x2b9, 0x2ba, 0x7, 0x160, 0x2, 0x2, 0x2ba, 
       0x2cf, 0x5, 0x6, 0x4, 0x2, 0x2bb, 0x2bc, 0xc, 0xb, 0x2, 0x2, 0x2bc, 
       0x2bd, 0x7, 0x135, 0x2, 0x2, 0x2bd, 0x2be, 0x5, 0x58, 0x2d, 0x2, 
       0x2be, 0x2bf, 0x7, 0x136, 0x2, 0x2, 0x2bf, 0x2cf, 0x3, 0x2, 0x2, 
       0x2, 0x2c0, 0x2c1, 0xc, 0xa, 0x2, 0x2, 0x2c1, 0x2cf, 0x5, 0x64, 0x33, 
       0x2, 0x2c2, 0x2c3, 0xc, 0x7, 0x2, 0x2, 0x2c3, 0x2cf, 0x5, 0x5c, 0x2f, 
       0x2, 0x2c4, 0x2c5, 0xc, 0x4, 0x2, 0x2, 0x2c5, 0x2c6, 0x7, 0x14e, 
       0x2, 0x2, 0x2c6, 0x2c7, 0x5, 0x5a, 0x2e, 0x2, 0x2c7, 0x2c8, 0x7, 
       0x14f, 0x2, 0x2, 0x2c8, 0x2c9, 0x5, 0x5a, 0x2e, 0x2, 0x2c9, 0x2cf, 
       0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2cb, 0xc, 0x3, 0x2, 0x2, 0x2cb, 0x2cc, 
       0x5, 0x62, 0x32, 0x2, 0x2cc, 0x2cd, 0x5, 0x5a, 0x2e, 0x2, 0x2cd, 
       0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2b4, 0x3, 0x2, 0x2, 0x2, 0x2ce, 
       0x2b8, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2bb, 0x3, 0x2, 0x2, 0x2, 0x2ce, 
       0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x2ce, 
       0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x2cf, 
       0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2d0, 
       0x2d1, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x59, 0x3, 0x2, 0x2, 0x2, 0x2d2, 
       0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2d4, 0x8, 0x2e, 0x1, 0x2, 0x2d4, 
       0x2d5, 0x5, 0x58, 0x2d, 0x2, 0x2d5, 0x2db, 0x3, 0x2, 0x2, 0x2, 0x2d6, 
       0x2d7, 0xc, 0x3, 0x2, 0x2, 0x2d7, 0x2d8, 0x7, 0x152, 0x2, 0x2, 0x2d8, 
       0x2da, 0x5, 0x58, 0x2d, 0x2, 0x2d9, 0x2d6, 0x3, 0x2, 0x2, 0x2, 0x2da, 
       0x2dd, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x2db, 
       0x2dc, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x2dd, 
       0x2db, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2df, 0x9, 0x5, 0x2, 0x2, 0x2df, 
       0x5d, 0x3, 0x2, 0x2, 0x2, 0x2e0, 0x2e1, 0x9, 0x6, 0x2, 0x2, 0x2e1, 
       0x5f, 0x3, 0x2, 0x2, 0x2, 0x2e2, 0x2e3, 0x9, 0x7, 0x2, 0x2, 0x2e3, 
       0x61, 0x3, 0x2, 0x2, 0x2, 0x2e4, 0x2e5, 0x9, 0x8, 0x2, 0x2, 0x2e5, 
       0x63, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2e8, 0x7, 0x133, 0x2, 0x2, 0x2e7, 
       0x2e9, 0x5, 0x66, 0x34, 0x2, 0x2e8, 0x2e7, 0x3, 0x2, 0x2, 0x2, 0x2e8, 
       0x2e9, 0x3, 0x2, 0x2, 0x2, 0x2e9, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x2ea, 
       0x2eb, 0x7, 0x134, 0x2, 0x2, 0x2eb, 0x65, 0x3, 0x2, 0x2, 0x2, 0x2ec, 
       0x2f1, 0x5, 0x58, 0x2d, 0x2, 0x2ed, 0x2ee, 0x7, 0x152, 0x2, 0x2, 
       0x2ee, 0x2f0, 0x5, 0x58, 0x2d, 0x2, 0x2ef, 0x2ed, 0x3, 0x2, 0x2, 
       0x2, 0x2f0, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x2f1, 0x2ef, 0x3, 0x2, 0x2, 
       0x2, 0x2f1, 0x2f2, 0x3, 0x2, 0x2, 0x2, 0x2f2, 0x67, 0x3, 0x2, 0x2, 
       0x2, 0x2f3, 0x2f1, 0x3, 0x2, 0x2, 0x2, 0x2f4, 0x2f6, 0x5, 0x46, 0x24, 
       0x2, 0x2f5, 0x2f4, 0x3, 0x2, 0x2, 0x2, 0x2f6, 0x2f9, 0x3, 0x2, 0x2, 
       0x2, 0x2f7, 0x2f5, 0x3, 0x2, 0x2, 0x2, 0x2f7, 0x2f8, 0x3, 0x2, 0x2, 
       0x2, 0x2f8, 0x2fa, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2f7, 0x3, 0x2, 0x2, 
       0x2, 0x2fa, 0x2fb, 0x5, 0x7e, 0x40, 0x2, 0x2fb, 0x2fc, 0x5, 0x6a, 
       0x36, 0x2, 0x2fc, 0x69, 0x3, 0x2, 0x2, 0x2, 0x2fd, 0x302, 0x5, 0x6e, 
       0x38, 0x2, 0x2fe, 0x2ff, 0x7, 0x152, 0x2, 0x2, 0x2ff, 0x301, 0x5, 
       0x6e, 0x38, 0x2, 0x300, 0x2fe, 0x3, 0x2, 0x2, 0x2, 0x301, 0x304, 
       0x3, 0x2, 0x2, 0x2, 0x302, 0x300, 0x3, 0x2, 0x2, 0x2, 0x302, 0x303, 
       0x3, 0x2, 0x2, 0x2, 0x303, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x304, 0x302, 
       0x3, 0x2, 0x2, 0x2, 0x305, 0x307, 0x5, 0x76, 0x3c, 0x2, 0x306, 0x305, 
       0x3, 0x2, 0x2, 0x2, 0x307, 0x30a, 0x3, 0x2, 0x2, 0x2, 0x308, 0x306, 
       0x3, 0x2, 0x2, 0x2, 0x308, 0x309, 0x3, 0x2, 0x2, 0x2, 0x309, 0x30c, 
       0x3, 0x2, 0x2, 0x2, 0x30a, 0x308, 0x3, 0x2, 0x2, 0x2, 0x30b, 0x30d, 
       0x5, 0x38, 0x1d, 0x2, 0x30c, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x30c, 0x30d, 
       0x3, 0x2, 0x2, 0x2, 0x30d, 0x30f, 0x3, 0x2, 0x2, 0x2, 0x30e, 0x310, 
       0x5, 0x78, 0x3d, 0x2, 0x30f, 0x30e, 0x3, 0x2, 0x2, 0x2, 0x30f, 0x310, 
       0x3, 0x2, 0x2, 0x2, 0x310, 0x312, 0x3, 0x2, 0x2, 0x2, 0x311, 0x313, 
       0x5, 0xb4, 0x5b, 0x2, 0x312, 0x311, 0x3, 0x2, 0x2, 0x2, 0x312, 0x313, 
       0x3, 0x2, 0x2, 0x2, 0x313, 0x315, 0x3, 0x2, 0x2, 0x2, 0x314, 0x316, 
       0x5, 0x70, 0x39, 0x2, 0x315, 0x314, 0x3, 0x2, 0x2, 0x2, 0x315, 0x316, 
       0x3, 0x2, 0x2, 0x2, 0x316, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x317, 0x318, 
       0x7, 0x173, 0x2, 0x2, 0x318, 0x319, 0x5, 0x6c, 0x37, 0x2, 0x319, 
       0x6f, 0x3, 0x2, 0x2, 0x2, 0x31a, 0x31b, 0x7, 0x153, 0x2, 0x2, 0x31b, 
       0x31e, 0x5, 0x72, 0x3a, 0x2, 0x31c, 0x31e, 0x5, 0xec, 0x77, 0x2, 
       0x31d, 0x31a, 0x3, 0x2, 0x2, 0x2, 0x31d, 0x31c, 0x3, 0x2, 0x2, 0x2, 
       0x31e, 0x71, 0x3, 0x2, 0x2, 0x2, 0x31f, 0x320, 0x7, 0x137, 0x2, 0x2, 
       0x320, 0x321, 0x5, 0x74, 0x3b, 0x2, 0x321, 0x322, 0x7, 0x138, 0x2, 
       0x2, 0x322, 0x325, 0x3, 0x2, 0x2, 0x2, 0x323, 0x325, 0x5, 0x58, 0x2d, 
       0x2, 0x324, 0x31f, 0x3, 0x2, 0x2, 0x2, 0x324, 0x323, 0x3, 0x2, 0x2, 
       0x2, 0x325, 0x73, 0x3, 0x2, 0x2, 0x2, 0x326, 0x32b, 0x5, 0x72, 0x3a, 
       0x2, 0x327, 0x328, 0x7, 0x152, 0x2, 0x2, 0x328, 0x32a, 0x5, 0x72, 
       0x3a, 0x2, 0x329, 0x327, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x32d, 0x3, 0x2, 
       0x2, 0x2, 0x32b, 0x329, 0x3, 0x2, 0x2, 0x2, 0x32b, 0x32c, 0x3, 0x2, 
       0x2, 0x2, 0x32c, 0x32f, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x32b, 0x3, 0x2, 
       0x2, 0x2, 0x32e, 0x330, 0x7, 0x152, 0x2, 0x2, 0x32f, 0x32e, 0x3, 
       0x2, 0x2, 0x2, 0x32f, 0x330, 0x3, 0x2, 0x2, 0x2, 0x330, 0x75, 0x3, 
       0x2, 0x2, 0x2, 0x331, 0x333, 0x7, 0x135, 0x2, 0x2, 0x332, 0x334, 
       0x5, 0x58, 0x2d, 0x2, 0x333, 0x332, 0x3, 0x2, 0x2, 0x2, 0x333, 0x334, 
       0x3, 0x2, 0x2, 0x2, 0x334, 0x335, 0x3, 0x2, 0x2, 0x2, 0x335, 0x336, 
       0x7, 0x136, 0x2, 0x2, 0x336, 0x77, 0x3, 0x2, 0x2, 0x2, 0x337, 0x338, 
       0x7, 0x14f, 0x2, 0x2, 0x338, 0x339, 0x7, 0x9f, 0x2, 0x2, 0x339, 0x33a, 
       0x7, 0x133, 0x2, 0x2, 0x33a, 0x33d, 0x7, 0x173, 0x2, 0x2, 0x33b, 
       0x33c, 0x7, 0x160, 0x2, 0x2, 0x33c, 0x33e, 0x7, 0x173, 0x2, 0x2, 
       0x33d, 0x33b, 0x3, 0x2, 0x2, 0x2, 0x33d, 0x33e, 0x3, 0x2, 0x2, 0x2, 
       0x33e, 0x33f, 0x3, 0x2, 0x2, 0x2, 0x33f, 0x340, 0x7, 0x134, 0x2, 
       0x2, 0x340, 0x79, 0x3, 0x2, 0x2, 0x2, 0x341, 0x343, 0x5, 0x7c, 0x3f, 
       0x2, 0x342, 0x341, 0x3, 0x2, 0x2, 0x2, 0x343, 0x346, 0x3, 0x2, 0x2, 
       0x2, 0x344, 0x345, 0x3, 0x2, 0x2, 0x2, 0x344, 0x342, 0x3, 0x2, 0x2, 
       0x2, 0x345, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x346, 0x344, 0x3, 0x2, 0x2, 
       0x2, 0x347, 0x348, 0x9, 0x9, 0x2, 0x2, 0x348, 0x7d, 0x3, 0x2, 0x2, 
       0x2, 0x349, 0x34e, 0x5, 0x7a, 0x3e, 0x2, 0x34a, 0x34f, 0x5, 0x80, 
       0x41, 0x2, 0x34b, 0x34f, 0x5, 0xc0, 0x61, 0x2, 0x34c, 0x34f, 0x5, 
       0xca, 0x66, 0x2, 0x34d, 0x34f, 0x7, 0x105, 0x2, 0x2, 0x34e, 0x34a, 
       0x3, 0x2, 0x2, 0x2, 0x34e, 0x34b, 0x3, 0x2, 0x2, 0x2, 0x34e, 0x34c, 
       0x3, 0x2, 0x2, 0x2, 0x34e, 0x34d, 0x3, 0x2, 0x2, 0x2, 0x34f, 0x7f, 
       0x3, 0x2, 0x2, 0x2, 0x350, 0x363, 0x5, 0x88, 0x45, 0x2, 0x351, 0x363, 
       0x5, 0x8c, 0x47, 0x2, 0x352, 0x363, 0x5, 0x8e, 0x48, 0x2, 0x353, 
       0x363, 0x5, 0xb0, 0x59, 0x2, 0x354, 0x363, 0x5, 0xb2, 0x5a, 0x2, 
       0x355, 0x363, 0x5, 0x92, 0x4a, 0x2, 0x356, 0x363, 0x5, 0x94, 0x4b, 
       0x2, 0x357, 0x363, 0x5, 0x96, 0x4c, 0x2, 0x358, 0x363, 0x5, 0x9a, 
       0x4e, 0x2, 0x359, 0x363, 0x5, 0xa0, 0x51, 0x2, 0x35a, 0x363, 0x5, 
       0xa2, 0x52, 0x2, 0x35b, 0x363, 0x5, 0xa6, 0x54, 0x2, 0x35c, 0x363, 
       0x5, 0xa8, 0x55, 0x2, 0x35d, 0x363, 0x5, 0xaa, 0x56, 0x2, 0x35e, 
       0x363, 0x5, 0x30, 0x19, 0x2, 0x35f, 0x363, 0x5, 0x84, 0x43, 0x2, 
       0x360, 0x363, 0x5, 0x82, 0x42, 0x2, 0x361, 0x363, 0x5, 0x86, 0x44, 
       0x2, 0x362, 0x350, 0x3, 0x2, 0x2, 0x2, 0x362, 0x351, 0x3, 0x2, 0x2, 
       0x2, 0x362, 0x352, 0x3, 0x2, 0x2, 0x2, 0x362, 0x353, 0x3, 0x2, 0x2, 
       0x2, 0x362, 0x354, 0x3, 0x2, 0x2, 0x2, 0x362, 0x355, 0x3, 0x2, 0x2, 
       0x2, 0x362, 0x356, 0x3, 0x2, 0x2, 0x2, 0x362, 0x357, 0x3, 0x2, 0x2, 
       0x2, 0x362, 0x358, 0x3, 0x2, 0x2, 0x2, 0x362, 0x359, 0x3, 0x2, 0x2, 
       0x2, 0x362, 0x35a, 0x3, 0x2, 0x2, 0x2, 0x362, 0x35b, 0x3, 0x2, 0x2, 
       0x2, 0x362, 0x35c, 0x3, 0x2, 0x2, 0x2, 0x362, 0x35d, 0x3, 0x2, 0x2, 
       0x2, 0x362, 0x35e, 0x3, 0x2, 0x2, 0x2, 0x362, 0x35f, 0x3, 0x2, 0x2, 
       0x2, 0x362, 0x360, 0x3, 0x2, 0x2, 0x2, 0x362, 0x361, 0x3, 0x2, 0x2, 
       0x2, 0x363, 0x81, 0x3, 0x2, 0x2, 0x2, 0x364, 0x365, 0x9, 0xa, 0x2, 
       0x2, 0x365, 0x83, 0x3, 0x2, 0x2, 0x2, 0x366, 0x367, 0x7, 0xac, 0x2, 
       0x2, 0x367, 0x85, 0x3, 0x2, 0x2, 0x2, 0x368, 0x369, 0x9, 0xb, 0x2, 
       0x2, 0x369, 0x87, 0x3, 0x2, 0x2, 0x2, 0x36a, 0x36b, 0x5, 0x8a, 0x46, 
       0x2, 0x36b, 0x36c, 0x7, 0x13a, 0x2, 0x2, 0x36c, 0x36d, 0x5, 0xae, 
       0x58, 0x2, 0x36d, 0x36e, 0x7, 0x13c, 0x2, 0x2, 0x36e, 0x89, 0x3, 
       0x2, 0x2, 0x2, 0x36f, 0x370, 0x9, 0xc, 0x2, 0x2, 0x370, 0x8b, 0x3, 
       0x2, 0x2, 0x2, 0x371, 0x372, 0x9, 0xd, 0x2, 0x2, 0x372, 0x8d, 0x3, 
       0x2, 0x2, 0x2, 0x373, 0x374, 0x5, 0x90, 0x49, 0x2, 0x374, 0x375, 
       0x7, 0x13a, 0x2, 0x2, 0x375, 0x376, 0x5, 0xc0, 0x61, 0x2, 0x376, 
       0x377, 0x7, 0x152, 0x2, 0x2, 0x377, 0x378, 0x7, 0x174, 0x2, 0x2, 
       0x378, 0x379, 0x7, 0x13c, 0x2, 0x2, 0x379, 0x8f, 0x3, 0x2, 0x2, 0x2, 
       0x37a, 0x37b, 0x9, 0xe, 0x2, 0x2, 0x37b, 0x91, 0x3, 0x2, 0x2, 0x2, 
       0x37c, 0x37d, 0x9, 0xf, 0x2, 0x2, 0x37d, 0x93, 0x3, 0x2, 0x2, 0x2, 
       0x37e, 0x37f, 0x9, 0x10, 0x2, 0x2, 0x37f, 0x95, 0x3, 0x2, 0x2, 0x2, 
       0x380, 0x381, 0x5, 0x98, 0x4d, 0x2, 0x381, 0x382, 0x7, 0x13a, 0x2, 
       0x2, 0x382, 0x383, 0x5, 0x7e, 0x40, 0x2, 0x383, 0x384, 0x7, 0x13c, 
       0x2, 0x2, 0x384, 0x97, 0x3, 0x2, 0x2, 0x2, 0x385, 0x386, 0x9, 0x11, 
       0x2, 0x2, 0x386, 0x99, 0x3, 0x2, 0x2, 0x2, 0x387, 0x388, 0x5, 0x9c, 
       0x4f, 0x2, 0x388, 0x389, 0x7, 0x13a, 0x2, 0x2, 0x389, 0x38a, 0x5, 
       0x7e, 0x40, 0x2, 0x38a, 0x38b, 0x7, 0x13c, 0x2, 0x2, 0x38b, 0x9b, 
       0x3, 0x2, 0x2, 0x2, 0x38c, 0x38d, 0x9, 0x12, 0x2, 0x2, 0x38d, 0x9d, 
       0x3, 0x2, 0x2, 0x2, 0x38e, 0x38f, 0x9, 0x13, 0x2, 0x2, 0x38f, 0x9f, 
       0x3, 0x2, 0x2, 0x2, 0x390, 0x391, 0x5, 0x9e, 0x50, 0x2, 0x391, 0xa1, 
       0x3, 0x2, 0x2, 0x2, 0x392, 0x393, 0x5, 0x9e, 0x50, 0x2, 0x393, 0x394, 
       0x7, 0x13a, 0x2, 0x2, 0x394, 0x395, 0x5, 0xac, 0x57, 0x2, 0x395, 
       0x396, 0x7, 0x13c, 0x2, 0x2, 0x396, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x397, 
       0x398, 0x9, 0x14, 0x2, 0x2, 0x398, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x399, 
       0x39a, 0x5, 0xa4, 0x53, 0x2, 0x39a, 0x39b, 0x7, 0x13a, 0x2, 0x2, 
       0x39b, 0x39e, 0x5, 0xac, 0x57, 0x2, 0x39c, 0x39d, 0x7, 0x152, 0x2, 
       0x2, 0x39d, 0x39f, 0x7, 0x174, 0x2, 0x2, 0x39e, 0x39c, 0x3, 0x2, 
       0x2, 0x2, 0x39e, 0x39f, 0x3, 0x2, 0x2, 0x2, 0x39f, 0x3a0, 0x3, 0x2, 
       0x2, 0x2, 0x3a0, 0x3a1, 0x7, 0x13c, 0x2, 0x2, 0x3a1, 0xa7, 0x3, 0x2, 
       0x2, 0x2, 0x3a2, 0x3a3, 0x9, 0x15, 0x2, 0x2, 0x3a3, 0xa9, 0x3, 0x2, 
       0x2, 0x2, 0x3a4, 0x3a5, 0x7, 0x103, 0x2, 0x2, 0x3a5, 0x3a6, 0x7, 
       0x13a, 0x2, 0x2, 0x3a6, 0x3a7, 0x5, 0x94, 0x4b, 0x2, 0x3a7, 0x3a8, 
       0x7, 0x152, 0x2, 0x2, 0x3a8, 0x3a9, 0x7, 0x174, 0x2, 0x2, 0x3a9, 
       0x3aa, 0x7, 0x13c, 0x2, 0x2, 0x3aa, 0xab, 0x3, 0x2, 0x2, 0x2, 0x3ab, 
       0x3ae, 0x5, 0x94, 0x4b, 0x2, 0x3ac, 0x3ae, 0x5, 0xa8, 0x55, 0x2, 
       0x3ad, 0x3ab, 0x3, 0x2, 0x2, 0x2, 0x3ad, 0x3ac, 0x3, 0x2, 0x2, 0x2, 
       0x3ae, 0xad, 0x3, 0x2, 0x2, 0x2, 0x3af, 0x3b3, 0x5, 0x94, 0x4b, 0x2, 
       0x3b0, 0x3b3, 0x5, 0xa8, 0x55, 0x2, 0x3b1, 0x3b3, 0x5, 0xb0, 0x59, 
       0x2, 0x3b2, 0x3af, 0x3, 0x2, 0x2, 0x2, 0x3b2, 0x3b0, 0x3, 0x2, 0x2, 
       0x2, 0x3b2, 0x3b1, 0x3, 0x2, 0x2, 0x2, 0x3b3, 0xaf, 0x3, 0x2, 0x2, 
       0x2, 0x3b4, 0x3b5, 0x9, 0x16, 0x2, 0x2, 0x3b5, 0xb1, 0x3, 0x2, 0x2, 
       0x2, 0x3b6, 0x3b7, 0x7, 0x97, 0x2, 0x2, 0x3b7, 0x3b8, 0x7, 0x13a, 
       0x2, 0x2, 0x3b8, 0x3b9, 0x5, 0x94, 0x4b, 0x2, 0x3b9, 0x3ba, 0x7, 
       0x152, 0x2, 0x2, 0x3ba, 0x3bb, 0x7, 0x174, 0x2, 0x2, 0x3bb, 0x3bc, 
       0x7, 0x152, 0x2, 0x2, 0x3bc, 0x3bd, 0x7, 0x174, 0x2, 0x2, 0x3bd, 
       0x3be, 0x7, 0x13c, 0x2, 0x2, 0x3be, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x3bf, 
       0x3c0, 0x7, 0x14f, 0x2, 0x2, 0x3c0, 0x3c1, 0x7, 0xad, 0x2, 0x2, 0x3c1, 
       0x3c2, 0x7, 0x133, 0x2, 0x2, 0x3c2, 0x3c3, 0x7, 0x173, 0x2, 0x2, 
       0x3c3, 0x3c4, 0x7, 0x134, 0x2, 0x2, 0x3c4, 0xb5, 0x3, 0x2, 0x2, 0x2, 
       0x3c5, 0x3c6, 0x7, 0x173, 0x2, 0x2, 0x3c6, 0x3c7, 0x7, 0x153, 0x2, 
       0x2, 0x3c7, 0x3c8, 0x5, 0x58, 0x2d, 0x2, 0x3c8, 0x3c9, 0x7, 0x151, 
       0x2, 0x2, 0x3c9, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x3ca, 0x3d4, 0x7, 0x161, 
       0x2, 0x2, 0x3cb, 0x3d4, 0x7, 0x162, 0x2, 0x2, 0x3cc, 0x3d4, 0x7, 
       0x175, 0x2, 0x2, 0x3cd, 0x3d4, 0x7, 0x174, 0x2, 0x2, 0x3ce, 0x3d0, 
       0x7, 0x176, 0x2, 0x2, 0x3cf, 0x3ce, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3d1, 
       0x3, 0x2, 0x2, 0x2, 0x3d1, 0x3cf, 0x3, 0x2, 0x2, 0x2, 0x3d1, 0x3d2, 
       0x3, 0x2, 0x2, 0x2, 0x3d2, 0x3d4, 0x3, 0x2, 0x2, 0x2, 0x3d3, 0x3ca, 
       0x3, 0x2, 0x2, 0x2, 0x3d3, 0x3cb, 0x3, 0x2, 0x2, 0x2, 0x3d3, 0x3cc, 
       0x3, 0x2, 0x2, 0x2, 0x3d3, 0x3cd, 0x3, 0x2, 0x2, 0x2, 0x3d3, 0x3cf, 
       0x3, 0x2, 0x2, 0x2, 0x3d4, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x3d5, 0x3d9, 
       0x5, 0x7e, 0x40, 0x2, 0x3d6, 0x3d7, 0x5, 0xc0, 0x61, 0x2, 0x3d7, 
       0x3d8, 0x7, 0x150, 0x2, 0x2, 0x3d8, 0x3da, 0x3, 0x2, 0x2, 0x2, 0x3d9, 
       0x3d6, 0x3, 0x2, 0x2, 0x2, 0x3d9, 0x3da, 0x3, 0x2, 0x2, 0x2, 0x3da, 
       0x3db, 0x3, 0x2, 0x2, 0x2, 0x3db, 0x3dd, 0x7, 0x173, 0x2, 0x2, 0x3dc, 
       0x3de, 0x5, 0xcc, 0x67, 0x2, 0x3dd, 0x3dc, 0x3, 0x2, 0x2, 0x2, 0x3dd, 
       0x3de, 0x3, 0x2, 0x2, 0x2, 0x3de, 0x3df, 0x3, 0x2, 0x2, 0x2, 0x3df, 
       0x3e1, 0x7, 0x133, 0x2, 0x2, 0x3e0, 0x3e2, 0x5, 0x34, 0x1b, 0x2, 
       0x3e1, 0x3e0, 0x3, 0x2, 0x2, 0x2, 0x3e1, 0x3e2, 0x3, 0x2, 0x2, 0x2, 
       0x3e2, 0x3e3, 0x3, 0x2, 0x2, 0x2, 0x3e3, 0x3e5, 0x7, 0x134, 0x2, 
       0x2, 0x3e4, 0x3e6, 0x7, 0x9d, 0x2, 0x2, 0x3e5, 0x3e4, 0x3, 0x2, 0x2, 
       0x2, 0x3e5, 0x3e6, 0x3, 0x2, 0x2, 0x2, 0x3e6, 0x3e8, 0x3, 0x2, 0x2, 
       0x2, 0x3e7, 0x3e9, 0x5, 0x38, 0x1d, 0x2, 0x3e8, 0x3e7, 0x3, 0x2, 
       0x2, 0x2, 0x3e8, 0x3e9, 0x3, 0x2, 0x2, 0x2, 0x3e9, 0xbb, 0x3, 0x2, 
       0x2, 0x2, 0x3ea, 0x3eb, 0x5, 0xba, 0x5e, 0x2, 0x3eb, 0x3ec, 0x5, 
       0x48, 0x25, 0x2, 0x3ec, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x3ed, 0x3ee, 0x5, 
       0xba, 0x5e, 0x2, 0x3ee, 0x3ef, 0x7, 0x151, 0x2, 0x2, 0x3ef, 0xbf, 
       0x3, 0x2, 0x2, 0x2, 0x3f0, 0x3f3, 0x5, 0x6, 0x4, 0x2, 0x3f1, 0x3f3, 
       0x5, 0x28, 0x15, 0x2, 0x3f2, 0x3f0, 0x3, 0x2, 0x2, 0x2, 0x3f2, 0x3f1, 
       0x3, 0x2, 0x2, 0x2, 0x3f3, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x3f4, 0x3f5, 
       0x7, 0x163, 0x2, 0x2, 0x3f5, 0x3f7, 0x7, 0x173, 0x2, 0x2, 0x3f6, 
       0x3f8, 0x5, 0xd0, 0x69, 0x2, 0x3f7, 0x3f6, 0x3, 0x2, 0x2, 0x2, 0x3f7, 
       0x3f8, 0x3, 0x2, 0x2, 0x2, 0x3f8, 0x3f9, 0x3, 0x2, 0x2, 0x2, 0x3f9, 
       0x3fa, 0x7, 0x151, 0x2, 0x2, 0x3fa, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x3fb, 
       0x3fc, 0x7, 0x165, 0x2, 0x2, 0x3fc, 0x3fd, 0x5, 0x7e, 0x40, 0x2, 
       0x3fd, 0x3fe, 0x7, 0x173, 0x2, 0x2, 0x3fe, 0x3ff, 0x7, 0x151, 0x2, 
       0x2, 0x3ff, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x400, 0x401, 0x7, 0x164, 0x2, 
       0x2, 0x401, 0x402, 0x7, 0x173, 0x2, 0x2, 0x402, 0x403, 0x7, 0x153, 
       0x2, 0x2, 0x403, 0x404, 0x5, 0x7e, 0x40, 0x2, 0x404, 0x405, 0x7, 
       0x151, 0x2, 0x2, 0x405, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x406, 0x409, 0x5, 
       0xc6, 0x64, 0x2, 0x407, 0x409, 0x5, 0xc4, 0x63, 0x2, 0x408, 0x406, 
       0x3, 0x2, 0x2, 0x2, 0x408, 0x407, 0x3, 0x2, 0x2, 0x2, 0x409, 0xc9, 
       0x3, 0x2, 0x2, 0x2, 0x40a, 0x40b, 0x7, 0x167, 0x2, 0x2, 0x40b, 0x40e, 
       0x7, 0x133, 0x2, 0x2, 0x40c, 0x40f, 0x5, 0x5a, 0x2e, 0x2, 0x40d, 
       0x40f, 0x5, 0x7e, 0x40, 0x2, 0x40e, 0x40c, 0x3, 0x2, 0x2, 0x2, 0x40e, 
       0x40d, 0x3, 0x2, 0x2, 0x2, 0x40f, 0x410, 0x3, 0x2, 0x2, 0x2, 0x410, 
       0x413, 0x7, 0x134, 0x2, 0x2, 0x411, 0x412, 0x7, 0x150, 0x2, 0x2, 
       0x412, 0x414, 0x5, 0x6, 0x4, 0x2, 0x413, 0x411, 0x3, 0x2, 0x2, 0x2, 
       0x413, 0x414, 0x3, 0x2, 0x2, 0x2, 0x414, 0xcb, 0x3, 0x2, 0x2, 0x2, 
       0x415, 0x416, 0x7, 0x13a, 0x2, 0x2, 0x416, 0x41b, 0x5, 0xce, 0x68, 
       0x2, 0x417, 0x418, 0x7, 0x152, 0x2, 0x2, 0x418, 0x41a, 0x5, 0xce, 
       0x68, 0x2, 0x419, 0x417, 0x3, 0x2, 0x2, 0x2, 0x41a, 0x41d, 0x3, 0x2, 
       0x2, 0x2, 0x41b, 0x419, 0x3, 0x2, 0x2, 0x2, 0x41b, 0x41c, 0x3, 0x2, 
       0x2, 0x2, 0x41c, 0x41e, 0x3, 0x2, 0x2, 0x2, 0x41d, 0x41b, 0x3, 0x2, 
       0x2, 0x2, 0x41e, 0x41f, 0x7, 0x13c, 0x2, 0x2, 0x41f, 0xcd, 0x3, 0x2, 
       0x2, 0x2, 0x420, 0x422, 0x7, 0x173, 0x2, 0x2, 0x421, 0x423, 0x5, 
       0xd0, 0x69, 0x2, 0x422, 0x421, 0x3, 0x2, 0x2, 0x2, 0x422, 0x423, 
       0x3, 0x2, 0x2, 0x2, 0x423, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x424, 0x425, 
       0x7, 0x14f, 0x2, 0x2, 0x425, 0x426, 0x5, 0xc0, 0x61, 0x2, 0x426, 
       0xd1, 0x3, 0x2, 0x2, 0x2, 0x427, 0x428, 0x7, 0x166, 0x2, 0x2, 0x428, 
       0xd3, 0x3, 0x2, 0x2, 0x2, 0x429, 0x42a, 0x5, 0xbe, 0x60, 0x2, 0x42a, 
       0xd5, 0x3, 0x2, 0x2, 0x2, 0x42b, 0x42d, 0x5, 0x46, 0x24, 0x2, 0x42c, 
       0x42b, 0x3, 0x2, 0x2, 0x2, 0x42d, 0x430, 0x3, 0x2, 0x2, 0x2, 0x42e, 
       0x42c, 0x3, 0x2, 0x2, 0x2, 0x42e, 0x42f, 0x3, 0x2, 0x2, 0x2, 0x42f, 
       0x431, 0x3, 0x2, 0x2, 0x2, 0x430, 0x42e, 0x3, 0x2, 0x2, 0x2, 0x431, 
       0x432, 0x5, 0xd4, 0x6b, 0x2, 0x432, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x433, 
       0x434, 0x5, 0xbc, 0x5f, 0x2, 0x434, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x435, 
       0x437, 0x5, 0x46, 0x24, 0x2, 0x436, 0x435, 0x3, 0x2, 0x2, 0x2, 0x437, 
       0x43a, 0x3, 0x2, 0x2, 0x2, 0x438, 0x436, 0x3, 0x2, 0x2, 0x2, 0x438, 
       0x439, 0x3, 0x2, 0x2, 0x2, 0x439, 0x43b, 0x3, 0x2, 0x2, 0x2, 0x43a, 
       0x438, 0x3, 0x2, 0x2, 0x2, 0x43b, 0x43c, 0x5, 0xd8, 0x6d, 0x2, 0x43c, 
       0xdb, 0x3, 0x2, 0x2, 0x2, 0x43d, 0x43e, 0x7, 0x16c, 0x2, 0x2, 0x43e, 
       0x43f, 0x7, 0x133, 0x2, 0x2, 0x43f, 0x440, 0x7, 0x176, 0x2, 0x2, 
       0x440, 0x441, 0x7, 0x134, 0x2, 0x2, 0x441, 0x44e, 0x7, 0x151, 0x2, 
       0x2, 0x442, 0x443, 0x7, 0x16d, 0x2, 0x2, 0x443, 0x446, 0x7, 0x133, 
       0x2, 0x2, 0x444, 0x447, 0x5, 0x6, 0x4, 0x2, 0x445, 0x447, 0x5, 0xca, 
       0x66, 0x2, 0x446, 0x444, 0x3, 0x2, 0x2, 0x2, 0x446, 0x445, 0x3, 0x2, 
       0x2, 0x2, 0x447, 0x448, 0x3, 0x2, 0x2, 0x2, 0x448, 0x449, 0x7, 0x152, 
       0x2, 0x2, 0x449, 0x44a, 0x9, 0x17, 0x2, 0x2, 0x44a, 0x44b, 0x7, 0x134, 
       0x2, 0x2, 0x44b, 0x44c, 0x7, 0x151, 0x2, 0x2, 0x44c, 0x44e, 0x3, 
       0x2, 0x2, 0x2, 0x44d, 0x43d, 0x3, 0x2, 0x2, 0x2, 0x44d, 0x442, 0x3, 
       0x2, 0x2, 0x2, 0x44e, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x44f, 0x451, 0x7, 
       0x9e, 0x2, 0x2, 0x450, 0x44f, 0x3, 0x2, 0x2, 0x2, 0x450, 0x451, 0x3, 
       0x2, 0x2, 0x2, 0x451, 0x452, 0x3, 0x2, 0x2, 0x2, 0x452, 0x453, 0x7, 
       0x16b, 0x2, 0x2, 0x453, 0x456, 0x7, 0x173, 0x2, 0x2, 0x454, 0x455, 
       0x7, 0x14f, 0x2, 0x2, 0x455, 0x457, 0x7, 0x173, 0x2, 0x2, 0x456, 
       0x454, 0x3, 0x2, 0x2, 0x2, 0x456, 0x457, 0x3, 0x2, 0x2, 0x2, 0x457, 
       0x458, 0x3, 0x2, 0x2, 0x2, 0x458, 0x45c, 0x7, 0x137, 0x2, 0x2, 0x459, 
       0x45b, 0x5, 0xe2, 0x72, 0x2, 0x45a, 0x459, 0x3, 0x2, 0x2, 0x2, 0x45b, 
       0x45e, 0x3, 0x2, 0x2, 0x2, 0x45c, 0x45a, 0x3, 0x2, 0x2, 0x2, 0x45c, 
       0x45d, 0x3, 0x2, 0x2, 0x2, 0x45d, 0x45f, 0x3, 0x2, 0x2, 0x2, 0x45e, 
       0x45c, 0x3, 0x2, 0x2, 0x2, 0x45f, 0x460, 0x7, 0x138, 0x2, 0x2, 0x460, 
       0xdf, 0x3, 0x2, 0x2, 0x2, 0x461, 0x463, 0x5, 0x46, 0x24, 0x2, 0x462, 
       0x461, 0x3, 0x2, 0x2, 0x2, 0x463, 0x466, 0x3, 0x2, 0x2, 0x2, 0x464, 
       0x462, 0x3, 0x2, 0x2, 0x2, 0x464, 0x465, 0x3, 0x2, 0x2, 0x2, 0x465, 
       0x467, 0x3, 0x2, 0x2, 0x2, 0x466, 0x464, 0x3, 0x2, 0x2, 0x2, 0x467, 
       0x468, 0x5, 0xde, 0x70, 0x2, 0x468, 0xe1, 0x3, 0x2, 0x2, 0x2, 0x469, 
       0x471, 0x5, 0x16, 0xc, 0x2, 0x46a, 0x471, 0x5, 0xd6, 0x6c, 0x2, 0x46b, 
       0x471, 0x5, 0xda, 0x6e, 0x2, 0x46c, 0x471, 0x5, 0x32, 0x1a, 0x2, 
       0x46d, 0x471, 0x5, 0x1e, 0x10, 0x2, 0x46e, 0x471, 0x5, 0xc8, 0x65, 
       0x2, 0x46f, 0x471, 0x5, 0x46, 0x24, 0x2, 0x470, 0x469, 0x3, 0x2, 
       0x2, 0x2, 0x470, 0x46a, 0x3, 0x2, 0x2, 0x2, 0x470, 0x46b, 0x3, 0x2, 
       0x2, 0x2, 0x470, 0x46c, 0x3, 0x2, 0x2, 0x2, 0x470, 0x46d, 0x3, 0x2, 
       0x2, 0x2, 0x470, 0x46e, 0x3, 0x2, 0x2, 0x2, 0x470, 0x46f, 0x3, 0x2, 
       0x2, 0x2, 0x471, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x472, 0x473, 0x7, 0x16a, 
       0x2, 0x2, 0x473, 0x474, 0x7, 0x173, 0x2, 0x2, 0x474, 0x475, 0x5, 
       0xe8, 0x75, 0x2, 0x475, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x476, 0x478, 0x5, 
       0x46, 0x24, 0x2, 0x477, 0x476, 0x3, 0x2, 0x2, 0x2, 0x478, 0x47b, 
       0x3, 0x2, 0x2, 0x2, 0x479, 0x477, 0x3, 0x2, 0x2, 0x2, 0x479, 0x47a, 
       0x3, 0x2, 0x2, 0x2, 0x47a, 0x47c, 0x3, 0x2, 0x2, 0x2, 0x47b, 0x479, 
       0x3, 0x2, 0x2, 0x2, 0x47c, 0x47d, 0x5, 0xe4, 0x73, 0x2, 0x47d, 0xe7, 
       0x3, 0x2, 0x2, 0x2, 0x47e, 0x482, 0x7, 0x137, 0x2, 0x2, 0x47f, 0x481, 
       0x5, 0xea, 0x76, 0x2, 0x480, 0x47f, 0x3, 0x2, 0x2, 0x2, 0x481, 0x484, 
       0x3, 0x2, 0x2, 0x2, 0x482, 0x480, 0x3, 0x2, 0x2, 0x2, 0x482, 0x483, 
       0x3, 0x2, 0x2, 0x2, 0x483, 0x485, 0x3, 0x2, 0x2, 0x2, 0x484, 0x482, 
       0x3, 0x2, 0x2, 0x2, 0x485, 0x486, 0x7, 0x138, 0x2, 0x2, 0x486, 0xe9, 
       0x3, 0x2, 0x2, 0x2, 0x487, 0x488, 0x7, 0x168, 0x2, 0x2, 0x488, 0x489, 
       0x7, 0x153, 0x2, 0x2, 0x489, 0x48a, 0x5, 0xb8, 0x5d, 0x2, 0x48a, 
       0x48b, 0x7, 0x151, 0x2, 0x2, 0x48b, 0x492, 0x3, 0x2, 0x2, 0x2, 0x48c, 
       0x48d, 0x7, 0x169, 0x2, 0x2, 0x48d, 0x48e, 0x7, 0x153, 0x2, 0x2, 
       0x48e, 0x48f, 0x5, 0xb8, 0x5d, 0x2, 0x48f, 0x490, 0x7, 0x151, 0x2, 
       0x2, 0x490, 0x492, 0x3, 0x2, 0x2, 0x2, 0x491, 0x487, 0x3, 0x2, 0x2, 
       0x2, 0x491, 0x48c, 0x3, 0x2, 0x2, 0x2, 0x492, 0xeb, 0x3, 0x2, 0x2, 
       0x2, 0x493, 0x497, 0x7, 0x137, 0x2, 0x2, 0x494, 0x496, 0x5, 0xee, 
       0x78, 0x2, 0x495, 0x494, 0x3, 0x2, 0x2, 0x2, 0x496, 0x499, 0x3, 0x2, 
       0x2, 0x2, 0x497, 0x495, 0x3, 0x2, 0x2, 0x2, 0x497, 0x498, 0x3, 0x2, 
       0x2, 0x2, 0x498, 0x49a, 0x3, 0x2, 0x2, 0x2, 0x499, 0x497, 0x3, 0x2, 
       0x2, 0x2, 0x49a, 0x49b, 0x7, 0x138, 0x2, 0x2, 0x49b, 0xed, 0x3, 0x2, 
       0x2, 0x2, 0x49c, 0x4aa, 0x5, 0xf0, 0x79, 0x2, 0x49d, 0x4aa, 0x5, 
       0xf2, 0x7a, 0x2, 0x49e, 0x4aa, 0x5, 0xf4, 0x7b, 0x2, 0x49f, 0x4aa, 
       0x5, 0xf6, 0x7c, 0x2, 0x4a0, 0x4aa, 0x5, 0xf8, 0x7d, 0x2, 0x4a1, 
       0x4aa, 0x5, 0xfa, 0x7e, 0x2, 0x4a2, 0x4aa, 0x5, 0xfc, 0x7f, 0x2, 
       0x4a3, 0x4aa, 0x5, 0xfe, 0x80, 0x2, 0x4a4, 0x4aa, 0x5, 0x100, 0x81, 
       0x2, 0x4a5, 0x4aa, 0x5, 0x102, 0x82, 0x2, 0x4a6, 0x4aa, 0x5, 0x104, 
       0x83, 0x2, 0x4a7, 0x4aa, 0x5, 0x106, 0x84, 0x2, 0x4a8, 0x4aa, 0x5, 
       0x108, 0x85, 0x2, 0x4a9, 0x49c, 0x3, 0x2, 0x2, 0x2, 0x4a9, 0x49d, 
       0x3, 0x2, 0x2, 0x2, 0x4a9, 0x49e, 0x3, 0x2, 0x2, 0x2, 0x4a9, 0x49f, 
       0x3, 0x2, 0x2, 0x2, 0x4a9, 0x4a0, 0x3, 0x2, 0x2, 0x2, 0x4a9, 0x4a1, 
       0x3, 0x2, 0x2, 0x2, 0x4a9, 0x4a2, 0x3, 0x2, 0x2, 0x2, 0x4a9, 0x4a3, 
       0x3, 0x2, 0x2, 0x2, 0x4a9, 0x4a4, 0x3, 0x2, 0x2, 0x2, 0x4a9, 0x4a5, 
       0x3, 0x2, 0x2, 0x2, 0x4a9, 0x4a6, 0x3, 0x2, 0x2, 0x2, 0x4a9, 0x4a7, 
       0x3, 0x2, 0x2, 0x2, 0x4a9, 0x4a8, 0x3, 0x2, 0x2, 0x2, 0x4aa, 0xef, 
       0x3, 0x2, 0x2, 0x2, 0x4ab, 0x4ac, 0x7, 0x117, 0x2, 0x2, 0x4ac, 0x4ad, 
       0x7, 0x153, 0x2, 0x2, 0x4ad, 0x4ae, 0x7, 0x174, 0x2, 0x2, 0x4ae, 
       0x4af, 0x7, 0x151, 0x2, 0x2, 0x4af, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x4b0, 
       0x4b1, 0x7, 0x114, 0x2, 0x2, 0x4b1, 0x4b2, 0x7, 0x153, 0x2, 0x2, 
       0x4b2, 0x4b3, 0x5, 0x10a, 0x86, 0x2, 0x4b3, 0x4b4, 0x7, 0x151, 0x2, 
       0x2, 0x4b4, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x4b5, 0x4b6, 0x7, 0x115, 0x2, 
       0x2, 0x4b6, 0x4b7, 0x7, 0x153, 0x2, 0x2, 0x4b7, 0x4b8, 0x5, 0x10a, 
       0x86, 0x2, 0x4b8, 0x4b9, 0x7, 0x151, 0x2, 0x2, 0x4b9, 0xf5, 0x3, 
       0x2, 0x2, 0x2, 0x4ba, 0x4bb, 0x7, 0x116, 0x2, 0x2, 0x4bb, 0x4bc, 
       0x7, 0x153, 0x2, 0x2, 0x4bc, 0x4bd, 0x5, 0x10a, 0x86, 0x2, 0x4bd, 
       0x4be, 0x7, 0x151, 0x2, 0x2, 0x4be, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x4bf, 
       0x4c0, 0x7, 0x11c, 0x2, 0x2, 0x4c0, 0x4c1, 0x7, 0x153, 0x2, 0x2, 
       0x4c1, 0x4c2, 0x5, 0x10c, 0x87, 0x2, 0x4c2, 0x4c3, 0x7, 0x151, 0x2, 
       0x2, 0x4c3, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x4c4, 0x4c5, 0x7, 0x11b, 0x2, 
       0x2, 0x4c5, 0x4c6, 0x7, 0x153, 0x2, 0x2, 0x4c6, 0x4c7, 0x5, 0x110, 
       0x89, 0x2, 0x4c7, 0x4c8, 0x7, 0x151, 0x2, 0x2, 0x4c8, 0xfb, 0x3, 
       0x2, 0x2, 0x2, 0x4c9, 0x4ca, 0x7, 0x110, 0x2, 0x2, 0x4ca, 0x4cb, 
       0x7, 0x153, 0x2, 0x2, 0x4cb, 0x4cc, 0x5, 0x10e, 0x88, 0x2, 0x4cc, 
       0x4cd, 0x7, 0x151, 0x2, 0x2, 0x4cd, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x4ce, 
       0x4cf, 0x7, 0x111, 0x2, 0x2, 0x4cf, 0x4d0, 0x7, 0x153, 0x2, 0x2, 
       0x4d0, 0x4d1, 0x5, 0x10e, 0x88, 0x2, 0x4d1, 0x4d2, 0x7, 0x151, 0x2, 
       0x2, 0x4d2, 0xff, 0x3, 0x2, 0x2, 0x2, 0x4d3, 0x4d4, 0x7, 0x112, 0x2, 
       0x2, 0x4d4, 0x4d5, 0x7, 0x153, 0x2, 0x2, 0x4d5, 0x4d6, 0x5, 0x10e, 
       0x88, 0x2, 0x4d6, 0x4d7, 0x7, 0x151, 0x2, 0x2, 0x4d7, 0x101, 0x3, 
       0x2, 0x2, 0x2, 0x4d8, 0x4d9, 0x7, 0x119, 0x2, 0x2, 0x4d9, 0x4da, 
       0x7, 0x153, 0x2, 0x2, 0x4da, 0x4db, 0x7, 0x175, 0x2, 0x2, 0x4db, 
       0x4dc, 0x7, 0x151, 0x2, 0x2, 0x4dc, 0x103, 0x3, 0x2, 0x2, 0x2, 0x4dd, 
       0x4de, 0x7, 0x118, 0x2, 0x2, 0x4de, 0x4df, 0x7, 0x153, 0x2, 0x2, 
       0x4df, 0x4e0, 0x7, 0x175, 0x2, 0x2, 0x4e0, 0x4e1, 0x7, 0x151, 0x2, 
       0x2, 0x4e1, 0x105, 0x3, 0x2, 0x2, 0x2, 0x4e2, 0x4e3, 0x7, 0x11a, 
       0x2, 0x2, 0x4e3, 0x4e4, 0x7, 0x153, 0x2, 0x2, 0x4e4, 0x4e5, 0x7, 
       0x175, 0x2, 0x2, 0x4e5, 0x4e6, 0x7, 0x151, 0x2, 0x2, 0x4e6, 0x107, 
       0x3, 0x2, 0x2, 0x2, 0x4e7, 0x4e8, 0x7, 0x113, 0x2, 0x2, 0x4e8, 0x4e9, 
       0x7, 0x153, 0x2, 0x2, 0x4e9, 0x4ea, 0x5, 0x112, 0x8a, 0x2, 0x4ea, 
       0x4eb, 0x7, 0x151, 0x2, 0x2, 0x4eb, 0x109, 0x3, 0x2, 0x2, 0x2, 0x4ec, 
       0x4ed, 0x9, 0x18, 0x2, 0x2, 0x4ed, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x4ee, 
       0x4ef, 0x9, 0x19, 0x2, 0x2, 0x4ef, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x4f0, 
       0x4f1, 0x9, 0x1a, 0x2, 0x2, 0x4f1, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x4f2, 
       0x4f3, 0x9, 0x1b, 0x2, 0x2, 0x4f3, 0x111, 0x3, 0x2, 0x2, 0x2, 0x4f4, 
       0x4f5, 0x9, 0x1c, 0x2, 0x2, 0x4f5, 0x113, 0x3, 0x2, 0x2, 0x2, 0x6a, 
       0x117, 0x126, 0x12a, 0x132, 0x138, 0x141, 0x147, 0x152, 0x15b, 0x166, 
       0x171, 0x176, 0x183, 0x18a, 0x191, 0x195, 0x19a, 0x1a0, 0x1ab, 0x1b3, 
       0x1c3, 0x1c6, 0x1cb, 0x1d0, 0x1de, 0x1e9, 0x1ed, 0x1f1, 0x1f5, 0x1f7, 
       0x203, 0x20b, 0x211, 0x219, 0x21d, 0x225, 0x22a, 0x22f, 0x235, 0x242, 
       0x24b, 0x250, 0x25c, 0x268, 0x276, 0x27c, 0x280, 0x284, 0x290, 0x295, 
       0x2a9, 0x2b2, 0x2ce, 0x2d0, 0x2db, 0x2e8, 0x2f1, 0x2f7, 0x302, 0x308, 
       0x30c, 0x30f, 0x312, 0x315, 0x31d, 0x324, 0x32b, 0x32f, 0x333, 0x33d, 
       0x344, 0x34e, 0x362, 0x39e, 0x3ad, 0x3b2, 0x3d1, 0x3d3, 0x3d9, 0x3dd, 
       0x3e1, 0x3e5, 0x3e8, 0x3f2, 0x3f7, 0x408, 0x40e, 0x413, 0x41b, 0x422, 
       0x42e, 0x438, 0x446, 0x44d, 0x450, 0x456, 0x45c, 0x464, 0x470, 0x479, 
       0x482, 0x491, 0x497, 0x4a9, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

azslParser::Initializer azslParser::_init;
