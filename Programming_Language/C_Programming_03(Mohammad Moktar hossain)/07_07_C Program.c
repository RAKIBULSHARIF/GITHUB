#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<dos.h>
//Using clock() and delay() library function
void main()
{
    clock_t start, end;
    start = clock();
    end = clock();
    printf("Time delayed : %f seconds",(end-start)/CLK_TCK);
    return 0;
}
