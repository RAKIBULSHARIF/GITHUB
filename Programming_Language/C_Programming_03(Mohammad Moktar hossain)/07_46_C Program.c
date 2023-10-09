//Example of #pragma directive
#include<stdio.h>
#include<conio.h>
void StartFun();
//StartFun() prototype
void ExitFun();
//StartFun() prototype
#pragma startup StartFun
//startup pragma
#pragma exit ExitFun
//exit pragma
void main()
{
    printf("\nExecuting main() Function");
}
void StartFun()
{
    printf("\nExecuting StartFun() Function");
}
void ExitFun()
{
    printf("\nExecuting ExitFun() function");
}
