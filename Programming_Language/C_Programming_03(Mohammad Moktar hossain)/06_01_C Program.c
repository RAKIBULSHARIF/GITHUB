#include<stdio.h>
#include<conio.h>
//Program to find largest (Maximum) of 3 integer numbers
void main()
{
    int a, b, c;
    printf("Input three integer numbers: ");
    scanf("%d %d %d",&a, &b, &c);
    if(a < b)
    //When a>b
    {
        if(a > c)
            printf("%d is the large number");
            else
                printf("%d is the large number",c);
    }
        else //when a < b
        {
            if(b > c)
                printf("%d is the large number");
            else
                printf("%d is the large number");
        }
    return 0;
}
