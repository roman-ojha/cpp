#include<iostream>
using namespace std;

class Account{ 
    // Q1:
    int acc_no;
    float balance;
    static int min_balance;
    public:
    void setData(){
        // Q2: Reading
        cout<<"Account No: ";
        cin>>acc_no;
        cout<<"Balance: ";
        cin>>balance;
    }
    void getData(){
        // Q2: Displaying
        cout<<"Account No: "<<acc_no<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
    static void getMinBalance(){
        // Q3: Display
        cout<<"Minimum Balance: "<<min_balance<<endl;
    }
};

int Account::min_balance=100;

int main(){
    int n=5;
    Account a[n];
    Account::getMinBalance();
    cout<<"Enter Value of all Account: "<<endl;
    for(int i=0;i<n;i++){
        // Q4: Read
        a[i].setData();
    }
    cout<<"Displaying All Account: "<<endl;
    for(int i=0;i<n;i++){
        // Q4: Display
        a[i].getData();
    }
    return 0;
}