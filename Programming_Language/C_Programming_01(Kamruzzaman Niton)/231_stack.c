/*This programme not work properly*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/*stack element*/
typedef struct stackElement
{
    int     data;
    struct stackElement* next;
}
stack;
int menu(void)
{
    int menuItem;
    do
    {
        printf("\n\nSelect Stack operation:\n\n");
        printf(" 1) Push Element\n");
        printf(" 2) Pop Element\n");
        printf(" 3) Exit\n");
        printf("\nYour choice: ");
        menuItem = getch();
        if ( menuItem < '1' || menuItem > '3')
        {
            printf("\nInvalid Choice! !! !!!\n");
        }
    }
    while (menuItem < '1' || menuItem > '3');
    return menuItem;
}
/*function to display the stack element*/
void displayStack(stack* element)
{
    if ( NULL  != element)
    {
        printf("\n %d",element->next);
        displayStack(element->next);
    }
}
/********
push element in the stack
********/
stack* pushElement( stack* firstElement)
{
    int tempData;
    stack* tempElement;
    printf("\n\nData for new element: ");
    scanf("%d",&tempData);
    tempElement = (stack* ) malloc(sizeof(stack));
    tempElement->data = tempData;
    tempElement->next = firstElement;
    firstElement = tempElement;
    return firstElement;
}
/********
pop element form the list
********/
stack* popElement ( stack* firstElement)
{
    int tempData;
    stack* tempElement;
    if ( NULL == firstElement )
    {
        printf("\nStack is empty\n");
    }
    else
    {
        tempData = firstElement->data;
        printf("\nPopped element: %d",tempData);
        tempElement = firstElement->next;
        free ( firstElement );
        firstElement = tempElement;
        if ( NULL == firstElement )
        {
            printf("\nNow the stack is empty\n");
        }
        else
        {
            printf("\nAfter Pop-ing: \n");
            displayStack( firstElement );
        }
    }
    return firstElement;
}
int main(void)
{
    int menuItem;
    stack* startElement = NULL;
    //clrscr();
    do
    {
        menuItem = menu();
        switch( menuItem )
        {
        case '1':
            startElement = pushElement(startElement);
            //clrscr();
            printf("\nAfter pushing %d stack becomes.....\n",startElement->data);
            displayStack(startElement);
            break;
        case '2':
            //clrscr();
            startElement = popElement(startElement);
            break;
        default:
            break;
        }
    }
    while ( '3' != menuItem);
    return 0;
}
