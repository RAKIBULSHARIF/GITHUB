int is_max_heap(int H[], int heap_size)
{
    int i, p;
    for ( i = heap_size; i > 1; i--)
    {
        p = parent(i);
        printf("i = %d, p = %d\th[i] = %d, H[p] = %d\n",i,p,H[i],H[p]);
        if ( H[p] < H[i])
        {
            return 0;
        }
    }
    return 1;
}
