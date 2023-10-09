#include<stdio.h>
#include<conio.h>
struct person
{
    char* name;
    int age;
};
int main()
{
    /*declare rakib and niton*/
    struct person rakib, niton;
    //clrscr();
    /*iniitialize rakib*/
    strcpy(rakib.name,"Rakibul sharif");
    rakib.age = 27;
    /*assign rakib to niton*/
    niton = rakib;
    /*now see the value of rakib and niton*/
    printf("\n rakib: NAME = %s    AGE = %d",rakib.name, rakib.age);
    printf("\n niton: NAME = %s    AGE = %d",niton.name, niton.age);
    /*change the value of niton*/
    strcpy(niton.name,"NITON AHMED");
    niton.age = 26;
    /*now again see the value of rakib and niton*/
    printf("\n\n rakib: NAME = %s    AGE = %d", rakib.name, rakib.age);
    printf("\n niton: NAME = %s    AGE = %d", niton.name, niton.age);
    getch();
    return 0;
}
