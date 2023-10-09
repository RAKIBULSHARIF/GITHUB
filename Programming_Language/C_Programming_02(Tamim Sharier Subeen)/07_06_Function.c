#include<stdio.h>
double pi = 3.14;
void my_fnc()
{
    pi = 3.1416;//Slight change on pi value
    return; //Function return type void than return
}
int main()
{
    printf("%lf\n",pi);//pi value is 3.14
    my_fnc();
    printf("%lf\n",pi);//pi value is 3.1416 cause value changed at my_fnc
    return 0;
}
