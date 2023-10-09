#include<stdio.h>
#include<conio.h>
struct Person
{
    char* name;
    int age;
};
void showPersonInformation(struct Person* pPerson)
{
    pPerson->name = "R A Chowdhury";
    pPerson->age = 27;
}
int main()
{
    struct Person rana;
    //clrscr();
    rana.name = "B M Morshed";
    rana.age = 27;
    printf("\n In main(), before calling showPersonInformation():");
    printf("\n\t Name = %s    Age = %d",rana.name, rana.age);
    showPersonInformation(&rana);
    printf("\n\n In main(), after calling showPersonInformation():");
    printf("\n\t Name = %s    Age = %d",rana.name, rana.age);
    getch();
    return 0;
}
