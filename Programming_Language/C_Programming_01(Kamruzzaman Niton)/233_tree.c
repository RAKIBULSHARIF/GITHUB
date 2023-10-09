#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct TREE
{
    int data;
    struct TREE* leftChild;
    struct TREE* rightChild;
}
TREE;
TREE* createLeaf(int nData, TREE* ptrTree)
{
    /*if tree is NULL, create parent node*/
    if ( NULL == ptrTree )
    {
        ptrTree = (TREE*) malloc (sizeof(TREE));
        ptrTree->data = nData;
        ptrTree->leftChild = ptrTree->rightChild = NULL;
        return ptrTree;
    }
    /*tree is not NULL, then following code will work*/
    if ( nData < ptrTree->data)
    {
        ptrTree->leftChild = createLeaf(nData, ptrTree->leftChild);
    }
    else if ( nData > ptrTree->data)
    {
        ptrTree->rightChild = createLeaf(nData, ptrTree->rightChild);
    }
    return ptrTree;
}
void displayTree(int height, TREE* tree)
{
    int i = 0;
    if( NULL != tree )
    {
        /*first recursively desplay the right side then left side*/
        displayTree ( height + 1, tree->rightChild);
        printf("\n ");
        for( i = 0; i < height; i++)
        {
            printf("   ");
        }
        printf("%d", tree->data);
        displayTree( height + 1, tree->leftChild);
    }
}
int main()
{
    int nData = 0;
    TREE* tree = NULL;
    //clrscr();
    while(1)
    {
        printf("\n\nEnter an element [1000 for eXit]: ");
        scanf("%d",&nData);
        if ( 1000 == nData )
            break;
        tree = createLeaf( nData, tree );
        printf("\n\nAfter Adding %d, The tree becomes: \n",nData);
        displayTree(1,tree);
    }
    return 0;
}
