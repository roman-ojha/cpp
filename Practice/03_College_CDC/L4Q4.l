%option noyywrap
%{
	#include<stdio.h>
%}
<!-- Write a lex program to check where given input is valid mobile number or not. -->
%%
^98[0-9]{8}$ {printf("Valid Number");}
.* {printf("Not valid number");}
%%
int main()
{
	printf("Enter a mobile number: ");
	yylex();
	return 0;
}