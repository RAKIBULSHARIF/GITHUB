#include<stdio.h>
#include<conio.h>
//Example for loop
void main()
{
    int i, N;
    printf("\nEnter a positive integer : ");
    scanf("%d",&N);
    for ( i = 1; i <= N; i = i + 2)
    {
        printf("%d ",i);
    }
    //End of loop
    return 0;
}
