#include<stdio.h>
#include<conio.h>
//Testing Associativity of asssignment (=) operator
void main()
{
    int x, y;
    x = 10;
    y = 15;
    printf("\n x = %d x + y = %d", x, x = x + y);
    printf("\n x = %d x < y = %d", x, x = x < y);
    return 0;
}
