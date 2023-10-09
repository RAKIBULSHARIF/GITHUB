#include<stdio.h>
#include<conio.h>
//Using pow() library function
void main()
{
    float x, n;
    float result;
    printf("To calculate 'x' to the power 'n' \n");
    printf("\nFirst enter a value of 'x' : ");
    scanf("%f",&x);
    printf("Then enter another value for 'n' : ");
    scanf("%f",&n);
    result = pow(x,n);
    printf("\n%f to the power %f is : %f ", x, n, result);
    return 0;
}
