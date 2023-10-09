#include<stdio.h>
#include<conio.h>
//Example of for loop
void main()
{
    int i = 0, j = 0;
    printf("Series of prime number upto 25 is:\n");
    for ( i = 5; i >= 1; i--)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%4d",j);
        }
        //End of inner for
        printf("\n");
    }
    //End of outer for
    return 0;
}
