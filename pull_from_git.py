#
# Copyright (c) Contributors to the Open 3D Engine Project.
# For complete copyright and license terms please see the LICENSE at the root of this distribution.
# 
# SPDX-License-Identifier: Apache-2.0 OR MIT
#
#

import argparse
import sys
import os
import subprocess
import platform
from urllib.parse import urlparse

def SwitchRootDirectory(destinationDir):
    """
    @returns a tuple previousDir, currentDir if successful
    """
    currentDir = os.getcwd()
    destDir = currentDir
    print(f"Current dir is {currentDir}")
    if destinationDir is not None:
        if not os.path.isabs(destinationDir):
            destDir = os.path.join(currentDir, destinationDir)
        else:
            destDir = destinationDir
        if not os.path.isdir(destDir):
            raise Exception(f"{destDir} is NOT a directory")
    # Change working directory before cloning the project
    if currentDir != destDir:
        os.chdir(destDir)
    return currentDir, destDir

def SubpArgs(args):
    """
    According to subcommand, when using shell=True, its recommended not to pass in an argument list but the full command line as a single string.
    That means in the argument list in the configuration make sure to provide the proper escapements or double-quotes for paths with spaces

    :param args: The list of arguments to transform
    """
    argString = " ".join([arg for arg in args])
    print(f"Command: {argString}")
    return argString

def GetFilenameFromUrl(gitUrl):
    aPath = urlparse(gitUrl)
    filenameWithExtension = os.path.basename(aPath.path)
    return os.path.splitext(filenameWithExtension)[0]

def DeleteFolder(folder):
    """
    Use the system's remove folder command instead of os.rmdir
    """
    if platform.system() == 'Windows':
        callResult = subprocess.run(subp_args(['rmdir', '/Q', '/S', str(folder.name)]),
                                     shell=True,
                                     capture_output=True,
                                     cwd=str(folder.parent.absolute()))
    else:
        callResult = subprocess.run(subp_args(['rm', '-rf', str(folder.name)]),
                                     shell=True,
                                     capture_output=True,
                                     cwd=str(folder.parent.absolute()))
    if callResult.returncode != 0:
        raise Exception(f"Unable to delete folder {str(folder)}: {str(call_result.stderr)}")


def IsGitProjectCheckedOut(gitUrl, projectName, currentParentDir):
    """
    @param gitUrl The github url of the project
    @param projectName [optional] If defined, this will be the local name of the project root folder
    @param currentParentDir The full path of the current working directory which is the parent folder of the git project.
    """
    if projectName is None:
        projectName = GetFilenameFromUrl(gitUrl)
    projectPath = os.path.join(currentParentDir, projectName)
    if not os.path.exists(projectPath):
        return False
    # The directory exists. Need to validate it's a valid git project
    gitStashCmd = ['git', 'stash']
    callResult = subprocess.run(SubpArgs(gitStashCmd),
                                 shell=True,
                                 capture_output=True,
                                 cwd=projectPath)
    if callResult.returncode != 0:
        # Not a valid git folder, okay to remove and re-clone
        DeleteFolder(projectPath)
        return False

    # Do not re-pull for now.
    ## Do a re-pull
    #gitPullCmd = ['git', 'pull']
    #callResult = subprocess.run(SubpArgs(gitPullCmd),
    #                             shell=True,
    #                             capture_output=True,
    #                             cwd=projectPath)
    #if callResult.returncode != 0:
    #    raise Exception(f"Error pulling source from GitHub: {callResult.stderr.decode('UTF-8', 'ignore')}")
    return True


def FetchGitProject(gitUrl, projectName, destinationDir, gitTag, gitCommit):
    """
    @param gitUrl The github url of the project
    @param projectName [optional] If defined, this will be the local name of the project root folder
    @param destinationDir [optional] If defined, this is the directory where the project will be cloned into
    """
    currentDir, destinationDir = SwitchRootDirectory(destinationDir)
    
    # Before cloning see if the repo already exists.
    if IsGitProjectCheckedOut(gitUrl, projectName, destinationDir):
        print(f"Git project {gitUrl} already cloned under parent directory {destinationDir}")
        return

    cloneCmd = ['git',
                'clone',
                '--single-branch',
                '--recursive']
    if gitTag is not None:
        cloneCmd.extend(['--branch', gitTag])
    cloneCmd.append(gitUrl)
    if projectName is not None:
        cloneCmd.append(projectName)
    else:
        projectName = GetFilenameFromUrl(gitUrl)
    cloneResult = subprocess.run(SubpArgs(cloneCmd),
                                 shell=True,
                                 capture_output=True,
                                 cwd=destinationDir)
    if cloneResult.returncode != 0:
        raise Exception(f"Error cloning from GitHub: {cloneResult.stderr.decode('UTF-8', 'ignore')}")
    if gitCommit is not None:
        # Allow the package to specify a specific commit to check out. This is useful for upstream repos that do
        # not tag their releases.
        # Checking out 
        checkoutResult = subprocess.run(
            SubpArgs(['git', 'checkout', gitCommit]),
            shell=True,
            capture_output=True,
            cwd=projectName)
        if checkoutResult.returncode != 0:
            raise Exception(f"Error checking out {gitCommit}: {checkoutResult.stderr.decode('UTF-8', 'ignore')}")
    print(f"Successfully cloned Git project {gitUrl} under parent directory {destinationDir}")

if __name__ == '__main__':
    try:
        argParser = argparse.ArgumentParser(
            description="Tool to pull a github project if not already pulled",
            formatter_class=argparse.RawDescriptionHelpFormatter)
        argParser.add_argument('--git-url',
                            help='The github url of the project',
                            required=True)
        argParser.add_argument('--name',
                            help='If defined, this will be the local name of the project root folder',
                            required=False)
        argParser.add_argument('--destination-dir',
                            help='If defined, this is the directory where the project will be cloned into',
                            required=False)
        argParser.add_argument('--git-tag',
                            help='If defined, the project will be checked out at this tag.',
                            required=False)
        argParser.add_argument('--git-commit',
                            help='If defined, the project will be checked out at this commit hash.',
                            required=False)
        parsedArgs = argParser.parse_args(sys.argv[1:])
        FetchGitProject(
            gitUrl = parsedArgs.git_url,
            projectName = parsedArgs.name,
            destinationDir = parsedArgs.destination_dir,
            gitTag = parsedArgs.git_tag,
            gitCommit = parsedArgs.git_commit)
    except Exception as err:
        print(err)
        sys.exit(1)
