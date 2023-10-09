#include<stdio.h>
#include<conio.h>
//Calculating G.C.F. of two numbers
void main()
{
    int n1, n2, temp;
    printf("/nEnter two non-negative integers : ");
    scanf("%d %d", &n1, &n2);
    printf("\nGreatest common factor of %d and %d is: ",n1, n2);
    while(n2 != 0)
    {
        temp = n1 % n2;
        n1 = n2;
        n2 = temp;
    }
    printf("%d", n1);
    return 0;
}
