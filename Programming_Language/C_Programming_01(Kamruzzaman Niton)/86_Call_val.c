#include<stdio.h>
#include<conio.h>
void call_by_value (int, int, int);
int main(void) //main() starts here
{
    int ratna, nipu, romi;
    ratna = 1; nipu = 2; romi = 3;
    //clrscr();
    call_by_value (ratna, nipu, romi);//calling call_by_val()
    printf("\nAfter funtion calling: %d %d %d",ratna,nipu,romi);
    getch();
    return 0;
}
void call_by_value (int x, int y, int z)
{
    printf("\nOriginal values are: %d %d %d.", x, y, z );
    x += 100;
    y += 101;
    z += 102;
    printf("\nAfter chaning the values: %d %d %d.",x,y,z);
}
