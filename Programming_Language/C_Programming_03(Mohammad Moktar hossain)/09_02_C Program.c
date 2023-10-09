//Using pointer variable
#include<stdio.h>
#include<conio.h>
void main()
{
    int x=5, y=10, *xPtr, *yPtr;
    int p,q;
    xPtr = &x, yPtr = &y;
    p = *xPtr, q = *yPtr;
    printf("x = %d \ty = %d",x,y);
    printf("\np = %d \tq = %d",p,q);
    return 0;
}
