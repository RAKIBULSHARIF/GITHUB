#include<stdio.h>
#include<conio.h>
//Example While loop
void main()
{
    int i, N;
    printf("Enter a positive Integer : ");
    scanf("%d",&N);
    printf("Here is the given series : ");
    i = 1;
    while(i<=N)
    {
        printf("%d ",i);
        i = i + 1;
    }
    return 0;
}
