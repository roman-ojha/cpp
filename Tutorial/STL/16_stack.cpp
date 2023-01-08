/*
    *) std::stack
        -> std::stack class is a container adapter that give the programmer the functionality of a stack.
            -> container adapter means it use some other container to create it's data structure.
        -> Internally it uses std::deque STL container.
        -> It is LIFO (last-in first-out) data structure.
        -> std::stack allows to push(insert) and pop(remove) only from back.
        => Methods:
            a> empty() // return whether the stack is empty - Time complexity: O(1)
            b> size() // return the size of the stack - Time complexity: O(1)
            c> top() // return a reference to the tope most element of the stack - Time complexity: O(1)
            d> push(g) // adds the element 'g' at the top of the stack - Time complexity: O(1)
            e> pop() // Delete the top most element of the stack - Time complexity: O(1)
*/

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// function to print stack
void print(std::stack<int> stk)
{
    while (!stk.empty())
    {
        cout << stk.top() << endl; // first get the data
        stk.pop();                 // then remove from the top
    }
}

int main()
{
    std::stack<int> stk;
    // push():
    stk.push(10);
    stk.push(3);
    stk.push(33);
    stk.push(2);

    // size():
    cout << "Size: " << stk.size() << endl;

    // printing and popping from the stack
    print(stk);

    std::stack<int, std::vector<int>> stk2;
    // now internally it is using vector container adapter

    return 0;
}