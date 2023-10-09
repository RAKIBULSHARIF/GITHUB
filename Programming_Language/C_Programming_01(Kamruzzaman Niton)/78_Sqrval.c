#include<stdio.h>
#include<conio.h>
void square_value (long int any_value) //function square_value
{
    long int result;
    result = any_value * any_value;
    printf("The square value of %ld is %ld.", any_value, result);
}
void main()
{
    //clrscr();
    square_value(5);//calling square_value() with value 5
    getch();
}
