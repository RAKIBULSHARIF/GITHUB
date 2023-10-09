//Example of using auotomatic variables
#include<stdio.h>
#include<conio.h>
int Sum();
//Sum() function prototype
int Mul();
//Mul() function prototype
int x = 100, y = 100;
//Global variable(Never be auto)
void main()
{
    auto int x = 10, y = 10;
    //Local variable(auto declaration)
    printf("\nInside main().....");
    printf("\nx = %d y = %d",x,y);
    Sum();
    Mul();
    //Calling Sum() function
    //Calling Mul() function
}
int Sum()
{
    auto int x = 20, y = 20;
    //Local variable(auto declaration)
    printf("\nInside Sum().....");
    printf("\nx = %d y = %d",x,y);
    return 0;
}
int Mul()
{
    int x = 30, y = 30;
    //Local variable(By default auto)
    printf("\nInside Mul()....");
    printf("\nx = %d y = %d",x,y);
    return 0;
}
