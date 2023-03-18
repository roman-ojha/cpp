/*
    *)
        -> we can create the module or library so that we can reuse it multiple times
        -> after creating library we can mix other programming language as well
*/

/*
    *) Setup:
        -> we will create this library using visual studio IDE
        -> where we will create to different project:
            1. Game:
                -> first we will create the Game project having different solution and project directory
                -> 'Game' project will be our executable
                -> in property we will set 'Configuration Type' as '.exe'
            2. Engine:
                -> another project inside the same Solution 'Game'
                -> 'Engine' will be a library
                -> in properties we wills ste 'Configuration Type' as '.lib'

    *) Generate .lib file:
        -> for that we will build the 'Engine' solution so that
        -> which will generate the 'Engine.lib' static library file into './x64/Debug/Engine.lib'
        -> now we can link this binary library file into the c++ while creating the executable file or while build cpp program/application
        -> now we can link this static linking by what we does previously on '../02_Using_Binary_Library' Notes
        -> but visual studio can automatically link this library because it is inside the same solution
        -> for that we can right click on 'Game' solution and add -> reference & then add the 'Engine' project
*/