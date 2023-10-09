int insert_node(int heap[], int heap_size, int node)
{
    int i, p, t;
    heap_size += 1;
    heap[heap_size] = node;
    while ( i > 1 && heap[i] > heap[parent(i)])
    {
        p = parent(i);
        t = heap[p];
        heap[i] = t;
        i = p;
    }
    return heap_size;
}
