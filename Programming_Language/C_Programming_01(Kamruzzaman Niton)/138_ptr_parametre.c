#include<stdio.h>
#include<conio.h>
void funcX ( int *get_array, int x)/*function definition*/
{
    int n;
    for(n = 0; n < x; n++)
        printf("\n %d    %d", get_array[n],*(get_array+n));
}
int main()
{
    int rakib[5] = {10, 20, 30, 40, 50};
    //clrscr();
    funcX (rakib, 5);/*function calling*/
    getch();
    return 0;
}
