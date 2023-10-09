/*This program modified version of 05_08_math.c*/
#include<stdio.h>
int main()
{
    double celsius, farenheit;
    printf("Enter the temperature is farenheit: ");
    scanf("%lf",&farenheit);
    celsius = (farenheit - 32) / 1.8;
    printf("Temperature in clesius is: %lf\n",celsius);
    return 0;
}
