#include<stdio.h>
#include<conio.h>
//Conversion From fer to deg cel
void main()
{
    int f = 0;
    float c;
    printf("\n Farenheit    Celcius");
    printf("\n ---------    -------");
    while(f<=200)
    {
        printf("\n  %d",f);
        c=((5.00/9.00) * (f-32.00));
        printf("\t\t %.2f",c);
        f+= 20;
        //f = f+20
    }
    return 0;
}
