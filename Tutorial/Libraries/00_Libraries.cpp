// NOTE: 1
/*
    *) Cpp libraries:
        -> Library are something that is already compile, and no need to compile it again
        -> because of that don't have to compile other third party code
        -> Libraries contain:
            -> Code: .h / .hpp
            -> Binary: .dll or/and .lib
        -> when you get the library the structure of the libary look like:
            -> bin (folder contains .dll files)
            -> doc
            -> example
            -> include (folder contains header files)
            -> lib / lib64 (folder contains .lib files)
            -> license.md
            -> readme.md
        => you use a header file to communicate with libraries, which container the main code of the libary
        -> while coding you will include the header files, and the header files itself will locate the needed .dll or .lib file in order to make the code work
    *) What is .dll and .lib files?
        -> .lib = Static library
            -> Static library uses the .lib files to basically recompile code whenever we compile our own code
            -> the program that you create at the end will contain all the coded need inside the executable
        -> .dll = Dynamic lik library
            => Dynamic library can't be compile together with you code
            => so the program still needs access to that particular .dll file ever after compiling
            -> os, it means that your compile executable will be smaller
            => DLL file use less resources, and allow for more modular architecture, but if the file is missing, the program won't run

    *) How to use libraries in you projects:
        1. Cmake
            -> if we make Cmake for the project then we have to specify the header file path
            -> and also we have to specify the path of .dll & .lib file is
        2. Visual Studio
            -> for visual studio we can use package manager 'vcpkg'
            -> vcpkg install <package>
        3. Console
*/

// NOTE: 2
/*
    *) How we can manage the libraries for the projects:
        -> there is multiple way to manage libraries for the project like:
            1. we can use default library path directory and add every libary inside that folder and using it from there
                -> but the problem with this approach is that we might have to install those library manually for the another coding environment
            2. we can include every libraries inside the same repository, rather then of using libraries that is in some other default library path directory
                -> advantage of this approach is that we can run this program out of the box with out having to install the library that the project use
    *) How we can link libraries inside project:
        1. we can get the source of that libraries and then compile that source code into static or dynamic libraries
        2. if you don't have access to the source code, and want a quick project then  link a binaries which will be quicker and easier
            -> if binary doesn't exist then you have to build id your self
*/