#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0
typedef struct queueElement
{
    int data;
    struct queueElement* next;
}
queue;
void addElement( int data,
                queue** frontElement,
                queue** rearElement)
{
    queue* tempElement;
    tempElement = (queue*) malloc (sizeof(queue));
    tempElement->data = data;
    tempElement->next = NULL;
    if( NULL == (*frontElement))
    {
        (*frontElement) = tempElement;
        (*rearElement) = tempElement;
    }
    else
    {
        (*rearElement)->next = tempElement;
        *rearElement = tempElement;
    }
}
int deleteElement(queue** frontElement)
{
    queue* tempElement;
    int data;
    if ( NULL != (*frontElement))
    {
        data = (*frontElement)->data;
        tempElement = (*frontElement);
        (*frontElement) = (*frontElement)->next;
        free(tempElement);
    }
    return data;
}
void displayQueue(queue* frontElement)
{
    printf("\n\nFRONT");
    while ( NULL != frontElement)
    {
        printf("%d",(*frontElement).data);
        frontElement = (*frontElement).next;
    }
    printf("  REAR\n\n");
}
int main()
{
    char menuItem;
    int data = 0,
    flag = TRUE;
    queue *frontElement = NULL,
          *rearElement = NULL;
    //clrscr();
    do
    {
        printf("Queue Example");
        printf("\n 1) Insert");
        printf("\n 2) Delete");
        printf("\n 3) eXit");
        printf("\nYour choice(I, D OR X): ");
        menuItem = getch();
        switch(menuItem)
        {
        case 'i': case 'I':
            printf("\nEnter new element: ");
            scanf("%d",&data);
            addElement(data,&frontElement,&rearElement);
            printf("\nAfter adding %d,",data);
            break;
        case 'd': case 'D':
            if ( NULL != frontElement)
            {
                data = deleteElement(&frontElement);
                printf("\n\nAfter deleting %d",data);
            }
            break;
        case 'x': case 'X':
            flag = FALSE;
            break;
        default:
            break;
        }
        if ( NULL == frontElement )
        {
            printf("\n\nThe Queue is empty\n\n");
        }
        else
        {
            printf("The Queue Becomes.....");
            displayQueue(frontElement);
        }
    }
    while ( TRUE == flag );
    while ( NULL != frontElement)
    {
        rearElement = frontElement->next;
        free(frontElement);
        frontElement = rearElement;
    }
    return 0;

}
