#include<stdio.h>
void sum_of_all(void)
{
    int n, sum;
    sum = 0;
    for ( n = 0; n <= 100; n++)
        sum += n;
        printf("\nSum of all numbers from 1 to 100 is %d.", sum);
    getch();
}
void main(void)
{
    //clrscr();
    sum_of_all();
}
