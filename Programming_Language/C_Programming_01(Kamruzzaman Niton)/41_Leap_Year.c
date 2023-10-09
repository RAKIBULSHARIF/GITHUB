#include<stdio.h>
#include<conio.h>
void main()
{
    int year;
    //clrscr();
    printf("\n\a Please enter a year (like 1975): ");
    scanf("%d",&year);
    if (((year%4)==0) &&((year%100)!=0) || ((year%400)==0))
        printf("\n %d is a LEAP YEAR.", year);
    else
        printf("\n\a %d is not a LEAP YEAR.", year);
    getch();

}
