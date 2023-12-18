@ECHO OFF
REM 
REM Copyright (c) Contributors to the Open 3D Engine Project.
REM For complete copyright and license terms please see the LICENSE at the root of this distribution.
REM 
REM SPDX-License-Identifier: Apache-2.0 OR MIT
REM

set platform=win
set architecture=x64
set generator="Visual Studio 17 2022"

set curr_dir=%~dp0
set src_path=%curr_dir%\src
set build_path=%curr_dir%\build\%platform%_%architecture%
set cmake_exe=cmake

if not exist "%build_path%" mkdir "%build_path%"
cd "%build_path%" || goto :error

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
