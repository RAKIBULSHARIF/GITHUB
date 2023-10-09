//A sample C program that sends output to printer
#include<stdio.h>
void main()
{
    char *Name;
    printf("Enter your name: ");
    scanf("%[^\n]",Name);
    fprintf(stdprn, Name); //stdprn not working properly in codeblocks.
}
