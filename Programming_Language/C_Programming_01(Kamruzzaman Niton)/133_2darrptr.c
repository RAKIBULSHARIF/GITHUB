#include<stdio.h>
#include<conio.h>
int main(void)
{
    int x[4][3];
    //clrscr();
    x[2][1] = 7;/*assign value for element x[2][1]*/
    printf("%d    %d    %d.",x[2][1],*(x[2] + 1), *(*(x+2) + 1));
    getch();
    return 0;
}
