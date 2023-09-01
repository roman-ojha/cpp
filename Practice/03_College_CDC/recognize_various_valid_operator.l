%option noyywrap
%{
	#include<stdio.h>
%}

%%
(\+|\-|\/|\*|\==|\+=) {printf("Valid operator");}
.* {printf("Not valid operator");}
%%
int main()
{
	printf("Enter any operator: ");
	yylex();
	return 0;
}