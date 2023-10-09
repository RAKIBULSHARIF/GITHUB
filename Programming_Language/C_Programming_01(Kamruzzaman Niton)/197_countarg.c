#include<stdio.h>
#include<conio.h>
int main( int argc, char *argv[])
{
    int n;
    //clrscr();
    printf("\n Number of command line argument is %d.\n",argc);
    for ( n = 0; n < argc; ++n)
    {
        printf(" argv [%d] points to %s\n", n, argv[n]);
    }
    getch();
}
