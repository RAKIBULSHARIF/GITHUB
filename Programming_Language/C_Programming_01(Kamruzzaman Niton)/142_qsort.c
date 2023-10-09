#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char stringList[5][5] = {"sad","bad","mad","good","ugly"};
int intList[] = {9, 4, 2, 0, 4, 4, 0, 4, 0};
int stringSort( const void *a, const void *b)
{
    /*this function sorts string*/
    return(strcmp((char *)a,(char *)b));
}
int intSort(const int* a, const int* b)
{
    /*this function sorts integer data*/
    return(*a - *b);
}
int main()
{
    int x;
    //clrscr();
    printf("\n Sorted string list:");
    qsort((void *)stringList, 5, sizeof(stringList[0]),stringSort);
    for (x = 0; x < 5; x++)
    {
        printf("\n %s",stringList[x]);
    }
    printf("\n\n Sorted integer list: ");
    qsort(intList,sizeof(intList)/sizeof(int),sizeof(int),(int (*)(const void*))intSort);
    for(x = 0; x < 9; x++)
    {
        printf("\n %d", intList[x]);
    }
    getch();
    return 0;
}
