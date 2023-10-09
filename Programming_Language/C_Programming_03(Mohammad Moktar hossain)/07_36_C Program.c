//Function with Argument Variables
#include<stdio.h>
#include<conio.h>
float Total(float Marks1, float Marks2)
{
    float Total;
    Total = Marks1 + Marks2;
    printf("\nMarks1 : %.2f", Marks1);
    printf("\nMarks2 : %.2f", Marks2);
    printf("\nTotal : %.2f", Total);
    return 0;
}
void main()
{
    Total(25.35, 40.75);
    Total(36.50,38.50);
    Total(23.50,40);
}
