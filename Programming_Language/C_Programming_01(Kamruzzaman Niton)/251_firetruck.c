/*This program need prob08.in and prob08.out file for run*/
#include<stdio.h>
#include<conio.h>
#include<assert.h>
int totRoute;
FILE* output;
void findRoute ( int nPos,
                 int fire,
                 int corner,
                 int route[],
                 int routeMap[22][22])
{
    int i, j;
    if (nPos == fire)
    {
        totRoute++;
        for ( i = 0; i < corner; i++)
        {
            fprintf(output,"%5d", route[i]);
        }
        fprintf(output,"\n");
        return 0;
    }
    for ( i = 0; i < 22; i++)
    {
        if (routeMap[nPos][i])
        {
            for(j=0;j<corner;j++)
            {
                if (route[j] == i)
                    break;
            }
            if (j == corner)
            {
                route[corner] = i;
                findRoute(i, fire, corner+1,route, routeMap);
            }
        }
    }
}
int main()
{
    int x,
        y,
        fire,
        testCase,
        route[22],
        routeMap[22][22];
    FILE *input;
    input = fopen("prob08.in","r");
    assert(input != NULL);
    output = fopen("prob08.out","w");
    testCase = 1;
    while ( 1 == fscanf(input,"%d", &fire))
    {
        for(x=0;x<22;x++)
            for(y=0;y<22;y++)
                routeMap[x][y] = 0;
        fscanf(input,"%d %d",&x, &y);
        while ( x  || y )
        {
            routeMap[x][y] = 1;
            routeMap[y][x] = 1;
            fscanf(input, "%d %d", &x, &y);
        }

    fprintf(output,"CASE %d:\n", testCase++);
    route[0] = 1;
    totRoute = 0;
    findRoute(1, fire, 1, route, routeMap);
    fprintf(output,"There are %d routes from the firestation "
                    "to streetcorner %d.\n",totRoute, fire);
    }
    fclose(input);
    fclose(output);
    return 0;
}

