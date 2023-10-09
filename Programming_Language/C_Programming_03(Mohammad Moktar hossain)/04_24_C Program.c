#include<stdio.h>
#include<conio.h>
void main()
{
    int Value1 = 32000, Value2 = 32000;
    int Sum;    //unexpected datatype
    Sum = Value1 + Value2;
    printf("\nValue1 = %d",Value1);
    printf("\nValue2 = %d",Value2);
    printf("\nSum = %d \t Unexpected Result!",Sum);
    return 0;
}
