//Using two dim array as function argument
#include<stdio.h>
#include<conio.h>
#define Row 3
#define Col 3
void main()
{
    int i,j;
    int Marks[Row][Col] = {
        {30,35,40},
        {45, 50, 55},
        {60, 65, 70}
        };
    for(i=0;i<Row;i++)
    {
        for(j=0;j<Col;j++)
            printf("Address of Marks[%d][%d] = %X\n",i,j,(*(Marks+i) +j));
    }
    return 0;
}
