/*This program associated with prob04.in and prob04.out*/
#include<stdio.h>
#include<assert.h>
void getUnits(int n, int* ni, int* nv,int* nx )
{
    switch(n){
                case 0:                      break;
                case 1: *ni += 1;            break;
                case 2: *ni += 2;            break;
                case 3: *ni += 3;            break;
                case 4: *ni += 1;   *nv += 1;break;
                case 5: *nv += 1;            break;
                case 6: *ni += 1;   *nv += 1;break;
                case 7: *ni += 2;   *nv += 1;break;
                case 8: *ni += 3;   *nv += 1;break;
                case 9: *ni += 1;   *nx += 1;break;
                default:                     exit(0);
        }
}
void getTens(int n, int* nx, int* nl, int* nc)
{
    switch(n) {
                case 0:                      break;
                case 1: *nx += 1;            break;
                case 2: *nx += 2;            break;
                case 3: *nx += 3;            break;
                case 4: *nx += 1;   *nl += 1;break;
                case 5: *nl += 1;            break;
                case 6: *nx += 1;   *nl += 1;break;
                case 7: *nx += 2;   *nl += 1;break;
                case 8: *nx += 3;   *nc += 1;break;
                case 9: *nc += 1;            break;
                case 10: *nc += 1;           break;
                default:                     exit(0);
        }
}
int main()
{
    int i = 0, /*index*/
        n = 0, /*range*/
        ni = 0, /*total i for a range*/
        nv = 0, /*total v for range*/
        nx = 0, /*total x for range*/
        nl = 0, /*total l for range*/
        nc = 0; /*total c for range*/
    FILE *input, *output;
    input = fopen("prob04.in","r");
    assert(input != NULL);
    output = fopen("prob04.out","w");
    while(EOF != fscanf(input, "%d", &n))
    {
        if (n == 0)
            exit(0);
        ni = nv = nx = nl = nc = 0;
        for(i=1;i <= n;i++)
        {
            getUnits((i % 10), &ni, &nv, &nx);
            getTens((i /10), &nx, &nl, &nc);
        }
        fprintf(output,"%d: %d i, %d v, %d x, %d l, %d c\n",n, ni, nv, nx, nl, nc);
    }
    fclose(input);
    fclose(output);
    return 0;
}
