//Finding factorial using for loop
#include<stdio.h>
#include<conio.h>
#include<time.h>

long Factorial(int n)
{
    int i;
    long f = 1;
    for ( i = 2; i <= n; i++)
        f = f*i;
    return (f);
}
void main()
{
    int N;
    long F = 1;
    time_t STime,ETime;
    //time_t variable
    XX:
        printf("\nEnter a Positive integer: ");
        scanf("%d", &N);
        time(&STime);
        //Timer starts
        if (N < 0)
            goto XX;
        F = Factorial(N);
        printf("\nFactorial of %d = %ld",N,F);
        time(&ETime);
        //Timer stops
        printf("\nProcessing Time: %f sec.",(ETime-STime)/CLK_TCK);
        return 0;
}

