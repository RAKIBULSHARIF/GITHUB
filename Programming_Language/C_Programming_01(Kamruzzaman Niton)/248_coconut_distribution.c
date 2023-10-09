/*This program need prob05.in and
prob05.out to exact path or editing
path for execute the program*/
#include<stdio.h>
#include<assert.h>
/*if the nCoconut is divisible by nPerson,
then return 1, else return 0*/
int hideCoconut(long nCoconut, long nPerson)
{
    long i, remainder;
    for (i = 0; i < nPerson; i++)
    {
        /*get the remainder*/
        remainder = nCoconut % nPerson;
        /*if remainder is other than 1, return 0*/
        if ( remainder != 1)
            return 0;
        /*hide share*/
        nCoconut -= nCoconut / nPerson;
        /*give one to monkey, and keep the rest*/
        nCoconut -= 1;
    }
    /*what about remaining coconut*/
    remainder = nCoconut % nPerson;
    return ( remainder == 0);
}
int main()
{
    long i, j, k, flag, nPerson, nCoconut;
    FILE *input, *output;
    input = fopen("C:\\ACM\\prob05.in","r");
    assert(input != NULL);
    output = fopen("C:\\ACM\\prob05.out","w");
    while( EOF != fscanf(input,"%ld",&nCoconut))
    {
        if ( nCoconut == -1)
            exit(0);
        flag = 0;
        /*divide and hide the coconuts until*/
        for(nPerson = nCoconut-1;nPerson > 1; nPerson--)
        {
            if ( 1 == hideCoconut(nCoconut,nPerson))
            {
                fprintf(output, "%ld coconuts, %ld people and 1 monkey\n",nCoconut,nPerson);
                flag = 1;
                break;
            }
        }
        if ( 0 == flag )
        {
            fprintf(output," %ld coconuts, no solution\n",nCoconut);
        }
    }
    fclose(input);
    fclose(output);
    return 0;
}
