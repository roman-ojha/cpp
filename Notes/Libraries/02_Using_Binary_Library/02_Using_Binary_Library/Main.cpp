#include<GLFW/glfw3.h>
#include <iostream>
using namespace std;

/*
    -> for this example we will use 'glfw' library
    -> https://www.glfw.org/download.html
    -> we will download the pre-compiled binary file
    -> you will choose 64-bit or 32-bit binaries according to the application target
        -> if we are compile 64-bit application we need 64-bit binaries
        -> if we are compile 32-bit application we need 32-bit binaries
    -> we will use 64-bit binaries
    => here now we will add those 'include' & 'lib' files & folder into current working project directory of 'include' & 'lib' folder
    -> and here we will use Static linking of binary files
    *) Visual studio configuration
        -> for Visual studio setup: https://youtu.be/or1dAmUO8k0?t=609
        -> linking binary file/libraries into visual studio: https://youtu.be/or1dAmUO8k0?t=807
    *) Visual studio code configuration
        -> for vsCode you need to configure 'c_cpp_properties.json' inside .vscode
            -> https://youtu.be/b2Ms6v8kRv4
            -> where you need to specify the 'includePath' for that directory
            -> NOTE: you don't have to provide the include path for those libraries that exist in current working directory
            -> just by including the library that exist in specify directory will solve the error of vscode c++ intelligence but won't help to compile the code with those libraries
            -> to compile those libraries in you project you need this command:
                -> g++ -c <file_name.cpp> -I"<include_path_of_include_folder>" -<file_you_want_to_include> <path_to_lib_folder>
                -> Ex:
                -> g++ -c main.cpp -I"D:\Programming\Cpp\Tutorial\Libraries\02_Using_Binary_Library\include" -I"include"

                => if you want to run using 'code runner' extension or using 'f5' then you can include args '-I' inside the 'tasks.json' of .vscode
                    "args": [
                        "-fdiagnostics-color=always",
                        "-g3",
                        "-Wall",
                        "${file}",
                        "-o",
                        "${fileDirname}\\${fileBasenameNoExtension}.exe",
                        "-I",
                        "D:\\Programming\\Cpp\\Tutorial\\Libraries\\02_Using_Binary_Library\\include"
                    ],

            => after you compile the file we will get the binary file now to run the application it is necessary to link the lib files with executable files:
                -> g++ .\<file_name>.o -o <file_name>.exe -L"<lib_folder_directory>" -l<lib_file_name> -l<lib_file_name> -L"<another_lib_folder_directory>" -l<lib_file_name> -l<lib_file_name>
                -> EX:
                -> g++ .\main.o -o main.exe -L"D:\Programming\Cpp\Tutorial\Libraries\02_Using_Binary_Library\lib" -lglfw3

            => after this we will get the executable file
            => to run the exe file run: main.exe

            => if you want to run all of them at once then:
                -> g++ .\main.cpp -o main -I"D:\Programming\Cpp\Tutorial\Libraries\02_Using_Binary_Library\include" -L"D:\Programming\Cpp\Tutorial\Libraries\02_Using_Binary_Library\lib" -lglfw3
*/
int main()
{
    cout << "hello" << endl;
    // if you want to use those libraries just by including '.h' file will not created the executable file
    // so, for that we have to link those libraries like '.lib' or '.dll' files
    // so only libraries contain the definition of the header file functions
    int a = glfwInit();
    cout << a << endl;
    return 0;
}