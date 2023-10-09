#include<stdio.h>
#include<conio.h>
void call_by_value(int a, int b)
{
    a += 1;
    b += 1;
}
int main()
{
    int a = 10, b = 10;
    call_by_value(a,b);
    printf("a = %d, b = %d",a,b);
    return 0;
}
