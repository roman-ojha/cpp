%option noyywrap
%{
	#include<stdio.h>
	int pc=0,op=0,id=0,flag=0;
%}

%%
[a-zA-Z]+[0-9A-Za-z]* {id++;}
[0-9]+ {id++;}
[\+\-\*/\=] {op++;}
"(" {pc++;}
")" {pc--;}
";" {flag=1;}
.|\n {return 1;}
%%
int main()
{
	printf("Name: Roman Ojha\n");
	printf("Roll.No: 25\n");
	printf("Enter the expression: ");
	yylex();
	if((op+1)==id && pc==0 && flag==0){
		printf("Valid expression");
	}else
		printf("Not a valid operator");
	return 0;
}