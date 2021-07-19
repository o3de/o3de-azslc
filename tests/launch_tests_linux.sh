#!/bin/bash

#
# Copyright (c) Contributors to the Open 3D Engine Project.
# For complete copyright and license terms please see the LICENSE at the root of this distribution.
# 
# SPDX-License-Identifier: Apache-2.0 OR MIT
#

azslc_binary=../bin/linux/release/azslc

if [! -f "$azslc_binary"]; then
  echo "AZSLc not found under $azslc_binary"
  exit 1
fi

if [$1 -eq ""]
then
  python testapp.py --silent --compiler "$azslc_binary" --path Syntax Semantic Advanced

else
  python testapp.py --compiler "$azslc_binary" --path "$@"
fi
