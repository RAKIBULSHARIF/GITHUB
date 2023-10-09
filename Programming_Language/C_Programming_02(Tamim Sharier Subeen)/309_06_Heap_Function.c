void build_max_heap(int heap[], int heap_size)
{
    int i;
    for( i = heap_size / 2; i >= 1; i--)
    {
        max_heapify(heap, heap_size,i);
    }
}
