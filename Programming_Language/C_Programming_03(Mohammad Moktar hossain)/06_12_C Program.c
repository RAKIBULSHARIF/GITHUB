#include<stdio.h>
#include<conio.h>
//Example of for loop
void main()
{
    int i, N;
    printf("\nEnter a positive integer : ");
    scanf("%d",&N);
    for ( i = 2; i <= N; i = i + 2)
    {
        printf("%d ",i);
    }
    //End of for loop
    return 0;
}
