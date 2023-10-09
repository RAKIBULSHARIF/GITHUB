#include<stdio.h>
#include<conio.h>
int main(void)
{
    int i;
    char ch, str[50];
    //clrscr();
    i = 0;
    printf(" Type few character: ");
    while((ch = getchar()) != '\n')/*loop until Enter found*/
    {
        str[i] = ch;
        i++;
    }
    str[i] = '\0';/*seal the string*/
    printf("\nYou have typed: %s",str);
    getch();
    return 0;
}
