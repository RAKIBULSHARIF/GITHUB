#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int * ptr;
    float avg;
    int n = 0;
    int i = 0;
    int sum = 0;
    //clrscr();
    printf("\nHow many scores: ");
    scanf("%d",&n);
    /*allocate sapce on demand*/
    ptr = (int *)malloc(n * sizeof(int));
    for(i ; i < n; i++)
    {
        printf("\nEnter score[%d]: ",i+1);
        scanf("%d",ptr+i);
    }
    /*calculate score total*/
    for( i = 0; i < n ; ++i)
    {
        sum += *(ptr+i);
    }
    avg = (float)sum/n;
    printf("\nAverage score: %.2f",avg);
    getch();
    free(ptr);
    return 0;
}
