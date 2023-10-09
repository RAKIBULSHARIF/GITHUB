//Using Formal & Actual Arguments
#include<stdio.h>
#include<conio.h>
void F1(char *, int, float);
int main()
{
    F1("Masud",118, 75.5);
    //"Masud", 118, 75.5 are actual arguments
    return 0;
}
void F1(char *Name, int Roll, float Marks)
//Name, Roll and Marks are formal arguments
{
    printf("\nName : %s",Name);
    printf("\nRoll : %d",Roll);
    printf("\nMarks : %.2f", Marks);
}
