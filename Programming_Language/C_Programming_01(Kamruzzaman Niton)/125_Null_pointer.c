#include<stdio.h>
#include<conio.h>
int main(void)
{
    int *ptr = NULL,x = 16;
    //clrscr();
    printf("%04Xh    %02Xh\n",ptr,*ptr);
    ptr = &x;
    printf("%04Xh    %02Xh\n",ptr,*ptr);
    getch();
    return 0;
}
