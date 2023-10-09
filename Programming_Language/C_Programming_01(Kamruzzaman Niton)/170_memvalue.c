/*This programme not work properly*/
#include<stdio.h>
#include<conio.h>
struct student
{
    char*   name;
    long int    id;
    char*   dept_name;
    float   cgpa;
} Rakib = {"Rakib", 1902017027, "EEE", 3.43};
int main(void)
{
    //clrscr();
    printf("\n Student name : %s", student.name);
    printf("\n id_no# :   %ld", student.id);
    printf("\n Dept.name :  %s", student.dept_name);
    printf("\n CGPA : %.2f", student.cgpa);
    getch();
    return 0;
}
