#include<stdio.h>
#include<conio.h>
int x = 10;
void X(void)
{
    printf("\n In X(), Outside block statement : x = %d ", x);
    {
        int x = 100;
        printf("\n In X(), Inside block statement : x = %d ",x);
    }
}
int main(void)
{
    //clrscr();
    X();
    printf("\n\n In main(): x = %d",x);
    getch();
    return 0;
}
