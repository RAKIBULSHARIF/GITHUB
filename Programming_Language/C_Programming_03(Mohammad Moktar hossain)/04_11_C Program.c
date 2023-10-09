#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter a positive integer number : ");
    scanf("%d",&n);
    printf("\nYou have entered : %i (in decimal format)",n);
    printf("\nYou have entered : %o (in octal format)",n);
    printf("\nYou have entered : %x (in hexadecimal format)",n);
    getch();
    return;
}
