#include<stdio.h>
#include<conio.h>
void main()
{
    float a, b, c;
    //clrscr();
    printf("\n\n\a Enter three values (seperated by space): ");
    scanf("%f %f %f",&a, &b, &c);
    printf("\n\a the largest value is: ");
    if (a>b)
    {
        if(a>c)
            printf("%.2f",a);
        else
            printf("%.2f",c);
    }
    else //compare c with b
        {
        if(c>b)
            printf("%.2f",c);
        else
            printf("%.2f",b);
    }
    getch();

}
