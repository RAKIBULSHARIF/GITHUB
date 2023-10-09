#include<stdio.h>
#include<conio.h>
#define MAX_ELEMENTS 50
#define TRUE 1
#define FALSE 0
int main()
{
    int i = 0,
    found = TRUE,
    keyElement = 0,
    totalElements = 0,
    array[MAX_ELEMENTS];
    //clrscr();
    printf("\nHow many elements: ");
    scanf("%d",&totalElements);
    /*populate a dummy array on which
    linear search will apply*/
    for ( i = 0; i < totalElements; i++)
    {
        printf(" Enter element#%2d: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("\nElement to searched: ");
    scanf("%d",&keyElement);
    /*lets assume element is not in the list*/
    found = FALSE;
    /*use linear search*/
    for(i = 0;i < totalElements;i++)
    {
        if(array[i] == keyElement)
        {
            printf("\n%d is at %d",keyElement, i+1);
            found = TRUE;
            break;
        }
    }
    /*if we didn't find the elements*/
    if (FALSE == found)
    {
        printf("\n%d is not in the list",keyElement);
    }
    getch();
    return 0;
}
