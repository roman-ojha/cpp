%option noyywrap
%{
	#include<stdio.h>
%}

%%
(\+|\=|\+=|\++|\==|\--|\-|\/|\*) {printf("Operator");}
.* {printf("Not an operator");}
%%
int main()
{
	printf("Name: Roman Ojha\n");
	printf("Roll.No: 25\n");
	printf("Enter any operator: ");
	yylex();
	return 0;
}