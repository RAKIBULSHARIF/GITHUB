#include<stdio.h>
#include<conio.h>
int main()
{
    int rakib[5] = {80, 85, 90, 95, 100};
    int i;
    //clrscr();
    printf("Value of ");
    for( i = 0; i < 5; i++)
        printf("rakib[%d] is %d\n\t", i, rakib[i]);
    getch();
    return 0;
}
