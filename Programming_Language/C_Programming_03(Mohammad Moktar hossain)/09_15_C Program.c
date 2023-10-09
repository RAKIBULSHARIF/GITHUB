//Example of call by reference method
#include<stdio.h>
#include<conio.h>
int Exp(int, int);
//Function prototype
int main()
{
    int x, y, value;
    int(*ptof)(int, int);
    //Pointer to function declaration
    ptof = &Exp;
    //ptof points to Exp(int, int)
    printf("Enter x and y : ");
    scanf("%d %d",&x, &y);
    value = (*ptof)(x, y);
    //Function call using pointer
    printf("\nx*x+2*x*y+y*y = %d",value);
}
int Exp(int x, int y)
{
    return (x*x+2*x*y+y*y);
}
