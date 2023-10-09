#include<stdio.h>
#include<conio.h>
void main()
{
    int count;
    //clrscr();
    count = 1;
    printf(" Using postfix (count--) = %d\n", count--);
    printf(" Value after decrement is %d\n\n", count);
    count = 1;
    printf(" Using prefix(--count) = %d\n", --count);
    printf(" Value after decrement is %d\n", count);
    getch();
}
