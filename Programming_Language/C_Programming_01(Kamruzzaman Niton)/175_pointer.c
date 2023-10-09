#include<stdio.h>
#include<conio.h>
/*declare structure*/
struct person
{
    char* name;
    int age;
};
/*declare function prototype*/
void showPersonInformation (struct person p1);
int main()
{
    struct person rakib;
    //clrscr();
    rakib.name = "RAKIBUL SHARIF";
    rakib.age = 27;
    showPersonInformation(rakib);
    getch();
    return 0;
}
void showPersonInformation(struct person p1)
{
    printf("\n Name = %s    Age = %d",p1.name,p1.age);
}
