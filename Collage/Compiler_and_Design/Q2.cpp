// Q2. Write a program to test whether given identifier is valid or not.
#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main(){
    char str[100];
    cout<<"Enter a string:"<<endl;
    gets(str);
    if(!isalpha(str[0])&&str[0]!='_'){
        cout<<"Not a valid identifier"<<endl;
    }
    else{
        int flag = 1;
        for(int i=1; i<strlen(str);i++){
            if(!isalpha(str[i])&&!isdigit(str[i])){
                flag = 0;
            }
        }
        if(flag == 1){
            cout<<"Valid identifier"<<endl;
        }
        else{
            cout<<"Not a valid identifier"<<endl;
        }
    }
    return 0;
}