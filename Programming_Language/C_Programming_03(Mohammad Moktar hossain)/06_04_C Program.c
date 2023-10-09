#include<stdio.h>
#include<conio.h>
//Example of if..else Control
void main()
{
    int year;
    printf("Enter the year to be tested: ");
    scanf("%d",&year);
    if((year%4 == 0 && year%100 != 0) || year%400 == 0)
        printf("\n %d is a leap year.",year);
    else
        printf("\n %d is not a leap year",year);
    return 0;
}
