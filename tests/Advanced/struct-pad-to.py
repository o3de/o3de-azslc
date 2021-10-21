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
from clr import *
import testfuncs

'''
Validates the functionality of the [[pad_to(N)]] attribute.
'''

def checkPadding(thefile, compilerPath, silent, expectedSize):
    # Compile the shader with --srg and check that the final size of the struct
    # is 256 for both the StructureBuffer<MyStruct> DemoSrg::m_mySB, and MyStruct DemoSrg::m_myStruct
    j, ok = testfuncs.buildAndGetJson(thefile, compilerPath, silent, ["--srg"])
    if ok:
        if not silent: print (fg.CYAN+ style.BRIGHT+ "checkPadding: Verifying struct sizes..."+ style.RESET_ALL)

        predicates = []
        predicates.append(lambda expectedSize=expectedSize: j["ShaderResourceGroups"][0]["inputsForBufferViews"][0]["stride"] == expectedSize)
        predicates.append(lambda: j["ShaderResourceGroups"][0]["inputsForBufferViews"][0]["type"] == "StructuredBuffer<MyStruct>")

        predicates.append(lambda expectedSize=expectedSize: j["ShaderResourceGroups"][0]["inputsForSRGConstants"][27]["constantByteSize"] == expectedSize)
        predicates.append(lambda: j["ShaderResourceGroups"][0]["inputsForSRGConstants"][27]["typeName"] == "/MyStruct")

        ok = testfuncs.verifyAllPredicates(predicates, j, silent)
        if ok and not silent:
            print (style.BRIGHT+ "OK! "+ str(len(predicates)) + " checkPadding: All sizes were the same." + style.RESET_ALL)
    return ok

result = 0  # to define for sub-tests
resultFailed = 0
def doTests(compiler, silent, azdxcpath):
    global result
    global resultFailed

    # Working directory should have been set to this script's directory by the calling parent
    # You can get it once doTests() is called, but not during initialization of the module,
    #  because at that time it will still be set to the working directory of the calling script
    workDir = os.getcwd()

    if not silent: print ("testing [[pad_to(256)]] attribute...")
    if checkPadding(os.path.join(workDir, "struct-pad-to-256.azsl"), compiler, silent, 256): result += 1
    else: resultFailed += 1

    if not silent: print ("testing [[pad_to(252)]] attribute...")
    if checkPadding(os.path.join(workDir, "struct-pad-to-252.azsl"), compiler, silent, 252): result += 1
    else: resultFailed += 1

if __name__ == "__main__":
    print ("please call from testapp.py")