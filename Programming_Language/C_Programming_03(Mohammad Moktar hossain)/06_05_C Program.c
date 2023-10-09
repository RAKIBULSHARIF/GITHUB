#include<stdio.h>
#include<conio.h>
//Example of else if control
void main()
{
    int Age;
    printf("Please enter your age: ");
    scanf("%d",&Age);
    if(Age <= 0)
        printf("\nYour have not borned yet!");
    else if(Age > 12 && Age <= 19)
        printf("\nYou are a teen ager.");
    else if(Age > 19 && Age <= 40)
        printf("\nYou are young.");
    else
        printf("\nWish your long life");
    return 0;
}
