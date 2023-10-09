#include<stdio.h>
#include<conio.h>
//Example of if control
void main()
{
    int Age;
    printf("Please enter your age : ");
    scanf("%d",&Age);
    if(Age <= 0)
        printf("\nYou have not borned yet!");
    if(Age > 0 && Age <= 12)
        printf("\nYou are a child.");
    if(Age > 12 && Age <= 19)
        printf("\nYou are a teenager.");
    if(Age > 19 && Age <= 40)
        printf("\nYou are young.");
    if(Age > 40)
        printf("\nWish your long life.");
    return 0;
}
