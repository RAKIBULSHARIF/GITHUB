#include<stdio.h>
//Bitwise OR Opetarions
void main()
{
    int Op1 = 2, Op2 = 5;
    int BitwiseOR, LogicalOR, BitwiseNOT;
    int LSValue, RSValue;
    BitwiseOR = Op1 | Op2;
    LogicalOR = Op1 || Op2;
    printf("\n Bitwise OR of %d and %d is : %d,", Op1, Op2, BitwiseOR);
    printf("\n Logical OR of %d and %d is : %d", Op1, Op2, LogicalOR);
    LSValue = Op2 << 2;
    printf("\n 2 times left shift of %d is : %d", Op2, LSValue);
    RSValue = Op2 >> 1;
    printf("\n 1 time right shift of &d is : %d", Op2, RSValue);
    return 0;
}
