#include<stdio.h>
#include<conio.h>
//Example with local variable
void main()
{
    int x = 0; //Local variable
    if(x<=5)
    {
        int x = 5;
        printf("\nInside the if block x = %d",x);
    }
    printf("\nOutside the if block x = %d",x);
    return 0;
}
