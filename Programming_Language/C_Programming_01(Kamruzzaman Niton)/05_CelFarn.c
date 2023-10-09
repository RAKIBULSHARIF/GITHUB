#include <stdio.h>
#include <conio.h>
int main()
{
    float cent, farn;
    printf("\nEnter Temperature in Centigrade: ");
    scanf("%f", &cent); //get centigrade value
    farn = 1.8 * cent + 32; //do calculation
    printf("\nFarenheit equivalent is : %.2f", farn);
    getch();
}
