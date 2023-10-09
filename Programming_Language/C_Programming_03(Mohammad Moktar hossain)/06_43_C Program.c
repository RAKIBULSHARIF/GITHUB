#include<stdio.h>
#include<conio.h>
//Example of goto & do--while loop statement
void main()
{
    int x;
    for(; ;)
    {
        XX:
            printf("\nEnter a positive integer: ");
            scanf("%d",&x);
            if(x<=0)
                goto XX;
            else
                break;
    }
    printf("\n You have entered %d",x);
}
