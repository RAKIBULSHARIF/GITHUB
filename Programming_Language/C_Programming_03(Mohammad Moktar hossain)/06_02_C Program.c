#include<stdio.h>
#include<conio.h>
//Program to find largest (maximum) of 3 integer numbers
void main()
{
    int a,b,c;
    printf("Input three integer numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a > b && a > c)
        //when a>b and also a>c
        printf("%d is the largest number",a);
    else if (b > a && b > c)
        //when b>a and also b>c
        printf("%d is the largest number",b);
    else //otherwise
        printf("%d is the largest number",c);
    return 0;
}
