#include<iostream>
#include<string>
#include<string.h>
using namespace std;

enum states{q0,qd,qf};

int isKeyword(char s[]){
    cout<<s<<endl;
    if(!strcmp(s,"roman")||!strcmp(s,"auto")||!strcmp(s,"break")||!strcmp(s,"case")||!strcmp(s,"char")||!strcmp(s,"const")||!strcmp(s,"continue")||!strcmp(s,"default")||!strcmp(s,"do")||!strcmp(s,"double")||!strcmp(s,"else")||!strcmp(s,"enum")||!strcmp(s,"extern")||!strcmp(s,"float")||!strcmp(s,"for")||!strcmp(s,"goto")||!strcmp(s,"if")||!strcmp(s,"int")||!strcmp(s,"long")||!strcmp(s,"register")||!strcmp(s,"return")||!strcmp(s,"short")||!strcmp(s,"signed")||!strcmp(s,"sizeof")||!strcmp(s,"static")||!strcmp(s,"struct")||!strcmp(s,"switch")||!strcmp(s,"typedef")||!strcmp(s,"union")||!strcmp(s,"unsigned")||!strcmp(s,"void")||!strcmp(s,"volatile")||!strcmp(s,"while"))
        return 1;
    return 0;
}

enum states delta(enum states s,char ch){
    
}

int main(){
    char input[100];
    enum states curr_state=q0;
    cout<<"Enter any String: ";
    cin>>input;
    cout<<isKeyword(input)<<endl;
    if(isKeyword(input))
        cout<<"Keyword"<<endl;
    else
        cout<<"Not Keyword"<<endl;
    return 0;
}