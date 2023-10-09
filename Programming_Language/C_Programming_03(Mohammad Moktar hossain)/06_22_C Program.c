#include<stdio.h>
#include<conio.h>
//Example of for loop
void main()
{
    int i, N, d;
    int isprime;
    printf("\nEnter the highest range : ");
    scanf("%d",&N);
    printf("Series of prime number upto %d is :\n",N);
    for ( i = 2; i <= N; i++)
    {
        isprime = 1;
        for ( d = 2; d < i; d++)//Inner for
            if ( i % d == 0)
            isprime =0;
        if(isprime != 0)
            printf("%d ",i);
    }
    //End of for
    return 0;
}
