#include<stdio.h>
#include<conio.h>
void main()
{
    int Age = 0;    //Age is a integer type variable
    printf("\nEnter Your Age: ");
    scanf("%d", &Age);  //gets Age from keyboard
    printf("\nWelcome! You are %d years old", Age);   //display age
    getch();
    return;
}
