#include<stdio.h>
#include<conio.h>
//Decimal to Roman coversion
void main()
{
    long n;
    printf("\nEnter decimal number : ");
    scanf("%ld",&n);
    printf("\nThe roman number is : ");
    while(n>=1000)
    {
        printf("M");
        n = n - 1000;
    }
    while(n>=500)
    {
        printf("D");
        n=n-500;
    }
    while(n>=100)
    {
        printf("C");
        n=n-100;
    }
    while(n>=50)
    {
        printf("L");
        n=n-10;
    }
    while(n>=10)
    {
        printf("X");
        n=n-10;
    }
    if ((n >= 5) && (n<9))
    {
        printf("V");
        n=n-5;
    }
    switch(n)
    {
    case 0:
        break;
    case 1:
        printf("r");
        break;
    case 2:
        printf("II");
        break;
    case 3:
        printf("III");
        break;
    case 4:
        printf("IV");
        break;
    }
    return 0;

}
