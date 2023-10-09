#include<stdio.h>
#include<conio.h>
void main()
{
    int counter;
    //clrscr();
    printf("First Loop:\n");
    for( counter = 1; counter <= 100; counter++) //first loop
    {
        if(counter ==50)
            break;
        printf("%d ", counter);
    }
    printf("\n\n\nSecond Loop:\n");
    for (counter = 100; counter >= 1; counter--) //second loop
    {
        if( counter == 50)
            break;
        printf("%d ", counter);
    }
    getch();
}
