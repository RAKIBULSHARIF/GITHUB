#include<stdio.h>
#include<conio.h>
void encrypt_password( char *);/*function prototype*/
int main()
{
    char _pass[8];
    //clrscr();
    printf("\n Enter Your Password: ");
    gets(_pass);
    encrypt_password(_pass);/*passing parametre to encrypt_password*/
    printf("\n The encrypt version of Your Password is: ");
    puts(_pass);
    getch();
    return 0;
}
void encrypt_password ( char *_pass)
{
    while(*_pass != '\0')
    {
        *_pass++ ^=52;/*mask value is 52*/
    }
}

