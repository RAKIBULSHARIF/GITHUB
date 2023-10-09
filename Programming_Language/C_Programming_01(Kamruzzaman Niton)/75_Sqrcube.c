#include<stdio.h>
#include<conio.h>
void square_num(void) //function square_num()
{
    int i, num;
    printf("\n\nNumber Square\n");
    for (num =1; num <=10; num++)
        printf("%3d %3d\n", num, num*num);
}
void cube_num(void) //function cube_num()
{
    int i,num;
    printf("\n\nNumber Cube\n");
    for (num =1; num <=10; num++)
        printf("%3d %4d\n", num,num*num*num);
}
void main(void)
{
    //clrscr();
    printf("\n\nPress any key to see square number from 1 to 10.");
    getch();
    square_num();//calling square_num()
    printf("\n\n Press any key to see cubic number from 1 to 10.");
    getch();
    cube_num();//calling cube_num()
    getch();
}
