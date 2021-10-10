set azslc_binary=..\bin\win_x64\Debug\azslc.exe
set atom_dev_path=%1

@if not exist %azslc_binary% (
    echo Please build the debug version of azslc
    @pause
    @goto :eof
)

@if "%~1"=="" goto NoArgs

@if not exist %atom_dev_path%"\Gems\Atom\Asset\Shader\External" goto QuickTest
SHIFT
goto FullTest

:NoArgs
    python testapp.py --silent --compiler %azslc_binary% --path Syntax Semantic Advanced Samples
    @pause
    @goto :eof

:FullTest
    @echo Found the dev path
    @if "%~1"==""  ( python testapp.py --silent --compiler %azslc_binary% --az3rdParty %atom_dev_path%"\Gems\Atom\Asset\Shader\External" --path Syntax Semantic Advanced Samples )
    @else (python testapp.py --compiler %azslc_binary% --az3rdParty %atom_dev_path%"\Gems\Atom\Asset\Shader\External" --path %1 %2 %3 %4 %5 )
    @pause
    @goto :eof

:QuickTest
    @echo not found dev path
    python testapp.py --compiler %azslc_binary% --path %1 %2 %3 %4 %5
    @pause
    @goto :eof
