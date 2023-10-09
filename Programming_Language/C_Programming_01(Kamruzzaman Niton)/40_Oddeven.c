#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    //clrscr();
    printf("\n\a Please enter a integer number: ");
    scanf("%d",&n);
    if( ( n%2) != 0)
        printf("\n\a You entered an odd number.");
    else
        printf("\n\a You entered an even number.");
    getch();

}
