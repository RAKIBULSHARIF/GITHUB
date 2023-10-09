#include<stdio.h>
Node *bst_search(Node *root, int item)
{
    Node *node = root;
    while ( node != NULL)
    {
        if (node->data == item)
        {
            return node;
        }
        if (item < node->data)
        {
            node = node->left;
        }
        else
        {
            node = node->right;
        }
    }
    return node;
}
int main()
{
    Node *root = create_bst();
    Node *node;
    node = bst_search(root, 7);
    if ( node != NULL)
    {
        printf("%d\n", node->data);
    }
    else
    {
        printf("Node not found!\n");
    }
    return 0;
}
