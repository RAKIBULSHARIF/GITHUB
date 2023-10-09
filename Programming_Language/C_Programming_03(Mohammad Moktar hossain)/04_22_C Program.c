#include<stdio.h>
void main()
{
    char dept[50];
    printf("Enter your department name: \n");
    scanf("%[^\n]",dept);
    printf("\nYour department name is : %s",dept);
    return;
}
