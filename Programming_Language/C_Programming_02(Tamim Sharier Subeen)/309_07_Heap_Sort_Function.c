void heap_sort(int heap[], int heap_size)
{
    int i, t;
    for(i = heap_size; i > 1; i--)
    {
        t = heap[1];
        heap[1] = heap[i];
        heap[i] = t;
        heap_size -= 1;
        max_heapify(heap, heap_size, 1);
    }
}
