/*This Program see that which data type how many byte memory allocate for store data*/
#include <stdio.h>
#include <conio.h>
int main()
{
    printf("\n\t Integer type data takes %d byte,\a", sizeof(int));
    printf("\n\t Character type data takes %d byte,\a", sizeof(char));
    printf("\n\t Float type data takes %d byte,\a", sizeof(float));
    printf("\n\t Double type data takes %d byte,\a", sizeof(double));
    getch();
}
