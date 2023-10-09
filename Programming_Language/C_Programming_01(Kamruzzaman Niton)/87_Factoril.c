#include<stdio.h>
#include<conio.h>
long int find_factorial(long int n)
{
    if( n <= 1)
        return 1;
    else
        return (n * find_factorial(n - 1));
}
int main(void)
{
    long int x;
    //clrscr();
    x = find_factorial (5);
    printf("\nFactorial is: %ld",x);
    getch();
    return 0;
}
