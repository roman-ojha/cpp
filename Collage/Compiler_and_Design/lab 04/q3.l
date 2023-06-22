%option noyywrap
%{	
	#include<stdio.h>
%}

%%
[0-9]+ {printf("digit");}
.* {printf("Not a digit");}
%%
int main()
{
	printf("Name: Roman Ojha\n");
	printf("Roll No. 25\n");
	printf("Enter any Digit: ");
	yylex();
	return 0;
}