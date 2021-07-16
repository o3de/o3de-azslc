@echo off
set DEVPATH=%1
set MCPP=%DEVPATH%\Gems\Atom\Asset\Shader\External\mcpp\2.7.2-az.1\lib\win_x64\mcpp.exe
set AZSLC=..\..\..\bin\win_x64\Release\azslc.exe
set DXC=%DEVPATH%\Gems\Atom\Asset\Shader\External\DirectXShaderCompiler\2020.08.07\bin\win_x64\Release\dxc.exe"

set AZSL=%2
set PREPROCESSED=%AZSL%.mcpp
set HLSL=%PREPROCESSED%.hlsl

rem %MCPP% %AZSL% > %PREPROCESSED%

%AZSLC% %PREPROCESSED% -o %HLSL%

rem %DXC% -help
rem %DXC% -T cs_6_2 %HLSL%
rem @echo on
rem %DXC% -T cs_6_2 main.azsl.mcpp.hlsl2.hlsl