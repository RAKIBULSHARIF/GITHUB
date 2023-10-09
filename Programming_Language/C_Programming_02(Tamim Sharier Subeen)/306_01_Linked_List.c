#include<stdio.h>
#include<stdlib.h>
void print_linked_list(Node *head)
{
    Node *current_node = head;
    while(current_node != NULL)
    {
        printf("%d ", current_node->data);
        current_node = current_node->next;
    }
    printf("\n");
}
int main()
{
    Node *n1, *head;
    n1 = create_node(10, NULL);
    head = n1;
    print_linked_list(head);
    head = prepend(head, 20);
    print_linked_list(head);
    head = append(head, 30);
    print_linked_list(head);
    return 0;
}
