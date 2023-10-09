/*This programme not work properly*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{
    struct student
    {
        char* name;
        char* dept_name;
        int* id;
        float* cgpa;
    };
    struct student rakib, *str_ptr = &rakib;
    int x = 44;
    float y = 3.24;
    //clrscr();
    strcpy(rakib.name, "Rakibul sharif");
    rakib.id = &x;
    strcpy(rakib.dept_name, "EEE");
    rakib.cgpa = &y;
    printf("\n %s %d %s %.2f\n",rakib.name,*rakib.id,rakib.dept_name,*rakib.cgpa);
    printf("\n %s %d %s %.2f\n",str_ptr->name,*str_ptr->id,str_ptr->dept_name,*str_ptr -> cgpa);
    getch();
    return 0;
}
