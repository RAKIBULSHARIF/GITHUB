#include<stdio.h>
#include<conio.h>
int ret_befo (int val) //ret_bro() starts here
{
    printf("\nStatement in ret_befo() function before return.");
    return (val * val);//ret_befo() ends here
    //following line never executes
    printf("\nStatement in ret_befo() function after return.");
}
void main(void)
{
    int val,get;
    //clrscr();
    printf("\nEnter a value: ");
    scanf("%d",&val);
    get = ret_befo ( val ); //calling the ret_befo()
    printf("\n\nSquare of %d is %d.", val, get);
    getch();
}
