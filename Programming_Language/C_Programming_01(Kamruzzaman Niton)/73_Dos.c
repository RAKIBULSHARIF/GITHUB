/*This programme may not supported on windows 10 */
#include<dos.h>
void main(void)
{
    union REGS r;
    r.h.ah = 6;
    r.h.al = 0;
    r.h.ch = 0;
    r.h.cl = 0;
    r.h.dh = 24;
    r.h.dl = 79;
    r.h.bh = 7;

    int86 ( 0x10, &r, &r );
}
