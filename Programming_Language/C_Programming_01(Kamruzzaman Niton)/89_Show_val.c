#include<stdio.h>
#include<conio.h>
void ShowVal(int);//showval() prototype
int main(void)
{
    int i;
    //clrscr();
    i = 10;
    ShowVal(i);
    i = 20;
    ShowVal(i);
    getch();
    return 0;
}
void ShowVal(int x)
{
    printf("%d",x);
}
