#include<stdio.h>
#include<conio.h>
int main()
{
    char* getline;
    FILE* fp;
    //clrscr();
    fp = fopen("c:\\test.ncg","w");/*create thest.ncg in c*/
    fputs("home computing group\n",fp);/*write string in test.ncg*/
    fclose(fp);/*close test.ncg*/
    fp = fopen("c:\\test.ncg","r");/*again open test.ncg for read*/
    fgets(getline,19,fp);/*read 18 character*/
    printf("\n %s",getline);/*print pointed data of getline*/
    getch();
    return 0;
}
