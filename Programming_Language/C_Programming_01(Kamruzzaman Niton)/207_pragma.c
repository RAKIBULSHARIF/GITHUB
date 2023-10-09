#include<stdio.h>
#include<conio.h>
void start(void);
void ends(void);
#pragma startup start
#pragma exit ends
void start(void)
{
    //clrscr();
    printf("Program starts.....\n");
}
void ends(void)
     {
    printf("Program ends....\n");
    getch();
}
int main()
{
    printf("Statement inside main()\n");
}

