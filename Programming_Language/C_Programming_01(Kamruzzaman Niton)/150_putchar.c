#include<stdio.h>
#include<conio.h>
int main(void)
{
    char str[24] = "AbCdEfGhIjK";
    int n;
    //clrscr();
    for( n = 0; str[n] !='\0'; n++)
        putchar(str[n]);
    getch();
    return 0;
}
