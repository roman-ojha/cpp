/*
    *) VCPkg:
        ->  Vc Package help you manage c/c++ project libraries on windows/linux/mac
        -> https://github.com/Microsoft/vcpkg
        -> let's say you want to download and build OpenSSL x32 & x64 bit as well as the debug and release libraries, which use of vcpkg it will automatically do all of that
            -> after that it gives you libraries, binaries & includes
        -> https://vcpkg.io/en/index.html
        -> you can find all the packages available in official site

    *) Setup:
        -> clone the git repository
        -> then on the root project directory run:
            -> .\bootstrap-vcpkg.bat
        -> link with visual studio, so that we can use libraries and includes that is generating using vcpkg:
            -> .\vcpkg.exe integrate install
            -> now you can use vcpkg installed packages into you visual studio project
            -> NOTE: because we integrate vcpkg into visual studio we don't have to manually specify the path of headers & linkers & linkers file name, it will automatically handle these things
        -> after that you will get CMake command:
            -> "-DCMAKE_TOOLCHAIN_FILE=D:/vcpkg/scripts/buildsystems/vcpkg.cmake"
            -> which we will use letter if we use CMake
        -> you can see the list of command available for vcpkg:
            -> https://learn.microsoft.com/en-us/vcpkg/commands/common-options
        -> Let's put the vcpkg root project into environment variable so that we can use 'vcpkg' command any where

    *) Command:
        *) Search package:
            -> vcpkg search <package_name>

        *) Install package:
            -> vcpkg install <package_name>
            -> EX: vcpkg install sqlite3
            *) Install specific version with platform specific
                -> vcpkg install <package_name> <package_name>:x<bit_version>-<platform>
                -> EX: vcpkg install sqlite3 sqlite:x64-windows

                -> you can install specific package that you want by first searching the package and installing it using it's given name
                -> EX: for 'curl':
                    -> if you want to install & build curl[openssl] then you can do this:
                    -> vcpkg search curl[openssl] curl[openssl]:x64-windows

            -> this will download the package into /vcpkg/install directory

            => inside: ./vcpkg/install we will find all the installed package libraries, binaries, headers into different x64 & x86 bits
                -> we can use these installed package into our project link inside visual studio
                -> we can use these package in visual studio automatically now
            => inside: ./vcpkg/packages we will find all the installed package in separate folders
                -> we an use thesoe separate folder package any where we want, separate to the project

        *) Update available packages:
            -> vcpkg upgrade
                -> (this will only notify the out of date package and will not update the package)
            -> vcpkg upgrade --no-dry-run
                -> (now this command will upgrade the updated version of the package build then etc.. if it is available)
            -> vcpkg upgrade --no-dry-run --keep-going
                -> (if one fail update the rest)
            -> vcpkg upgrade <package_name> --no-dry-run --keep-going
                -> (update specific package)

        *) Remove the package:
            -> vcpkg remove <package_name> --recurse
            -> EX: vcpkg remove sqlite3 --recurse
                -> (remove sqlite3 as well as all the package that are depend on it)
            -> EX: vcpkg remove sqlite3:x64-windows --recurse
                -> (removing 64 version of package)

        *) Set x65 as default install package:
            -> https://youtu.be/b7SdgK7Y510?t=894

        *) Unlink vcpkg:
            -> vcpkg integrate remove


    *) Install Packages using vcpkg on individual project not global
        -> https://youtu.be/b7SdgK7Y510?t=1051


    *) Setup for Visual studio code:
        ->
*/