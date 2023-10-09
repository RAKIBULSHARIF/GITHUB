/*This programme not work properly*/
#include<stdio.h>
#include<conio.h>
int main()
{
    /*variable for writing to file*/
    char* name[] = {"Tuhin","Roquib","Nahid","Niton","Rana"};
    char* id[] = {"941026","942022","941015","942044","942018"};
    float cgpa[] = {3.85,3.20,3.01,2.95,2.78};
    /*variable for reading from file*/
    char* getname;
    char* getid;
    float getcgpa;
    int i;
    FILE* fp;
    //clrscr();
    fp = fopen("c:\\studinfo.ncg","w");/*create new file*/
    for (i = 0; i < 5; i++)
    {
        fprintf(fp,"%-10s %-10s %1.2f \n", name[i],id[i],cgpa[i]);
    }
    fclose(fp);
    /*read from file and print to screen*/
    fp = fopen("c:\\studinfo.ncg","r");
    while(fscanf(fp, "%s %s %f",getname,getid,&getcgpa) != EOF)
    {
        printf("%-10s %-10s %1.2f\n",getname,getid,getcgpa);
    }
    getch();
    return 0;
}
