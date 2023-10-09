#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{
    char country_name[36] = "People's Republic of ";
    //clrscr();
    strcat ( country_name, "Bangladesh");
    printf("\nBangladesh's full name is: %s.",country_name);
    getch();
    return 0;
}
