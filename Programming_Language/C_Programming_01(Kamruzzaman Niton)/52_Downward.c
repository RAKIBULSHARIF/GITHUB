#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
    int count;
    //clrscr();
    printf("\nFirst loo\n\t\a");
    for (count = 5; count >= 1; count--)
    {
        printf(" %d, ", count);
        //delay(100);
    }
    printf("\nSecond loop\n\t\a");
    for ( count = 10; count >= 1; count --)
    {
        printf(" %d, ", count);
        //delay(100);
    }
    printf("\nThird loop\n\t\a");
    for(count = 1; count >= 10; count--)
    {
        printf(" %d, ", count);
        //delay(100);
    }
    getch();
}
