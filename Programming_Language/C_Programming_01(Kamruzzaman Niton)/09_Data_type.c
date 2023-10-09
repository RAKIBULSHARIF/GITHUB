/*Not  work on 64-bit architecture processor*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int pstv_range = 32767; //Store 32767 to pstv_range variable
    int ngtv_range = -32768; //Store -32768 to ngtv_range variable
    printf("\n %d + 1 is %d.\n",pstv_range, pstv_range + 1);
    printf("\n %d - 1 is %d.\n",ngtv_range, ngtv_range -1);
    getch();
}
