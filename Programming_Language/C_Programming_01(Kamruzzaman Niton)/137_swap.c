#include<stdio.h>
#include<conio.h>
void swap_var(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 1, y = 2;
    //clrscr();
    printf("Before Swap:    x = %d\t y = %d\n",x, y);
    swap_var(&x, &y);
    printf("After Swap:    x = %d\t y = %d\n",x, y);
    getch();
    return 0;
}
