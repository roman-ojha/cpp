@REM this is the command to build the executable from FibClient.cpp
g++ -c FibClient.cpp
g++ -o FibClient.exe FibClient.o -L. -lFibLibrary
@REM look library on current folder