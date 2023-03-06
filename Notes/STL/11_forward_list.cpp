/*
    *) forward_list
        -> This is is a Single Linked List what we know from C programming language.
        -> |_1_|__|-->|_2_|__|-->|_3_|__|-->|_4_|__|
        -> Why should use this class instead of traditional single linked list because
            a. Well tested
            b. Bunch of available function
        -> https://en.cppreference.com/w/cpp/container/forward_list
        -> Few Available Operations:
            a. operator =
            b. assign
            c. front
            d. empty
            e. max_size
            f. clear
            g. insert_after
            h. emplace_after
            i. reverse
            j. sort
            k. merge
            l. splice_after
            m. unique
            n. remove
            o. remove_if
            p. resize
*/

#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    // forward_list of type int
    forward_list<int> list1 = {5, 4, 6, 2};

    forward_list<int> list2 = {7, 6, 1, 9};
    forward_list<int> list3 = {3, 1, 12};

    // using 'insert_after' we can insert after a particular position
    list1.insert_after(list1.begin(), 8);
    // here we are inserting '8' after first element in this case '5'
    // 5 8 4 6 2

    // reverse the linked list
    list1.reverse();
    // 2 6 4 8 5

    // sort the linked list
    list1.sort();
    // 2 4 5 6 8

    list2.sort();
    // 1 6 7 9

    // merge one list after another
    list1.merge(list2);
    // 1 2 4 5 6 6 7 8 9

    // splice_after will place the given list 'list3' on the given position of the 'list1'
    list1.splice_after(list1.begin(), list3);
    // 1 3 1 12 2 4 5 6 6 7 8 9

    // Get the size of List
    cout << "Size of list1: " << std::distance(list1.begin(), list1.end()) << endl;
    // Size of list1: 12

    // remove unique subsequent value
    // ex: 1, 2, 3, 1, 1
    // after unique: 1, 2, 3, 1
    list1.unique();
    // 1 3 1 12 2 4 5 6 7 8 9

    // remove an matching element from the list
    list1.remove(1);
    // remove '1' from list
    // 3 12 2 4 5 6 7 8 9

    // remove all the record greater then or lesser then given number
    list1.remove_if([](int n)
                    {
                        // [](){} : lemda function
                        return n < 4;
                        // so here we want to remove all the element lesser then 4
                    });
    // 12 4 5 6 7 8 9

    // resize will resize your list
    // means if you given the number lesser then the size of linked list in that case it will remove all the remaining element from the list
    list1.resize(2);
    // 12 4

    // resize by given the number greater then the size of linked list, it will put 0 as default value
    list1.resize(4);
    // 12 4 0 0

    // push at the 1st position
    list1.push_front(5);
    // 5 12 4 0 0

    // pop from the 1st position
    list1.pop_front();
    // 12 4 0 0

    // assign and replace previous element from the list
    list1.assign({1, 2, 3});
    // 1 2 3

    // assign list4 into list 1
    forward_list<int> list4 = {3, 4, 5};
    list1.assign(list4.begin(), list4.end());
    // 3 4 5

    // we know that 'emplace' will do so 'emplace_after'
    list1.emplace_front(1);
    // 1 3 4 5

    // another way to create forward_list
    forward_list<int> list5{7, 8, 9};
    // 7 8 9

    // Get the element of specific position
    auto list_it = list1.begin();
    std::advance(list_it, 0);
    // getting Oth position element by iterating
    cout << "1st position: " << *list_it << endl;
    // 1st position: 1
    std::advance(list_it, 3);
    cout << "4th position: " << *list_it << endl;
    // 4th position: 5

    // Iterate over list
    for (int &elm : list1)
        cout
            << elm << " ";
    cout << endl;

    return 0;
}