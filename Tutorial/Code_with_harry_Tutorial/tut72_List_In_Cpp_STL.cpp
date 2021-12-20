#include <iostream>
#include <stdio.h>
using namespace std;

// Importing List:
#include <list>

// list is also the another type of container
//

void display(list<int> &lst)
{
    list<int>::iterator iter;
    for (iter = lst.begin(); (iter != lst.end()); iter++)
    {
        // lst.end() given the refrence of the end of list
        cout << *iter << " ";
    }
    cout << endl;
}

int main()
{
    // Docs: https://en.cppreference.com/w/cpp/container/list

    // Array: 6,7,8,9 => Contiguous memory location
    // List : 6,7,8,9 => in Doubly Linked list way to allocation memory
    list<int> list1;    // list of 0 length => here firstly element doesn't exist
    list<int> list2(3); // Empty list of size 7 => here element of size 7 exist but we don't input the vlaue

    list1.push_back(5);
    // push element in back
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(9);
    list1.push_back(12);
    list1.push_front(10);
    list1.pop_back();
    // pop element from back
    list1.pop_front();
    // pop element from front
    list1.remove(9);
    // pop all element 9

    // sorting the list
    list1.sort();
    display(list1);

    list<int>::iterator it;
    it = list2.begin();
    *it = 45;
    it++;
    *it = 9;
    it++;
    *it = 6;
    it++;
    list2.sort();
    display(list2);

    // Merging List
    list1.merge(list2);
    cout << "After merging" << endl;
    display(list1);

    cout << "After reverse List" << endl;
    list1.reverse();
    display(list1);
    return 0;
}