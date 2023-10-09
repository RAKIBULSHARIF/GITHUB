#include<stdio.h>
#include<conio.h>
int main(void)
{
    char name[64];
    //clrscr();
    printf("\n Your Name please: ");
    gets(name);/*input: name*/
    printf("\n\n Your are %s\n ", name);/*Output by printf*/
    puts(name);/*Output by puts*/
    getch();
    return 0;
}
