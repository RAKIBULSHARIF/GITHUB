#include<stdio.h>
#include<conio.h>
int main()
{
    struct dmy
    {
        unsigned month : 4;
        unsigned day : 5;
        unsigned year : 7;
    }date;
    //clrscr();
    date.month = 1;
    date.day = 1;
    date.year = 75;
    printf("\n Somebody's bith date is %d-%d-%d.", date.month,date.day,date.year);
    getch();
    return 0;
}
