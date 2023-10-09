//Using External Variable
#include<stdio.h>
#include<conio.h>
void external();
//Function prototype
int x = 10;
//Global variable
int x;
//Global Also
//This may cause an error, if so, then cut this
void main()
{
    printf("\nBefore Calling External(), x %d",x);
    external();
    //Calling external()
    printf("\nAfter Calling External(), x = %d",x);
}
void external()
//Function definition
{
    extern int x;
    //By default extern
    x = 20;
    printf("\nInside External() x = %d",x);
}

