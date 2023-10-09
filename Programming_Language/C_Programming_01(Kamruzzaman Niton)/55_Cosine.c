#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int i, n = 20;
    float x, y, sum;
    //clrscr();
    printf("\n Input a number (x): ");
    scanf("%f",&x);
    x = x * 3.1412 / 180; //Convert x int radians
    y = 1; //Initially set 1 to y
    sum = 1; //set 1 to sum
    for(i = 1; i < x+1; i++)
    {
        y = y*pow((double)(-1),(double)(2*i-1))*x*x/(2*i*(2*i-1));
        sum = sum + y;
    }
        printf("\n cos(x) = %.3f", sum);
        getch();

}
