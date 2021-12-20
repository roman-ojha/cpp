#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // connecting our file with rout stream
    ofstream rout("tut61A.txt");

    // creating a name string and filling it with the string entered by the user
    cout << "Enter your name: ";
    string name;
    cin >> name;

    // writing a string to the file
    rout << "My name is " + name;

    // closing file through the close() member function of the class ofstream
    rout.close();

    ifstream rin("tut61A.txt");
    string contect;
    // rin >> contect;
    getline(rin, contect);
    cout << "The contect of the file is " << contect << endl;
    return 0;
}