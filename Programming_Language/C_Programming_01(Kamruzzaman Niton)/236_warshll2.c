#include<stdio.h>
#include<conio.h>
#define MAX_VERTEX 20
#define INFINITY 9999
int main(void)
{
    int i = 0,
        j = 0,
        k = 0,
        pathTemp = 0,
        vertices = 0,
        path[MAX_VERTEX][MAX_VERTEX],
        adjacency[MAX_VERTEX][MAX_VERTEX];
    //clrscr();
    printf("\nHow many VERTICES in the graph: ");
    scanf("%d",&vertices);

    printf("\nEnter weight of EDGEs:\n\n");
    for ( i = 1; i < vertices + 1; ++i)
    {
        for ( j = 1; j < vertices + 1; ++j)
        {
            printf(" Weight of EDGE from VERTEX %d to %d: ",i,j);
            scanf("%d",&adjacency[i][j]);
        }
        printf("\n");
    }
    /*print the matrix*/
    printf("The given weighted adjacency matrix is: \n");
    for ( i = 1; i < vertices + 1; ++i)
    {
        for ( j = 1; j < vertices + 1; ++j)
        {
            printf("%5d",adjacency[i][j]);
        }
        printf("\n");
    }
    /*now create weighted path matrix
    by using the warshals algorithm*/
    for ( i = 1; i < vertices + 1; ++i)
    {
        for ( j = 1; j < vertices + 1; ++j)
        {
            path[i][j] = adjacency[i][j] ? adjacency[i][j] : INFINITY;
        }
    }
    for ( k = 1; k < vertices + 1; ++k)
    {
        for ( i = 1; i < vertices + 1; ++i)
        {
            for ( j = 1; j < vertices + 1; ++j)
            {
                pathTemp = (path[i][j] < (path[i][k] + path[k][j]));
                path[i][j] = pathTemp ? path[i][j] : (path[i][k] + path[k][j]);
            }
        }
    }
    /*now print the path matrix*/
    printf("\n\nThe shortest PATH matrix is: \n\n");
    for ( i = 1; 1 < vertices + 1; ++i)
    {
        for ( j = 1; j < vertices + 1; ++j)
        {
            printf("%5d",path[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
