cmake -B build/ -G "Visual Studio 17 2022"
MSBuild.exe build\tetris.sln
"build/test/Debug/tetris.exe"