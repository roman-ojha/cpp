%option noyywrap
%{
	#include<stdio.h>
%}

%%
^[a-zA-Z0-9]+@[a-z]+(\.com|\.np)$ {printf("Valid Email");}
.* {printf("Invalid Email");}
%%
int main()
{
	printf("Enter any email: ");
	yylex();
	return 0;
}