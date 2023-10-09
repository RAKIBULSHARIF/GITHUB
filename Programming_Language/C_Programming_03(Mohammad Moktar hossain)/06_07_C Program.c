#include<stdio.h>
#include<conio.h>
//Example of else if statement
void main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if((ch >= 'A') && (ch <= 'Z'))
        printf("\nYou entered a capital letter : %c",ch);
    else if((ch >= 'a') && (ch <= 'z'))
        printf("\nYou entered a small letter : %c", ch);
    else
        printf("\nthe letter you entered is not a character");
    return 0;
}
