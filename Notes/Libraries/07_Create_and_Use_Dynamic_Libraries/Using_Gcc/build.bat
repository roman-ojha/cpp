@REM writing command to build the dynamic library
@REM g++ -c -D<Build_option_define_inside_header_file>
g++ -c -DBUILD_MY_DLL FibLibrary.cpp
g++ -shared -o FibLibrary.dll FibLibrary.o -Wl,--out-implib,libFibLibrary.a