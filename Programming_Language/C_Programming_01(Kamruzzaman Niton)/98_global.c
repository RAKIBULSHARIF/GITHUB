#include<stdio.h>
#include<conio.h>
int x = 10;
void x1(void)
{
    printf("\n From x1(): x = %d\n",x);
    x = 15;
}
void x2(void)
{
    printf("\n From x2(): x = %d\n",x);
}
int main(void)
{
    //clrscr();
    printf("\n From main(): x = %d\n",x);
    x1();
    x2();
    getch();
    return 0;
}
