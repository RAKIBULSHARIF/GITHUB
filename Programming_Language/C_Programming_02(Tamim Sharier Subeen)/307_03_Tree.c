#include<stdio.h>
void in_order(Node *node)
{
    if(node->left != NULL)
    {
        in_order(node->left);
    }
    printf("%d ", node->data);
    if (node->right != NULL)
    {
        in_order(node->right);
    }
}
int main()
{
    Node *root = create_tree();
    in_order(root);
    printf("\n");
    return 0;
}
