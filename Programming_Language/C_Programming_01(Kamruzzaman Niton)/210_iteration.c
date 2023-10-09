/*This Programme has some build issue*/
#include<stdio.h>
#include<conio.h>
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
    int n;
    struct node* tail = link;
    printf("\n Enter a Value [-1 for eXit]: ");
    scanf("%d",&tail->x);
    /*now create list with iteration*/
    for ( n = 1; (tail->x) != -1;n++)
    {
        fail->next = (struct node*) malloc(sizeof(struct node));
        tail = tail->next;
        pritnf("\n Enter a Value [-1 for eXit]: ");
        scanf("%d",&tail->x);
    }
    tail->next = NULL;
}
void printList(struct node* head)
{
    struct node* localHead;
    localHead = head;
    printf("\n Elements are: head");
    while ( NULL != localHead->next )
    {
        printf("->%d",localhead->x);
        localHead = localHead->next;
    }
}
