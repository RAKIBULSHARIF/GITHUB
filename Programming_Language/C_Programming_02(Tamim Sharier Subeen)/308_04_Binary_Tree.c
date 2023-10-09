Node *bst_transplant(Node *root, Node *current_node, Node *new_node)
{
    if ( current_node == root)
    {
        root = new_node;
    }
    else if ( current_node == current_node->parent->left)
    {
        add_left_child(current_node->parent, new_node);
    }
    else
    {
        add_right_child(current_node->parent, new_node);
    }
    return root;
}
