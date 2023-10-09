//Error when compaile cause parametre not define in main function
#include<stdio.h>
#include<conio.h>
void loc_var(void)
{
    int ratna, nipu, romi;
    //clrscr();
    ratna = 15; nipu = 12; romi = 11;
    printf("\n Ratna: %d Nipu: %d and Romi: %d", ratna, nipu, romi);
}
int main()
{
    loc_var();
    printf("\n Ratna: %d Nipu: %d and Romi: %d", ratna, nipu, romi);
    getch();
    return 0;
}
