#include<stddef.h>
#include<stdio.h>
#include<conio.h>
int main()
{
    int array[] = {92, 89, 82, 95, 88};
    size_t arraySize = sizeof(array);
    int* ptrA1 = array;
    int* ptrA2 = array + 4;
    ptrdiff_t diff = ptrA2 - ptrA1;
    //clrscr();
    printf("\nArray size: %d bytes\nprtA2 - ptrA1: %d\n",arraySize, diff);
    getch();
    return 0;
}
