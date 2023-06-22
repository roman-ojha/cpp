%option noyywrap
%{
	#include<stdio.h>
%}

%%
^[0-9a-z.A-Z]+@[a-z]+(\.com|\.np)$ {printf("Valid email");}
.* {printf("Not a valid email");}
%%
int main()
{
	printf("Name: Roman Ojha\n");
	printf("Roll No. 25\n");
	printf("Enter a email: ");
	yylex();
	return 0;
}