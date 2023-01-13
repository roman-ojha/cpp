/*
  -> https://www.msys2.org/
  -> download msys2 & install it
  -> run msys2
    -> pacman -Syu
    -> pacman -Su
  -> run msys2 MINGGW
    *) Install Toolset for c/c++
      -> pacman -Ss gcc
      -> copy the requred toolkit for now we need:
        -> mingw64/mingw-w64-x86_64-gcc 12.1.0-3 (mingw-w64-x86_64-toolchain)
        GNU Compiler Collection (C,C++,OpenMP) for MinGW-w64
        -> so, mingw-w64-x86_64-gcc
      -> then run:
        -> pacman -S mingw-w64-x86_64-gcc
      -> gcc --version
      -> g++ --version
    *) Install Debugger so that we can debug the code
      -> copy the requred debugger for now we need:
        -> mingw64/mingw-w64-x86_64-gdb 12.1-3 (mingw-w64-x86_64-toolchain)
      GNU Debugger (mingw-w64)
        -> so, mingw-w64-x86_64-gdb
      -> then run:
        -> pacman -S mingw-w64-x86_64-gdb
      -> gdb --version
  *) to run in powershell/cmd:
      -> add 'C:\msys64\mingw64\bin' path to system environment variable
*/
