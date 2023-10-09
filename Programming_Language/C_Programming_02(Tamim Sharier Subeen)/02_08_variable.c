#include<stdio.h>
int main()
{
    int a = 50.45, b = 60, sum = a + b;/*a is integer but the value is float. When result print it show only the integer.not the float value*/
    printf("%d + %d = %d",a,b,sum);
    return 0;
}
