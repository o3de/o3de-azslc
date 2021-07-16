#!/usr/bin/env python
# -*- coding: utf-8 -*-
"""
Copyright (c) Contributors to the Open 3D Engine Project.
For complete copyright and license terms please see the LICENSE at the root of this distribution.

SPDX-License-Identifier: Apache-2.0 OR MIT
"""

import sys
import os
import platform
import datetime
import subprocess
from subprocess import check_output
import os.path
import shutil
from argparse import ArgumentParser
from os.path import join, normpath, basename
import re
import importlib
sys.path.append("tests")
from clr import *

testList = ['Syntax', 'Semantic', 'Advanced', 'Samples']

os.system('') # activate VT100 mode for windows console

azslcRelease = ""
azslcDebug   = ""
az3rdParty   = ""

parser = ArgumentParser()
parser.add_argument(
    '--j', dest='jenkin',
    action='store_true', default=False,
    help="Use jenkin configuration to build and test",
)
parser.add_argument(
    '--dev', dest='atomDev',
    type=str,
    help="The path of atom dev(to locate DXC-az version), If not specified, default windows 10 Dxc.exe will be used",
)
args = parser.parse_args()

isJenkin = "OFF"
if args.jenkin is True:
    isJenkin = "ON"

if args.atomDev is not None:
    az3rdParty = args.atomDev + "/Gems/Atom/Asset/Shader/External"

# Part 0 - Prerequisites
print ( fg.CYAN   + style.BRIGHT + "*****************************************************" + style.RESET_ALL )
print ( fg.CYAN   + style.BRIGHT + "                     Building AZSLc ..."               + style.RESET_ALL )
print ( fg.CYAN   + style.BRIGHT + "*****************************************************" + style.RESET_ALL )

missingCritical = 0
missingOptional = 0

# Windows
if os.name == 'nt':
    criticalCMake = "../lib/CMake/bin/cmake.exe"
    if not os.path.isfile(criticalCMake):
        from shutil import which
        if which("cmake") is None:
            print ( fg.RED + style.BRIGHT + "[ X ] Expected CMake 3.15+ (in {} or as command)".format(criticalCMake) + style.RESET_ALL )
            missingCritical = missingCritical + 1

    criticalBoostD = "../lib/boost_1_70_0/"
    criticalBoostH = criticalBoostD + "boost/regex/regex_traits.hpp"
    criticalBoostL = criticalBoostD + "libs/boost_regex-vc141-mt-x64-1_70.dll"
    if not os.path.isfile(criticalBoostH) or not os.path.isfile(criticalBoostL):
        print ( fg.RED + style.BRIGHT + "[ X ] Expected Boost 1.70 in {}".format(criticalBoostD) + style.RESET_ALL )
        print ( fg.RED + style.BRIGHT + "      - All relevant headers required for {}".format(criticalBoostH) + style.RESET_ALL )
        print ( fg.RED + style.BRIGHT + "      - All Boost-Regex libraries, for example {}".format(criticalBoostL) + style.RESET_ALL )
        missingCritical = missingCritical + 1

try:
    import yaml
except ImportError as err:
    print ( fg.YELLOW + style.BRIGHT + "[ ! ] Trying to run pip install pyyaml ..." + style.RESET_ALL )
    subprocess.check_call([sys.executable, "-m", "pip", "install", "pyyaml"])
    try:
        import yaml
    except ImportError:
        print ( fg.RED + style.BRIGHT + "[ ! ] Please run pip install pyyaml, otherwise some tests will fail to validate" + style.RESET_ALL )
        missingCritical = missingCritical + 1

try:
    jversion = subprocess.check_output(['java', '-version'], stderr=subprocess.STDOUT)
    pattern = '\"(\d+\.\d+).*\"'
    jversionTrim = re.search(pattern, jversion.decode("utf-8") ).groups()[0]
except Exception:
    jversionTrim = ""

# We could compare using 'Version' instead but it requires installing the 'packaging' package
if jversionTrim < "1.6":
    print ( fg.YELLOW + style.BRIGHT + "[ ! ] You need java (JDK 1.6 or newer) if you want to rebuild the ANTLR4 generated grammar files" + style.RESET_ALL )
    missingOptional = missingOptional + 1

if missingOptional > 0:
    print ( fg.YELLOW + style.BRIGHT + "{} optional component(s) could be better".format(missingOptional) + style.RESET_ALL )

if missingCritical > 0:
    print ( fg.RED + style.BRIGHT + "{} critical component(s) are still missing!".format(missingCritical) + style.RESET_ALL )
    sys.exit(1)

# Part 1 - Build, ...
if os.name == 'nt':
    print (fg.CYAN + style.BRIGHT + "Prepare solution..." + style.RESET_ALL)
    subprocess.call(["prepare_solution_win.bat", "nopause", isJenkin])
    print (fg.CYAN + style.BRIGHT + "... done"          + style.RESET_ALL)
    print (fg.CYAN + style.BRIGHT + "Build Release ..." + style.RESET_ALL )
    ret = subprocess.call(["build_win.bat", "Release", isJenkin])
    if ret != 0:
     if ret < 0:
         print ( "Killed by signal" + -ret )
         sys.exit(1)
     else:
         print ( fg.RED + style.BRIGHT + "Could not complete test execution!" + style.RESET_ALL )
         sys.exit(1)
    else:
        print ( fg.CYAN + style.BRIGHT + "... done" + style.RESET_ALL )

    print ( fg.CYAN + style.BRIGHT + "Build Debug ..." + style.RESET_ALL )
    ret = subprocess.call(["build_win.bat", "Debug", isJenkin])
    if ret != 0:
     if ret < 0:
         print ( "Killed by signal" + -ret )
         sys.exit(1)
     else:
         print ( fg.RED + style.BRIGHT + "Could not complete test execution!" + style.RESET_ALL )
         sys.exit(1)
    else:
        print ( fg.CYAN + style.BRIGHT + "... done"                           + style.RESET_ALL )

    azslcRelease = "bin/win_x64/Release/azslc.exe"
    if not os.path.isfile(azslcRelease):
        print ( "Release build failed (expected at {})".format(azslcRelease) )
        sys.exit(1)

    azslcDebug = "bin/win_x64/Debug/azslc.exe"
    if not os.path.isfile(azslcDebug):
        print ( "Debug build failed (expected at {})".format(azslcDebug) )
        sys.exit(1)

