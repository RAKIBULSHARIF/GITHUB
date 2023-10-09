#include<stdio.h>
#include<conio.h>
#define ARR_SIZE 5
int main()
{
    int array[ARR_SIZE] = {10, 20, 30, 40, 50};
    int i;
    //clrscr();
    for ( i = 0; i < ARR_SIZE; i++)
        printf("\n arrray[%d] is %d", i, array[i]);
    getch();
    return 0;
}
