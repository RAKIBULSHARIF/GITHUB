#include<stdio.h>
#include<conio.h>
struct person
{
    char* name;
    int age;
};
void showPersonInformation(struct person p1);
int main()
{
    struct person rakib;
    //clrscr();
    rakib.name = "RAKIBUL SHARIF";
    rakib.age = 27;
    printf("\n In main(), before calling showPersonInformation()");
    printf("\n NAME = %s    AGE = %d",rakib.name,rakib.age);
    printf("\n\n In showPersonInformation()");
    showPersonInformation(rakib);
    printf("\n\n In main(), after calling showPersonInformation()");
    printf("\n NAME = %s    AGE = %d",rakib.name,rakib.age);
    getch();
    return 0;
}
void showPersonInformation(struct person p1)
{
    p1.name = "NITON AHSAN";
    p1.age = 26;
    printf("\n NAME = %s    AGE = %d",p1.name,p1.age);
}
