#include<stdio.h>
#include<conio.h>
int main(void)
{
    char *p;
    //p = NULL;
    //clrscr();
    printf("Enter some text: ");
    gets(p);/*This portion of code not work properly*/
    printf("You have typed: %s",p);/*This portion of code not work properly*/
    getch();
    return 0;
}
