#include<stdio.h>
#include<conio.h>
int main()
{
    int i, *ptr, odd[5] = {1, 3, 5, 7, 9};
    //clrscr();
    ptr = odd;
    for ( i = 0; i < 5; i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
    getch();
    return 0;
}
