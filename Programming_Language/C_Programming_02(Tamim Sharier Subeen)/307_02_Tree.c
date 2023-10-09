#include<stdio.h>
void post_order(Node *node)
{
    if (node->left != NULL)
    {
        post_order(node->left);
    }
    if (node->right != NULL)
    {
        post_order(node->right);
    }
    printf("%d ", node->data);
}
int main()
{
    Node *root = create_tree();
    post_order(root);
    printf("\n");
    return 0;
}
