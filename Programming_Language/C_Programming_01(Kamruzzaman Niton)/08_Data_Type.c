#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c; //declare three int type variable
    printf("\nEnter first value: "); //prompt user for 1st value
    scanf("%d", &a);
    printf("\nEnter second value: "); //prompt user for 2nd value
    scanf("%d", &b);
    c = a*b;
    printf("\n%d * %d is %d.", a, b, c); //print a,b and c's value
    getch();
}
