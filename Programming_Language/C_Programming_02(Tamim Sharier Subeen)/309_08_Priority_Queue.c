int extract_max(int heap[], int heap_size)
{
    int max_item = heap[1];
    heap[1] = heap[heap_size];
    heap_size -= 1;
    max_heapify(heap, heap_size, 1);
    return max_item;
}
