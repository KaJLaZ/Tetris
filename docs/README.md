#Tetris
The way to build and run the project by Visual Studio 17 2022 compiller on Windows 10.
1) First of all you need to add MSBuild.exe to the System EV path
2) Open the root project dir
3) cmake -B build/ -G "Visual Studio 17 2022" - build all the project by VS compiller, create an sln file,
create a build directory and saved all created files there
4) MSBuild.exe build\problem.sln - it will compile exe file for main project and tests in Debug's directories
build/src/Debug/problem.exe - run a program 
build/test/Debug/tests.exe - run unit tests 

In case of not allowing to execute bat DISM.exe /Online /Cleanup-image /Restorehealth

	
