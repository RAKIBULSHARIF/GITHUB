#include<stdio.h>
#include<conio.h>
//Accessing global variable by using :: operator to use
int x = 50;
int main()
{
    int x = 15;
    printf("Local x = %d\n",x);
    printf("Global x = %d\n",x); //::x
    printf("Local x = %d\n",x);
    return 0;
}
