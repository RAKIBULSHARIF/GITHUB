//Example of using statci variable
#include<stdio.h>
#include<conio.h>
int F();
//Fucntion prototype
int main()
{
    int i, sum = 0;
    for(i = 0; i < 5; i++)
    {
        F();
    }
    return 0;
}
int F()
{
    int Autox = 1;
    //Automatic declartion
    static int Staticx = 1;
    //Static declaraiton
    printf("\nAutomatic x = %d\t Static x = %d",Autox, Staticx);
    ++Autox;
    ++Staticx;
    return 0;
}
