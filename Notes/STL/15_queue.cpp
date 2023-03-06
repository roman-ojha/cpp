/*
    *) std::queue
        -> std::queue class is a container adapter that gives theprogrammer the functionality of a queue.
        -> queue is FIFO(first in first out) data structure.
        -> std::queue provides only specific set of functions.
        -> std::queue allows the push(insert) at back and pop(remove) from front.
        -> methods:
            1. front
            2. back
            3. push
            4. pop
            5. empty
            6. size
*/

#include <iostream>
#include <queue>
using namespace std;

// function to print queue
void print(std::queue<int> que)
{
    // NOTE: we can't iterate over the queue we have to get the front element and pop and make next element in front of the queue
    while (!que.empty())
    {
        // front(): get the first element or top of the queue
        cout << que.front() << " ";
        // pop(): pop the first element or top of the queue
        que.pop();
    }
    cout << endl;
}

int main()
{

    std::queue<int> que;

    // push data into queue
    que.push(2);
    que.push(3);
    que.push(4);

    // get the back element
    cout << que.back() << endl;
    // 4

    print(que);
    // 2 3 4

    return 0;
}