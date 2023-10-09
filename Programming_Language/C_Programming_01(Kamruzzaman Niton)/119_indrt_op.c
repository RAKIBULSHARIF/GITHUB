#include<stdio.h>
#include<conio.h>
int main()
{
    int x, y, *z;
    //clrscr();
    x = 44;
    y = 40;
    z = &x;
    printf("x = %d\t y = %d\t z = %x.\n", x, y, z);
    y = *z; *z = 10;
    printf("x = %d\t y = %d\t z = %x.\n", x, y, z);
    getch();
    return 0;
}
