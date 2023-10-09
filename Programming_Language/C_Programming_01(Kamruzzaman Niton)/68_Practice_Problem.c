#include<stdio.h>
#include<conio.h>
void main()
{
    int marks;
    printf("\nEnter your result: ");
    scanf("%d",&marks);
    if (marks >= 600)
        printf("Passed in 1st division.\n");
    else if (marks < 600 && marks >= 450 )
        printf("Passed in 2nd division.\n");
    else if (marks < 450 && marks >= 330 )
        printf("Passed in 3rd division\n");
    else
        printf("You are failed\n");
    getch();
}
