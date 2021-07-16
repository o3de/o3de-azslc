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
import testfuncs

result = 0  # to define for sub-tests
resultFailed = 0
def doTests(compiler, silent, azdxcpath):
    """
    This test validates:
        1. Usage of --use-spaces when more than one SRG declare unbounded arrays.
        2. Makes sure shader compilation fails if unbounded arrays of the same type of resource are declared
           in different SRGs but --use-spaces is not used for compilation.
        3. Expect the same shaders to fail if --unique-idx is used.
        4. unbounded-arrays-unique-idx-should-pass.azsl with --unique-idx used to fail in v1.7.19, should pass now.
    """
    global result
    global resultFailed

    # Working directory should have been set to this script's directory by the calling parent
    # You can get it once doTests() is called, but not during initialization of the module,
    #  because at that time it will still be set to the working directory of the calling script
    workDir = os.getcwd().replace('\\', '/')

    # expect success when using --use-spaces
    sampleFilePath = os.path.abspath(os.path.join(workDir, "../Samples/UnboundedArrays.azsl_manual"))
    if testhelper.verifyEmissionPatterns(sampleFilePath, compiler, silent, ["--use-spaces",]) : result += 1
    else: resultFailed += 1
    
    # expect to fail without --use-spaces
    stderr, failed = testfuncs.buildAndGetError(sampleFilePath, compiler, silent, [])
    if failed:
        result += 1
        if not silent:
            stderr = stderr.decode('utf-8')
            print (fg.CYAN + style.BRIGHT +
               "unbounded-arrays-emission-tester.py: "+
               "Good, got expected error when NOT using --use-spaces: " + stderr + style.RESET_ALL)
    else:
        resultFailed += 1
        if not silent:
            print(style.BRIGHT + fg.RED + "failed unbounded-arrays-emission-tester.py: was expecting error." + style.RESET_ALL)
            
    # expect to fail with --unique-idx
    sampleFilePath = os.path.abspath(os.path.join(workDir, "../Semantic/unbounded-arrays1.azsl"))
    stderr, failed = testfuncs.buildAndGetError(sampleFilePath, compiler, silent, ["--unique-idx"])
    if failed:
        result += 1
        if not silent:
            stderr = stderr.decode('utf-8')
            print (fg.CYAN + style.BRIGHT +
               "unbounded-arrays-emission-tester.py: "+
               "Good, got expected error when using --unique-idx: " + stderr + style.RESET_ALL)
    else:
        resultFailed += 1
        if not silent:
            print(style.BRIGHT + fg.RED + "failed unbounded-arrays-emission-tester.py: was expecting error when using --unique-idx." + style.RESET_ALL)
    
    # expect success when using --unique-idx
    sampleFilePath = os.path.abspath(os.path.join(workDir, "../Semantic/unbounded-arrays-unique-idx-should-pass.azsl"))
    if testhelper.verifyEmissionPatterns(sampleFilePath, compiler, silent, ["--unique-idx",]) : result += 1
    else: resultFailed += 1


    testhelper.printFailedTestList(silent)
    
if __name__ == "__main__":
    print ("please call from testapp.py")
