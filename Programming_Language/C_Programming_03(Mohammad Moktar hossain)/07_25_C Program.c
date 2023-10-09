#include<stdio.h>
#include<conio.h>
//Using both local and global variable with same name
int x = 50;
//Global Declaration
int main()
{
    printf("\nNow x = %d",x);
    int x = 15;//Local Declaration
    printf("\nAgain x = %d",x);
    return 0;
}
