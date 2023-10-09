//Using two dim array as function argument
#include<stdio.h>
#include<conio.h>
#define Row 3
#define Col 3
void main()
{
    int Marks[Row][Col] = {
        {30, 35, 40},
        {45, 50, 55},
        {60,65,70}
        };
    int i, *mptr;
    mptr = &Marks[0][0];
    printf("Elements of the matrix: \n");
    for(i=0;i<9;i++)
    {
        printf("%d\t",*(mptr+i));
        if(i==2||i==5)
            printf("\n");
    }
}
