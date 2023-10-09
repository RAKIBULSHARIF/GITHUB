#include<stdio.h>
// Example of Conditional operation
void main()
{
    int i,j,k;
    printf("Enter two integer value : ");
    scanf("%d %d", &i, &j);
    k = (i > j)? i : j;
    printf("Max of %d and %d is : %d", i, j, k);
    return 0;
}
