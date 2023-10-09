#include <stdio.h>
#include <conio.h>
int main()
{
    char ch = 'N';
    int x = 1,y = 2,z = 3;
    printf("%d\n",x||y &&z);
    printf("%d\n",x<y||y>z);
    printf("%d\n",('A'<=ch)||(ch<='Z'));
    printf("%d\n",(x = 0)||(y = 0));
    return 0;
}
