#include<stdio.h>
#include<conio.h>
int main()
{
    int x, *y;
    x = 1;
    y = &x;
    //clrscr();
    printf("Value of y is %x.\n",y);
    printf("Value of x is %x.\n",x);
    printf("Address of x is %x.\n",&x);
    getch();
    return 0;
}
