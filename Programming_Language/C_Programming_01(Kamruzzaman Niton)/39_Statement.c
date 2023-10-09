#include<stdio.h>
#include<conio.h>
void main()
{
    int p, q, r, s;
    float ratio;
    //clrscr();
    printf("\n Enter four integers( separated by space): ");
    scanf(" %d %d %d %d", &p,&q,&r,&s);
    if((r-s)== 0) //(r-s) == 0 is a conditional expression
    {
        printf("\n Ratio is infinity, because (r-s) is 0.");
        exit(0);
    }
    ratio = (float)(p+q) / (float)(r-s);
    printf("\n Ratio is %.2f", ratio);
    getch();
}
