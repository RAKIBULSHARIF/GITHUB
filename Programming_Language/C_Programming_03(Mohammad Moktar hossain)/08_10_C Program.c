//Assigning less array elements than arraysize
#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    float Total = 0, Avg;
    int Roll[5] = {101, 102, 105, 106, 107};
    float Marks[5] = {50, 65.5, 83, 57, 77,5};
    for ( i = 0; i < 5; i++)
    {
        printf("\nRoll[%d]=%3d\tMark[%d] = %.2f",i,Roll[i],i,Marks[i]);
        Total = Total + Marks[i];
    }
    Avg = Total/(float)5;
    printf("\n\nAverage Marks = %.2f",Avg);
    return 0;
}
