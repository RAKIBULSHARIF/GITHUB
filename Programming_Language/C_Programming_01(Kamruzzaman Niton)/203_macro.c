#include<stdio.h>
#include<conio.h>
#define  SUM(x, y) ((x) + (y))
int main()
{
    printf("\n Adding 5 + 5 = %d",SUM(5, 5));
    printf("\n Adding 5.1 + 5.2 = %f",SUM(5.1, 5.2));
    printf("\n Adding -120 + 1020 = %d",SUM(-120, 1020));
    return 0;
}
