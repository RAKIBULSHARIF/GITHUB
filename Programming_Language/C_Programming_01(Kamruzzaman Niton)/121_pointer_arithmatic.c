#include<stdio.h>
#include<conio.h>
int main(void)
{
    int x, *ptr, a[5] = { 10, 20, 30, 40, 50};
    //clrscr();
    ptr = a;
    x = ptr++;/* increment pointer*/
    printf("ptr = %X    x = %d\n",ptr,x);
    x = *++ptr;/* increment pointer*/
    printf("prt = %X    x = %d\n",ptr,x);
    x = ++*ptr;/*increment pointed variable*/
    printf("ptr = %X    x = %d\n",ptr,x);
    printf("ptr = %X    a[2] = %d\n",&a[2],a[2]);
    getch();
    return 0;
}
