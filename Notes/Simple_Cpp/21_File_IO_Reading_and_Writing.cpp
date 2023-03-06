#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*

There are the predefine classes that will help us to make files and input and output data to the file and from the file

so, The useful classes for working with files in c++ are:
1.fstreambase
2.ifstream -->derived from fstreambase
3.ofstream -->derived from fstreambase

*/
/*
In order to work with files in c++, you will have to open it.
primarily, there are 2 ways to open a file:
1. using the constructor
2. using the mamber function open() of the class
*/
int main()
{
    string st = "Roman bhai chara";
    string st2, st3;

    // Opening file using constructor and writing it
    ofstream out("21_FileA.txt"); // Write operation
    // here we are creating out object
    out << st;

    // Opening files using constructor and reading it
    ifstream in("22_FileB.txt"); // Read operation
    in >> st2;

    // if we want to get the infomation of the file through this method then only the first word in the file will read
    // so to get or to input all the line from the file then we have to use getline() function
    getline(in, st3);
    cout << st2 << endl;
    cout << st3 << endl;
    getline(in, st3);
    // because we had alrady get the first line through first getline function so we will get another line by using another getline() funcition
    cout << st3 << endl;
    return 0;
}