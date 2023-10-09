/*This programme not work properly*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{
    char* str1 = "Bangladesh Bogus Party";
    char* str2 = "Sad is a beautiful country";
    //clrscr();
    strcpy ( str1 + 11, str2 + 4 );
    strcat ( str1, "! !! !!!" );
    printf("\n%s", str1);
    getch();
    return 0;
}
