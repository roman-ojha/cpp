%option noyywrap
%{
	#include<stdio.h>
%}

/* Write a lex program to check wheter given input is negative or positive */

%%
^[-][0-9]+ {printf("Negative number");}
^[+][0-9]+ {printf("Positive number");}
[0-9]+ {printf("Positive number");}
%%
int main()
{
	printf("Name: Roman Ojha\n");
	printf("Roll No. 25\n");
	printf("Enter any number: ");
	yylex();
	return 0;
}