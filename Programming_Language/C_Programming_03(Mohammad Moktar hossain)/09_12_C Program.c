//Example of call by reference method
#include<stdio.h>
#include<conio.h>
void F(int *, int *);
//Function Prototype
int main()
{
    int x, y;
    x = 100, y = 200;
    printf("\nBefore Calling F()");
    printf("\nInside Main() x = %d\ty = %d",x,y);
    F(&x,&y);
    printf("\nAfter Calling F()");
    printf("\nInside main() x = %d\ty = %d",x,y);
}
void F(int *a, int *b)
{
    *a = 200;
    *b = 400;
    printf("\nInside F()    x = %d  \ty = %d",*a,*b);
}
