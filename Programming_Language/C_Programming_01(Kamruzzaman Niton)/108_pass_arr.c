#include<stdio.h>
#include<conio.h>
void funcX ( float array[], int size); //function prototype
int main(void)
{
    float showket[5] = {10.0, 20.0, 30.0, 40.0, 50.0};
    float ratna[4] = {1.0, 100.0, 1000.0, 10000.0};
    float nipu[3] = {-5.5, -6.6, -7.7};
    //clrscr();
    printf("\nValue of showket array: \n\t");
    funcX(showket,5);
    printf("\nValue of ratna array: \n\t");
    funcX(ratna,4);
    printf("\nValue of nipu array: \n\t");
    funcX(nipu,3);
    getch();
    return 0;
}
void funcX( float array[], int size)
{
    int n;
    for(n = 0; n < size; n++)
        printf(" %.2f ",array[n]);
    printf("\n");
}
