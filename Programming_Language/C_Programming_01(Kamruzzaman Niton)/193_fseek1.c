/*This programme not work properly*/
#include<stdio.h>
#include<conio.h>
int main()
{
    FILE* fp;
    fp = fopen("c:\\temp\\fsee.ncg","w");
    fputs("rakib computing group",fp);
    fclose(fp);
    fp = fopen("c:\\temp\\fseek.ncg","r");
    fseek ( fp, 3L, 0);
    printf("%c\n",gets(fp));/*prints o*/
    fseek (fp, 8L, 0);
    printf("%c\n",gets(fp));/*prints m*/
    fseek (fp, 2L, 1);
    printf("%c\n",getc(fp));/*print t*/
    fseek (fp, -8L, 1);
    printf("%c\n",getc(fp));/*print n*/
    fseek (fp, -8L, 2);
    printf("%c\n",getc(fp));/*print n*/
    fclose(fp);
    getch();
    return 0;
}
