#include<stdio.h>
#include<conio.h>
//Testing Associativity of assignment (=) operator
void main()
{
    int x = 10;
    printf("\n x = %d ++x = %d x = %d", x, x = x + 1, x);
    return 0;
}
