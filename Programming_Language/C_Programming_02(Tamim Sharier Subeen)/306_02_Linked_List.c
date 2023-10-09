#include<stdio.h>
int main()
{
    Node *n1, *head, *n2;
    n1 = create_node(10, NULL);
    head = n1;
    print_linked_list(head);
    head = prepend(head, 20);
    print_linked_list(head);
    head = append(head, 30);
    head = remove_node(head, n1);
    print_linked_list(head);
    n2 = head;
    head = remove_node(head, n2);
    print_linked_list(head);
    return 0;
}
