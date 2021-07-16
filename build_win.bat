@ECHO OFF
REM 
REM Copyright (c) Contributors to the Open 3D Engine Project.
REM For complete copyright and license terms please see the LICENSE at the root of this distribution.
REM 
REM SPDX-License-Identifier: Apache-2.0 OR MIT
REM

if [%1] == [] goto ShowHelp
goto SetParams

:ShowHelp
echo Builds AZSLc for Windows.
echo.
echo build_win.bat configuration
echo.
echo   configuration     Release or Debug
exit /b 1

:SetParams
set configuration=%1
set platform=win
set architecture=x64

set curr_dir=%~dp0
set build_path=%curr_dir%\build\%platform%_%architecture%
set build_output_path=%build_path%\%configuration%
set output_path=%curr_dir%\bin\%platform%_%architecture%\%configuration%
set cmake_exe=%curr_dir%\..\lib\CMake\bin\cmake.exe

REM Configuration has to be 'Release' or 'Debug'
if ["%configuration%"] == ["Release"] goto Build
if ["%configuration%"] == ["Debug"] goto Build

echo Error: incorrect configuration.
goto ShowHelp

:Build
REM ----------------------------------
REM Prepare Solution in build folder
call prepare_solution_win.bat nopause %2
if %errorlevel% neq 0 goto :error

REM ----------------------------------
REM Build AZSLc project
if not exist "%build_path%" goto :error
cd "%build_path%"

%cmake_exe% --build . --config %configuration% --target azslc || goto :error

if %errorlevel% equ 0 @echo build_win.bat: build ok
cd "%curr_dir%"
exit /b 0

:error
@echo Build failed :(
cd "%curr_dir%"
exit /b 1
