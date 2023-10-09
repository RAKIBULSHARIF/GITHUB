#include<stdio.h>
#include<conio.h>
void back_print( void )
{
    char ch;
    if ((ch = getchar()) != '\n')
        back_print();//recursively calling back_print()
    putchar(ch);
}
int main(void)
{
    //clrscr();
    printf("Type a line of text: ");
    back_print();
    getch();
    return 0;
}
