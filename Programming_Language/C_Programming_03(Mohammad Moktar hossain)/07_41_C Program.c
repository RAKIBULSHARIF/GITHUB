//Example of constant and string directives
#include<stdio.h>
#include<conio.h>
#define Max 3
#define ProgC "Programming in C"
int main()
{
    int i;
    for ( i = 1; i <= Max; i++)
        printf("%s\n",ProgC);
    return 0;
}
