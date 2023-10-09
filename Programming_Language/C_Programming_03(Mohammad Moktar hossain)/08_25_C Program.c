//Using 2 dim array as function argument
#include<stdio.h>
#include<conio.h>
int Add(int Matrix1[][3], int Matrix2[][3]);
//Function Prototype
int Show(int AnyMatrix[][3]);
//Function Prototype
int i,j;
int Matrix3[3][3];
void main()
{
    int Matrix1[3][3];
    int Matrix2[3][3];
    printf("Enter elements of Matrix1 (3x3) : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&Matrix1[i][j]);
    }
    printf("\nEnter elements of Matrix2 (3x3) : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&Matrix2[i][j]);
    }
    printf("\nMatrix1:\n");
    Show(Matrix1);
    printf("\nMatrix2:\n");
    Show(Matrix2);
    printf("\nAddition of the Matrices:\n");
    Add(Matrix1,Matrix2);
}
int Add(int Matrix1[][3],int Matrix2[][3])
//Function Definition
{
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            Matrix3[i][j] = Matrix1[i][j]+Matrix2[i][j];
    }
    Show(Matrix3);
}
int Show(int AnyMatrix[][3])
//Function Definition
{
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",AnyMatrix[i][j]);
            printf("\n");
    }
}
