/*This programme not work properly*/
#include<stdio.h>
#include<conio.h>
void get_file_name ( FILE *file );
int main()
{
    FILE* file;
    //clrscr();
    file = fopen("C:\\pricelst.lst","w");
    get_file_name(file);
    fclose(file);
    return 0;
}
void get_file_name( FILE* fp)
{
    int line;
    char ch[80];
    printf("\n Please enter some line of text....\n");
    for ( line = 0; line < 5; ++line)
    {
        gets(ch);
        fprintf(fp,"%s\n", ch);
    }
}
