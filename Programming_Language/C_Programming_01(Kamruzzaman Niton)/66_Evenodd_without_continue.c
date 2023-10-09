#include<stdio.h>
#include<conio.h>
void main()
{
    int counter;
    //clrscr();
    printf("\n\n\nEven number:\n");
    for (counter = 1; counter <= 100; counter++)
    {
        if (!(counter % 2)) //Even
            printf("%d", counter);
    }
    printf("\n\n\nOdd number:\n");
    counter = 0;
    while (counter < 100)
    {
        counter++;
        if(counter % 2)//odd
            printf("%d", counter);
    }
    getch();
}
