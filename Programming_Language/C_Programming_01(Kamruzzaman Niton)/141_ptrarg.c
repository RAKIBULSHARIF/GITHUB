#include<stdio.h>
#include<conio.h>
int maxValue (int a, int b)
{
    return ((a >b) ? a : b);
}
int minValue (int a, int b)
{
    return((a < b) ? a : b);
}
int getResult(int a, int b, int (*pFn)(int, int))
{
    return(*pFn)(a,b);
}
int main()
{
    //clrscr();
    printf("\nMax of 19 and 28 is %d",getResult(19,28, maxValue));
    printf("\nMin of 28 and 10 is %d",getResult(28,10, minValue));
    getch();
    return 0;
}
