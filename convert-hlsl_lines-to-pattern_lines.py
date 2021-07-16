#!/usr/bin/python
# -*- coding: utf-8 -*-
"""
Copyright (c) Contributors to the Open 3D Engine Project.
For complete copyright and license terms please see the LICENSE at the root of this distribution.

SPDX-License-Identifier: Apache-2.0 OR MIT
"""

import io
import re

def GetPatternLineFromHlslLine(line):
    """
    Returns a string, with the pattern version of the input string.
    Example:
    The following HLSL line produced by AZSLc:
        float2 samplePos = ::PassSrg_GetSamplePosition ( IN . m_sampleIndex ) ;
    Will become like this when converted to pattern line as required by testhelper.verifyEmissionPattern():
        "float2 samplePos = :: PassSrg_GetSamplePosition ( IN . m_sampleIndex ) ;"
    The '"' characters are also included in the returned string, which is required
    by testhelper.verifyEmissionPattern().
    """
    line = line.rstrip("\r\n")
    if line == "":
        return None
    allidents = re.split("([a-zA-Z_]+[a-zA-Z_0-9]*)|(;)|(\()|(\))|(<)|(>)|( )", line)
    allidents = filter(lambda s: s is not None and s!="" and s!=" ", allidents)  # remove empties from ['', 'code', '', 'piece']...
    line = " ".join(allidents)
    return f"\"{line}\""
    

def GeneratePatternLinesFromHlslFile(filePath):
    """
    Returns all lines in the file named @filePath
    as pattern lines.
    In general, @filePath is output HLSL code produced by AZSLc. 
    """
    resultLines = []
    with io.open(filePath, "r", encoding="latin-1") as f:
        for line in f:
            predicateLine = GetPatternLineFromHlslLine(line)
            if not (predicateLine is None): resultLines.append(predicateLine)
    return resultLines


# The main purpose of this helper script is to take
# an HLSL output produced by AZSLc and convert each line
# into a pattern line. The idea is that the pattern
# line version is what is used for emission validation.
# The pattern line version is what is required when testhelper.verifyEmissionPattern() is called.
#
# Example:
# The following HLSL line produced by AZSLc:
#     float2 samplePos = ::PassSrg_GetSamplePosition ( IN . m_sampleIndex ) ;
# Will become like this when converted to pattern line as required by testhelper.verifyEmissionPattern():
#     "float2 samplePos = :: PassSrg_GetSamplePosition ( IN . m_sampleIndex ) ;"
#
# This script is NOT intended to be used during testing,
# it is used to pre-generate/bake data files data that can be used during testing.
if __name__ == "__main__":
    import sys
    HELP = f"{sys.argv[0]} <hlslFile>"
    if len(sys.argv) != 2:
        print(HELP)
        sys.exit(-1)
    filePath = sys.argv[1]
    lines = GeneratePatternLinesFromHlslFile(filePath)
    for line in lines:
        print(line)