#include <stdio.h>
#include <conio.h>
int main()
{
    char ch = 'N';
    int i = 10, j = -10;
    double x = 0.1, y = 2.75;
    printf("%d\n",!ch);
    printf("%d\n",!i);
    printf("%d\n",!j);
    printf("%d\n",!(-i));
    printf("%d\n",!(-j));
    printf("%d\n",!(i<j));
    printf("%d\n",!0-j);
    printf("%d\n",!!(x+y));
    printf("%d\n",!(.1-(x*!!j)));
    return 0;
}
