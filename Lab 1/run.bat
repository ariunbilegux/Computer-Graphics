echo "Compiling Graphic"
gcc main.cpp -o main -lopengl32 -lglu32 -lfreeglut

echo "App Running"
.\main.exe