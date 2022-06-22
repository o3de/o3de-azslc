#!/usr/bin/python
# -*- coding: utf-8 -*-
"""
Copyright (c) Contributors to the Open 3D Engine Project.
For complete copyright and license terms please see the LICENSE at the root of this distribution.

SPDX-License-Identifier: Apache-2.0 OR MIT
"""
import sys
import os
sys.path.append("..")
sys.path.append("../..")
from clr import *
import testfuncs

# This test validates SRG Layout emission when using unbounded arrays.
# In particular, valid unbounded arrays should be emitted with
#  "count" = -1
# in the json srg layout.

def verify(thefile, compilerPath, silent):
    j, ok = testfuncs.buildAndGetJson(thefile, compilerPath, silent, ["--srg"])

    if ok:
        predicates = []
        #SRG1
        predicates.append(lambda: j["ShaderResourceGroups"][0]["inputsForSRGConstants"][0]["constantByteOffset"] == 0)
        predicates.append(lambda: j["ShaderResourceGroups"][0]["inputsForSRGConstants"][0]["constantByteSize"]   == 4)
        predicates.append(lambda: j["ShaderResourceGroups"][0]["inputsForSRGConstants"][1]["constantByteOffset"] == 4)
        predicates.append(lambda: j["ShaderResourceGroups"][0]["inputsForSRGConstants"][1]["constantByteSize"]   == 8)

        predicates.append(lambda: j["ShaderResourceGroups"][0]["inputsForBufferViews"][0]["index"] ==  1)
        predicates.append(lambda: j["ShaderResourceGroups"][0]["inputsForBufferViews"][0]["count"] ==  1)
        predicates.append(lambda: j["ShaderResourceGroups"][0]["inputsForBufferViews"][1]["index"] ==  2)
        predicates.append(lambda: j["ShaderResourceGroups"][0]["inputsForBufferViews"][1]["count"] == -1)

        predicates.append(lambda: j["ShaderResourceGroups"][0]["inputsForImageViews"][0]["index"]  ==  0)
        predicates.append(lambda: j["ShaderResourceGroups"][0]["inputsForImageViews"][0]["count"]  ==  1)
        predicates.append(lambda: j["ShaderResourceGroups"][0]["inputsForImageViews"][1]["index"]  ==  1)
        predicates.append(lambda: j["ShaderResourceGroups"][0]["inputsForImageViews"][1]["count"]  == -1)
        predicates.append(lambda: j["ShaderResourceGroups"][0]["inputsForImageViews"][2]["index"]  ==  0)
        predicates.append(lambda: j["ShaderResourceGroups"][0]["inputsForImageViews"][2]["count"]  ==  1)
        predicates.append(lambda: j["ShaderResourceGroups"][0]["inputsForImageViews"][3]["index"]  ==  1)
        predicates.append(lambda: j["ShaderResourceGroups"][0]["inputsForImageViews"][3]["count"]  == -1)

        predicates.append(lambda: j["ShaderResourceGroups"][0]["inputsForSamplers"][0]["index"]    ==  0)
        predicates.append(lambda: j["ShaderResourceGroups"][0]["inputsForSamplers"][0]["count"]    ==  1)
        predicates.append(lambda: j["ShaderResourceGroups"][0]["inputsForSamplers"][1]["index"]    ==  1)
        predicates.append(lambda: j["ShaderResourceGroups"][0]["inputsForSamplers"][1]["count"]    == -1)

        #SRG2
        predicates.append(lambda: j["ShaderResourceGroups"][1]["inputsForSRGConstants"][0]["constantByteOffset"] == 0)
        predicates.append(lambda: j["ShaderResourceGroups"][1]["inputsForSRGConstants"][0]["constantByteSize"]   == 4)
        predicates.append(lambda: j["ShaderResourceGroups"][1]["inputsForSRGConstants"][1]["constantByteOffset"] == 4)
        predicates.append(lambda: j["ShaderResourceGroups"][1]["inputsForSRGConstants"][1]["constantByteSize"]   == 8)

        predicates.append(lambda: j["ShaderResourceGroups"][1]["inputsForBufferViews"][0]["index"] ==  1)
        predicates.append(lambda: j["ShaderResourceGroups"][1]["inputsForBufferViews"][0]["count"] ==  1)
        predicates.append(lambda: j["ShaderResourceGroups"][1]["inputsForBufferViews"][1]["index"] ==  2)
        predicates.append(lambda: j["ShaderResourceGroups"][1]["inputsForBufferViews"][1]["count"] == -1)

        predicates.append(lambda: j["ShaderResourceGroups"][1]["inputsForImageViews"][0]["index"]  ==  0)
        predicates.append(lambda: j["ShaderResourceGroups"][1]["inputsForImageViews"][0]["count"]  ==  1)
        predicates.append(lambda: j["ShaderResourceGroups"][1]["inputsForImageViews"][1]["index"]  ==  1)
        predicates.append(lambda: j["ShaderResourceGroups"][1]["inputsForImageViews"][1]["count"]  == -1)
        predicates.append(lambda: j["ShaderResourceGroups"][1]["inputsForImageViews"][2]["index"]  ==  0)
        predicates.append(lambda: j["ShaderResourceGroups"][1]["inputsForImageViews"][2]["count"]  ==  1)
        predicates.append(lambda: j["ShaderResourceGroups"][1]["inputsForImageViews"][3]["index"]  ==  1)
        predicates.append(lambda: j["ShaderResourceGroups"][1]["inputsForImageViews"][3]["count"]  == -1)

        predicates.append(lambda: j["ShaderResourceGroups"][1]["inputsForSamplers"][0]["index"]    ==  0)
        predicates.append(lambda: j["ShaderResourceGroups"][1]["inputsForSamplers"][0]["count"]    ==  1)
        predicates.append(lambda: j["ShaderResourceGroups"][1]["inputsForSamplers"][1]["index"]    ==  1)
        predicates.append(lambda: j["ShaderResourceGroups"][1]["inputsForSamplers"][1]["count"]    == -1)

        if not silent: print (fg.CYAN+ style.BRIGHT+ "reflected binding info verification..."+ style.RESET_ALL)
        ok = testfuncs.verifyAllPredicates(predicates, j)
    return True if ok else False

result = 0  # to define for sub-tests
resultFailed = 0
def doTests(compiler, silent, azdxcpath):
    global result
    global resultFailed

    # Working directory should have been set to this script's directory by the calling parent
    # You can get it once doTests() is called, but not during initialization of the module,
    #  because at that time it will still be set to the working directory of the calling script
    workDir = os.getcwd()

    if verify(os.path.join(workDir, "../Emission/UnboundedArrays.azsl"), compiler, silent) : result += 1
    else: resultFailed += 1

if __name__ == "__main__":
    print ("please call from testapp.py")
