cmake_minimum_required(VERSION 3.0.0)
project(demo VERSION 0.1.0)

# here adding for installed package
# here we are specifying the include directory that we want to use for the project
# for now we will add the vcpkg installed package include folder directory
INCLUDE_DIRECTORIES(
    C:/dev/vcpkg/installed/x64-windows/include
)

# now we will provide the linker or binarry .lib .dll directory
LINK_DIRECTORIES(
    C:/dev/vcpkg/installed/x64-windows/lib
)

add_executable(demo main.cpp)

# now after the 'add_executable' we will write
# here we will will write list of libraries and we have to link those libraries to run the executable
TARGET_LINK_LIBRARIES(demo
    # 'demo' is the above from 'add_executable(demo)'
    # but now we will provide other libraries
    # like: raylib.lib , where we are linking this library into the program
    raylib # <another_lib>
)
