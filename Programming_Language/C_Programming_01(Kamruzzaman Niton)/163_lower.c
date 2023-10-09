/*This programme not work properly*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{
    char *ch;
    printf("\n\n Enter Your String: ");
    gets(ch);
    printf("\n\n Making lowercase of your string....");
    //delay(25);
    strlwr(ch);
    printf("\n\n Lowercase of Your string is ");
    puts(ch);
    getch();
    return 0;
}
