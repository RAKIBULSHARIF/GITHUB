#include<stdio.h>
#include<conio.h>
void main()
{
    int gallon;
    float litre;
    //gallon = 0;
    for( gallon = 1; gallon <= 10; gallon++)
    {
        litre = gallon*3.785;
        printf("\nGallon  Litre\n%d        %.2f",gallon,litre);
    }
    getch();
}
