#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter a hexadecimal number: ");
    scanf("%x",&n);
    printf("You have Entered : %i(in decimal format)",n);
    printf("\nYou have Entered : %o(in octal format)",n);
    printf("\nYou have Entered : %x(in hexadecimal format)",n);
    getch();
    return;
}
