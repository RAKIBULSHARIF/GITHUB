#include<stdio.h>
#include<conio.h>
#define MAX_ELEMENTS 50
void mergeSort( int array[],
               int minElements,
               int maxElements);
void sortUtil( int array[],
              int size,
              int topElement,
              int botElement);
int main()
{
    int i = 0,
    totalElements = 0,
    array[MAX_ELEMENTS];
    //clrscr();
    printf("\nHow many element: ");
    scanf("%d",&totalElements);
    printf("\nEnter %d elements: \n",totalElements);
    for( i = 0; i < totalElements; ++i)
    {
        printf("Elements#%2d: ",i+1);
        scanf("%d",&array[i]);
    }
    /*call mergeSort() to sort array*/
    i = 0;
    mergeSort(array, i, totalElements - 1);
    printf("\nAfter Sorting: \n");
    for( i = 0; i < totalElements; i++)
    {
        printf("%6d",array[i]);
    }
    getch();
    return 0;
}
/*******
function : mergeSort()
this function will be called recursively
to sort the given array.
Note that, since the function is calling recursively,
FIRST HALF sorted first, then it works for the SECOND HALF
*******/
void mergeSort ( int array[MAX_ELEMENTS],
                int minElements,
                int maxElements)
{
    int half;
    if ( minElements != maxElements)
    {
        half = (minElements + maxElements) / 2;
        /*call mergeSort() recursively for the first half*/
        mergeSort(array, minElements, half);
        /*call mergeSort() recursively for the second half*/
        mergeSort(array, half+1,maxElements);
        sortUtil(array, half, minElements, maxElements);
    }
}
/*******
function: sortUtil()
this function will be called by mergesort()
to sort the given array.
*******/
void sortUtil ( int array[MAX_ELEMENTS],
               int size,
               int topElement,
               int botElement)
{
    int i = 0,
    tempSize = size + 1,
    lowerBound = topElement,
    upperBound = topElement,
    tempArray[MAX_ELEMENTS];
    while ((lowerBound <= size) && (tempSize <= botElement))
    {
        if ( array[lowerBound] <= array[tempSize])
        {
            tempArray[upperBound] = array[lowerBound];
            lowerBound += 1;
        }
        else
        {
            tempArray[upperBound] = array[tempSize];
            tempSize += 1;
        }
        upperBound += 1;
    }
    if (lowerBound <= size)
    {
        for(; lowerBound <= size; lowerBound++)
        {
            tempArray[upperBound] = array[lowerBound];
            upperBound += 1;
        }
    }
    else
    {
        for(; tempSize <= botElement; tempSize++)
        {
            tempArray[upperBound] = array[tempSize];
            upperBound += 1;
        }
    }
    for ( i = topElement; i <= botElement; i++)
    {
        array[i] = tempArray[i];
    }
    return;
}
