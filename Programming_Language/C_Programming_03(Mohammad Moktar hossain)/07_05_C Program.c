#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.142857
//Using sin(x) library function to calculate sin(x) of trigonometric angle in degree
void main()
{
    double result, x;
    printf("To find sin(x degree) enter a value for 'x' : ");
    scanf("%lf", &x);
    result = sin(x*PI/180);
    printf("The sin(%lf degree) is : %lf\n",x, result);
    return 0;
}
