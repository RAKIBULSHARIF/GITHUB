#include<stdio.h>
#include<conio.h>
#include<stdarg.h>
double diff_parmtr( char*ch,...)//use three . at the end
{
    va_list marker;
    double result = 0;
    va_start ( marker, ch );
    while( *ch )
    {
        if( *ch == '%' )
        {
            switch( *(++ch) )
            {
            case 'd':
                result += va_arg (marker, int );
                break;
            case 'f':
                result += va_arg (marker, double );
                break;
            }
        }
        ch++;
    }
    va_end( marker );
    return (result);
}
void main(void) //main() starts here
{
    double result;
    //clrscr();
    result = diff_parmtr("%f %f",1.2,2.2);//two arguments
    printf("\nResult is %f.",result);
    result = diff_parmtr("%f %d %f %d",1.1,1,2.2,3 );
    printf("\nResult is %f.", result);//four arguments
    getch();
}
