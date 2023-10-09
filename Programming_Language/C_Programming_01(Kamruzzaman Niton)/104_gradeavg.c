#include<stdio.h>
#include<conio.h>
int main()
{
    int grade[5], i, sum = 0;
    float average;
    //clrscr();
    for( i = 0; i < 5; i++)
    {
        printf("\n Enter grade[%d]: ",i+1);
        scanf("%d", &grade[i]);
        sum += grade[i];
    }
    average = (float)(sum) / 5.0;
    printf("\n\n\n\n Average is : %f ",average);
    getch();
    return 0;
}
