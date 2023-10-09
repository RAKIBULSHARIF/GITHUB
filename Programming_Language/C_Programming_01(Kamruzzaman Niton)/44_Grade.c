#include<stdio.h>
#include<conio.h>
void main()
{
    int score;
    //clrscr();
    printf(" Enter your score: ");
    scanf("%d",&score);
    if((score >= 90) && (score <= 100))
        printf("\n\a Your Grade is A.");
    else if((score <90) && (score >= 80))
        printf("\n\a Your Grader is B.");
    else if((score < 80) && (score >= 70))
        printf("\n\a Your Grade is C.");
    else if((score < 70) && (score >= 60))
        printf("\n\a Your Grade is D.");
    else
        printf("\n\a Your grade is F.");
    getch();
}
