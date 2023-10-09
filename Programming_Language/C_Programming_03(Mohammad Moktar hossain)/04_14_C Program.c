#include<stdio.h>
#include<conio.h>
void main()
{
    float x = 125;
    printf("\nx = %f",x);           //using %f
    printf("\nx = %10.0f",x);       //using %10.0f
    printf("\nx = %10.1f",x);       //using %10.1f
    printf("\nx = %10.2f",x);       //using %10.2f
    printf("\nx = %10.3f",x);       //using %10.3f
    printf("\nx = %10.4f",x);       //using %10.4f

    printf("\n");

    printf("\nx = %f",x);       //using %f
    printf("\nx = %.0f",x);     //using %.0f
    printf("\nx = %.1f",x);     //using %.1f
    printf("\nx = %.2f",x);     //using %.2f
    printf("\nx = %.3f",x);     //using %.3f
    printf("\nx = %.4f",x);     //using %.4f
    return;
}
