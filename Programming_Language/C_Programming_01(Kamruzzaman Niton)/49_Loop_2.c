#include<stdio.h>
#include<conio.h>
void main()
{
    long int n, sum, range;
    //clrscr();
    printf("\n How many numbers do you want to calculate: ");
    scanf(" %ld",&range);
    sum = 0;
    for(n =1; n<=range; n++)
    sum += n;
    printf("\n Sum of all numbers from 1 to %ld is %ld.",range, sum);
    getch();
}
