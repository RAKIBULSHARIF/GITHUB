#include<stdio.h>
#include<conio.h>
int ratna = 15, nipu = 15, romi = 15;
void func_1(void)
{
    printf("\n In func_1(): \n\t");
    printf("Ratna = %d\n\t",ratna);//accessing global ratna
    printf("Nipu = %d\n\t", nipu);//accessing global nipu
    printf("Romi = %d\n",romi);//accessing global romi
}
int main( void )
{
    //clrscr();
    printf("\n In main(): \n\t");
    printf("Ratna = %d\n\t",ratna);//accessing global ratna
    printf("Nipu = %d\n\t",nipu);//accessing global nipu
    printf("Romi = %d\n",romi);//accessing global romi
    func_1();
    getch();
    return 0;
}
