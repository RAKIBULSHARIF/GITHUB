#include<stdio.h>
#include<conio.h>
//Demonestrate of user-defined function
Sum()//Function definition
{
    int Value1, Value2, Sum;
    printf("\nEnter two integer numbers : ");
    scanf("%d %d",&Value1,&Value2);
    Sum = Value1 + Value2;
    printf("\nSum of %d and %d is : %d",Value1,Value2,Sum);
}
void main()
{
    Sum();//Sum() Function Call
    return 0;
}
