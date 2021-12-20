/* 
Create a class called cricketer with member variables to represent name, age and no of matches played. From this class derive two classes: Bowler and Batsman. Bowler class has no_of_wickets as member variable and Batsman class has no_of_runs and centuries as member variables. Use appropriate member functions in all classes to read and display respective data. 
*/

#include <iostream>
#include <string>
using namespace std;

class Cricketer
{
protected:
    string name;
    int age, n_match;

public:
    Cricketer() {}
    Cricketer(string n, int a, int m);

    void printdata();
};

Cricketer::Cricketer(string n, int a, int m)
{
    name = n;
    age = a;
    n_match = m;
}
void Cricketer::printdata()
{
    cout << "the name of the cricketer is= " << name << endl
         << "The age of the " << name << " is= " << age << endl
         << "The number of match played by the " << name << " is= " << n_match << endl;
}

class Bowler : public Cricketer
{
protected:
    int no_of_wickets;

public:
    Bowler() {}
    Bowler(string n, int a, int m, int no);
    void printdata();
};

Bowler::Bowler(string n, int a, int m, int no) : Cricketer(n, a, m)
{
    no_of_wickets = no;
}

void Bowler::printdata()
{
    Cricketer::printdata();
    cout << "The no of wickets taken by " << name << " is= " << no_of_wickets << endl;
}

class Batsman : public Cricketer
{
protected:
    int no_of_runs, centuries;

public:
    Batsman() {}
    Batsman(string, int, int, int, int);
    void printdata();
};
Batsman::Batsman(string n, int a, int m, int no_runs, int cen) : Cricketer(n, a, m)
{
    no_of_runs = no_runs;
    centuries = cen;
}
void Batsman::printdata()
{
    Cricketer::printdata();
    cout << "The no of runs taken by " << name << " is= " << no_of_runs << endl
         << "The no of centuries taken by " << name << " is= " << centuries << endl;
}

int main()
{
    Bowler bo("Roman", 20, 100, 500);
    Batsman ba("jack", 20, 150, 20000, 50);
    bo.printdata();
    ba.printdata();
    return 0;
}