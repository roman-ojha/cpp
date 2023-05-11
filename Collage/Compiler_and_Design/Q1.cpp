// Q1. Write a C program to identify where give line is comment or not.
//
#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main(){
    char str[100];
    while(true){
        cout<<"Enter a string: "<<endl;
        gets(str);
        if(str[0]=='/'&&str[1]=='/'){
            cout<<"Single line comment"<<endl;
        }
        else if(str[0]=='/'&&str[1]=='*'){
                for(int i=2;i<strlen(str);i++){
                    if(str[i] == '*'&&str[i+1]=='/'){
                        cout<<"Multiline comment"<<endl;
                    }
                }
        }
        else{
            cout<<"Not a comment"<<endl;
        }
        int flag;
        cout<<"Do you want to try it again: ";
        cin>>flag;
        if(flag==0){
            break;
        }
    }
    return 0;
}