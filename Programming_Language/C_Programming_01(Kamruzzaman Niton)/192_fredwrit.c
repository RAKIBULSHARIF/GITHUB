/*This programme not work properly*/
#include<stdio.h>
#include<conio.h>
struct phno
{
    char name[10];
    char addr[25];
    char ph[15];
};
int main()
{
    struct phno notin;
    struct phno rakib[4] = {"rakib","1,mirpur,shah ali bagh","000-922100",
                            "rana","2,mohammadpur,shekher tek","000-233411",
                            "noman","3,chittagong road naranyangonj","909-233455"
                            "jhoney","4,kathalbagan dhanmondi","944-455049"};
    FILE* fp;
    int i;
    //clrscr();
    /*write to file*/
    fp = fopen("c:\\phondir.dat","w");
    /*buffer_ptr points to rakib's i-th elm*/
    /*buffer_size equals to phno size*/
    /*# of element equals to 1*/
    /*fp points to phondir.dat*/
    for(i = 0; i < 4; i++)
    {
        fwrite(&rakib[1],sizeof(rakib[i]),1,fp);
    }
    fclose(fp);
    /*read from file*/
    fp = fopen("c:\\phondir.dat","r");
    for(i = 0; i < 4; i++)
    {
        fread(&notin,sizeof(notin),1,fp);
        printf("%-10s %-25s %-10s\n",notin.name,notin.addr,notin.ph);
    }
    fclose(fp);getch();
}
