Node *bst_delete(Node *root, Node *node)
{
    Node *smallest_node;
    if (node->left == NULL)
    {
        root = bst_transplant(root, node, node->right);
    }
    else if (node->right == NULL)
    {
        root = bst_transplant(root, node, node->left);
    }
    else
    {
        smallest_node = bst_minimum(node->right);
        if ( smallest_node->parent != node)
        {
            root = bst_transplant(root, smallest_node, smallest_node->right);
            add_right_child(smallest_node, node->right);
        }
        root = bst_transplant(root, node, smallest_node);
        add_left_child(smallest_node, node->left);
    }
    free(node);
    return root;
}
