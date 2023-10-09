//Error in assigning value to array variable
#include<stdio.h>
#include<conio.h>
int main()
{
    char *Name;
    char Dept[20];
    Name = "Masud Karim";
    Dept = "Computer Science";
    //Lvalue required Error makes here
    //Correct form will be, Dept[20] =
    //"Computer Science";
    printf("\n");
    printf("Name : %s",Name);
    printf("Dept : %s",Dept);
    return 0;
}
