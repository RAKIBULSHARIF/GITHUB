int partition(int A[], int low, int high)
{
    int pivot, i, j, t;
    pivot = A[high];
    for ( i = low-1, j = low; j < high, i++)
    {
        if (A[j] < pivot)
        {
            i += 1;
            t = A[j];
            A[j] = A[i];
            A[i] = t;
        }
    }
    t = A[high];
    A[high] = A[i+1];
    A[i+1] = t;
    return i+1;
}
