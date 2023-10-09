/*This program need prob06.in and prob06.out file for run*/
#include<stdio.h>
#include<assert.h>
/*function to traverse the network*/
int traverseNetwork(int nPos, int* pNumber, int* pNodes)
{
    int i;
    for ( i = 0; i < *pNumber; i++)
    {
        if (pNodes[i] == nPos)
            return i;
    }
    pNodes[*pNumber] = nPos;
    ++*pNumber;
    return *pNumber-1;
}
/*recursive function to get neighboring node*/
void neighborNode ( int n,
                    int ttl,
                    int node,
                    int nList[], /*contains list of neighboring list*/
                    int nConnection[][30])
{
    int index;
    nList[node] = 1;
    if(0 == ttl)
        return;
    for(index = 0; index < n; index++)
    {
        if (nConnection[node][index])
            neighborNode (n,
                          ttl-1,
                          index,
                          nList,
                          nConnection);
    }
}
int main()
{
    int i, j, k, m, n, node, nCase, nConnection;
    int nodes[30],
        neighborList[30],
        connectionList[30][30];
    FILE *input, *output;
    input = fopen("prob06.in","r");
    assert(input != NULL);
    output = fopen("prob06.out","w");
    nCase = 1;
    /*we can have more than one network*/
    while(fscanf(input,"%d",&nConnection),nConnection)
    {
        /*initialize the array with 0*/
        for ( i = 0; i < 30; i++)
            for ( j = 0; j < 30; j++)
                connectionList[i][j] = 0;
        n = 0;
        for ( i = 0; i < nConnection; i++)
        {
            fscanf(input,"%d %d",&j, &k);
            j = traverseNetwork(j, &n, nodes);
            k = traverseNetwork(k, &n, nodes);
            /*use 1 to mark the node*/
            connectionList[j][k] = connectionList[k][j] = 1;
        }
        /*read all node pair until 0 0 found*/
        while (fscanf(input,"%d %d", &j, &k), j||k)
        {
            /*initialize neighboring list with 0*/
            for(i = 0; i < n; i++)
                neighborList[i] = 0;
            node = traverseNetwork(j, &n, nodes);
            neighborNode(n,
                         k,
                         node,
                         neighborList,
                         connectionList);
            for ( m = 0, i = 0; i < n; i++)
                if ( 0 == neighborList[i])
                    m++;
            fprintf(output,
                    "Case %d: %d nodes not reachable "
                    "From node %d with TTL = %d.\n",nCase++, m, j, k);
        }
    }
    fclose(input);
    fclose(output);
    return 0;
}
