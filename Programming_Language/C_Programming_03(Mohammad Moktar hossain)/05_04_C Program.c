#include<stdio.h>
//Example of Arithmatic operation
void main()
{
    int a = 10, b = 15, c = 20, result;
    result = c / a;
    printf("\nDivison: %d / %d = %d",c,a, result);
    result = b % a;
    printf("\nModulo: %d %% %d = %d",b,a, result);
    result = a * b + c;
    printf("\nExpression: %d * %d + %d = %d",a,b,c, result);
    result = a + b * c;
    printf("\nExpression: %d + %d * %d = %d",a,b,c, result);
    return 0;
}
