#!/bin/bash


#
# Copyright (c) Contributors to the Open 3D Engine Project.
# For complete copyright and license terms please see the LICENSE at the root of this distribution.
#
# SPDX-License-Identifier: Apache-2.0 OR MIT
#

# Build

CMAKE='cmake'
BUILD='build'
mkdir ${BUILD}

mkdir bin
LINUX_BIN_DIR='bin/linux'
mkdir ${LINUX_BIN_DIR}

CONFIGURATIONS=("Release" "Debug")
MY_CC="/usr/bin/gcc"
MY_CXX="/usr/bin/g++"
EXTRA_CXX_OPTION=""

NUM_ARGS=$#
if [ $NUM_ARGS -eq 1 ]; then
    if [ $1 = "clang" ]; then
        MY_CC="clang-12"
        MY_CXX="clang++-12"
	EXTRA_CXX_OPTION="-DWITH_LIBCXX=Off" #Required by ANTLR to avoid failure to find std c++ include files like <algorithm>, etc.
    fi
fi

for CONFIG in ${CONFIGURATIONS[@]}; do
    echo ""
    echo "Configuring for $CONFIG build..."
    echo ""
    BUILD_DIR=$BUILD/$CONFIG
    $CMAKE -G "Unix Makefiles" -S "src/" -B $BUILD_DIR $EXTRA_CXX_OPTION -DCMAKE_BUILD_TYPE=$CONFIG -DCMAKE_C_COMPILER=$MY_CC -DCMAKE_CXX_COMPILER=$MY_CXX

    echo "Will proceed to build in $CONFIG configuration..."
    $CMAKE --build $BUILD_DIR --target azslc --config $CONFIG -j 16

    pushd $BUILD_DIR
    echo "Executing azslc in $CONFIG version:"
    ./azslc --version
    popd

    echo "Deploying azslc $CONFIG binary..."
    CONFIG_LCASE="$(tr [A-Z] [a-z] <<< "$CONFIG")"
    DEPLOY_DIR=$LINUX_BIN_DIR/$CONFIG_LCASE
    mkdir $DEPLOY_DIR
    cp $BUILD_DIR/azslc $DEPLOY_DIR/
    echo "azslc was deployed to $DEPLOY_DIR"
done

