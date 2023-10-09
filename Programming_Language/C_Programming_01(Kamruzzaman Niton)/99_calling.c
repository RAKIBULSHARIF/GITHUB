#include<stdio.h>
#include<conio.h>
int x;
void X(void)
{
    x = 10;
    printf("\n In X(): x = %d\n",x);
}
int main(void)
{
    //clrscr();
    printf("\n Before Calling X(), x = %d\n", ++x);
    X();
    printf("\n After Calling X(), x = %d\n", x);
    getch();
    return 0;
}
