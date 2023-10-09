#include<stdio.h>
#define DEBUG 1
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int length, i, sum = 0, tmp;
    printf("Enter number of integers: ");
    scanf("%d", &length);
    if(DEBUG) printf("----\nDEBUG\n\tNumber of integers:%d\nENDEBUG\n----\n", length);
    for( i = 0; i < length; i++)
    {
        printf("Enter Number %d: ", i+1);
        scanf("%d",&tmp);
        if(DEBUG) printf("----\nDEBUG\n\tNumber %d: %d\nENDDEBUG\n----\n", i+1, tmp);
        sum = add(sum, tmp);
        if(DEBUG) printf("----\nDEBUG\n\tCurrent Sum: %d\nENDDEBUG\n----\n",sum);
        return 0;
    }
}
