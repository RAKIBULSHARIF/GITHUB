//Assigning less array elements than array size
#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    int Roll[5] = {101, 102, 105, 106, 107};
    float Marks[5] = {50, 65.5, 83};
    for ( i = 0; i < 5; i++)
        printf("\nRoll[%d]=%3d\tMarks[%d]=%.2f",i,Roll[i],i,Marks[i]);
    return 0;
}
