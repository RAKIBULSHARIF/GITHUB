#include<stdio.h>
void pre_order(Node *node)
{
    printf("%d ", node->data);
    if ( node->left != NULL)
    {
        pre_order(node->left);
    }
    if ( node->right != NULL)
    {
        pre_order(node->right);
    }
}
int main()
{
    Node *root = create_tree();
    pre_order(root);
    printf("\n");
    return 0;
}
