#include<stdio.h>
#include<conio.h>
int func_element( int val_1, int val_2 );
int main()
{
    int x, romi[5] = {5, 6, 7, 8};
    //clrscr();
    x = func_element( romi[1], romi[3]);
    printf("\n Return value is : %d ",x);
    getch();
    return 0;
}
int func_element( int val_1, int val_2)
{
    int y;
    y = val_1 + val_2;
    return y;
}
