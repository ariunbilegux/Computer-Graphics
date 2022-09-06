REM How to Use this bat file 
REM Follow step by step below
:: Install or Download MingGW and save it in a specific folder
:: Download Freeglut and config it below
::   -copy include and bin folder into MinGW
::   -go to "bin folder" and copy freeglut.dll in to System32 and SysWOW64
:: Extract the bat.(zip) and copy it into your folder
:: set your project name like this "main.c"
:: Run This.bat 
:: Done

echo "Clearing Workspace"
rmdir -f dist

mkdir dist

echo "Compiling Graphic"
gcc main.cpp -o .\dist\main -lopengl32 -lglu32 -lfreeglut

echo "App Running"
main.exe