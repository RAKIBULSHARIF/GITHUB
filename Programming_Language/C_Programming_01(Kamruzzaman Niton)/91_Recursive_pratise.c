//Replace Recursion Function for newbie
#include<stdio.h>
#include<conio.h>
long int find_factorial(long int n)
{
    long int i, result;
    result = 1;
    for(i = 2; i <= n; i++)
        result *= i;
    return(result);
}
void main(void)
{
    long int value;
    value = find_factorial(5);
    printf("\nFactorial of 5 is %ld.",value);
    getch();
}
