#include<stdio.h>
#include<conio.h>
void local_1 (void); //Function Prototype
void local_2 (void); //Function Prototype
int main()
{
    int rakib = 3;
    //clrscr();
    local_1();
    local_2();
    printf("\n Rakib within main : %d", rakib);
    getch();
}
void local_1 ( void )
{
    int rakib = 1;
    printf("\n Rakib within local_1 : %d", rakib);
}
void local_2 ( void )
{
    int rakib = 2;
    printf("\n Rakib within local_2 : %d", rakib);
}
