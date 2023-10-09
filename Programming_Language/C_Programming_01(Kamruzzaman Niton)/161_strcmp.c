#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{
    char str1[30],str2[40];
    int x;
    //clrscr();
    printf("\n Enter first string:");
    gets(str1);
    printf("\n Enter second string:");
    gets(str2);
    x = strcmp(str1, str2);
    if( 0 != x)
        printf("\n\n Two string's are not equal.");
    else
        printf("\n\n Two string's are equal.");
    getch();
    return 0;
}
