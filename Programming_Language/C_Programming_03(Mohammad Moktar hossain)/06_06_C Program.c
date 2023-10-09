#include<stdio.h>
#include<conio.h>
//Grade Point Evaluation
void main()
{
    float marks;
    printf("Input marks that obtained: ");
    scanf("%f", &marks);
    if((marks > 100) || (marks < 0))
        printf("Invalid number");
    else if(marks < 45)
        printf("Grade = F");
    else if(marks < 55)
        printf("Grade = D");
    else if(marks < 65)
        printf("Grade = C");
    else if(marks < 70)
        printf("Grade = B");
    else if(marks < 75)
        printf("Grade = B+");
    else if(marks < 80)
        printf("Grade = A");
    else
        printf("Grade = A+");
    return 0;
}
