#include<stdio.h>
void selection_sort(int A[], int n)
{
    int i, j, index_min, temp;
    for ( i = 0; i < n-1; i++)
    {
        index_min = i;
        for( j = 0; j < n; j++)
        {
            if ( A[j] < A[index_min])
            {
                index_min = j;
            }
        }
        if ( index_min != i)
        {
            //Change element between A[i] and A[index_min]
            temp = A[i];
            A[i] = A[index_min];
            A[index_min] = temp;
        }
    }
}
