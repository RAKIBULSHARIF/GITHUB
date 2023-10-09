#include<stdio.h>
#include<conio.h>
//Example of Multifunction Programm
void main()
{
    int F1();//F1() Function prototype
    printf("\nInside main()......");
    F1();
}
int F1()
{
    int F2(); //F2 Function Prototype (Multifunction)
    printf("\nInside F1().....");
    F2();
    return 0;
}
int F2()
{
    printf("\nInside F2().....");
    return 0;
}
