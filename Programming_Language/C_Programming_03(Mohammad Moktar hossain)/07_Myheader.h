//Creating a new header file
#ifndef __STDIO_H
#include<stdio.h>
#endif // __STDIO_H
#ifndef __CONIO_H
#include<conio.h>
#endif // __CONIO_H
struct BYTEREGS
//Structure Prototype
{
    unsigned char al, ah, bl, bh;
    unsigned char cl, ch, dl, dh;
};
struct WORDREGS
//Structure prototype
{
    unsigned int ax, bx, cx, dx;
    unsigned int si, di, cflag, flags;
};
union REGS
//Structure prototype
{
    struct BYTEREGS h;
    struct WORDREGS x;
};
void newline();
//Function Prototype
/*End of File*/
