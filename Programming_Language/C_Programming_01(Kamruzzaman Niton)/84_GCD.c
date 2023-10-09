#include<stdio.h>
#include<conio.h>
int get_gcd ( int x, int y ) //get_gcd () starts here
{
    int gcd;
    while ( y != 0 )
    {
        gcd = x % y;
        x = y;
        y = gcd;
    }
    return(x); //end of get_gcd function
}
int main( void )
{
    int gcd;
    //clrscr();
    gcd = get_gcd (150,35);
    printf("\nThe GCD of 150 and 35 is %d.",gcd);
    getch();
    return 0;
}
