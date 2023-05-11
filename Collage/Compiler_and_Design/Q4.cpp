// Q3. Write a program to test whether given input is keyword or not
#include<iostream>
#include<string>
#include<string.h>
using namespace std;

void isKeyword(char str[]){
    if(strcmp("for",str)==0||strcmp("int",str)==0||strcmp("char",str)==0||strcmp("float",str)==0||strcmp("string",str)==0)
        cout<<"Valid Keyword"<<endl;
    else
        cout<<"Invalid Keyword"<<endl;
}

int main(){
    char str[100];
    while(true){
        cout<<"Enter a string: "<<endl;
        gets(str);
        isKeyword(str);
        int flag;
        cout<<"Do you want to try it again: ";
        cin>>flag;
        if(flag==0){
            break;
        }
    }
}