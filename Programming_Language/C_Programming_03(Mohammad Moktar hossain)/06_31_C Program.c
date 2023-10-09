#include<stdio.h>
#include<conio.h>
//Finding Prime Factor of a number
void main()
{
    int i;
    long n;
    printf("'nEnter a positive integer number : ");
    scanf("%ld",&n);
    printf("\nPrime Factors of %ld are : ",n);
    i = 2;
    while(i<=n)
    {
        while(n%i==0)
        {
            printf("%4d",i);
            n = n/i;
        }
        i++;
    }
    return 0;
}
