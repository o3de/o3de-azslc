REM this batch is a helper for developers who installed ANTLR4 in their system (and JDK),
REM to launch the ANTLR SDK Tool: GRUN. Grun is a trivial client of the Antlr4 API,
REM it just parses a source. It can output the AST in text mode, with -ast switch.
REM or, like in this batch, a window with a graph visualizer with the -gui switch.
REM This helps when working with the grammar file azslParser.g4 to see what happens
REM to the parse tree.
@echo off
@echo launch_grun is a helper to visualize parse trees from .azsl files
setlocal
if "%~1" == "" (
    set /p thepath="Enter path to file to compile: "
) else (
    set thepath=%~1
)
pushd

cd "%~dp0\src\generated\java"
set antlr4=java org.antlr.v4.Tool
set grun=java org.antlr.v4.gui.TestRig
%grun% azsl compilationUnit -gui "%thepath%"

popd
endlocal