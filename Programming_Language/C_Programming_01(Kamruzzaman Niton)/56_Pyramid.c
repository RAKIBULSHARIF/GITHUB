#include<stdio.h>
#include<conio.h>
void main()
{
    int p, q, m ,n;
    //clrscr();
    printf("\n How many lines: ");
    scanf("%d",&n);
    printf("\n\n");
    for ( p = 1; p <= n; p++)
    {
        for ( q = 1; q <= (n-p); q++)
            printf("     "); //print 5 spaces
        m = p;
        for( q = 1; q <= p; q++)
            printf("%5d",m++); //print numbers
        m -= 2; //decrease value of m by 2
        for (q = 1; q < p; q++)
            printf("%5d",m--); //print numbers
        printf("\n");
    }
    getch();
}
