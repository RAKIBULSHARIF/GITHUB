#include<stdio.h>
#include<conio.h>
int main(void)
{
    char ch[6] = "acegik";
    int *ptr;
    //clrscr();
    ptr = (int * ) &ch;
    printf("ptr    *ptr\n");
    printf("----    ----\n");
    printf("%X    %02X\n",ptr,*ptr);
    ++ptr;
    printf("%X    %02X\n",ptr,*ptr);
    ++ptr;
    printf("%X    %02X\n",ptr,*ptr);
    getch();
    return 0;
}
