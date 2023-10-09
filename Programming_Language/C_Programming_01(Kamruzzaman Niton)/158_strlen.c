#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{
    char _address[] = "NCG-Rock Plaza, Peter Road, CA, USA.";
    int length;
    //clrscr();
    length = strlen(_address);
    printf("\n String: %s", _address);
    printf("\n This string contains %d characters.",length);
    getch();
    return 0;
}
