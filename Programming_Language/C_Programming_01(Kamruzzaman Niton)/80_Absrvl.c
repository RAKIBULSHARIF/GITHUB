#include<stdio.h>
#include<conio.h>
int abs_val(int val)
{
    return (-val); //two return statements
    return (val);
}
void main(void)
{
    int val, get;
    //clrscr();
    printf("\nEnter a value: ");
    scanf("%d",&val);
    get = abs_val(val); //'get' gets the negation of val's value
    printf("\n Absolute value of %d is %d.",val, get);
    getch();
}
