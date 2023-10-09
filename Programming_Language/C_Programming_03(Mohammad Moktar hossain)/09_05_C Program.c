//Example of pointer operation
#include<stdio.h>
#include<conio.h>
void main()
{
    char c, *cPtr;
    int i, x, *xPtr;
    float y, *yPtr;
    cPtr = &c;
    xPtr = &x;
    yPtr = &y;
    printf("cPtr = %x",cPtr);
    printf("\t\txPtr = %x",xPtr);
    printf("\t\tyPtr = %x",yPtr);
    for (i=1;i<=5;i++)
    {
        printf("\ncPtr + %d = %x",i,(cPtr+i));
        printf("\t\txPtr + %d = %x",i,(xPtr+i));
        printf("\t\tyPtr + %d = %x",i,(yPtr+i));
    }
    return 0;
}
