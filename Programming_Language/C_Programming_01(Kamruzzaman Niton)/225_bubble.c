#include<stdio.h>
#include<conio.h>
#define MAX_ELEMENTS 50
#define TRUE 1
#define FALSE 0
int main()
{
    int i = 0,
    j = 0,
    k = 0,
    range = 0,
    keyElement = 0,
    totalElements = 0,
    array[MAX_ELEMENTS];
    //clrscr();
    printf("\nHow many Elements: ");
    scanf("%d",&totalElements);
    /*populate a dummy array on which
    bubble sort will apply*/
    for( i = 0; i < totalElements; i++)
    {
        printf("Element#%d: ",i+1);
        scanf("%d",&array[i]);
    }
    /*bubble sorting....*/
    range = totalElements - 1;
    for( i = 0; i < totalElements-1;i++)
    {
        for( j = 0; j < range-1;j++)
        {
            if( array[j] > array[j+1])
            {
                k = array[j];
                array[j] = array[j+1];
                array[j+1] = k;
            }
        }
    }
    printf("\n After sorting: \n\n");
    for( i = 0; i < totalElements; i++)
    {
        printf("%6d",array[i]);
    }
    getch();
    return 0;
}
