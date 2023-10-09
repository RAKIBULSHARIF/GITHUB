#include<stdio.h>
#include<conio.h>
int main (void)
{
    int n, score[5];
    *(score+0) = 90;/*1st element*/
    *(score+1) = 85;/*2nd element*/
    *(score+2) = 93;/*3rd element*/
    *(score+3) = 98;/*4th element*/
    *(score+4) = 89;/*5th element*/
    //clrscr();
    for(n = 0; n < 5; n++)
        printf("\n Score of Student no:[#%d] is %d.",n+1,*(score+n));
    getch();
    return 0;
}
