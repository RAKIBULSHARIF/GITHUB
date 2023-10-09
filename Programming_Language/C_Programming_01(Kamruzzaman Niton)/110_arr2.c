/*This programme replacement of 110_arr*/
#include<stdio.h>
#include<conio.h>
void funcX (int get_array[])
{
    int n;
    printf("\nOriginal Value of all elements");
    for ( n = 0; n < 5; n++)
        printf("\n %5d ", get_array[n]);
    get_array[2] = 300;
}
int main()
{
    int rakib[5] = {10, 20, 30, 40, 50};
    //clrscr();
    printf("Before Calling funcX():\n\t rakib[2] = %d\n",rakib[2]);
    funcX(rakib);
    printf("\nAfter calling funcX(): \n\t rakib[2] = %d\n",rakib[2]);
    getch();
    return 0;
}
