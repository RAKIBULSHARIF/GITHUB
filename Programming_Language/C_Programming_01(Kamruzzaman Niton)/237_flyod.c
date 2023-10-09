#include<stdio.h>
#include<conio.h>
#define MAXNODE 20
#define INFINITY 9999
int main(void)
{
    int i = 0,
        j = 0,
        k = 0,
        vertices = 0,
        path[MAXNODE][MAXNODE],
        adjacency[MAXNODE][MAXNODE];
    //clrscr();
    printf("\nHow many VERTICES in the graph: ");
    scanf("%d",&vertices);
    printf("\nEnter the weight of EDGEs:\n\n");
    for ( i = 1; i <= vertices; ++i)
    {
        for ( j = 1; j < vertices + 1; ++j)
        {
            printf("    Weight of EDGE from Vertex %d to %d: ",i,j);
            scanf("%d",&adjacency[i][j]);
        }
        printf("\n");
    }
    /*according to the algorithm set each diagonal entry to 0*/
    for ( i = 1; i <= vertices; ++i)
    {
        adjacency[i][j] = 0;
    }
    /*print the matrix*/
    printf("The given weighted matrix is : \n");
    for ( i = 1; i < vertices + 1; ++i)
    {
        for ( j = 1; j <= vertices; ++j)
        {
            printf("%5d",adjacency[i][j]);
        }
        printf("\n");
    }
    /*create path matrix by using the flyod's algorithm*/
    for ( i = 1; i < vertices + 1; ++i)
    {
        for ( j = 1; j < vertices + 1; ++j)
        {
            path[i][j] = adjacency[i][j];
            if ( !adjacency[i][j] && ( i != j))
                path[i][j] = INFINITY;
        }
    }
    /*find the shortest path and store it*/
    for ( k = 1; k < vertices + 1; ++k)
    {
        for ( i = 1; i < vertices + 1; ++i)
        {
            for ( j = 1; j < vertices + 1; ++j)
            {
                if ( path[i][k] && path[k][j] )
                    if ( path[i][k] + path[k][j] < path [i][j] )
                        path[i][j] = path[i][k] + path[k][j];
            }
        }
    }
    /*now print the path matrix*/
    printf("\n\nThe PATH matrix is:\n\n");
    for ( i = 1; i < vertices + 1; ++i)
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
