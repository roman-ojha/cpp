@REM command to create shared library .so file
g++ -fPIC -c .\Library1.cpp
g++ -fPIC -c Library2.cpp
g++ -shared -o Library.so Library1.o Library2.o