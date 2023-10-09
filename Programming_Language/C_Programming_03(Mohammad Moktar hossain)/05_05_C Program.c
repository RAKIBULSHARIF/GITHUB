#include<stdio.h>
#include<conio.h>
//Calculating Area of Circle
void main()
{
    int r;
    float pi = 3.14159, area;
    printf("Please enter the radius : ");
    scanf("%d",&r);
    area = pi*r*r;
    printf("\nArea of the circle = %f",area);
    return 0;
}
