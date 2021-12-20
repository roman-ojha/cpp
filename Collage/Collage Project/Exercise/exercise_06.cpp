/* 
Create classes Book having data members name of author (string), price (float) and class Stock having data members number of books (int) and category (string). Create another class Library which derives from both the classes Book and Stock. All the classes should have functions having same name. Write program to test these classes.
 */

#include <iostream>
#include <string>
using namespace std;

class Book
{
protected:
    string name;
    float price;

public:
    void setdata(string n, float p)
    {
        name = n;
        price = p;
    }
    void printdata()
    {
        cout << "The name of the book is= " << name << endl
             << "the price of the book " << name << " is " << price << endl;
    }
};

class Stocks
{
protected:
    int no_of_books;
    string category;

public:
    void setdata(int no, string c)
    {
        no_of_books = no;
        category = c;
    }
    void printdata()
    {
        cout << "The No of books in the Stock are= " << no_of_books << endl
             << "The category of the books is= " << category << endl;
    }
};

class Library : public Book, public Stocks
{
protected:
public:
    void setdata(string n, float p, int no, string c)
    {
        Book::setdata(n, p);
        Stocks::setdata(no, c);
    }
    void printdata()
    {
        Book::printdata();
        Book::printdata();
    }
};

int main()
{
    Library l;
    l.setdata("Plysic", 400, 1000, "Science");
    l.printdata();
    return 0;
}