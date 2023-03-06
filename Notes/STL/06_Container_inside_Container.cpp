/*
    *) Container inside Container:
        -> 2D Container
        -> std::vector<vector<int>> Tree;
        -> to create a tree we can use 'vector' Container inside 'vector' Container

        -> EX:
                    1
                  /   \
                 2     3
                / \   / \
               4   5 6   8

            0 -> |   |   |
            1 -> | 2 | 3 |
            2 -> | 4 | 5 |
            3 -> | 6 | 8 |
            4 -> |   |   |
            5 -> |   |   |
            6 -> |   |   |
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Initializing Tree
    std::vector<vector<int>> Tree;
    int edge, n1, n2;

    // getting the number of edge that tree have
    cin >> edge;
    // in this case for previous drown tree there are 6 edges

    // resizing the tree upto the given edge
    Tree.resize(edge);

    // Creating Tree with given input
    for (int i = 0; i < edge; ++i)
    {
        // for previously drown tree input will be like:
        // S D (Source, Destination)
        // 1 2
        // 1 3
        // 2 4
        // 2 5
        // 3 6
        // 3 8
        cin >> n1 >> n2;
        Tree[n1].push_back(n2);
    }

    // Using range based for loop to iterate and display tree
    for (const auto &e1 : Tree)
    {
        for (const auto &e2 : e1)
        {
            cout << e2 << " ";
        }
        cout << endl;
        /*
            Output:
                2 3
                4 5
                6 8
        */
    }

    return 0;
}