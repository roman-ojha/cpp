#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;
    // static variable is also called as class variable

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void)
    {
        // static member function does't need object to call the static function in the main function we can call through class
        // cout<<id; // throws an error
        cout << "The value of count is " << count << endl;
    }
};

// Count is the static data member of class Employee
int Employee::count; // Default value is 0

int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}

// #include <iostream>

// class Foo {
//   public:
//     static void foo() {
//       std::cout << "foo()" << std::endl;
//     }
//     const static int x = 123;
// };

// int main(void) {
//   Foo * foo = NULL;
//   foo->foo(); //=> WTF!?
//   std::cout << foo->x;; // still works!
//   return 0; // Ok!
// }
