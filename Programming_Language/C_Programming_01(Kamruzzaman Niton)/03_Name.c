#include <stdio.h>
#include <conio.h>
#include <dos.h>
#define NAME 80
int main()
{
    char ch, name[NAME];
    int i;
    printf("Hello! Please Type Your Name: ");
    for( i = 0;(ch = getchar()) != '\n'; i++)
    {
        name[i] = ch;
    }
    name[i] = '\0';
    printf("%s %s %s", "Nice to meet you", name, ".");
    sleep (1);
    printf("\nYour name spelled backward is ");
    for( --i; i >= 0; --i)
    {
        putchar(name[i]);
    }
    printf("\nHave a nice day.....\a\a\a");
    sleep(5);

}
