#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string name = "Roman Ojha";
    ofstream fout("practice_45B.txt");
    fout << name;
    fout.close();
    ifstream fin("practice_45B.txt");
    string getString;
    getline(fin, getString);
    cout << getString << endl;
    return 0;
}