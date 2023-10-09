#include<stdio.h>
#include<conio.h>
int main()
{
    int row = 0, col = 0, size = 0, matrix[10][10];
    //clrscr();
    //get the size of matrix
    printf("\n Matrix Size? ");
    scanf("%d", &size);
    printf(" \n Enter Matrix Elements..\n");
    for ( row = 1; row < size + 1; ++row)
    {
        for ( col = 1; col < size + 1; ++col)
        {
            printf("    Elements[%d][%d] : ",row,col);
            scanf("%d",&matrix[row][col]);
        }
        printf("\n");
    }
    printf("\n The given matrix is :\n");
    for ( row = 1; row < size + 1; ++row)
    {
        for ( col = 1; col < size + 1; ++col)
        {
            printf("%4d",matrix[row][col]);
        }
        printf("\n");
    }
    //Traverse the matrix helically
    printf(" \n Output of Helically Traverse: \n");
    row = 1;
    while ( size > 0)
    {
        for ( col = row; col < size + 1; col++)
        {
            printf("%4d", matrix[row][col]);
        }
        for ( col = row + 1; col < size + 1; ++col)
        {
            printf("%4d",matrix[col][size]);
        }
        for ( col = size - 1; col > row - 1; col--)
        {
            printf("%4d",matrix[size][col]);
        }
        for( col = size - 1; col > row; col--)
        {
            printf("%4d",matrix[col][row]);
        }
        row += 1;
        size -= 1;
    }
    getch();
    return 0;
}
