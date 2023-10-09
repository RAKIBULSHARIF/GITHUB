#include<stdio.h>
#include<conio.h>
//Example for loop
void main()
{
    int i, N;
    long Sum = 0;
    printf("\nEnter a positive integer : ");
    scanf("%d",&N);
    printf("\nSum of Series");
    printf("\n------------------");
    printf("\n1 + 2 + 3 + .... + %d = ",N);
    i = 1; //Counter Initialization
    for ( ; i <= N; )//Condition
    {
        Sum = Sum + i;
        i = i + 1; //Counter Increment
    }
    //End of for
    printf("%ld",Sum);
    return 0;
}
