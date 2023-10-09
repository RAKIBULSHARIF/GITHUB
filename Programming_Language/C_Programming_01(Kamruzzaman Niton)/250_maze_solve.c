#include<stdio.h>
#include<conio.h>
#include<assert.h>
struct RobotPosition
{
    int row, col;
};
/*we can have max 12x12 = 144 cells, but define few more also*/
struct RobotPosition position[150];
/*mark what cells have been visited.
0 = not visited
>0 = on the path to freedom
-1 = visited, but backed out*/
int visited[12][12],
    walls[12][12], /*mark the walls in the maze,
                    1 bit = east wall, 2 bit = south wall*/
    posIndex,       /*index of the _next_position on the stack*/
    nRows, nCols,   /*size of the maze*/
    startRow, startCol, /*starting position*/
    endRow, endCol; /*ending position*/
/*find successful path recursively*/
int findPath(int row, int col)
{
    struct RobotPosition pos;
    /*if this cell is on the path (visited before but backed
    out counts as not visited) don't loop back onto itself*/
    if (visited[row][col] > 0)
        return 0;
    pos.row = row;
    pos.col = col;
    /*update position point*/
    position[posIndex++] = pos;
    /*mark the position in the path*/
    visited[row][col] = posIndex;
    /*if done, return 1*/
    if (row == endRow && col == endCol)
        return 1;
    /*for each side, check if the current position is at the
    edge of the maze, or if there is a wall on that side.
    Don't bother checking if I've been to that cell already
    Do that first thing when I get there; see above.*/
    if ( col > 0 && !(walls[row][col-1] & 1)) /*west*/
        if (findPath(row, col-1)) return 1;
    if ( row > 0 && !(walls[row-1][col] & 2)) /*north*/
        if (findPath(row-1, col)) return 1;
    if ( col < nCols-1 && !(walls[row][col]&1)) /*east*/
        if (findPath(row, col+1)) return 1;
    if ( row < nRows-1 && !(walls[row][col]&2)) /*south*/
        if (findPath(row+1, col)) return 1;
    visited[row][col] = -1; /*backtrack*/
    posIndex--;
    return 0;
}
int main()
{
    int row = 0,
        col = 0,
        mazeNum = 0;
        FILE *input, *output;
        input = fopen("prob07.in","r");
        assert(input != NULL);
        output = fopen("prob07.out","w");
        do
        {
            fscanf(input,
                   "%d %d %d %d %d %d",
                   &nRows, &nCols, &startRow, &startCol, &endRow, &endCol);
            /*start input counts from 0.*/
            endRow--; endCol--;
            startRow--; startCol--;
            /*if end of input, exit*/
            if(nRows == 0)
                return 0;
            fprintf(output,"Maze %d\n\n",+mazeNum);
            /*initialize maze with zero*/
            for ( row = 0; row < 12; row++)
                for ( col = 0; col < 12; col++)
                visited[row][col] = 0;
            /*mark the walls*/
            for ( row = 0; row < nRows; row++)
                for (col = 0; col < nCols; col++)
                    fscanf(input, "%d",&walls[row][col]);
            /*position inde*/
            posIndex = 0;
            /*keep going*/
            findPath(startRow, startCol);
            /*draw the maze*/
            fprintf(output,"+");
            for ( col = 0; col < nCols; col++)
                fprintf(output,"---+");
            fprintf(output,"\n");
            for ( row = 0; row < nRows; row++)
            {
                fprintf(output,"|");
                for ( col = 0; col < nCols; col++)
                {
                    if ( visited[row][col] == -1)
                        fprintf(output,"???");
                    else if (visited[row][col] == 0)
                        fprintf(output,"    ");
                    else
                        fprintf(output, "%3d", visited[row][col]);
                    if (col == nCols - 1 || walls[row][col]&1)
                        fprintf(output,"|");
                    else
                        fprintf(output," ");
                }
                fprintf(output,"\n");
                fprintf(output,"+");
                for ( col = 0; col < nCols; col++)
                {
                    if ( row == nRows-1 || walls[row][col]&2)
                        fprintf(output,"---");
                    else
                        fprintf(output,"+");
                }
                fprintf(output,"\n");
            }
            fprintf(output,"\n\n");

        }while(1);
}
