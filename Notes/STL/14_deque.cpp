/*
    *) std::deque (Double Ended Queue)
        => std::deque is an indexed sequence container.
            -> it means it can access the data using index d[5]
        => It allow fast insertion at both beginning and end.
            -> we can push and pop from front and back as well

        => Unlike vector elements of deque are not stored contiguous.
            -> in vector it maintain 1 single array
            -> but in case of deque it can contain the multiple array
            -> | Array 1 | --> | Array 2 | --> | Array 3 |
            -> Ex: let, all array have 4 element each
                -> |1|2|3|4| --> |6|7|8|9| --> |10|11|12|13|
                -> to access '6' index element: D[6]
                    -> 6 , 6 % <size_of_each_array>, 6 % 4 = 2
                    -> get the '2' index element from 2nd array
                    -> D[6] = 8
        => it uses individual allocation fixed size array, with additional bookkeeping, meaning index based access to deque must perform to pointer dereference, but in vector we get in on dereference.
        => The storage of a deque is automatically expanded and contracted as needed.
        => Expansion of deque is cheaper than expansion of vector.
            -> If it need to inert new element inside the deque that is already full then it will create the new array of fixed size of previous array and point the last array in deque to the newly create array
                -> Insert 14
                -> |1|2|3|4| --> |6|7|8|9| --> |10|11|12|13| --> |14|  |  |  |
        => A deque holding just one element has to allocate it's full internal array (e.g 8 times the object size on 64-bit libstdc++; 16 times the object size or 4096 bytes, whichever is longer, on 64-bit libc++).

        => deque create fixed size of array, but vector increase the size of the array according to it's need

        -> Time complexity:
            -> Random access - constant O(1)
            -> Insertion or removal of element at the end of beginning - constant O(1)
            -> Insertion or removal of elements in between - linear O(n) because it have to shift all the other element
*/

#include <iostream>
#include <deque>
using namespace std;

void print(const std::deque<int> &deq)
{
    for (int num : deq)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    {
        std::deque<int> deq = {2, 3, 4};
        deq.push_front(1);
        deq.push_back(5);
        print(deq);
        // 1 2 3 4 5
    }
    {
        std::deque<int> deq = {2, 3, 4};
        deq.pop_front();
        deq.pop_back();
        print(deq);
        // 3
    }

    return 0;
}