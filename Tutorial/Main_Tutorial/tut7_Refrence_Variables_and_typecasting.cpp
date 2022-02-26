#include <iostream>

using namespace std;

int c = 45; // this is the global variable


int main()
{

    // *************Build in Data types****************
    // int a, b, c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The sum is "<<c<<endl;
    // cout<<"The global c is "<<::c; // by doing this we can excess the global variable

    // ************* Float, double and long double Literals****************
    // in cpp by default 34.4 is a double
    // float d=34.4F; // now we are saying that by giving F that this is the floating number but in this setuation we are declearing by saying float d=34.4 so, in this situtation this number will be float
    // long double e = 34.4L;
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl; // we can see that form this that this number is double
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl; // we can use capital or small as per our wise
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;

    // *************Reference Variables****************
    // Rohan Das----> Monty -----> Rohu ------> Dangerous Coder
    // float x = 455;
    // float & y = x; // we are making referance variable y of x which will content the same value because both are the same variable we are just sayin y but it will target x it is kind of a nick name of the person
    // cout<<x<<endl;
    // cout<<y<<endl;

    // *************Typecasting****************
    int a = 45;
    float b = 45.46;
    cout << "The value of a is " << (float)a << endl;
    cout << "The value of a is " << float(a) << endl;

    cout << "The value of b is " << (int)b << endl;
    cout << "The value of b is " << int(b) << endl;
    int c = int(b);

    cout << "The expression is " << a + b << endl;
    cout << "The expression is " << a + int(b) << endl;
    cout << "The expression is " << a + (int)b << endl;

    return 0;
}
