//Example of Conditional Compilation Directives
#include<stdio.h>
#include<conio.h>
#define OOP "Object oriented Progarmming"
void main()
{
    #ifndef OOP
        printf("%s",OOP);
    #else
        printf("\nNot Object Oriented Programming");
    #endif // OOP
    return 0;

}
