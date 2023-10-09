#include<stdio.h>
#include<conio.h>
int main( void )
{
    int n = 10;
    //clrscr();
    printf("In scope Level 1: n = %d\n", n);
    {
        n++;
        printf("In scope Lever 2: n(n++) = %d\n", n);
        {
            int n = 1;
            printf("In scope Level 3: n = %d\n", n);
            n++;
            printf("In scope Level 3: n(n++) = %d\n\n", n);
        }
        printf("In scope Level 2: n = %d\n", n);
    }
    printf("In scope Level 1: n = %d\n", n);
    getch();
    return 0;
}
