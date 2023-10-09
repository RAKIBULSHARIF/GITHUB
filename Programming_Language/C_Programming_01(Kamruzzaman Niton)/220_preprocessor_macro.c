#include<stdio.h>
#include<conio.h>
#include<string.h>
void padding(char* strSource, char ch, int nLength)
{
    int len = strlen(strSource);
    for (; len < nLength - 1;++len)
    {
        strSource[len] = ch;
    }
    strSource[len] = '\0';
}
int main()
{
    char str[28] = "One Million Only";
    //clrscr();
    padding(str, '#',28);
    printf("Padded string: %s",str);
    getch();
    return 0;
}
