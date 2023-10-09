#include<stdio.h>
void SwapValue (int *x, int *y)
{
    int temp; //declare temp variable
    temp = *x; //store value of x to temp
    *x = *y; //change value of x with y
    *y = temp; //change value of y with temp that holds x's value
}
int main()
{
    int p, q; //declare two variable
    p = 5; //assign 5 to p
    q = 7; //assign 7 to q
    SwapValue(&p, &q); //this will exchange the value of p and q
    printf("P = %d,    Q = %d", p, q);//now p holds 7 and holds 5
    return 0;
}
