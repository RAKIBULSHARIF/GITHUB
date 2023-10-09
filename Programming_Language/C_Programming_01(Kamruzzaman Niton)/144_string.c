#include<stdio.h>
#include<conio.h>
#include<string.h>
char* funcX(char* str)
{
    strcpy(str, "String from funcX()");
    return str;
}
int main(void)
{
    char str[32];
    char* ptr;
    //clrscr();
    ptr = funcX( str );
    printf( " The returned string is: %s\n",ptr);
    getch();
    return 0;
}
