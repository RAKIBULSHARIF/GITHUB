/*Not Working Properly*/
#include<stdio.h>
#include<conio.h>
void main()
{
    char *Dept;
    printf("Enter your department Name : ");
    scanf("%s", Dept); //no & is required
    printf("You Entered : %s",Dept);
    //getch();
    return;
}
