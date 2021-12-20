#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}

/*
Memory Allocation for Objects
- As in the case of structures, memory space for objects is allocated when they 
are declared and not when the class is specified.
- But, we have to note one thing. The member functions are created and placed 
in the memory only once, when they are defined as a part of a class 
specification. All the objects belonging to the particular class will use the 
same member functions; no separate space is allocated for member functions 
when objects are created.
- However, the data members will hold different values for different object. So, 
space for member data is allocated separately for each object.
*/