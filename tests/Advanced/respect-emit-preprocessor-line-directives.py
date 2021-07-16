#!/usr/bin/python
# -*- coding: utf-8 -*-
"""
Copyright (c) Contributors to the Open 3D Engine Project.
For complete copyright and license terms please see the LICENSE at the root of this distribution.

SPDX-License-Identifier: Apache-2.0 OR MIT
"""
import sys
import os
import re
sys.path.append("..")
from clr import *
import testfuncs

'''
This test suite validates that azslc respects the preprocessor
#line <number> <filepath>
directives when outputting errors.
The idea is that when reporting errors it should produce meaningful filenames
and line locations from the orignal file where the error is actually coming from.
'''

def validateFilesAppearInLineDirectives(hlslContent, fileList, silent):
    """
    @fileList List of files to search for in @hlslContent.
              It is treated as a stack and we expect the line matching
              to occur in the order as they appear in this list              
    """
    regexp = re.compile('#\s*line\s+\d+\s*"(.*)"$')
    hlslLines = hlslContent.splitlines()
    for hlslLine in hlslLines:
        m = regexp.match(hlslLine)
        if not m:
            continue
        #If there's a match it better match the file at the top of the stack
        if m.group(1).endswith(fileList[0]):
            del fileList[0]
            if len(fileList) == 0:
                break;
    return len(fileList) == 0

def testSampleFileCompilationEmitsPreprocessorLineDirectives(theFile, compilerPath, silent):
    if not silent:
        print (fg.CYAN+ style.BRIGHT+
               "testSampleFileCompilationEmitsPreprocessorLineDirectives: "+
               "Verifying sample file compiles and #line directives are emitted..."+
               style.RESET_ALL)
    stdout, ok = testfuncs.buildAndGet(theFile, compilerPath, silent, [])
    stdout = stdout.decode('utf-8')
    ok = validateFilesAppearInLineDirectives(stdout,
                                             ["srg_semantics.azsli", "level0.azsli", "level1.azsli", "level2.azsli", "main.azsl"],
                                             silent)
    return ok

def CreateTmpFileWithSyntaxError(theFile, goodSearchLine, badReplaceLine):
    """
    Takes a reference file and creates of temporary clone file with a known good line (@goodSearchLine)
    that gets replaced with a known bad line (@badReplaceLine)
    """
    dirName, fileName = os.path.split(theFile)
    tmpFilePath = os.path.join(dirName, "{}.tmp".format(fileName))
    if os.path.exists(tmpFilePath): os.remove(tmpFilePath)
    
    foundGoodSearchLine = False
    tmpFileContent = []
    with open(theFile) as fp:
        for cnt, line in enumerate(fp):
            line = line.rstrip('\r\n')
            if line == goodSearchLine:
                tmpFileContent.append("{}\n".format(badReplaceLine))
                foundGoodSearchLine = True
            else:
                tmpFileContent.append("{}\n".format(line))
    if not foundGoodSearchLine:
        return None
    
    with open(tmpFilePath, 'w') as outFp:
        outFp.writelines(tmpFileContent)
    return tmpFilePath

def testErrorReportUsesPreprocessorLineDirectives(theFile, compilerPath, silent, goodSearchLine, badReplaceLine, searchFilename, errorType):
    """
    In this test an error will be injected at a specfic line and expect the stderr
    output produced by azslc to mention that the failure comes from one of the included files
    instead of the input file.
    """
    if not silent:
        print (fg.CYAN+ style.BRIGHT+
               "testSyntaxErrorReportUsesPreprocessorLineDirectives: "+
               "Verifying syntax error report..."+ style.RESET_ALL)
    filePathOfTmpFile = CreateTmpFileWithSyntaxError(theFile, goodSearchLine, badReplaceLine)
    if not filePathOfTmpFile:
        return False;
    if not silent:
        print (fg.CYAN+ style.BRIGHT+
               "testSyntaxErrorReportUsesPreprocessorLineDirectives: "+
               "Compiling and expecting errors..."+ style.RESET_ALL)
    stderr, failed = testfuncs.buildAndGetError(filePathOfTmpFile, compilerPath, silent, [])
    stderr = stderr.decode('utf-8')
    if not failed:
        return False
    if not silent:
        print (fg.CYAN+ style.BRIGHT+
               "testSyntaxErrorReportUsesPreprocessorLineDirectives: "+
               "Good, good compiler error, now let's make sure the source file is mentioned..."+ style.RESET_ALL)
    if not searchFilename in stderr:
        return False
    if not silent:
        print (fg.CYAN+ style.BRIGHT+
               "testSyntaxErrorReportUsesPreprocessorLineDirectives: "+
               "Good, The search file was mentioned, now let's check the type of error..."+ style.RESET_ALL)
    return errorType in stderr

result = 0  # to define for sub-tests
resultFailed = 0
def doTests(compiler, silent, azdxcpath):
    global result
    global resultFailed

    # Working directory should have been set to this script's directory by the calling parent
    # You can get it once doTests() is called, but not during initialization of the module,
    #  because at that time it will still be set to the working directory of the calling script
    workDir = os.getcwd()
    
    if testSampleFileCompilationEmitsPreprocessorLineDirectives(os.path.join(workDir, "RespectEmitLine/main.azsl.mcpp"),
                                                                compiler, silent): result += 1
    else: resultFailed += 1
    
    if not silent: print("\n")
    if testErrorReportUsesPreprocessorLineDirectives(os.path.join(workDir, "RespectEmitLine/main.azsl.mcpp"),
                                                           compiler, silent,
                                                           "ShaderResourceGroup SRG2 : Slot2", "ShaderResour ceGroup SRG2 : Slot2",
                                                           "level2.azsli",
                                                           "syntax error"): result += 1
    else: resultFailed += 1
    
    if not silent: print("\n")
    if testErrorReportUsesPreprocessorLineDirectives(os.path.join(workDir, "RespectEmitLine/main.azsl.mcpp"),
                                                           compiler, silent,
                                                           "ShaderResourceGroup SRG1 : Slot1", "ShaderResourceGroup SRG1 : SlotX",
                                                           "level1.azsli",
                                                           "Semantic error"): result += 1
    else: resultFailed += 1
    
    #if testSemanticErrorReportUsesPreprocessorLineDirectives(os.path.join(workDir, "RespectEmitLine/main.azsl.mcpp"),
    #                                                       compiler, silent): result += 1
    #else: resultFailed += 1


if __name__ == "__main__":
    print ("please call from testapp.py")
