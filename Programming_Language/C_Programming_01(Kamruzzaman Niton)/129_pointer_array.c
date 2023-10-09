#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    //clrscr();
    printf("SizeOf a[] = %d\n",sizeof(a));
    printf("         a = %X\n",a);
    printf("     &a[0] = %X\n",&a[0]);
    getch();
    return 0;
}
