#include<stdio.h>
#include<conio.h>
int main(void)
{
    char name[30];
    int age;
    //clrscr();
    printf("\nWhat is Your Name?: ");
    scanf("%s",name);
    printf("\nHow old are You?: ");
    scanf("%d",&age);
    if(age <= 0)
        printf("\nSorry %s, age can't be zero or negative.", name);
    else
        printf("\nHey %s, next year You will be %d years old.", name,age+1);
    getch();
    return 0;
}
