#include<stdio.h>
#include<conio.h>
//Example of for loop
void main()
{
    int i, N;
    long int sum = 0;
    printf("\nEnter a positive integer : ");
    scanf("%d",&N);
    printf("\n2 + 4 + ... + %d = ", N);
    for ( i = 2; i <= N; i = i + 2)
    {
        sum = sum + i;
    }
    //End of loop
    printf("%ld",sum);
    return 0;
}
