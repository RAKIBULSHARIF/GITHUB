#include<stdio.h>
#define LINE 128
#define BOOK_NAME "NITON'S BOOK ON C PROGRAMMING"
#define Chapter "\n Preprocessor directive"
int main(void)
{
    char _L[LINE];
    char _page[LINE];
    printf("\n Book name is %s.", BOOK_NAME);
    printf(Chapter);
    return 0;
}
