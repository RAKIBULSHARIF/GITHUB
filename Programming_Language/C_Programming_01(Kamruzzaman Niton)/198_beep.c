#include<stdio.h>
#include<conio.h>
int main ( int argc, char *argv[])
{
    int cnt, n;
    //clrscr();
    cnt = atoi ( argv[1] );/*convert ascii to integer*/
    for ( n = 0; n < cnt; n++)
    {
        putchar(7);/*7 is bell*/
    }
    getch();
    return 0;
}
