#include<iostream>
#include<string>
using namespace std;

class binary
{
    private:
    string s;
    public:
    void read(void);
    void check_binary(void);
    void Display(void);
    void ones_complement(void);

};
void binary::read(void)
{
    cout<<"Enter any binary number="<<endl;
    cin >>s;
}
void binary::check_binary(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Entered number is not binary number";
        }
    }
}
void binary::Display(void)
{
    cout<<s<<endl;
}
void binary::ones_complement(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
        
    }
}
int main()
{
    binary b;
    b.read();
    b.check_binary();
    b.Display();
    b.ones_complement();
    b.Display();

    return 0;
}
