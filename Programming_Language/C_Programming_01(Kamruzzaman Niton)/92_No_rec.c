#include<stdio.h>
#include<time.h>
int string_length(const char *str)
{
    int length = 0;
    while ( *str++ )
        length++;
    return( length );
}
int main()
{
    long int counter;
    time_t start_time, end_time;
    //clrscr();
    time(&start_time); //time start
    for (counter = 0; counter < 1000000L; counter++)
        string_length("C programming Book Practice\n");
    time(&end_time);
    printf("Processing time without recursion is %d sec. \n",end_time - start_time);
    getch();
    return 0;
}
