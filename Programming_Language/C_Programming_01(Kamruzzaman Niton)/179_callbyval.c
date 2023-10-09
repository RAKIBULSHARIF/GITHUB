#include<stdio.h>
#include<conio.h>
struct Person
{
    char* name;
    int age;
};
struct Person functionX(void) /*returns Person type variable*/
{
    struct Person person;
    person.name = "RAKIBUL SHARIF";
    person.age = 27;
    return person;
}
struct Person* functionY(void)/*returns Person type address*/
{
    struct Person *pPerson;
    pPerson = (struct Person *) malloc(sizeof(struct Person));
    pPerson->name = (char*) malloc(25);
    pPerson->name = "R A Chowdhury";
    pPerson->age = 28;
    return pPerson;
}
int main()
{
    struct Person rakib, *ptrPerson;
    //clrscr();
    rakib = functionX();
    printf("\n Name : %s    Age: %d",rakib.name, rakib.age);
    ptrPerson = functionY();
    printf("\n Name: %s    Age: %d",ptrPerson->name,ptrPerson->age);
    getch();
    return 0;
}
