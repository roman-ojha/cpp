%{
	#include<stdio.h>
%}

%token A B
%%
S: A S B
|
;
%%
void main()
{
	printf("Enter any string:\n");
	if(yyparse()==0)
		printf("Input string is accepted by grammer.");
	getch();
}
yyerror(char *s)
{
printf("Input string is not accepted by grammer.");
}