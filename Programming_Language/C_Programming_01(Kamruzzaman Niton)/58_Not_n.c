#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    //clrscr();
    printf("\n Press any key without N or n for a noisy sound: ");
    ch = getche(); //read character and store it to ch
    while( ( ch != 'N' ) && (ch != 'n') )
    {
        putch ( '\a' ); //echo by speaker
        putch ( '\b' ); //backspace
        ch = getch(); //read character and store it to ch
    }
    printf("\n\n\n Thank you for not hearing a noisy sound.");
    getch();
}
