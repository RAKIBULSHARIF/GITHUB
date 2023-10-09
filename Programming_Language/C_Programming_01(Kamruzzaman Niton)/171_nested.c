#include<stdio.h>
#include<conio.h>
int main(void)
{
    struct student
    {
        char* name;
        long int id;
        char* dept_name;
        struct term
        {
            int sem;
            struct gpa
            {
                float gpa;
            }gpa1;
        }term1;
        float cgpa;
    }rakib;
    rakib.name = "Rana";
    rakib.id = 942044;
    rakib.dept_name = "EEE";
    rakib.term1.sem = 6;
    rakib.term1.gpa1.gpa = 3.75;
    rakib.cgpa = 3.43;
    //clrscr();
    printf("\n Student name : %s",rakib.name);
    printf("\n id_no# : %ld",rakib.id);
    printf("\n Dept_name : %s",rakib.dept_name);
    printf("\n Semister : %d",rakib.term1.sem);
    printf("\n GPA : %.2f",rakib.term1.gpa1.gpa);
    printf("\n CGPA : %.2f",rakib.cgpa);
    getch();
    return 0;
}
