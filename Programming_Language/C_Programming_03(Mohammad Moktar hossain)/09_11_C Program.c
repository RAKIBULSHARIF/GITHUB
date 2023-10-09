//Example of call by reference method
#include<stdio.h>
#include<conio.h>
void Swap(int *, int *);
//Function Prototype
int main()
{
    int x, y;
    x = 100, y = 200;
    printf("Before calling Swap()");
    printf("\nInside main() x = %d\ty = %d",x,y);
    Swap(&x,&y);
    printf("\nAfter Calling Swap()");
    printf("\nInside main() x = %d\ty = %d",x,y);
}
void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
