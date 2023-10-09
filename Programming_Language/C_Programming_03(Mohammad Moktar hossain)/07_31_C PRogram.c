//External variable
#include<stdio.h>
#include<conio.h>
#include"Add.c"
#include"Sub.c"
float value1, value2,result;
//Global declaration
int main()
{
    printf("Enter Value1 : ");
    scanf("%f",&value1);
    printf("Enter Value2 : ");
    scanf("%f",&value2);
    result = Add(value1, value2);
    printf("\n %.2f + %.2f = %.2f",value1, value2, result);
    result = Sub(value1, value2);
    printf("\n %.2f + %.2f = %.2f",value1, value2, result);
    return 0;
}
