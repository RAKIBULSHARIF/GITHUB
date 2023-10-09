#include<stdio.h>
#include<conio.h>
//Infinite while loop
void main()
{
    int x = 1;
    while(x)
    {
        printf("Press any key to exit .....\n");
        //delay(100);
        if(kbhit())
           x = 0;//or, exit(0);//If any key is pressed then exit
    }
    return 0;
}
