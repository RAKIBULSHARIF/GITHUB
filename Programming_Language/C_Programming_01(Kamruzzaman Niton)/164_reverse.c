/*This programme not work properly*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{
    char *name;
    //clrscr();
    printf("\nEnter a string: ");
    gets(name);
    strrev(name);
    printf("\n\n Reverse: %s", name);
    getch();
    return 0;
}
