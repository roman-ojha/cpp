%option noyywrap
%{
	#include<stdio.h>
	int i;
%}
<!-- Write a lex program to check whether given number is odd or even. -->
%%
[0-9]+ {i=atoi(yytext);
	if(i%2==0)
		printf("Even number");
	else
		printf("Odd number");
	}
%%
int main()
{
	printf("Enter any number: ");
	yylex();
	return 0;
}