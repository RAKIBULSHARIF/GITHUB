#include<stdio.h>
#include<conio.h>
int main()
{
    int row = 0, col = 0, size = 0, sumAbove = 0, sumBelow = 0, matrix[5][5];
    //clrscr();
    //get the size of matrix
    printf("\n Matrix size? ");
    scanf("%d", &size);
    printf("\n Enter Matrix Elements...\n");
    for ( row = 1; row < size + 1; ++row)
    {
        for( col = 1; col < size + 1; ++col)
        {
            printf("        Element[%d][%d] : ",row,col);
            scanf("%d",&matrix[row][col]);
        }
        printf("\n");

    }
    printf("\n The given matrix is : \n");
    for ( row = 1; row < size + 1; ++row)
    {
        for ( col = 1; col < size + 1; ++col)
        {
            printf("%4d",matrix[row][col]);
        }
        printf("\n");
    }
    printf("\n Diagonal Elements Are: ");
    for ( row = 1; row < size + 1; ++row)
    {
        for ( col = 1; col < size + 1; ++col)
        {
            if ( row == col)
                printf("%4d",matrix[row][col]);
        }
    }
    printf("\n Element above the main diagonal : ");
    for ( row = 1; row < size + 1; ++row)
    {
        for ( col = 1; col < size + 1; ++col)
        {
            if( row < col )
            {
                printf("%4d",matrix[row][col]);
                sumAbove += matrix[row][col];
            }
        }
    }
    printf("\n Elements below the diagonal: ");
    for ( row = 0; row < size + 1; ++row)
    {
        for ( col = 0; col < size + 1; ++col)
        {
            if ( row > col )
            {
                printf("%4d",matrix[row][col]);
                sumBelow += matrix[row][col];
            }

        }
    }
    printf("\n Sum of elements above the main diagonal : %d\n Below the main diagonal : %d\n",sumAbove, sumBelow);
    getch();
    return 0;
}
