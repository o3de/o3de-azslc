@ECHO OFF
REM 
REM Copyright (c) Contributors to the Open 3D Engine Project.
REM For complete copyright and license terms please see the LICENSE at the root of this distribution.
REM 
REM SPDX-License-Identifier: Apache-2.0 OR MIT
REM

set platform=win
set architecture=x64
set generator="Visual Studio 16 2019"

set curr_dir=%~dp0
set src_path=%curr_dir%\src
set build_path=%curr_dir%\build\%platform%_%architecture%
set cmake_exe=cmake

REM boost-regex is required on windows only because docopt needs a better std::regex implementation
REM than then one provided by visual studio.
REM ----------------------------------
REM Pulling boost from git
python pull_from_git.py --git-url https://github.com/boostorg/boost.git --destination-dir src/external --git-tag boost-1.70.0 || goto :error

REM Compiling boost-regex multithreaded dynamic libraries
cd src\external\boost
CALL .\bootstrap.bat
.\b2 threading=multi link=static,shared runtime-link=shared address-model=64 -j64 --with-regex || goto :error
cd ..\..\..\

REM ----------------------------------
REM Pulling ANTLR from git
python pull_from_git.py --git-url https://github.com/galibzon/antlr4.git --destination-dir src/external --git-tag o3de-4.7.1 || goto :error

if not exist "%build_path%" mkdir "%build_path%"
cd "%build_path%" || goto :error

REM ----------------------------------
REM Generate ANTLR runtime project
if not exist external mkdir external
cd external
if not exist antlr4 mkdir antlr4
cd antlr4
if not exist runtime mkdir runtime
cd runtime
if not exist Cpp mkdir Cpp
cd Cpp

%cmake_exe% -G %generator% "%src_path%\external\antlr4\runtime\Cpp\" || goto :error

python -c "import sys; sys.stdout.write( open(sys.argv[1], 'r', encoding='utf-8_sig').read().replace('</RuntimeLibrary>', 'DLL</RuntimeLibrary>'))" runtime\antlr4_static.vcxproj > runtime\antlr4_static2.vcxproj || goto :error
copy /Y "runtime\antlr4_static2.vcxproj" "runtime\antlr4_static.vcxproj"

REM ----------------------------------
REM Generate AZSLc project
cd "%build_path%"

%cmake_exe% -G %generator% "%src_path%" || goto :error

if [%1] == [] pause
goto :EOF

:error
@echo Failed to prepare solution :(
cd "%curr_dir%"
if [%1] == [] pause
exit /b 1
