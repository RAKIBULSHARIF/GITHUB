//Converting decimal number to binary number
#include<stdio.h>
#include<conio.h>
void main()
{
    static char Base2[2] = {'0', '1'};
    long NumtoConvert;
    long Convertednum[64];
    long OriginalNum;
    int Index, NextDigit;
    Index = 0;
    printf("\nEnter a decimal number to be converted : ");
    scanf("%ld", &NumtoConvert );
    //%o for octal and %x for hex. input
    OriginalNum = NumtoConvert;
    while(NumtoConvert != 0)
    {
        Convertednum[Index] = NumtoConvert % 2;
        ++Index;
        NumtoConvert = NumtoConvert/2;
    }
    Index--;
    printf("\nThe equivalent binary number is : ");
    while(Index>=0)
    {
        NextDigit=Convertednum[Index];
        printf("%c", Base2[NextDigit]);
        --Index;
    }
    return 0;
}
