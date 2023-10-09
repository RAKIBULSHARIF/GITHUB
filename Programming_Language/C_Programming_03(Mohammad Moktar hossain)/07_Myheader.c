//Creating a new source file that uses created header file
#include "07_Myheader.h"
void newline()
//Definition of newline() function
{
    union REGS inregs, outregs;
    inregs.h.ah = 0x2;
    //Interrupt service no.
    inregs.h.dl = 0xA;
    //Moves dl reg. to line feed value
    int86(0x21, &inregs, &outregs);
    //Execute interruption(Creates a new line)
    printf("%c", outregs.h.dl);
    //Creates a new line
}
//End of defintion
