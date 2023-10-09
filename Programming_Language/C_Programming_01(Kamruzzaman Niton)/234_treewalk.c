#include<stdio.h>
#include<conio.h>
#define MAX_NODE 50
typedef struct TREE
{
    int data;
    struct TREE* leftChild;
    struct TREE* rightChild;
}
TREE;
TREE* createTree(int* ptrData, int min, int max)
{
    int midElement;
    TREE* shadowTree;
    midElement = (int) ( max + min )/2;
    shadowTree = (TREE*) malloc (sizeof (TREE));
    shadowTree->data = ptrData[midElement];
    if ( min >= max )
    {
        shadowTree->leftChild = NULL;
        shadowTree->rightChild = NULL;
        return shadowTree;
    }
    if ( min <= midElement - 1 )
    {
        shadowTree->leftChild = createTree(ptrData, min, midElement-1);
    }
    else
    {
        shadowTree->leftChild = NULL;
    }
    if (midElement+1 <= max)
    {
        shadowTree->rightChild=createTree(ptrData, midElement+1,max);
    }
    else
    {
        shadowTree->rightChild = NULL;
    }
    return shadowTree;
}
void preOrderTraversal(TREE* ptrTree)
{
    if ( NULL != ptrTree )
    {
        printf("%d ",ptrTree->data);
        preOrderTraversal(ptrTree->leftChild);
        preOrderTraversal(ptrTree->rightChild);
    }
}
void inOrderTraversal(TREE* ptrTree)
{
    if ( NULL != ptrTree )
    {
        inOrderTraversal(ptrTree->leftChild);
        printf("%d ",ptrTree->data);
        inOrderTraversal(ptrTree->rightChild);
    }
}
void postOrderTraversal(TREE* ptrTree)
{
    if ( NULL != ptrTree )
    {
        postOrderTraversal(ptrTree->leftChild);
        postOrderTraversal(ptrTree->rightChild);
        printf("%d ",ptrTree->data);
    }
}
void displayTree(TREE* ptrTree, int height)
{
    int i;
    if ( NULL != ptrTree )
    {
        displayTree ( ptrTree->rightChild, height+1);
        printf("\n ");
        for ( i = 0; i < height; i++)
            printf("    ");
        printf("%d ",ptrTree->data);
        displayTree ( ptrTree->leftChild, height+1);
    }
}
int main(void)
{
    TREE* tree;
    int i = 0,
        n = 0,
        array[28];
    //clrscr();
    printf("\nTotal Elements [max 50]? ");
    scanf("%d",&n);
    printf("\nEnter %d elements in ascending order...\n",n);
    for( i = 0; i < n; i++)
    {
        printf("\n Element#[%2d]: ", i + 1 );
        scanf("%d",&array[i]);
    }
    tree = createTree(array, 0, n-1);
    //clrscr();
    printf("\nThe tree is: ");
    displayTree(tree,1);
    printf("\n\nOutput of: ");
    printf("\n    In Order Traversal\n    ");
    inOrderTraversal(tree);
    printf("\n\n    Pre Order Traversal\n    ");
    preOrderTraversal(tree);
    printf("\n\n    Post Order Traversal\n    ");
    preOrderTraversal(tree);
    getch();
    return 0;
}
