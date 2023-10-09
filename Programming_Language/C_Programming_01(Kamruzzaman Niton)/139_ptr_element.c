/*This programme may create garbage value*/
#include<stdio.h>
#include<conio.h>
int *funcX()
{
    int x[5] = {5, 23, 43, 50,60};
    return x;
}
int main()
{
    int *p,i;
    //clrscr();
    p = funcX();
    for( i = 0; i < 5; i++)
        printf("Element[%d] = %d\n",i,p[i]);
    getch();
    return 0;
}
