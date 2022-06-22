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
    This test does a thorough validation of separate register spaces per SRG when a limited amount
    of spaces is defined with the command line argument --max-spaces.
    """
    global result
    global resultFailed

    # Working directory should have been set to this script's directory by the calling parent
    # You can get it once doTests() is called, but not during initialization of the module,
    #  because at that time it will still be set to the working directory of the calling script
    workDir = os.getcwd().replace('\\', '/')

    # validate --max-spaces.
    sampleFilePath = os.path.abspath(os.path.join(workDir, "unbounded-arrays-for-max-spaces.azsl"))
    maxMaxSpaces = 4
    numExpectedFailures = 0
    for maxSpaces in range(maxMaxSpaces):
        maxSpaces += 1
        stderr, failed = testfuncs.buildAndGetError(sampleFilePath, compiler, True, ["--max-spaces", "%d" % maxSpaces])
        if failed:
            stderr = stderr.decode('utf-8')
            srgA = "SRG%d" % maxSpaces
            srgB = "SRG%d" % (maxSpaces + 1)
            gotExpectedFailure = (srgA in stderr) and (srgB in stderr)
            if not gotExpectedFailure and not silent:
                print(style.BRIGHT + fg.RED + "failed unbounded-arrays-emission-tester.py: for unbounded-arrays-for-max-spaces.azsl at maxSpaces={}: {}".format(maxSpaces, stderr) + style.RESET_ALL)
            numExpectedFailures += gotExpectedFailure
    if numExpectedFailures == maxMaxSpaces - 1:
        result += 1
        if not silent:
            print (fg.CYAN + style.BRIGHT +
               "unbounded-arrays-max-spaces.py: "+
               "Good, got expected failure count of: {}".format(numExpectedFailures) + style.RESET_ALL)
    else:
        resultFailed += 1
        if not silent:
            print (style.BRIGHT + fg.RED  +
               "unbounded-arrays-max-spaces.py: "+
               "Error: Got unexpected failure count of: {}".format(numExpectedFailures) + style.RESET_ALL)

    testhelper.printFailedTestList(silent)
    
if __name__ == "__main__":
    print ("please call from testapp.py")
