#include<stdio.h>
#include<conio.h>
void main()
{
    long int bin_num, bin_tmp,dec_digit,dec_num = 0,number_base = 0;
    //clrscr();
    printf("\n Enter the binary number: ");
    scanf("%ld", &bin_num);
    bin_tmp = bin_num;
    while(bin_num)
    {
        dec_digit = bin_num % 10;
        dec_num += dec_digit << number_base; //shift one bit left
        number_base += 1;
        bin_num /= 10;
    }
    printf("\n Decimal equivalent is %ld.",dec_num);
    getch();
}
