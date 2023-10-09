#include<stdio.h>
#include<conio.h>
int main()
{
    int i, j, x[3][4] = {1,2,3,4,9,8,7,3,4,5,5,6,7};
    int *p;
    //clrscr();
    p = x;
    printf("x = %X    p = %X\n",x,p);
    for(i = 0; i < 3; i++)
        for(j = 0; j < 4; j++)
    {
        printf("&X[%d][%d]=%X  p=%X  x[%d][%d]=[%d] *p=%d\n",i,j,&x[i][j],p+i*4+j,i,j,x[i][j],*(p+i*4+j));
    }
    getch();
    return 0;
}
