#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{
    char name_1[30] = "RAKIBUL SHARIF";/*assign "RAKIBUL SHARIF" to name_1*/
    char name_2[30];/*another string variable*/
    //clrscr();
    strcpy (name_2, name_1);/*copy name_1 value to name_2*/
    printf("Programmer name is: %s.",name_2);
    getch();
    return 0;
}
