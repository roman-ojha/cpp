#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream out;
    out.open("tut62A.txt");
    out << "this is me Roman \n";
    out << "This is another me Roman ojha \n";
    out << "Now again another me Razzroman";
    out.close();

    ifstream in1;
    in1.open("tut62A.txt");
    string s, s1;
    in1 >> s >> s1;
    cout << "the content of the file is " << s << " " << s1 << "\n"
         << endl;
    in1.close();

    // using while loop:
    in1.open("tut62A.txt");
    while (in1.eof() == 0) // eof() function means end of file , upto file does not end
    {
        getline(in1, s);
        cout << s << endl;
    }
    in1.close();
    cout << "\n\n";
    ifstream in2;
    in2.open("tut62A.txt");
    getline(in2, s);
    cout << "The whole content of the file is " << s << endl;
    getline(in2, s);
    cout << "The whole content of the file is " << s << endl;
    getline(in2, s);
    cout << "The whole content of the file is " << s << endl;
    getline(in2, s);
    cout << "The whole content of the file is " << s << endl;
    in2.close();

    return 0;
}