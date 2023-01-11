/*
    *) std::priority_queue
        -> priority_queue implement a Min Heap & Max Heap
        -> std::priority_queue is a container adapter that provides constant time lookup of the largest Or smallest element
        -> By default std:: vector is a container used inside, and store element as heap
        -> Const is insertion and extraction in logarithmic.
        -> std::priority_queue is implemented using std::make_heap, std::push_heap, std::pop_head functions.
        -> If we are building the Min Heap and try to access the root of min heap then it will give us the minium value among all the data inside priority_queue
        -> If we are building the Max Heap and try to access the root of max heap then it will give us the maximum value among all the data inside priority_queue
*/
#include <functional>
#include <queue>
#include <vector>
#include <iostream>
using namespace std;

template <typename T>
void print_queue(T &q)
{
    while (!q.empty())
    {
        // getting top element
        std::cout << q.top() << " ";
        // popping out top element and placing another maximum element into the top
        q.pop();
        // when we use 'pop' function in it use 'std::pop_heap'
    }
    std::cout << "\n";
}

int main()
{
    {
        // initializing the 'priority_queue' which implement Max Heap
        // by default use 'vector' container
        // by default uses 'std::less<int>', use a < b
        std::priority_queue<int> q;
        for (int elm : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})
        {
            // pushing every single element into priority_queue
            q.push(elm);
            // when we use 'push' function in it use 'std::push_heap'
        }
        print_queue(q);
        // 9 8 7 6 5 4 3 2 1 0
    }
    {
        // initializing the 'priority_queue' which implement Mean Heap
        // here also we are specifying which container we want to use, and we are using 'vector' container
        // std::greater<int>: two element will get compare using '>' operator, ex: a > b
        std::priority_queue<int, std::vector<int>, std::greater<int>> q2;
        for (int elm : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})
        {
            q2.push(elm);
        }
        print_queue(q2);
    }
    {
        // creating our own comparator
        auto comp = [](int left, int right)
        {
            // this is the way that we can compare pass and compare user define data type
            return (left) < (right);
        };
        // passing our own comparator
        std::priority_queue<int, std::vector<int>, decltype(comp)> q3(comp);
        for (int elm : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})
        {
            q3.push(elm);
        }
        print_queue(q3);
    }
    return 0;
}