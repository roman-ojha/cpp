%option noyywrap
%{
	#include<stdio.h>
%}

/* transition rule section */

%%
"hello" {printf("hi");}
.* {printf("wrong input word");}
%%
int main()
{
	printf("Enter an world:");
	yylex();
	return 0;
}