#include<iostream>
using namespace std;
void SwapValue ( int &x, int &y ) //gets the address of x and y
{
    int temp;
    temp = x; //store value of x to temp
    x = y; //assign y to x
    y = temp; // assign value of x to y
}
int main()
{
    int p, q;
    p = 7;
    q = 5;
    SwapValue( p, q); //send the address of p and q to SwapValue()
    cout << " P  = " << p <<", Q = " << q << endl;
    return 0;
}
