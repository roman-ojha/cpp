// Write a c program to implement the design of lexical analyser to recognize the token, identifier, keyword number, operator & special characters
#include <string.h>
#include <ctype.h>
#include <stdio.h>

void isKeyword(char str[10])
{
    if (strcmp("struct", str) == 0 || strcmp("union", str) == 0 || strcmp("short", str) == 0 || strcmp("if", str) == 0 || strcmp("double", str) == 0 || strcmp("else", str) == 0 || strcmp("extern", str) == 0 || strcmp("return", str) == 0 || strcmp("typedef", str) == 0 || strcmp("enum", str) == 0 || strcmp("default", str) == 0 || strcmp("continue", str) == 0 || strcmp("switch", str) == 0 || strcmp("inline", str) == 0 || strcmp("const", str) == 0 || strcmp("case", str) == 0 || strcmp("break", str) == 0 || strcmp("auto", str) == 0 || strcmp("for", str) == 0 || strcmp("while", str) == 0 || strcmp("do", str) == 0 || strcmp("int", str) == 0 || strcmp("void", str) == 0 || strcmp("float", str) == 0 || strcmp("char", str) == 0 || strcmp("double", str) == 0 || strcmp("static", str) == 0 || strcmp("switch", str) == 0 || strcmp("case", str) == 0)
        printf("\n%s is a keyword", str);
    else
        printf("\n%s is an identifier", str);
}

int main()
{
    FILE *fp, *fw, *fos;
    char c, str[10], st1[10];
    int num[100];
    int tval = 0;
    int i = 0, j = 0, k = 0;
    printf("Write a C program here and end with ^Z: ");
    fp = fopen("input.txt", "w");

    while ((c = getchar()) != EOF)
        putc(c, fp);
    fclose(fp);

    fp = fopen("input.txt", "r");
    fw = fopen("identifier.txt", "w");
    fos = fopen("special.txt", "w");

    while ((c = getc(fp)) != EOF)
    {
        if (isalpha(c))
        {
            putc(c, fw);
            c = getc(fp);
            while (isdigit(c) || isalpha(c) || c == '_' || c == '$')
            {
                putc(c, fw);
                c = getc(fp);
            }
            putc(' ', fw);
            ungetc(c, fp);
        }
        else if (isdigit(c))
        {
            tval = c - '0';
            c = getc(fp);
            while (isdigit(c))
            {
                tval *= 10 + c - '0';
                c = getc(fp);
            }
            num[i++] = tval;
            ungetc(c, fp);
        }
        else if (c == ' ' || c == '\t')
            printf(" ");
        else
            putc(c, fos);
    }
    fclose(fw);
    fclose(fos);
    fclose(fp);
    fw = fopen("identifier.txt", "r");
    k = 0;
    printf("\nThe keywords and identifiers are:");
    while ((c = getc(fw)) != EOF)
    {
        if (c != ' ')
            str[k++] = c;
        else
        {
            str[k] = '\0';
            isKeyword(str);
            k = 0;
        }
    }
    fclose(fw);
    printf("\nThe Numbers in the program are  :");
    for (j = 0; j < i; j++)
        printf("%d , ", num[j]);
    fos = fopen("special.txt", "r");
    printf("\nSpecial characters are : ");
    while ((c = getc(fos)) != EOF)
        printf("%c", c);
    fclose(fos);

    printf("\nName: Roman Ojha");
    printf("\nRoll.No: 25");

    return 0;
}
