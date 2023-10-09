#include<stdio.h>
#include<conio.h>
#define MAX_VERTEX 20
int main(void)
{
    int i = 0,
        j = 0,
        k = 0,
        vertices = 0,
        path[MAX_VERTEX][MAX_VERTEX],
        adjacency[MAX_VERTEX][MAX_VERTEX];
    //clrscr();
    printf("\nHow many VERTICES in the graph: ");
    scanf("%d", &vertices);
    printf("\nEnter EDGE information:\n\n");
    for ( i = 1; i < vertices + 1; ++i)
    {
        for ( j = 1; j< vertices + 1; ++j)
        {
            printf("     EDGE from Vertex %d to %d: ",i,j);
            scanf("%d",&adjacency[i][j]);
        }
        printf("\n");
    }
        /*printf the matrix*/
    printf("The given adjacency matrix is: \n");
    for ( i = 1; i < vertices + 1; ++i)
    {
        for ( j = 1; j < vertices + 1; ++j)
        {
            printf("%5d",adjacency[i][j]);
        }
        printf("\n");
    }

    /*now create path matrix by using the warshals algorithm*/
    for ( i = 1; i < vertices + 1; ++i)
    {
        for( j = 1; j < vertices + 1; ++j)
        {
            path[i][j] = adjacency[i][j] ? 1 : 0;
        }
    }
    for ( k = 1; k < vertices + 1; ++k)
    {
        for ( i = 1; i < vertices + 1; ++i)
        {
            for ( j = 1; j < vertices + 1; ++j)
            {
                path[i][j] = (path[i][j] | (path [i][k] & path [k][j]));
            }
        }
    }
    /*now print the path matrix*/
    printf("\n\nThe Path Matrix is: \n\n");
    for ( i = 1; i < vertices +1; ++i)
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
