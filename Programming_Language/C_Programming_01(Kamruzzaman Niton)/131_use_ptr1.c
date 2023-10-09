#include<stdio.h>
#include<conio.h>
int main()
{
    int n, score[5] = {90, 85,93, 98, 89};
    //clrscr();
    for( n = 0; n < 5; n++)
        printf("\n Score of Student no[#%d] is %d.", n+1, score[n]);
    getch();
    return 0;
}
