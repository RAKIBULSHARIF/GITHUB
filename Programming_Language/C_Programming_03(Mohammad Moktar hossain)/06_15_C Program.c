#include<stdio.h>
#include<conio.h>
//Example of for loop
void main()
{
    int i, N;
    long sum = 0;
    printf("\nEnter a positive integer : ");
    scanf("%d", &N);
    printf("\nSum of Series");
    printf("\n-----------------------");
    printf("\n1 + 2 + 3 + .... + %d = ",(2*N+1));
    for ( i = 1; i <= (2*N+1); i = i + 2)
    {
        sum = sum + i;
    }
    printf("%ld", sum);
    return 0;
}
