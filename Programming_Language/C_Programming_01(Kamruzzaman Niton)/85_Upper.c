/*This programme shows a error when compile cause of  upper_case function defined after the main function called.*/
#include<stdio.h>
#include<conio.h>
int main(void)
{
    char lower, letter;
    //clrscr();
    printf("\n Type a lowercase letter: ");
    scanf("%c", &lower);
    letter = upper_case(lower); //called before definition
    printf("\n\nThe upper case of your typing letter is:%c",letter);
    getch();
    return 0;
    char upper_case(char ch) //upper_case() starts here
    {
        if(ch >= 'a' && ch <= 'z')
            return ('A' + ch - 'a');
        else
            return(ch);
    }
}
