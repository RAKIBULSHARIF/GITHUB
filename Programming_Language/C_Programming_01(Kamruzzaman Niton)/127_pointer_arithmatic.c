#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 10;
    int *ptr0 = &i;
    int **ptr1 = &ptr0;
    int ***ptr2 = &ptr1;
    //clrscr();
    printf("&ptr2 = %X    ptr2 = %x    *ptr2 = %X\n", &ptr2, ptr2, *ptr2);
    printf("&ptr1 = %X    ptr1 = %x    *ptr1 = %X\n", &ptr1, ptr1, *ptr1);
    printf("&ptr0 - %X    ptr0 = %x    *ptr0 = %X\n", &ptr0, ptr0, *ptr0);
    printf("        &i = %X    i = %X\n",&i,i);
    printf("\n\n *ptr0=%X **ptr1=%X ***ptr2=%X\n",*ptr0,**ptr1,***ptr2);
    getch();
    return 0;
}
