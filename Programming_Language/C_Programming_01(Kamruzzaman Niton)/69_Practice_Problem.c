#include<stdio.h>
#include<conio.h>
void main()
{
    int counter;
    printf("Even Number\n\n");
    while (counter <= 100)
    {
        counter++;
        if(!(counter % 2))
            printf("%d ",counter);
    }
    getch();
}
