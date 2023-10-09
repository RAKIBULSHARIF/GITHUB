#include<stdio.h>
#include<conio.h>
//Example of do loop statement
void main()
{
    char ch = 65;
    do
    {
        printf("%c ", ch);
        ch++;
    }
    while((ch >= 'A') && (ch <= 'Z'));
    return 0;

}

