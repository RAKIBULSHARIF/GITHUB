#include<stdio.h>
#include<conio.h>
//Calculating G.C.F. and L.C.M. of two numbers
void main()
{
    int m,n,u,v,temp;
    int om, on;
    printf("\nEnter two non-negative integers : ");
    scanf("%d %d",&m,&n);
    om = m, on = n;
    printf("\nGreatest common factor of %d and %d is : ",om,on);
    u = m;
    v = n;
    while(n!=0)
    {
        temp = m%n;
        m=n;
        n = temp;
    }
    printf("%d",m);
    printf("\nLowest common multiple of %d and %d is : %d",om,on,m*u/m*v/m);
    return 0;
}
