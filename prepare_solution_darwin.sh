#!/bin/bash

#
# Copyright (c) Contributors to the Open 3D Engine Project.
# For complete copyright and license terms please see the LICENSE at the root of this distribution.
# 
# SPDX-License-Identifier: Apache-2.0 OR MIT
#

# Build

BUILD_DIR='build'

mkdir $BUILD_DIR

CMAKE='cmake'
if ! command -v $CMAKE &> /dev/null
then
    OLDCMAKE=$CMAKE
    CMAKE='-/Applications/CMake.app/Contents/bin/cmake'
    echo "$OLDCMAKE not found in PATH. Defaulting to: $CMAKE"
fi

$CMAKE -G "Xcode" -S "src/" -B $BUILD_DIR

echo "Xcode project created successfully."

echo "Will proceed to build in Release configuration..."
$CMAKE --build $BUILD_DIR --target azslc --config Release -j 16

pushd $BUILD_DIR/Release
echo "Release version:"
./azslc --version
popd


echo "Will proceed to build in Debug configuration..."
$CMAKE --build $BUILD_DIR --target azslc --config Debug -j 16

pushd $BUILD_DIR/Debug
echo "Debug version:"
./azslc --version
popd

## Deploy
echo "Deploying Release and Debug binaries..."
mkdir bin
mkdir bin/darwin
mkdir bin/darwin/release
mkdir bin/darwin/debug
cp $BUILD_DIR/Release/azslc bin/darwin/release/azslc
cp $BUILD_DIR/Debug/azslc bin/darwin/debug/azslc
echo "Done!"
