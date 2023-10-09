//Example of call by reference method
#include<stdio.h>
#include<conio.h>
void F(int, int);
//Function Prototype
int main()
{
    int x, y;
    x=100,y=200;
    printf("\nBefore Calling F()");
    printf("\nInside main() x = %d\ty = %d",x,y);
    F(x, y);
    printf("\nAfter calling F()");
    printf("nInside main() x = %d\ty = %d",x,y);
}
void F(int x, int y)
{
    x = 200;
    y = 400;
    printf("\nInside F()    x = %d  \ty = %d",x,y);
}
