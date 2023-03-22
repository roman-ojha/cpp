/*
    *) Using Dynamic Libraries
        -> Dynamic libraries are a binary files libraries that are loaded at runtime.
        -> They are not linked into the executable at compile time.
        -> They are loaded into the process at runtime.
        -> dynamic linking help to make you application optimize
        -> it is not part of the executable file, so when you launch the executable we and load the dynamic libraries into the executable
        -> there is a two way you can load dynamic libraries:
            1. load it on run times:
                -> when you launch the executable at that time we will load the dynamic libraries.
                -> so, executable file is aware of the dynamic library it have to load
            2. dynamic linking:
                -> we will write a code inside the cpp file where we will load the dynamic libraries as per our requirement
        -> .dll(Dynamic Link libraries) is the file type that store the dynamic binary files
    *) Load Dynamic libraries on run times:
        *) Visual studio setup:
            -> https://learn.microsoft.com/en-us/cpp/build/walkthrough-creating-and-using-a-dynamic-link-library-cpp?view=msvc-170
            -> we will crete two project on same solution
                1. FibLibrary:
                    -> here we will create our one library
                2.
                    -> here we will use that created library
*/