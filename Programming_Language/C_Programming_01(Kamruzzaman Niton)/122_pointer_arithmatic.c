#include<stdio.h>
#include<conio.h>
int main(void)
{
    float a = 10.375;
    char *ptr;
    //clrscr();
    ptr = ( char * ) &a;
    printf("ptr    *ptr\n");
    printf("----    ----\n");
    printf("%X    %02X\n",ptr,*ptr);
    ++ptr;
    printf("%X    %02X\n",ptr,*ptr);
    ++ptr;
    printf("%X    %02X\n",ptr,*ptr);
    ++ptr;
    printf("%X    %02X\n",ptr,*ptr);
    getch();
    return 0;
}
