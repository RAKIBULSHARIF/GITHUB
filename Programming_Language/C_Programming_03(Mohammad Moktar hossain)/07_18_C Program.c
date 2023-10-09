#include<stdio.h>
#include<conio.h>
//Calculating Permutation Series
int Perm(int x, int y);
int Fact(int n);
void main()
{
    int i, j;
    for( i = 5; i >= 1; i--)    //Outer Loop
    {
        for (j = i; j>= 1; j--) //Inner Loop
        {
            printf("P(%d, %d) = %4d ",i,j,Perm(i,j));
        }
        printf("\n");
    }
    return 0;
}
int Perm(int x, int y)
{
    return (Fact(x)/Fact(x-y));
}
int Fact(int n)
{
    int i, f = 1;
    for(i = 1; i <= n; i++)
        f = f * i;
    return (f);
}
