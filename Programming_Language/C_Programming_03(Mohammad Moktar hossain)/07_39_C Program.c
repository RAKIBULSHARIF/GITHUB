//Command line argumented function
#include<stdio.h>
#include<conio.h>
int main(int argc, char *argv[])
{
    int i;
    for ( i = 0; i < atoi(argv[1]); i++)
        printf("\nProgramming is C");
    return 0;
}
