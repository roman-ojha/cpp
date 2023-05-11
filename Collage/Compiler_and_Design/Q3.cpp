// Q3. Write a program to simulate lexical analyser for validating operators.
#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int isOperator(char str[]){
    switch(str[0]){
        case '+':
            if(str[1]=='+')
                cout<<"Increment operator"<<endl;
            else if(str[1]=='=')
                cout<<"Assignment operator"<<endl;
            else if(str[1] == '\0')
                cout<<"+ Operator"<<endl;
            else
                cout<<"Invalid Operator"<<endl;
        case '-':
            if(str[1]=='-')
                cout<<"Decrement operator"<<endl;
            else if(str[1]=='=')
                cout<<"Assignment operator"<<endl;
            else if(str[1] == '\0')
                cout<<"- Operator"<<endl;
            else
                cout<<"Invalid Operator"<<endl;
        case '*':
            if(str[1]=='*')
                cout<<"Square operator"<<endl;
            else if(str[1]=='=')
                cout<<"Assignment operator"<<endl;
            else if(str[1] == '\0')
                cout<<"* Operator"<<endl;
            else
                cout<<"Invalid Operator"<<endl;
        case '/':
            if(str[1]=='=')
                cout<<"Assignment operator"<<endl;
            else if(str[1] == '\0')
                cout<<"/ Operator"<<endl;
            else
                cout<<"Invalid Operator"<<endl;
        case '%':
            if(str[1]=='=')
                cout<<"Assignment operator"<<endl;
            else if(str[1] == '\0')
                cout<<"\% Operator"<<endl;
            else
                cout<<"Invalid Operator"<<endl;
        case '<':
            if(str[1]=='\0')
                cout<<"< Operator"<<endl;
            else if(str[1] == '=')
                cout<<"<= Operator"<<endl;
            else
                cout<<"Invalid Operator"<<endl;
        case '>':
            if(str[1]=='\0')
                cout<<"> Operator"<<endl;
            else if(str[1] == '=')
                cout<<">= Operator"<<endl;
            else
                cout<<"Invalid Operator"<<endl;
        case '=':
            if(str[1]=='\0')
                cout<<"> Operator"<<endl;
            else if(str[1] == '=')
                cout<<">= Operator"<<endl;
            else
                cout<<"Invalid Operator"<<endl;
        case '&':
            if(str[1]=='&')
                cout<<"&& Operator"<<endl;
            else if(str[1] == '\0')
                cout<<"& Operator"<<endl;
            else
                cout<<"Invalid Operator"<<endl;
        case '|':
            if(str[1]=='|')
                cout<<"|| Operator"<endl;
            else if(str[1] == '\0')
                cout<<"& Operator"<<endl;
            else
                cout<<"Invalid Operator"<<endl;
        default:
            cout<<"Invalid Operator"<<endl;
    }
}

int main(){
    char str[100];
    while(true){
        cout<<"Enter a string: "<<endl;
        gets(str);
        isOperator(str);
        int flag;
        cout<<"Do you want to try it again: ";
        cin>>flag;
        if(flag==0){
            break;
        }
    }
}