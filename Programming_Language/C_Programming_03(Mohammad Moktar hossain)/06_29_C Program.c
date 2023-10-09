#include<stdio.h>
#include<conio.h>
//Calculating Number of total divisors of a number
void main()
{
    long int n;
    int i = 1, d = 0;
    XX:
        printf("\nEnter a positive integer : ");
        scanf("%ld",&n);
        if (n <= 0)
            goto XX;
                printf("\nDivisors of %ld are : ", n);
        while(i <= n)
        {
            if(n%i == 0)
            {
                printf("%4d",i);
                d++;
            }
            i++;
        }
        printf("\nNumber of total divisors is %d",d);
        return 0;
}
