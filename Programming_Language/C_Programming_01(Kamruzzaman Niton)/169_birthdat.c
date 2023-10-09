#include<stdio.h>
#include<conio.h>
void B_date(int x, int y, int z)
{
    printf("\n Rakib Birth date is %d-%d-%d", x, y, z);
}
int main(void)
{
    struct Date /*create date data type*/
    {
        int day;
        int month;
        int year;
    };
    struct Date birth_date;/*declare Date type variable birth_date*/
    //clrscr();
    birth_date.day = 27;/*assign value for each member*/
    birth_date.month = 7;
    birth_date.year = 1995;
    /*use as parametre*/
    B_date( birth_date.day, birth_date.month, birth_date.year);
    getch();
    return 0;
}
