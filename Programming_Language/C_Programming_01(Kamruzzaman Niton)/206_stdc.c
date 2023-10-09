#include<stdio.h>
#include<conio.h>
int main(void)
{
    //clrscr();
    #ifdef __STDC__
    printf("\n ANSI C compilance");
    #else
    printf("\n Not is ANSI C mode.");
    #endif // __STDC__
    getch();
    return 0;
}
