//Example of pointer operation
#include<stdio.h>
#include<conio.h>
void main()
{
    int x=30,y=15, *xPtr,*yPtr;
    int v1, v2;
    float v3;
    xPtr = &x;
    yPtr = &y;
    v1 = (*xPtr) + (*yPtr);
    //Equivalent to v1=x+y
    v2 = (*xPtr)*(*yPtr) + 10;
    //Equivalent to v2=x*y+10
    v3 = (*xPtr)/(*yPtr);
    //Equivalent to v3=x/y
    printf("x=*xPtr=%d",*xPtr);
    printf("\ny=*yPtr=%d",*yPtr);
    printf("\n(*xPtr)+(*yPtr)=%d",v1);
    printf("\n(*xPtr)+(*yPtr)+10=%d",v2);
    printf("\n(*yPtr)/(*xPtr)=%.2f",v3);
    return 0;
}

