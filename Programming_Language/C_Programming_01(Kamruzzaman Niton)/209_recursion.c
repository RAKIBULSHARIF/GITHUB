/*This Programme has some build issue*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void addNode(struct node* link);
void printList(struct node* head);
int main()
{
    head = (struct node*) malloc(sizeof(struct node));
    addNode(head);
    printList(head);
    free(head);
    return 0;
}
void addNode(struct node* link)
{
    printf("\n Enter a value [-1 for eXit]: ");
    scanf("%d",&link->x);
    if( link->x == -1)
        link->next = NULL;
    else
    {
        link->next = (struct node*) malloc(sizeof ( struct node) );
        addNode (link->next);/*recursive function*/

    }
}
void printList(struct node* head)
{
    struct node* localHead = head;
    printf("\nElements are : head");
    while( NULL != localHead->next)
    {
        printf("->%d",localHead->x);
        localHead = localHead->next;
    }
}
