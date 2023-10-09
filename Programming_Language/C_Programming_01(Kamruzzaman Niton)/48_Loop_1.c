#include<stdio.h>
#include<conio.h>
void main()
{
    int count;
    //clrscr();
    printf(" First loop\n\a"); //first loop
    for( count = 1; count <= 15; count++)
    printf(" %d ",count);
    printf("\n Second loop\n\a"); //second loop
    for( count = 1; count <= 10; count++)
    printf(" %d ",count);
    printf("\n Third loop\n\a"); // third loop
    for( count = 100; count <= 5; count++)
    printf(" %d ", count);
    getch();
}
