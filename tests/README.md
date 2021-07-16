# License

Because of the nature of the tests, not all test shader code *can* have inlined comments.
Please mind that **all** shader source code found in this directory and its sub-folders 
is covered by the following license:

> Copyright (c) Contributors to the Open 3D Engine Project.
> For complete copyright and license terms please see the LICENSE
> at the root of this distribution.
> 
> SPDX-License-Identifier: Apache-2.0 OR MIT

# Using the tests 

The tester program uses convention over configuration. 
So you don't have to maintain a list of tests and their expected behavior, the test suite will test all shader code in all folders and determine the expected results based on test and directory naming conventions.
If it is in a path with "Syntax" in the name, then it's checked for syntax only.
If it is in a path with "Semantic" in the name, then it's checked for semantic only.
If it is in a path with "AsError" in the name, then it's expecting a refusal (ret code != 0). Tests as errors are important, because they explicitly show illegal use cases.
If it is in the "Advanced" folder, only .py files will be considered just add your files on the good folder.

To run all tests on windows:
launch_tests.bat

To run only tests from a particular file:
launch_tests.bat Advanced/srg-strip-unused.py