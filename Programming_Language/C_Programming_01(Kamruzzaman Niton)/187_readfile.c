#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *new_file;
    //clrscr();
    new_file = fopen("test.ncg", "r");
    if( new_file == NULL)
    {
        printf("\n Error: file does not exit.");
    }
    else
    {
        printf("\n File successfully opend.");
    }
    getch();
    return 0;
}
