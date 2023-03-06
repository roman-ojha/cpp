/*
    *) std::list
        -> This is doubly linked list what we know from C programming language.
        ->  |  | 1 |  |-->|  | 2 |  |-->|  | 3 |  |-->|  | 4 |  |
            |__|___|__|<--|__|___|__|<--|__|___|__|<--|__|___|__|
        -> List is sequence container that allow non-contiguous memory allocation.
        -> List is faster compared to ther sequence container (vector, forward_list, deque) in terms of insertion, removal and moving element in any position provided we have the iterator of the position.
        -> We should use this class instead of traditional double linked list because
            a. Well tested
            b. Bunch of available function
        -> https://en.cppreference.com/w/cpp/container/list
        -> Few Available operations
            a. operator =
            b. assign
            c. front
            d. back
            e. empty
            f. size
            g. max_size
            h. clear
            i. insert
            j. emplace
            k. push_back
            l. pop_back
            m. push_front
            n. pop_front
            o. reverse
            p. sort
            q. merge
            r. splice
            s. unique
            t. remove
            u. remove_if
            v. resize
*/

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> list1 = {5, 2, 4, 6, 2};
    list<int> list2;

    // operator =
    // it help to assign the one list with another
    list2 = list1;
    // 5 2 4 6 2

    // assign
    // same as operator =
    list2.assign(list1.begin(), list1.end());
    // 5 2 4 6 2

    // Get first element
    cout << "Front: " << list1.front() << endl;
    // Front: 5

    // Get last element
    cout << "Back: " << list1.back() << endl;
    // Back: 2

    // Is list is empty or not
    cout << "Is Empty: " << list1.empty() << endl;
    // Is Empty: 0

    // Get the size of the list
    cout << "Size: " << list1.size() << endl;
    // Size: 5

    // Get the maximum size available to create list
    cout << "Max Size: " << list1.max_size() << endl;

    // clear the element from the list
    // list1.clear();

    // insert new data into list
    list1.insert(list1.begin(), 9);
    // 9 5 2 4 6 2

    // emplace
    list1.insert(list1.begin(), 11);
    // 11 9 5 2 4 6 2

    // push_back
    list1.push_back(13);
    // 11 9 5 2 4 6 2 13

    // push_front
    list1.push_front(3);
    // 3 11 9 5 2 4 6 2 13

    // pop_back
    list1.pop_back();
    // 3 11 9 5 2 4 6 2

    // pop_front
    list1.pop_front();
    // 11 9 5 2 4 6 2

    // reverse
    list1.reverse();
    // 2 6 4 2 5 9 11

    // sort
    list1.sort();
    // 2 2 4 5 6 9 11

    list2.sort();

    // merge
    list1.merge(list2);
    // 2 2 2 2 4 4 5 5 6 6 9 11

    // splice
    list<int> list3{3, 4};
    list1.splice(list1.begin(), list3);
    // 3 4 2 2 2 2 4 4 5 5 6 6 9 11

    // unique
    // ex: 1, 2, 3, 1, 1
    // after unique: 1, 2, 3, 1
    list1.unique();
    // 3 4 2 4 5 6 9 11

    // remove:
    // remove an matching element from the list
    list1.remove(11);
    // 3 4 2 4 5 6 9

    // remove all the record greater then or lesser then given number
    list1.remove_if([](int n)
                    {
                        // [](){} : lemda function
                        return n < 5;
                        // so here we want to remove all the element lesser then 4
                    });
    // 5 6 9

    // resize:
    // resize will resize your list
    // means if you given the number lesser then the size of linked list in that case it will remove all the remaining element from the list
    list1.resize(2);
    // 5 6

    // resize by given the number greater then the size of linked list, it will put 0 as default value
    list1.resize(4);
    // 5 6 0 0

    // Get the element of specific position
    auto list_it = list1.begin();
    std::advance(list_it, 0);
    // getting Oth position element by iterating
    cout << "1st position: " << *list_it << endl;
    // 1st position: 5
    std::advance(list_it, 3);
    cout << "4th position: " << *list_it << endl;
    // 4th position: 0

    for (int &elm : list1)
        cout
            << elm << " ";
    cout << endl;

    return 0;
}