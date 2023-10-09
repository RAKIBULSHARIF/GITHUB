#include<stdio.h>
#include<conio.h>
void main()
{
    int roll;
    float marks;
    printf("Enter your roll and marks: ");
    scanf("%d %f",&roll,&marks);
    printf("Your roll is : %d",roll);
    printf("\nYou Obtained : %.2f",marks);
    getch();
    return;
}

