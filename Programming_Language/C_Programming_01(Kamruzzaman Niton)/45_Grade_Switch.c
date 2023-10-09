#include<stdio.h>
#include<conio.h>
void main()
{
    int score, grade;
    //clrscr();
    printf("\n\a Enter your score: ");
    scanf("%d",&score);
    grade = score/10;
    switch (grade)
    {
    case 10:
    case 9:
        printf("\n\a Your Grade is A.");
        break;
    case 8:
        printf("\n\a Your Grade is B.");
        break;
    case 7:
        printf("\n\a Your Grade is C.");
        break;
    case 6:
        printf("\n\a Your Grade is D.");
        break;
    default:
        printf("\n\a Your Grade is F.");
        break;
    }
    getch();
}
