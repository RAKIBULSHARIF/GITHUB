void merge_sort int(int A[], int left, int right)
{
    if (left >= right)
    {
        return;
    }
    int mid = left + (right - left) / 2;
    merge_sort(A, left, mid);
    merge_sort(A, mid+1, right);
    merge(A, left, mid, right);
}
void merge(int A[], int left, int mid, int right)
