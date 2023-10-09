#include<stdio.h>
#include<conio.h>
//Calculating Pascal's Triangle Series
int C(int x, int y);
int P(int x, int y);
int F(int n);
void main()
{
    int i,j;
    for(i = 0; i <= 5; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("%d\t",C(i,j) );
        }
        printf("\n");
    }
    return 0;
}
int C(int x, int y)
{
    return (P(x,y)/F(y));
}
int P(int x, int y)
{
    int i, p = 1;
    for(i = 0; i < y; i++)
    {
        p = p*x;
        x--;
    }
    return p;
}
int F(int n)
{
    int i, f = 1;
    if(n <= 1)
        return 1;
    else
    {
        for (i = 1; i <= n; i++)
            f = f*i;
        return (f);
    }
}
