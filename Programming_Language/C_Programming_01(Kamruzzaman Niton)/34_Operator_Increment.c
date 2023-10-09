#include<stdio.h>
#include<conio.h>
void main()
{
int var;
//clrscr();
var = 1;
printf(" Using postfix(var++) var = %d\n", var++); //postfix
printf(" Value after increment is: %d\n\n", var);
var = 1;
printf(" Using prefix(++var) var = %d\n", ++var); //prefix
printf(" Value after increment is: %d\n", var);
getch();
}
