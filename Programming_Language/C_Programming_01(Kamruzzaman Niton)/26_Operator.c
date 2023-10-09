#include <stdio.h>
#include <conio.h>
int main()
{
    int x, y, z;
    x = 10; y  = 19; z = 28;
    printf("Less than(<) Operator: \n");
    printf("\t x < y : %d\n", x < y);
    printf("\t y < x : %d\n\n", y < x);
    printf("Less than or Equal to(<=) operator:\n");
    printf("\t x <= y : %d\n", x <= y);
    printf("\t y <= x : %d\n\n", y <= x);
    printf("Greater than (>) operator: \n");
    printf("\t x > y : %d\n", x > y);
    printf("\t y > x : %d\n\n", y > x);
    printf("Greater than or Equal to (>=) operator:\n");
    printf("\t x >= y : %d\n", x >= y);
    printf("\t y >= x : %d\n\n", y >= x);
    printf("Equal to (==) operator: \n");
    printf("\t x == y : %d\n\n", x == y);
    printf("\t y == z : %d\n\n", y == z);
    printf("Not Equal to(!=) operator: \n");
    printf("\t x != y : %d\n\n", x != y);
    printf("\t y != z : %d\n\n", y != z);
    return 0;
}
