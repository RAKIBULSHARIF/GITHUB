//Command line argumented function
#include<stdio.h>
#include<conio.h>
int main(int argc, char *argv[])
{
    int i;
    for( i = 1; i < argc; i++)
        if (system(argv[i]))
    {
        printf("%s failed \n",argv[i]);
        return -1;
        //Failure code
    }
    return 0;
}
