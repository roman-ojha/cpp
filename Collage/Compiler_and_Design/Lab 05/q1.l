%option noyywrap
%{
	#include<stdio.h>
%}

%%
int|float|double|char|if|else|while|for|switch|continue|break|goto {printf("Keyword");}
^[a-zA-Z_][a-zA-Z0-9_]+ {printf("Identifer");}
^[0-9]+$ {printf("Number");}
%%
int main()
{
	printf("Name: Roman Ojha\n");
	printf("Roll.No: 25\n");
	printf("Enter any string to identify whether it is identifer, number & keyword: ");
	yylex();
	return 0;
}