#include<stdio.h>
#include<conio.h>
/*array to hold the cell status*/
char gameBoard[3][3];
/*function prototypes*/
void drawBoard();
int showResult (char ch);
int validateInput(int cell);
void turnPlayerO(int* pCell);
void getRowCol( int cell, int* pX, int* pY);
int main()
{
    int x = 0, y = 0, row = 0, col = 0, selectedCell = 0, availableCell = 9;
    char startChar = '1';
    //clrscr();
    /*make all the cell numbered from 1 to 9*/
    for ( row = 0; row < 3; row++)
        for ( col = 0; col < 3; col++)
        gameBoard[row][col] = startChar++;
    /*now draw board with current data in gameBoard[][] array*/
    drawBoard();
    /*loop untill we have played all the cell*/
    while ( availableCell >= 0 )
    {
        /*assum Player One is X*/
        turnPlayerX(&selectedCell);
        /*get row and column from the selected cell*/
        getRowCol(selectedCell,&x,&y);
        /*update gameBoard array*/
        gameBoard[x][y] = 'X';
        /*decrease available cell*/
        availableCell -= 1;
        /*redraw game board with current data in gameBoard[][] array*/
        //clrscr();
        drawBoard();
        /*check whether Player One is Winner or not*/
        if ( showResult ('X') == 1 )
        {
            break;
        }
        else if ( availableCell == 0 )
        {
            printf("\n Game Drawn");
            break;
        }
        /*assume Player Two is O*/
        turnPlayerO(&selectedCell);
        /*get row and column from the selected cell*/
        getRowCol(selectedCell,&x,&y);
        /*update gameBoard array*/
        gameBoard[x][y] = 'O';
        /*decrease available cell*/
        availableCell -= 1;
        /*redraw game board with current data in gameBoard[][] array*/
        //clrscr();
        drawBoard();
        /*check whether Player Two is Winner or not*/
        if ( showResult('O') == 1)
        {
            break;
        }
        else if ( availableCell == 0)
        {
            printf("\n Game Drawn");
            break;
        }
    }
    getch();
    return 0;
}
/*function to draw board with current data in gameBoard[][] array*/
void drawBoard()
{
    int i, j;
    printf("\n Tic Tac Toe");
    printf("\n Digits (1-9) indicates Valid cell number\n");
    printf("\n %c | %c | %c", gameBoard[0][0],gameBoard[0][1],gameBoard[0][2]);
    printf("\n ---|---|---");
    printf("\n %c | %c | %c",gameBoard[1][0],gameBoard[1][1],gameBoard[1][2]);
    printf("\n ---|---|---");
    printf("\n %c | %c | %c",gameBoard[2][0],gameBoard[2][1],gameBoard[2][2]);
}
/*function to make player O's move*/
void turnPlayerO(int* pCell)
{
    int cell;
    /*loop until player select a valid cell NOTE: cells with digit are valid cells*/
    do
    {
        printf("\n Player O,\n Select Valid cell number: ");
        scanf("%d",&cell);
    }
    while( 0 == validateInput(cell) );
    *pCell = cell;
}
/*function to make player X's move*/
void turnPlayerX(int* pCell)
{
    int cell;
    do
    {
        printf("\n Player X, \n Select Valid cell number: ");
        scanf("%d",&cell);
    }
    while( 0 == validateInput(cell));
    *pCell = cell;
}
/*function to calculate row and column number from selected cell*/
void getRowCol( int cell, int* pX, int* pY)
{
    *pX = (cell - 1) / 3;
    *pY = (cell - 1) % 3;
}
/*function to check whether selected cell is Valid or not.
If selected cell is already O or X, or if it is not in 1-9,
then return 0 to indicate Invalid selection*/
int validateInput(int cell)
{
    int row, col;
    /*if cell is less than 1 or greater than 9, then rerun false = 0;*/
    if (( cell < 1)||(cell > 9))
        return 0;
    /*if selected cell is already occupied then return false = 0;*/
    getRowCol(cell, &row, &col);
    if (('O' == gameBoard[row][col]) || ('X' == gameBoard[row][col]))
    {
        return 0;
    }
    return 1;
}
/*function to show the winner*/
int showResult( char ch)
{
    int status = 0;
    /*check diagonal*/
    if (gameBoard[0][0] == ch && gameBoard[1][1] == ch && gameBoard[2][2])
    {
        printf("\n Player %c is winner", ch);
        status = 1;
    }
    /*check diagonal*/
    else if (gameBoard[0][2] == ch && gameBoard[1][1] == ch && gameBoard[2][0] == ch)
    {
        printf("\n Player %c is winner", ch);
        status = 1;
    }
    /*check first row*/
    else if(gameBoard[0][0] == ch && gameBoard[1][0] == ch && gameBoard[2][0] == ch)
    {
        printf("\n Player %c is winner", ch);
        status = 1;
    }
    /*check second row*/
    else if (gameBoard[1][0] == ch && gameBoard[1][1] == ch && gameBoard[1][2] == ch)
    {
        printf("\n Player %c is winner",ch);
        status = 1;
    }
    /*check third row*/
    else if (gameBoard[2][0] == ch && gameBoard[2][1] == ch && gameBoard[2][2] == ch)
    {
        printf("\n Player %c is winner", ch);
        status = 1;
    }
    /*check first column*/
    else if ( gameBoard[0][0] == ch && gameBoard[0][1] == ch && gameBoard[0][2] == ch)
    {
        printf("\n Player %c is winner", ch);
        status = 1;
    }
    /*check second column*/
    else if (gameBoard[0][1] == ch && gameBoard[1][1] == ch && gameBoard[2][1] == ch)
    {
        printf("\n Player %c is winner",ch);
        status = 1;
    }
    /*check third column*/
    else if ( gameBoard[0][2] == ch && gameBoard[1][2] == ch && gameBoard[2][2] == ch)
    {
        printf("\n Player %c is winner", ch);
        status = 1;
    }
    return status;
}
