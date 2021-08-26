#!/usr/bin/python
# -*- coding: utf-8 -*-
"""
Copyright (c) Contributors to the Open 3D Engine Project.
For complete copyright and license terms please see the LICENSE at the root of this distribution.

SPDX-License-Identifier: Apache-2.0 OR MIT

"""
import sys
import os

import platform
sys.path.append("..")
from clr import *
import os.path
from os.path import join, normpath, basename
import testhelper

result = 0  # to define for sub-tests
resultFailed = 0
def doTests(compiler, silent, azdxcpath):
    global result
    global resultFailed

    # Working directory should have been set to this script's directory by the calling parent
    # You can get it once doTests() is called, but not during initialization of the module,
    #  because at that time it will still be set to the working directory of the calling script
    workDir = os.getcwd().replace('\\', '/')

    if testhelper.verifyEmissionPatterns(os.path.abspath(os.path.join(workDir, "../Samples/Variants.azsl")), compiler, silent, []) : result += 1
    else: resultFailed += 1

    if testhelper.verifyEmissionPatterns(os.path.abspath(os.path.join(workDir, "../Samples/RootSig.azsl")), compiler, silent, ["--root-sig", "--namespace", "dx"]) : result += 1
    else: resultFailed += 1

    if testhelper.verifyEmissionPatterns(os.path.abspath(os.path.join(workDir, "../Samples/RootSigSpace.azsl")), compiler, silent, ["--use-spaces", "--root-sig", "--namespace", "dx"]) : result += 1
    else: resultFailed += 1

    if testhelper.verifyEmissionPatterns(os.path.abspath(os.path.join(workDir, "../Samples/RootSigUnique.azsl")), compiler, silent, ["--unique-idx", "--root-sig", "--namespace", "dx"]) : result += 1
    else: resultFailed += 1

    if testhelper.verifyEmissionPatterns(os.path.abspath(os.path.join(workDir, "../Samples/RootSigUniqueSpace.azsl")), compiler, silent, ["--unique-idx", "--use-spaces", "--root-sig", "--namespace", "dx"]) : result += 1
    else: resultFailed += 1

    if testhelper.verifyEmissionPatterns(os.path.abspath(os.path.join(workDir, "../Samples/UnboundedArrays.azsl_manual")), compiler, silent, ["--use-spaces",]) : result += 1
    else: resultFailed += 1

    for base, dirs, files in os.walk(os.path.join(workDir, "../Emission/")):
        for f in files:
            if f.endswith(".azsl"):
                subdirName = os.path.basename(base)
                completePath = os.path.join(base, f)
                if subdirName != "AsError":
                    success = testhelper.verifyEmissionPatterns(completePath, compiler, silent, []) > 0
                else:
                    success = testhelper.compileAndExpectError(completePath, compiler, silent, []) > 0
                if success:
                    result += 1
                else:
                    resultFailed += 1
                    if not silent: print(fg.RED + style.BRIGHT + "failed " + style.NORMAL + f + fg.RESET)

    testhelper.printFailedTestList(silent)
    
if __name__ == "__main__":
    print ("please call from testapp.py")
