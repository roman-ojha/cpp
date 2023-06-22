%option noyywrap
%{
	#include<stdio.h>
%}

%%
^98[0-9]{8}$ {printf("Valid mobile number");}
.* {printf("Not a valid mobile number");}
%%

int main()
{
	printf("Name: Roman Ojha\n");
	printf("Roll No. 25\n");
	printf("Enter a mobile number:");
	yylex();
	return 0;
}