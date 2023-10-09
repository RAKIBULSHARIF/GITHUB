#include<stdio.h>
#include<conio.h>
//Calculting sum of the series
//ex = 1+x/1!+x2/2!+x3/3!+x4/4!+...+xn/n!
float power(int x, int y)
{
    float i, p = 1.0;
    for (i = 1; i <= y;i++)
        p = p * x;
    return (p);
}
int fact(int n)
{
    int i, f = 1;
    if(n<=1)
        return 1;
    else
    {
        for(i=1;i<=n;i++)
            f=f*i;
        return (f);
    }
}
int main()
{
    int i,n;
    float x, sum = 1.0;
    printf("Enter an integer number for x : ");
    scanf("%f",&x);
    printf("Enter another number for n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum = sum + power(x, i)/fact(i);
    }
    printf("1+x/1!+x2/2!+x3/3!+x4/4!+...+xn/n! = %.2f",sum);
    return 0;
}
