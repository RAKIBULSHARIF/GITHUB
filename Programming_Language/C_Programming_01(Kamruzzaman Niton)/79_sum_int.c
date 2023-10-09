#include<stdio.h>
#include<conio.h>
float change_data(int r, int n, int s)
{
    int result;
    result = r + n + s;
    return result;
}
void main(void)
{
    float result;
    //clrscr();
    result=change_data(15,12,11);//returned data assigned to result
    printf("\n Result is %f.",result);
    getch();
}
