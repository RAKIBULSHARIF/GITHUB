//Pointer as Function's Return Value
#include<stdio.h>
#include<conio.h>
#include<string.h>
char StrLength(char *);
//Function prototype
int main()
{
    char Name[50];
    int L;
    printf("Enter your Name : ");
    gets(Name);
    L = StrLength(Name);
    printf("You Name takes %d characters (including spaces).",L);
    return (0);
}
char StrLength(char *string)
{
    char *cptr;
    cptr = string;
    while(*cptr)
    {
        cptr++;
    }
    return (cptr-string);
}
