/*This programme not working properly*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{
    char *name, *name1;
    //clrscr();
    printf("Enter string to duplicate: ");
    gets(name);
    if((name1 = strdup(name)))
        printf("\n Duplicate string: %s.", name1);
    else
        printf("\n Sorry! there is an error occurs.");
    getch();
    return 0;
}
