#include<stdio.h>
#include<conio.h>
#include<math.h>
//Using sin(x) library functiion
int main(void)
{
    double x, result;
    printf("To find sin(x) enter a value for 'x' : ");
    scanf("%lf",&x);
    result = sin(x);
    printf("The sin(%lf) is : %lf\n", x, result);
    return 0;
}
