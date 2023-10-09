#include<stdio.h>
#include<conio.h>
int main(void)
{
    char *city_name[6] = {"Sylhet","Barishal","Rajshahi","Khulna","Chittagong","Dhaka"};
    int n;
    for( n = 0; n < 6; n++)
    {
        printf("\n City name[#%d] is %s.",n+1,city_name[n]);
    }
    return 0;
}
