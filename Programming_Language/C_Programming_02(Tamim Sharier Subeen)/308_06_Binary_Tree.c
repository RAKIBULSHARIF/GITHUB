int main()
{
    Node *root = create_bst();
    Node *node;
    printf("BST: \n");
    in_order(root);
    printf("\n");
    node = bst_search(root, 1);
    if ( node != NULL)
    {
        printf("Will delete %d\n", node->data);
        root = bst_delete(root, node);
        printf("BST:\n");
        in_order(root);
        printf("\n");
    }
    else
    {
        printf("Node not found!\n");
    }
    node = bst_search(root, 5);
    if ( node != NULL)
    {
        printf("Will delete %d\n", node->data);
        root = bst_delete(root, node);
        printf("BST: \n");
        in_order(root);
        printf("\n");
    }
    else
    {
        printf("Node not found!\n");
    }
    node = bst_search(root, 10);
    if ( node != NULL)
    {
        printf("Will delete %d\n", node->data);
        root = bst_delete(root, node);
        printf("BST:\n");
        in_order(root);
        printf("\n");
    }
    else
    {
        printf("Node not found!\n");
    }
    return 0;
}
