/*This is the solution of 206_01_Structure.c*/
#include<stdio.h>
int main()
{
    struct student {
    int id;
    char* name;
    };
    struct student one;
    one.id = 1;
    one.name = "Tahmid Rafi";
    printf("ID : %d\n",one.id);
    printf("Name : %s\n",one.name);
    return 0;
}
