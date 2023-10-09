//Example of Call by value method
#include<stdio.h>
#include<conio.h>
void Result(int, float);
//Function prototype
int main()
{
    int Roll = 101; float Marks = 68;
    printf("\nInside main() Roll : %d, Marks : %.2f", Roll, Marks);
    Result(Roll, Marks);
    printf("\nAfter Calling Result().....");
    printf("\nInside main() Roll : %d, Marks : %.2f", Roll, Marks);
    return 0;
}
void Result(int Roll, float Marks)
{
    Roll = 201; Marks = 74;
    printf("\nInside Result() Roll : %d, Marks : %.2f", Roll, Marks);
}
