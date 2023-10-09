#include<stdio.h>
#include<conio.h>
//Example of using global variables
int Sum();//Sum() function prototype
int Mul();//Mul() function prototype
int x=10,y=20;  //x, y are global variables
void main()
{
    printf("\nInside main().......");
    printf("\nx = %d y = %d",x,y);
    Sum();
    Mul();
}
int Sum()
{
    int S = x + y;
    printf("\nInside Sum()......");
    printf("\n%d + %d = %d",x,y,S);
    return S;
}
int Mul()
{
    int M = x * y;
    printf("\nInside Mul()......");
    printf("\n%d * %d = %d",x,y,M);
    return M;
}
