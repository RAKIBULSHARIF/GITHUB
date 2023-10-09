#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age >= 18)
        printf("You can vote");
    else
        printf("You cann't vote");
    getch();
}
