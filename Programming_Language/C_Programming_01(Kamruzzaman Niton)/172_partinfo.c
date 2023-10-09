#include<stdio.h>
#include<conio.h>
int main (void)
{
    struct partsinfo
    {
        char p_name[24];
        char p_no[10];
        char cmpny[30];
        float price;
    };
    int n;
    struct partsinfo filter[5] =
    {
        {
            "Air filter ", "AF2809 ","CAT", 1800.00
        },
        {
            "Fuel Filter ","FF180A ","CAT", 950.00
        },
        {
            "Hyd Filter ","HF1008C ","CAT", 1290.00
        },
        {
            "Hyd Pipe ","MA123HH ","MA ", 3000.00
        },
        {
            "Oil Filter ","OFC912 ","FLE", 1800.00
        }
    };
    //clrscr();
    printf(" NAME    ID    VENDOR    PRINCE\n");
    printf("-------------------------------------------");
    for (n = 0; n < 5; n++)/*print value of all elements*/
        printf("\n%s %-2s %s %.2f",filter[n].p_name,filter[n].p_no,filter[n].cmpny,filter[n].price);
    getch();
    return 0;
}
