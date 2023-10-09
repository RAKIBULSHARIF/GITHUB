#include<stdio.h>
int main()
{
    char ctrl_char[] = "%s\n";
    char func_argu[] = "Welcome to the world of C programming.";
    printf( ctrl_char, func_argu );
    printf( "%s\n", func_argu);
    printf( func_argu );
    return 0;
}
