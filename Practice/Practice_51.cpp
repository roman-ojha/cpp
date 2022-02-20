#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
struct Node
{
    char value[10];
    struct Node *left;
    struct Node *right;
} * s1, *s2, *s3, *s4;
struct Node *createNode(char value[])
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    strcpy(n->value, value);
    n->left = NULL;
    n->right = NULL;
    return n;
}
void inOrder(struct Node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        cout << root->value << " ";
        inOrder(root->right);
    }
}
int main()
{
    char string[10][10] = {"is", "Another", "Thing", "Random", "Connected", "Every"};
    s1 = createNode(string[0]);
    s2 = createNode(string[2]);
    s3 = createNode(string[4]);
    s4 = createNode(string[5]);
    s1->left = s2;
    s1->right = s3;
    s2->left = s4;
    inOrder(s1);
    return 0;
}