if platform.system() == 'Darwin':
    print ( fg.CYAN + style.BRIGHT + "Prepare solution..." + style.RESET_ALL )
    subprocess.call(["./prepare_solution_darwin.sh"])
    print ( fg.CYAN + style.BRIGHT + "... done"            + style.RESET_ALL )

    azslcRelease = "bin/darwin/release/azslc"
    if not os.path.isfile(azslcRelease):
        print ( "Release build failed (expected at {})".format(azslcRelease) )
        sys.exit(1)

    azslcDebug = "bin/darwin/debug/azslc"
    if not os.path.isfile(azslcDebug):
        print ( "Debug build failed (expected at {})".format(azslcDebug) )
        sys.exit(1)

if platform.system() == 'Linux':
    print ( fg.CYAN + style.BRIGHT + "Prepare solution..." + style.RESET_ALL )
    subprocess.call(["./prepare_solution_linux.sh"])
    print ( fg.CYAN + style.BRIGHT + "... done"            + style.RESET_ALL )

    azslcRelease = "bin/linux/release/azslc"
    if not os.path.isfile(azslcRelease):
        print ( "Release build failed (expected at {})".format(azslcRelease) )
        sys.exit(1)

    azslcDebug = "bin/linux/debug/azslc"
    if not os.path.isfile(azslcDebug):
        print ( "Debug build failed (expected at {})".format(azslcDebug) )
        sys.exit(1)

# Part 2 - ... test and ...
expectCorrect  = 230
allowIncorrect = 0

testScriptModule = importlib.import_module("testapp")

print ( fg.CYAN   + style.BRIGHT + "*****************************************************" + style.RESET_ALL )
print ( fg.CYAN   + style.BRIGHT + "                    Testing Release ..."               + style.RESET_ALL )
print ( fg.CYAN   + style.BRIGHT + "*****************************************************" + style.RESET_ALL )
numAllTests = testScriptModule.runAll("./tests", testList, azslcRelease, 0, az3rdParty)


print ( fg.CYAN   + style.BRIGHT + "*****************************************************" + style.RESET_ALL )
print ( fg.GREEN  + style.BRIGHT + "OK: {}".format(numAllTests.numPass)                    + style.RESET_ALL )
print ( fg.YELLOW + style.BRIGHT + "TODO: {}".format(numAllTests.numTodo)                  + style.RESET_ALL )
print ( fg.RED    + style.BRIGHT + "FAILED: {}".format(numAllTests.numFail)                + style.RESET_ALL )

if numAllTests.numPass < expectCorrect:
    print ( fg.RED + style.BRIGHT + "Fix your code! (expected {} passing tests)".format(expectCorrect) + style.RESET_ALL )
    sys.exit(0)

if numAllTests.numFail > allowIncorrect:
    print ( fg.RED + style.BRIGHT + "Wow, we shouldn't ship with that many broken tests! (allows {} tests to be failing)".format(allowIncorrect) + style.RESET_ALL )
    sys.exit(1)

print ( fg.CYAN + style.BRIGHT + "                    GOOD ENOUGH"                         + style.RESET_ALL )
print ( fg.CYAN + style.BRIGHT + "*****************************************************"   + style.RESET_ALL )
print ( fg.CYAN + style.BRIGHT + "*****************************************************"   + style.RESET_ALL )
print ( fg.CYAN + style.BRIGHT + "                    Testing Debug ..."                   + style.RESET_ALL )
print ( fg.CYAN + style.BRIGHT + "*****************************************************"   + style.RESET_ALL )
numAllTests = testScriptModule.runAll("./tests", testList, azslcDebug, 0, az3rdParty)

print ( fg.CYAN   + style.BRIGHT + "*****************************************************" + style.RESET_ALL )
print ( fg.GREEN  + style.BRIGHT + "OK: {}".format(numAllTests.numPass)                    + style.RESET_ALL )
print ( fg.YELLOW + style.BRIGHT + "TODO: {}".format(numAllTests.numTodo)                  + style.RESET_ALL )
print ( fg.RED    + style.BRIGHT + "FAILED: {}".format(numAllTests.numFail)                + style.RESET_ALL )

if numAllTests.numPass < expectCorrect:
    print ( fg.RED, style.BRIGHT + "Fix your code! (expected {} passing tests)".format(expectCorrect) + style.RESET_ALL)
    sys.exit(0)

if numAllTests.numFail > allowIncorrect:
    print ( fg.RED + style.BRIGHT + "Wow, we shouldn't ship with that many broken tests! (allows {} tests to be failing)".format(allowIncorrect) + style.RESET_ALL)
    sys.exit(1)

print ( fg.CYAN + style.BRIGHT + "                    GOOD ENOUGH"                       + style.RESET_ALL)
print ( fg.CYAN + style.BRIGHT + "*****************************************************" + style.RESET_ALL)
