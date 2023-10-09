#include<stdio.h>
#include<conio.h>
//Function call that effects on return value
float Total();
int main()
{
    float Tutorial, GTotal;
    printf("Enter Tutorial Marks : ");
    scanf("%f",&Tutorial);
    GTotal = Total() + Tutorial;
    printf("\nGrand Total : %.2f", GTotal);
    return 0;
}
