#include<stdio.h>
#include<conio.h>
//C++ style function definition with prototype
int Sum();//Function prototype
main()
{
    Sum(); //Function call
}
int Sum() // Function definition
{
    int Value1, Value2, Sum;
    printf("Enter Value1 : ");
    scanf("%d",&Value1);
    printf("Enter Value2 : ");
    scanf("%d",&Value2);
    Sum = Value1 + Value2;
    printf("Value1 = %d \nValue2 = %d",Value1,Value2);
    printf("\nSum = %d",Sum);
    return (Sum);
}
