#include<stdio.h>
#include<conio.h>
int main(void)
{
    int *ptr,x = 16; ;
    //clrscr();
    printf("%X    %02X\n",ptr,*ptr);
    ptr = &x;
    printf("%X    %02X'n",ptr,*ptr);
    getch();
    return 0;
}
