//Find factorial using recursive method
#include<stdio.h>
#include<conio.h>
#include<time.h>

long Factorial(int n)
{
    if ( n <= 1)
        return 1;
    else
        return (n * Factorial(n-1));
}
void main()
{
    int N;
    long F;
    time_t STime, ETime;
    //time_t variables
    XX:
        printf("\nEnter a Positive integer : ");
        scanf("%d", &N);
        time(&STime);
        //Times starts
        if( N < 0)
            goto XX;
        F = Factorial(N);
        printf("\nFactorial of %d = %ld",N,F);
        time(&ETime);
        //Times stops
        printf("\nProcessing Time : %f sec",(ETime-STime)/CLK_TCK);
        return 0;
}
