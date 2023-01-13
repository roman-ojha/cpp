/*
    # What is a Namespace
    -> A namespace is a declarative region that provides a scope to the 'identifiers' inside it.
    -> identifiers : the names of types, functions, variables,etc.
    -> They are used to organize code into logical groups and to prevent name collisions that can occure especially when the code base includes multiple libraries.
    -> EX: s td::cout
        -> here we are spacifying what which cout we are talking about, and here we are talking about the standared library cout
    -> The prefix std:: indicates that the names 'cout' and 'cin' are defined inside the namespace named std.
    -> so, it means std is the namespace or it is the library where 'cout' and 'cin' is defined
    
    -> now we understand the '::' scope operator -> it means that the 'cin' and 'cout' is in the scope of 'std'
*/

/*
    * Namespace uisng Declarations
        -> A 'using' declaration lets us use a name from a namespace without qualifying the name wih a 'namespace_name::prefix'
        -> Ex: using namespace::name;
*/

#include <iostream>
using std::cout;
// you can use the single line to use all from 'std' by:
// using namespace std;

// Namespaces allow to group entities like classes, objects and functions under a name.
namespace roman // namespace <name_of_namespace>
{
    int a, b;
    int sum(int a, int b)
    {
        return a + b;
    }
}

using roman::sum;
// now we can use 'sum' function without using 'roman::'

int main()
{
    cout << "Enter any number:";
    // now we can only use 'cout' because we had mensoned in the beginning that we are using the 'cout' from the 'std' namespace
    int n1 = 0;
    std::cin >> n1;
    cout << "The entered number is " << n1 << std::endl;

    // from namespace 'roman'
    roman::a = 10;
    roman::b = 30;
    int total = sum(roman::a, roman::b);
    cout << "Sum of the given number is: " << total << std::endl;
    return 0;
}

/*
namespace myNamespace
{
 int a, b;
}


# Using scope resolution operator:
   -> In this case, the variables a and b are normal variables declared within a namespace called myNamespace. In order to access these variables from outside the ”myNamespace” namespace we have to use the scope operator ::. For example, to access the previous variables from outside myNamespace we can write:
    myNamespace::a
    myNamespace::b 

# Through keyword 'using':
    -> The keyword using is used to introduce a name from a namespace into the current declarative region.
*/