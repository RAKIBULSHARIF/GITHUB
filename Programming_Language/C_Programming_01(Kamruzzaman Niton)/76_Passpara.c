#include<stdio.h>
#include<conio.h>
void sum_of_all(int niton)//sum_of_all() with one parametre
{
    long int n, sum;
    sum = 0;
    for(n = 0;n <= niton; n++)
        sum += n;
    printf("\n sum of all numbers from 1 to %d is %ld.", niton, sum);
    getch();
}
void main(void)
{
    //clrscr();
    sum_of_all(200);
}
