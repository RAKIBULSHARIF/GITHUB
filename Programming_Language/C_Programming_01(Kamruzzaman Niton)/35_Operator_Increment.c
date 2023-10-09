#include<stdio.h>
#include<conio.h>
void main(void)
{
int x=1,y=2;
//clrscr();
printf("%d %d\n",y,y=x++);
printf("%d %d\n", ++x,++y);
getch();
}
