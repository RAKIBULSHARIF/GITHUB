#include<stdio.h>
#include<conio.h>
#include<dos.h>
int main(void)
{
    char str[24] = "Home Computing Group";
    int n;
    //clrscr();
    for(n = 0; str[n] != '\0'; n++)
    {
        putchar(str[n]);
        //delay(100);/*This delay programme cann't run in Code Blocks correctly*/
    }
    getch();
    return 0;
}
