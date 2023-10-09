//Example of using Built-in Macro
#include<stdio.h>
#include<conio.h>
int main()
{
    printf("\nCurrent date is : %s",__DATE__);
    printf("\nCurrent time is : %s",__TIME__);
    printf("\nRunning File is : %s",__FILE__);
    printf("\nNumber of Lines : %d",__LINE__);
    return 0;
}
