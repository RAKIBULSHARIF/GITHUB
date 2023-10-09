#include<stdio.h>
#include<conio.h>
char *funcX( void )
{
    char* ptr;/*ptr allocated on the stack*/
    ptr = malloc(32 * sizeof(char));/*space allocated on the heap*/
    strcpy(ptr, "String from funcX()");
    return ptr;
}
int main(void)
{
    char* ptr;
    ptr = funcX();
    printf(" String is: %s\n",ptr);
    free(ptr);
}
