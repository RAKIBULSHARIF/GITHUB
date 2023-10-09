#include <stdio.h>
#include <conio.h>
int main()
{
    int month, days; //Declare two variables
    printf("Enter Number of days : ");//Prompt to the user
    scanf("%d", &days); //get value for days variable
    month = days / 30; // Divide days by 30
    days = days % 30; //Get remainder
    printf("\nNumber of Months = %d and days = %d.", month, days);
    return 0;
}
