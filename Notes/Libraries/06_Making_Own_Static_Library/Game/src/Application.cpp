// now here we will just going to call the engine function
// that we just created inside the engine project
// for that firstly we will going to include the header file that we created inside 

// different way to include header file
// 1. to include header file we can use relative path include
//#include "../../Engine/src/Engine.h"

// 2. using absolute path or the compiler include path
// first go to 'Game' solution properties and on 'C/C++' add Additional Include Directories as:
// $(SolutionDir)Engine\src
//#include <Engine.h>
#include "Engine.h"




// just by including the header file it will going to compile successfully but can't build and create executable
// because we have not linked the static library or the definition of the header file
int main() {

	return 0;
}