/*This programme not work properly*/
#include<stdio.h>
#include<conio.h>
int main()
{
    FILE* fp;
    char* f_name;
    //clrscr();
    printf("\n Please type a file name: ");
    gets(f_name);
    if( ( fp = fopen(f_name, "r")) == NULL)
    {
        printf("\n Sorry, File not found");
    }
    else
    {
        printf("\n\"%s\",File founds",f_name);
    }
    getch();
    return 0;
}
