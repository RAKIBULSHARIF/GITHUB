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
    printf("\n----------------------");
    printf("\n1 + 2 + 3 + ... + %d = ", N);
    for ( i = 1; i <= N; i = i + 1)
    {
        sum = sum + i;
    }
    //End of For loop
    printf("%ld", sum);
    return 0;
}
