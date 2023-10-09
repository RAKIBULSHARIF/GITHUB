#include<stdio.h>
#include<conio.h>
void print_message( void ) //function print_message()
{
    printf("\n This is print_message() function");
}
int square_value(int value)
{
    print_message();//calling square_value()
    return ( value * value );
}
int main(void)
{
    int value;
    //clrscr();
    value = square_value( 5 ); //calling square_value()
    printf("\n Square value is %d.", value);
    getch();
    return 0;
}
