%option noyywrap
%{
	#include<stdio.h>
	int i;
%}

%%
[0-9]+     {i=atoi(yytext);
          if(i%2==0) 
               printf("Even");
          else
         printf("Odd");}
%%
int main()
{
	printf("Name: Roman Ojha\n");
	printf("Roll No. 25\n");
	printf("Enter any number");
	yylex();
	return 0;
}