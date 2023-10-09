#include<stdio.h>
#include<conio.h>
int main()
{
    FILE* in_data;
    char ch;
    //clrscr();
    in_data = fopen("c: \\test.ncg","w");/*open the file test.ncg*/
    printf("\n A data file is open for you.\n Write something\n Press CTRL+Z at end. \n\n\n");
    /*get a character from the user until CTRL+Z pressed*/
    while ( ( ch = getchar() ) != EOF)
    {
        putc(ch, in_data);/*write the character to the test.ncg*/
    }
    fclose(in_data);/*close the test.ncg*/
    //clrscr();
    in_data = fopen("c:\\test.ncg","r");/*open test.ncg for reading*/
    printf("\n The test.ncg file contains: \n\n");
    /*read charactes until EOF found*/
    while( ( ch = getc(in_data)) != EOF)
    {
        printf("%c", ch);/*print character on screen*/
    }
    fclose(in_data);/*againg close test.ncg*/
    getch();
    return 0;
}
