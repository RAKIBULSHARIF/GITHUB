/*This Programme not work properly*/
#include<stdio.h>
#include<conio.h>
int main(void)
{
    char *ch;
    printf("\n Enter Your string: ");
    gets(ch);
    printf("\n Making uppercase of Your string....");
    //delay(25);
    strupr(ch);
    printf("\n Uppercase of Your string: ");
    puts(ch);
    getch();
    return 0;
}
