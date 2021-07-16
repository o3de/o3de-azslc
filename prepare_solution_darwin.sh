#!/bin/bash

#
# Copyright (c) Contributors to the Open 3D Engine Project.
# For complete copyright and license terms please see the LICENSE at the root of this distribution.
# 
# SPDX-License-Identifier: Apache-2.0 OR MIT
#

# Build

mkdir build
mkdir build/release
mkdir build/debug
mkdir build/release/external
mkdir build/release/external/antlr-runtime-cpp
mkdir build/debug/external
mkdir build/debug/external/antlr-runtime-cpp

CMAKE='cmake'
if ! command -v $CMAKE &> /dev/null
then
    OLDCMAKE=$CMAKE
    CMAKE='-/Applications/CMake.app/Contents/bin/cmake'
    echo "$OLDCMAKE not found in PATH. Defaulting to: $CMAKE"
fi

echo "Pulling ANTLR from git..."
python pull_from_git.py --git-url https://github.com/galibzon/antlr4.git --destination-dir src/external --git-tag o3de-4.7.1

$CMAKE -DMAKE_BUILD_TYPE=Release -S "src/external/antlr4/runtime/Cpp/" -B "build/release/external/antlr4/runtime/Cpp/"
pushd build/release/external/antlr4/runtime/Cpp
make -j16
popd

$CMAKE -DMAKE_BUILD_TYPE=Release -S "src/" -B "build/release"
pushd build/release
echo "Building release..."
make -j16
ls
echo "Release version:"
./azslc --version
popd

$CMAKE -DMAKE_BUILD_TYPE=Debug -S "src/external/antlr4/runtime/Cpp/" -B "build/debug/external/antlr4/runtime/Cpp/"
pushd build/debug/external/antlr4/runtime/Cpp
make -j16
popd

$CMAKE -DMAKE_BUILD_TYPE=Debug -S "src/" -B "build/debug"
pushd build/debug
echo "Building debug..."
make -j16
ls
echo "Debug version:"
./azslc --version
popd

# Deploy
mkdir bin
mkdir bin/darwin
mkdir bin/darwin/release
mkdir bin/darwin/debug
cp build/release/azslc bin/darwin/release/azslc
cp build/debug/azslc bin/darwin/debug/azslc
