#include<stdio.h>
#include<conio.h>
int stringLength(char* str);
int main()
{
    char* pCh = "home computing group";
    int len;
    //clrscr();
    len = stringLength(pCh);
    printf("\nString Length: %d",len);
    getch();
    return 0;
}
int stringLength(char* str)
{
    int n = 0;
    while (n++, *str++ != '\0');
    return n-1;
}
