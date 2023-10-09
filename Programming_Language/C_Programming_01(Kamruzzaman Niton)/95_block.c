#include<stdio.h>
#include<conio.h>
int main()
{
    int rakib = 10;
    printf("\nOutside the block rakib = %d.",rakib);
    if (rakib <= 10)
    {
        int rakib = 20;
        printf("\nInside the block rakib = %d.",rakib);
    }
    printf("\nAt the end rakib is %d.", rakib);
    getch();
    return 0;
}
