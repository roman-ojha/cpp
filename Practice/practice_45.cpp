// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     char name[50];
//     char gender[10];
//     int age;
//     cout << "Enter Detail: " << endl;
//     cout << "Name";
//     cin >> name;
//     cout << "Gender: ";
//     cin >> gender;
//     cout << "Age: ";
//     cin >> age;
//     // ofstream fout("practice_45_file.txt");
//     ofstream fout;
//     fout.open("practice_45_file.txt");
//     fout << name << endl
//          << gender << endl
//          << age << endl;
//     fout.close();
//     // ifstream fin("practice_45_file.txt");
//     ifstream fin;
//     fin.open("practice_45_file.txt");
//     char n[20];
//     char g[10];
//     int a;
//     fin >> n >> g >> a;
//     cout << "Entered Detail: " << endl;
//     cout << "Name: " << name << endl
//          << "Gender: " << gender << endl
//          << "Age: " << age << endl;
//     fin.close();
//     return 0;
// }

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     char name[50];
//     char gender[10];
//     int age;
//     cout << "Enter Detail: " << endl;
//     cout << "Name: ";
//     cin >> name;
//     cout << "Gender: ";
//     cin >> gender;
//     cout << "Age: ";
//     cin >> age;
//     fstream file;
//     file.open("practice_45_file.txt", ios::app);
//     file << name << endl
//          << gender << endl
//          << age << endl;
//     file.close();
//     file.open("practice_45_file.txt", ios::in);
//     char n[20];
//     char g[10];
//     int a;
//     file >> n >> g >> a;
//     cout << "Entered Detail: " << endl;
//     cout << "Name: " << n << endl
//          << "Gender: " << g << endl
//          << "Age: " << a << endl;
//     file.close();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <fstream>
// int main()
// {
//     int x[] = {100, 200, 300, 400};
//     int i;
//     fstream file;
//     file.open("practice_45B.dat", ios::out | ios::binary);
//     file.write((char *)&x, sizeof(x));
//     file.close();
//     for (i = 0; i < 4; i++)
//         x[i] = 0;
//     file.open("practice_45B.dat", ios::in | ios::binary);
//     file.read((char *)&x, sizeof(x));
//     for (i = 0; i < 4; i++)
//         cout << x[i] << " ";
//     return 0;
// }

#include <iostream>
#include <fstream>
using namespace std;

class Employee
{
private:
    char name[20];
    char gender[10];
    int age;
    int salary;

public:
    void getData()
    {

        cout << "Enter Detail: " << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Gender: ";
        cin >> gender;
        cout << "Age: ";
        cin >> age;
        cout << "Salary: ";
        cin >> salary;
    }
    void showData()
    {
        cout << "Enter Detail: " << endl
             << "Name: " << name << endl
             << "Gender: " << gender << endl
             << "Age: " << age << endl
             << "Salary: " << salary << endl;
    }
};
