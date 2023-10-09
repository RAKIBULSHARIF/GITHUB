#include<iostream>
using namespace std;
int AddXY ( int x, int y)
{
    return x+y;
}
float AddXY ( float x, float y)
{
    return x+y;
}
double AddXY ( double x, double y)
{
    return x+y;
}
int main( void )
{
    cout << "Integer X+Y = "<< AddXY (5,5) << endl;
    cout << "Float X+Y = "<< AddXY ( 5.754,5.223 ) << endl;
    cout << "Double X+Y = "<< AddXY ( 90.393498, 5.93987) << endl;
    return 0;
}

