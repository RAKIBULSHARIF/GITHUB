#include<stdio.h>
#include<conio.h>
//Testing Associativity of Precsedence of / and < operator
void main()
{
    int Op1, Op2, Op3, Result;
    Op1 = 150, Op2 = 10, Op3 = 5;
    Result = Op1/Op2/Op3;
    printf("\n %d/%d/%d = %d", Op1, Op2, Op3, Result);
    Result = Op1<Op2<Op3;
    printf("\n %d<%d<%d = %d", Op1, Op2, Op3, Result);
    return 0;
}
