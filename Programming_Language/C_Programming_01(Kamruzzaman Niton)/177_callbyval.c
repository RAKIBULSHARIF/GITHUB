/*Pointer part of this programme not work properly*/
#include<stdio.h>
#include<conio.h>
struct Person
{
    char* name;
    int age;
};
void showPersonInformation(struct Person* pPerson);
int main()
{
    struct Person rana, tuhin, *ptr;
    //clrscr();
    rana.name = " R A CHOWDHURY";
    rana.age = 27;
    showPersonInformation(&rana);
    tuhin.name = " B M MORSHED";
    tuhin.age = 27;
    showPersonInformation(&tuhin);
    showPersonInformation(ptr);
    getch();
    return 0;
}
void showPersonInformation(struct Person* pPerson)
{
    printf("\n Name = %s    Age = %d",pPerson->name,pPerson->age);
}
