#include<stdio.h>
#include<conio.h>
//Example of do--while loop statement
void main()
{
    int number, rightdigit, sum = 0;
    int actnum;
    printf("\nEnter your number : ");
    scanf("%d",&number);
    actnum = number;
    do
    {
        rightdigit = number % 10;
        //printf("%d", rightdigit);
        number = number / 10;
        sum = sum + rightdigit;
    }
    while(number != 0);
    printf("\nSum of Digits of the number %d is %d",actnum,sum);
    return 0;
}
