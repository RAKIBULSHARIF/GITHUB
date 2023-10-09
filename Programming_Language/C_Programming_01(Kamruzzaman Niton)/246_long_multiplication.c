#include<assert.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
int sigDigits1, /*Significant digits for first number*/
    sigDigits2, /*Significant digits for second number*/
    result[20], /*the final result*/
    number1[10],/*First Number*/
    number2[10],/*Second Number*/
    partialResult[11];/*temporary storage*/
/*function to find number of significant digits in pNum*/
int getSignificantDigits(int *pNum, int nLength)
{
    while (!*pNum++)
    {
        nLength--;
        if(0 == nLength)
            return 1;
    }
    return nLength;
}
/*get digits from numbers*/
int getDigits(int *pNum)
{
    int i = 0,
        n = 0,
        ch = 0;
    char digits[11],
         tempPlace[11];
    while (( (ch = getchar()) == ' ') || ( ch == '\t'));
    if ( ch == '\n')
        return 0;
    while (isdigit(ch))
    {
        digits[n++] = ch;
        ch = getchar();
    }
    ungetc(ch, stdin);
    digits[n] = '\0';
    for(i=0;i < 10-strlen(digits);i++)
        *pNum++ = 0;
    for(i=0;i < strlen(digits);i++)
        *pNum++ = digits[i] - '0';
    return 1;
}
/*get two numbers*/
int getInput()
{
    int i;
    if(!getDigits(number1))
        return 0;
    if(!getDigits(number2))
        return 0;
    while(getchar() != '\n');
    sigDigits1 = getSignificantDigits(number1,10);
    sigDigits2 = getSignificantDigits(number2,10);
    return 1;
}
/*print vertical output*/
void printSteps(int nblank, int nDigits, int *pDigits)
{
    int i, sigDigits = 0;
    for(i=0; i < nblank;i++)
        putchar(' ');
    for(i=0; i < nDigits; i++)
    {
        if (pDigits[i])
        {
            sigDigits = 1;
            putchar(pDigits[i]+'0');
        }
        else
        {
            if(sigDigits || i == nDigits-1)
                putchar(pDigits[i]+'0');
            else
                putchar(' ');
        }
    }
    putchar('\n');
}
/*print horizontal lines*/
void printLine(int nblank, int nhyphen)
{
    int i;
    for(i=0; i < nblank;i++)
        putchar(' ');
    for(i=0; i < nhyphen;i++)
        putchar('-');
    putchar('\n');
}
/*function to multiply two digits*/
void multiply(int pos)
{
    int i, carry = 0, temp;
    for(i=10; i > 0;i--)
    {
        temp = number2[pos-1] * number1[i-1] + carry;
        partialResult[i] = temp % 10;
        carry = temp / 10;
    }
    partialResult[0] = carry;
}
/*function to add two digits*/
void add(int pos)
{
    int i, j, temp, carry = 0;
    for(i=10;i>=0;i--)
    {
        temp = partialResult[i] + result[i+pos-1] + carry;
        result[i+pos-1] = temp % 10;
        carry = temp / 10;
    }
    result[i+pos-1] += carry;
}
int main()
{
    int i;
    while (getInput())
    {
        printSteps(11,10,number1);
        printSteps(11,10,number2);
        i = (sigDigits1 > sigDigits2) ? sigDigits1 : sigDigits2;
        printLine(21-i,i);
        for(i=0;i < 20;i++)
            result[i] = 0;
        for(i=10;i>10-sigDigits2;i--)
        {
            multiply(i);
            printSteps(i,11,partialResult);
            add(i);
        }
        if (sigDigits2 > 1)
        {
            i = getSignificantDigits(result,20);
            printLine(21-i,i);
            printSteps(1,20,result);
        }
        putchar('\n');
    }
}
