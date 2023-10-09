#include<stdio.h>
#include<conio.h>
void main()
{
    int counter;
    //clrscr();
    printf("\nEven number\n");
    for ( counter = 1; counter <= 50; counter++)
    {
        if( counter % 2) //ODD
            continue;
        printf("%d", counter);
    }
    printf("\n\n\nOdd number\n");
    counter = 0;
    while( counter < 50)
    {
        counter++;
        if ( !(counter % 2)) //EVEN
            continue;
        printf("%d", counter);
    }
    getch();
}
