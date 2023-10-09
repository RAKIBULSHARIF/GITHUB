#include<stdio.h>
#include<time.h>
#include<time.h>
int main()
{
    time_t t;
    srand(0);
    for( int i = 0; i < 5; i++)
    {
        printf("%d\n", rand());
    }
    return 0;
}
