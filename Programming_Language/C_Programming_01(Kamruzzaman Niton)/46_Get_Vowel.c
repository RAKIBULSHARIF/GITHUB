#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    //clrscr();
    printf("\n Enter your Character: ");
    ch = getche();
    switch ( ch )
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("\n\n\n\a Your choice is vowel.");
        break;
    default:
        printf("\n\n\n\a Your choice is not a vowel.");
        break;
    }
    getch();
}
