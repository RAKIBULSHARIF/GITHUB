#include<stdio.h>
#include<conio.h>
void main()
{
    int x,a,b;
    //clrscr();
    x = 10, a = 5, b = 15;
    printf(" --x  --a  --b\n");
    printf(" ---------------\n");
    while(--a,--b,--x)
        printf("%5d %5d %5d\n",x,a,b);
    getch();
}
