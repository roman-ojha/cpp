%option noyywrap
%{
	#include<stdio.h>
%}

%%
(int|float|double)$ {printf("Keyword");}
^[a-zA-Z][a-zA-Z0-9_]+$ {printf("Identifier");}
[0-9]+$ {printf("Number");}
%%
int main()
{
	printf("Enter any string");
	yylex();
	return 0;
}