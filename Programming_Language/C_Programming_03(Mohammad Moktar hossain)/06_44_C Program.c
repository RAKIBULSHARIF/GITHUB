#include<stdio.h>
#include<conio.h>
//Finding Factorial using goto statement
void main()
{
    int i,x;
    long fact = 1;
    XX:
        printf("\nEnter a positive integer : ");
        scanf("%d",&x);
        if(x<0)
        {
            printf("\nNegative Number not allowed! ");
            goto XX;
        }
        else if (x == 0)
            printf("\nFactorial of %d is : %ld",x,fact);
        else
        {
            for( i = 2; i<=x; i++)
            fact = fact * i;
            printf("\nFactorial of %d is : %ld",x, fact);
        }
        return 0;
}
