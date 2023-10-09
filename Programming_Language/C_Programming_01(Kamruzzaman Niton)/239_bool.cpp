#include<iostream>
using namespace std;
int main(void)
{
    bool GetResult;
    int x, y, z;
    x = 5; y = 10; z = 15;
    GetResult = x > y;
    cout << "Result of GetResult = X > Y : "<< GetResult <<endl;
    GetResult = y < z;
    cout << "Result of GetResult = Y < Z : "<< GetResult <<endl;
    GetResult = x + z - y;
    cout << "Result of GetResult = X + Z - Y : " << GetResult <<endl;
    x = x + z - y;
    cout << "Result of X = X + Z - Y : " << x << endl;
    GetResult = true;
    cout << "Result of GetResult = true : " << GetResult <<endl;
    GetResult = false;
    cout << "Result of GetResult = false : " << GetResult <<endl;
    return 0;
}
