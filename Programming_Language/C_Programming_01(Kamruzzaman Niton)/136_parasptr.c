#include<stdio.h>
#include<conio.h>
void chng_val(int *x, int *y, int *z)
{
    printf("\n Original value of x,y and z:\t%d\t%d\t%d",*x,*y,*z);
    *x = 100;
    *y = 200;
    *z = 300;
    printf("\n Changing value of x,y and z:\t%d\t%d\t%d",*x,*y,*z);
}
int main()
{
    int x = 10, y = 20, z = 30;
    //clrscr();
    chng_val(&x, &y, &z);/*sending address to the function*/
    printf("\n Value of x, y and z (in main):\t%d\t%d\t%d",x,y,z);
    getch();
    return 0;
}
