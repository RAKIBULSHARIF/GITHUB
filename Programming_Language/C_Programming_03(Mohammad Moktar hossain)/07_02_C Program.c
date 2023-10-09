#include<stdio.h>
#include<math.h>
//Using sqrt() library function
void main()
{
    double x, result;
    printf("\nEnter a positive number : ");
    scanf("%lf",&x);
    result = sqrt(x);
    printf("The square root of %lf is : %lf\n",x,result);
    return 0;
}
