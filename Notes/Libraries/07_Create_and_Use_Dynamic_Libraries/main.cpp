/*
    *) Using Dynamic Libraries
        -> Dynamic libraries are a binary files libraries that are loaded at runtime.
        -> They are not linked into the executable at compile time.
        -> They are loaded into the process at runtime.
        -> dynamic linking help to make you application optimize
        -> it is not part of the executable file, so when you launch the executable we and load the dynamic libraries into the executable
        -> there is a two way you can load dynamic libraries:
            1. load it while executable is loading:
                -> when you launch the executable at that time we will load the dynamic libraries.
                -> so, executable file is aware of the dynamic library it have to load
            2. dynamic linking:
                -> we will write a code inside the cpp file where we will load the dynamic libraries as per our requirement
        -> .dll(Dynamic Link libraries) is the file type that store the dynamic binary files
    *) Load Dynamic libraries when executable is loading:
        *) Visual studio setup:
            -> https://learn.microsoft.com/en-us/cpp/build/walkthrough-creating-and-using-a-dynamic-link-library-cpp?view=msvc-170
            -> we will crete two project on same solution
                1. FibLibrary:
                    -> here we will create our one library
                    -> first we will create 'dll' project
                    -> then after that we will create 'FibLibrary.h' header file
                    -> and the we will create a 'FibLibrary.cpp' file
                    -> after that we will build the library which will create a dynamic library file '.dll' and some other files like '.lib', '.exp' file inside the 'x64/Debug' folder
                    -> file 'FabLibrary.lib' is the library file that is the series of pointer into the 'FabLibrary.dll' file, so that we don't have to retrieve the the location of everything at runtime
                    -> so it means that we have to compile these two files together
                2. FibClient:
                    -> here we will use that created library
                    -> here we will just create a empty project
                    -> after that we will add the 'FibLibrary.h' header file path into the 'FibClient' project properties
                    -> after that we can write a code to use the library
                    -> after that we will link the 'FibLibrary.lib' library file and its path: './x64/Debug/' into the 'FibClient' project using properties linker
                    -> now we will build the application and it will create a executable file
                    -> NOTE: but after we create the executable file we have to copy the 'FibLibrary.dll' file into the same folder where the executable file is present, because the executable file don't worry about the '.lib' file but it just need the '.dll' file
*/