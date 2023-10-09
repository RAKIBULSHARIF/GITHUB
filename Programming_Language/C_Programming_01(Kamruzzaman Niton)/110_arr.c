#include<stdio.h>
#include<conio.h>
void funcX ( int get_array[]) //function definition
{
    int n;
    printf("\nOriginal Value of all elements");//This portion not work properly
    for ( n = 0; n < 5; n++);
        printf("\n %5d ", get_array[n]);
    get_array[2] = 300;//changing value of third element
}
int main()
{
    int rakib[5] = { 10, 20, 30, 40, 50 };
    //clrscr();
    printf(" Before calling funcX(): \n\t rakib[2] = %d\n",rakib[2]);
    funcX( rakib );
    printf("\n\nAfter calling funcX(): \n\t rakib[2] = %d\n",rakib[2]);
    getch();
    return 0;
}
