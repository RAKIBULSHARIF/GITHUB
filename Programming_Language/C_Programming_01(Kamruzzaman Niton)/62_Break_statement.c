#include<stdio.h>
#include<conio.h>
#include<math.h>
 void main(void)
 {
     float n;
     //clrscr();
     while(1)
     {
         scanf("%f", &n);
         if( n <= 0.0)
            break;
         printf("%f\n\n",sqrt(n));
     }
     getch();
 }
