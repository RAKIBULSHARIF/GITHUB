Node *bst_minimum(Node *root)
{
    Node *node = root;
    while (node->left != NULL)
    {
        node = node->left;
    }
    return 0;
}
