#include<stdio.h>
#include<conio.h>
void funcX (int get_array[])
{
    int n;
    for ( n = 0; n < 5; n++)
        printf("\n %d",get_array[n]);
}
int main()
{
    int rakib[5] = { 10, 20, 30, 40, 50 };
    //clrscr();
    funcX( rakib );
    getch();
    return 0;
}
