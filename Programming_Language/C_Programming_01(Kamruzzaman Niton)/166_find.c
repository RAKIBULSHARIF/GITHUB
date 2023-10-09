/*This programme not working properly*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char *mainstring, *substring, *pos;
    //clrscr();
    printf("\nEnter a string: ");
    gets(mainstring);
    printf("\nEnter a word that will search in the above string: ");
    gets(substring);
    pos = strstr(mainstring, substring);
    if(pos)
        printf("\n\n%s found at position %d.",substring, pos);
    else
        printf("\n\n%s not found.",substring);
    getch();
    return 0;
}
