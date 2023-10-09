#include<stdio.h>
#include<conio.h>
//Example of continue statement
void main()
{
    int x;
    for( ; ;)
    {
        printf("\nEnter a positive integer : ");
        scanf("%d",&x);
        if(x<=0)
            continue;
        else
            break;
    }
    printf("\n\n You have entered %d",x);
    return 0;
}
