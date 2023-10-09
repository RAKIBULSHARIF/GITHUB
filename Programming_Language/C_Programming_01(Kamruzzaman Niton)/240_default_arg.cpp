#include<iostream>
using namespace std;
void func(int x, float y = 3.1415)
{
    cout << "Value of X and Y are : " << x << "," << y <<endl;
}
int main()
{
    func(10);
    func(10, 7.22);
    return 0;
}
