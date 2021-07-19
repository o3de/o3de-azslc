#!/bin/bash

#
# Copyright (c) Contributors to the Open 3D Engine Project.
# For complete copyright and license terms please see the LICENSE at the root of this distribution.
# 
# SPDX-License-Identifier: Apache-2.0 OR MIT
#

export PYTHONPATH=${PYTHONPATH}:`pwd`
azslc_binary=../bin/darwin/debug/azslc

if [! -f "$azslc_binary"]; then
  echo "AZSLc not found under $azslc_binary"
  exit 1
fi

if [ -z "$1" ]
then
  python testapp.py --silent --compiler "$azslc_binary" --path Syntax Semantic Advanced
else
  python testapp.py --compiler "$azslc_binary" --path "$@"
fi
