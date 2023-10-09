#include<stdio.h>
#include<conio.h>
void main()
{
    int i, j;
    //clrscr();
    for( i = 1; i <= 3; i++)
    {
        printf("\n i is now %d\n\t",i);
        for(j = 1; j <= 4; j++)
            printf(" j = %d ",j);
    }
    getch();

}
