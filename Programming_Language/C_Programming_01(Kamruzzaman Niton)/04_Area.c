#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>
#include <ctype.h>
int main()
{
    float area, radius, pi;
    char ch;
    pi = 3.14159;
    printf("\n Do you want to calculate area?(y/n): ");
    ch = getch();
    ch = toupper(ch);
    while( ch != 'N')
    {
        printf("\n What's your radius?: ");
        scanf("%f", &radius);
        area = pi * radius * radius;
        printf("\n Area of a circle is: %.2f.", area);
        printf("\n Do you want to calculate area?(y/n): ");
        ch = getch();
        ch = toupper(ch);
    }
}
