#include<stdio.h>
void bubble_sort(int A[], int n)
{
    int i, j, temp;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; i++)
        {
            if ( A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A [j+1];
                A[j+1] = temp;
            }
        }
    }
}
