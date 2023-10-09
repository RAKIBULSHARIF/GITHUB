#include<stdio.h>
//Example cast Operation
void main()
{
    int a = 15, b = 10;
    float c;
    c = a/b;
    printf("\nWihout casting %d/%d = %.2f", a, b, c);
    c = (float)a/(float)b;
    //Casting both a and b
    printf("\nCasting both operands %d/%d = %.2f", a, b, c);
    return 0;
}
