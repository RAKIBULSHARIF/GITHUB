#include<stdio.h>
#include<conio.h>
int main(void)
{
    char ch = 'n';
    int i,x = 300;
    float y = 10.375;
    double z = 99.99;
    char *chPtr;
    void *ptr;
    //clrscr();
    chPtr = (char *) &ptr; /*pritnf address and content*/
    for( i = 0; i < 18; i++)
    {
        printf("Address = %X Data = %02X\n",chPtr++,(unsigned char)*chPtr);
    }
    printf("\n At the Begining: ptr = %02X\n",&ptr, ptr);
    ptr = &ch;
    printf("\n After ptr = &ch: \n");
    printf("    ptr = %X  *ptr = %02X\n",ptr,*(int *)ptr);
    ptr = &y;
    printf("\n After ptr = &y: 'n");
    printf("    ptr = %X  *ptr = %g\n",ptr,*(float *)ptr);
    ptr = &z;
    printf("\n After ptr = &z: \n");
    printf("    ptr = %X  *ptr = %g\n",ptr,*(double *)ptr);
    getch();
    return 0;
}
