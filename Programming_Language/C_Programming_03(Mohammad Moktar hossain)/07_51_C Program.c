//Finding First N Fibonacci Numbers using recursive function
#include<stdio.h>
#include<conio.h>
int fibo(int n)
{
    if ( n == 0 || n == 1)
        return n;
    else
        return (fibo(n-1) + fibo(n-2));
}
void main()
{
    int i, N;
    printf("How many fibonacci Numbers ? ");
    scanf("%d",&N);
    printf("First %d Fibonacci numbers are.....\n", N);
    for ( i = 1; i <= N; i++)
        printf("%d ",fibo(i));
    return 0;
}
