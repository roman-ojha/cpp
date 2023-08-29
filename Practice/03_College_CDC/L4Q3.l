%option noyywrap
%{
	#include<stdio.h>
%}
<!-- Write a lex program to check where given input is valid mobile number or not. -->
<!--  Write a lex program to check whether given input is digit or not. -->
%%
[0-9]+ {printf("Digit");}
.* {printf("Not a digit");}
<!-- ^[0-9a-zA-Z]+ {printf("Not a digit");} -->
%%
int main()
{
	printf("Enter anything to check wheter it is a digit or not: ");
	yylex();
	return 0;
}