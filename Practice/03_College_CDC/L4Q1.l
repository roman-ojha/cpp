%option noyywrap
%{
	#include<stdio.h>
%}
<!-- write a lex program to check whether given input is negative or positive. -->
%%
^[-][0-9]+ {printf("Negative number");}
^[+][0-9]+ {printf("Positive number");}
[0-9]+ {printf("Positive number");}
%%
int main()
{
	printf("Enter any number.");
	yylex();
	return 0;
}