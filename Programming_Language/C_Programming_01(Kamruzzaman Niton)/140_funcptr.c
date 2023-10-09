#include<stdio.h>
#include<conio.h>
void func1 (void)/*no return data and no arguments*/
{
    printf("\n This is func1()");
}
int func2 (void)/*returns integer and no arguments*/
{
    printf("\n This is func2()");
    return 20;
}
int func3(int x, int y)/*returns int and takes two int args*/
{
    printf("\n This is func3()");
    return(x+y);
}
int main()
{
    void(*pFn1)(void);
    int (*pFn2)(void);
    int (*pFn3)(int,int);
    int x;
    pFn1 = func1;/*pFn1 is pointing func1()*/
    pFn2 = func2;/*pFn2 is pointing func2()*/
    pFn3 = func3;/*pFn3 is pointing func()*/
    //clrscr();
    (*pFn1)();/*calling func1()*/
    (*pFn2)();/*calling func1()*/
    x = (*pFn3)(100,100);/*calling func1()*/
    printf("\n\n x = %d",x);
    getch();
    return 0;
}

