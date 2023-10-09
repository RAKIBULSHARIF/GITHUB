#include<stdio.h>
#include<conio.h>
#define MAX_ELEMENTS 50
void heapSort(int arry[], int n);
void heapCreation(int arry[], int n);
int main()
{
    int i = 0,
    totalElements = 0,
    array[MAX_ELEMENTS];
    //clrscr();
    printf("\nHow many elements: ");
    scanf("%d",&totalElements);
    /*populate a dummy array on which
    heap sort will apply*/
    printf("\nEnter %d element: \n\n",totalElements);
    for( i = 1; i <= totalElements; ++i )
    {
        printf("Element#%d: ",i);
        scanf("%d",&array[i]);
    }
    /*now send the array to heapsort()*/
    heapSort(array, totalElements);
    printf("\nAfter sorting:\n\n");
    for( i = 1; i <= totalElements; ++i)
    {
        printf("%6d",array[i]);
    }
    getch();
    return 0;
}
void heapSort(int array[MAX_ELEMENTS], int nElements)
{
    int i = 0,
    j = 0,
    k = 0,
    tempElement = 0,
    sortElement = 0;
    /*call heapCreation() to heapify*/
    heapCreation(array,nElements);
    for( k = nElements; k >= 2; --k)
    {
        i = 1;
        j = 2;
        tempElement = array[1];
        array[1] = array[k];
        array[k] = tempElement;
        sortElement = array[1];
        if( (j+1) <k)
        {
            if( array[j+1] > array[j])
            {
                j += 1;
            }
        }
        while (( j <= (k - 1)) && (array[j] > sortElement))
        {
            array[i] = array[j];
            i = j;
            j = 2*i;
            if((j +1) < k)
            {
                if (array[j+1] >array[j])
                {
                    j += 1;
                }
                else if( j > nElements)
                {
                    j = nElements;
                }
            }
            array[i] = sortElement;
        }
    }
}
void heapCreation(int array[MAX_ELEMENTS], int nElements)
{
    int i = 0,
    j = 0,
    k = 0,
    tempElement = 0;
    for (k = 2; k <= nElements; ++k)
    {
        i = k,
        tempElement = array[k];
        j = (int)(i/2);
        while((i > 1) &&(tempElement > array[j]))
        {
            array[i] = array [j];
            i = j;
            j = (int)(i/2);
            if(j < 1)
            {
                j = 1;
            }
        }
        array[i] = tempElement;
    }
}
