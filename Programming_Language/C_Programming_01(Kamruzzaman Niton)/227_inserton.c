#include<stdio.h>
#include<conio.h>
#define MAX_ELEMENTS 50
int main()
{
    int i = 0,
    j = 0,
    k = 0,
    element = 0,
    array[MAX_ELEMENTS],
    totalElements = MAX_ELEMENTS;
    //clrscr();
    printf("\nEnter an element[-1 for eXit]: ");
    scanf("%d",&element);
    /*following code implements insertion sort*/
    while ((element != -1))
    {
        k = i - 1;
        while((element < array[k]) && (k >= 0))
        {
            array[k+1] = array[k];
            --k;
        }
        array[k+1] = element;
        printf("After inserting %d, array becomes:\n\n",element);
        for(j = 0; j <= i; j++)
        {
            printf("%6d",array[j]);
        }
        printf("\n\nEnter another element[-1 for eXit]: ");
        scanf("%d",&element);
        ++i;
    }
    printf("\nThe final sorted array is: \n");
    for(j = 0; j < i; j++)
    {
        printf("%6d",array[j]);
    }
    getch();
    return 0;
}
