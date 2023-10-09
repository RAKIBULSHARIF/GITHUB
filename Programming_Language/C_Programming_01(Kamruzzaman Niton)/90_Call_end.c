#include<stdio.h>
#include<conio.h>
void RecursiveCall(int);
int main()
{
    //clrscr();
    RecursiveCall(2);
    getch();
    return 0;
}
void RecursiveCall(int x)
{
    if( x == 0)
        return 0;
    printf("%d\n",x);
    RecursiveCall(x-1);
    printf("Call End\n\n");
}
