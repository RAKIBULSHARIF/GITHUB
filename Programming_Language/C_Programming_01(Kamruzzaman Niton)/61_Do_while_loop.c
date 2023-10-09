#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("\n Press any key without N or n for a noisy sound:");
    do
    {
        ch = getch();
        if((ch != 'N') && (ch != 'n'))
            putch('\a');
    }
    while((ch != 'N') && (ch != 'n'));
    getch();
}
