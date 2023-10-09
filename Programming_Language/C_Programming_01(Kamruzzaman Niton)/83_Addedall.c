#include<stdio.h>
#include<conio.h>
void prn_msg(void)
{
    printf("\n Sum of all the numbers from  1 to your given numbers: \n");
}
void added_all(long int val)
{
    int n;
    long int sum;
    sum = 0;
    for ( n = 0; n <= val; n++)
        sum += n;
    printf("\n Sum of all numbers from 1 to %ld is %ld.", val, sum);
    getch();
}
int main( void )
{
    //clrscr();
    prn_msg();//calling prn_msg()
    added_all ( 500 );//calling added_all()
    return 0;
}
