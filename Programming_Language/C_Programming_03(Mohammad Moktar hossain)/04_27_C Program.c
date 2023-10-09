#include<stdio.h>
#include<conio.h>
void main()
{
    printf("\n char type reserves %d bytes", sizeof(char));
    printf("\n int type reserves %d bytes", sizeof(int));
    printf("\n float type reserves %d bytes", sizeof(float));
    printf("\n double type reserves %d bytes", sizeof(double));
    printf("\n long int type reserves %d bytes", sizeof(long int));
    printf("\n long float type reserves %d bytes", sizeof(float));
    //long float specifiers not work.
    printf("\n long double type reserves %d bytes", sizeof(long double));
    return 0;
}
