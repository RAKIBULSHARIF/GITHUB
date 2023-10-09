#include<stdio.h>
#include<conio.h>
//Example of while loop
void main()
{
    int i, N;
    printf("\nEnter a positive integer : ");
    scanf("%d",&N);
    printf("Here is the given series : \n");
    i = 2;
    while(i<=N)
    {
        printf("%d ",i);
        i = i + 2;
    }
    return 0;
}
