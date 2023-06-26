%option noyywrap
%{
	#include<stdio.h>
%}
/* Lex program to check whether the string is in small case letter, uppercase letter or contains mixed letter */
%%
^[a-z]+$ {printf("Given string is in lowercase");}
^[A-Z]+$ {printf("Given string is in uppercase");}
^[a-zA-Z]+$ {printf("Given string contain mixed letters");}
%%
int main()
{
	printf("Name: Roman Ojha\n");
	printf("Roll.No: 25\n");
	printf("Enter any string: ");
	yylex();
	return 0;
}