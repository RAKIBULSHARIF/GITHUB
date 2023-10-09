#include<dos.h>
#include<graphics.h>
#define TRUE 1
#define FALSE 0
/*array that represents SCREEN & CURSOR MASK for new cursor*/
unsigned int crossHairShape[] = {/*SCREEN MASK*/
                                    0xFFFF,     /*1111111111111111*/
                                    0xF81F,     /*1111100000011111*/
                                    0xFC3F,     /*1111110000111111*/
                                    0xFC3F,     /*1111110000111111*/
                                    0xFC3F,     /*1111110000111111*/
                                    0xB81D,     /*1011100000011101*/
                                    0x8001,     /*1000000000000001*/
                                    0x8001,     /*1000000000000001*/
                                    0x8001,     /*1000000000000001*/
                                    0x8001,     /*1000000000000001*/
                                    0xB81D,     /*1011100000011101*/
                                    0xFC3F,     /*1111110000111111*/
                                    0xFC3F,     /*1111110000111111*/
                                    0xFC3F,     /*1111110000111111*/
                                    0xF81F,     /*1111100000011111*/
                                    0xFFFF,     /*1111111111111111*/
                                /*CURSOR MASK*/
                                    0x0000,     /*0000000000000000*/
                                    0x0000,     /*0000000000000000*/
                                    0x0180,     /*0000000110000000*/
                                    0x0180,     /*0000000110000000*/
                                    0x0180,     /*0000000110000000*/
                                    0x0180,     /*0000000110000000*/
                                    0x03C0,     /*0000001111000000*/
                                    0x3E7C,     /*0011111001111100*/
                                    0x3E7C,     /*0011111001111100*/
                                    0x03C0,     /*0000001111000000*/
                                    0x0180,     /*0000000110000000*/
                                    0x0180,     /*0000000110000000*/
                                    0x0180,     /*0000000110000000*/
                                    0x0180,     /*0000000110000000*/
                                    0x0000,     /*0000000000000000*/
                                    0x0000,     /*00000000000000000*/
                                };
/*initialize graphics mode*/
int initGraphicsMode()
{
    /*request auto detection*/
    int gdriver = DETECT, gmode, errorcode;
    /*initialize graphics mode*/
    initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
    /*read result of initialization*/
    errorcode = graphresult();
    if (errorcode != grOk) /*an error occurred*/
    {
        printf("Graphics error: %s\n",grapherroemsg(errorcode));
        printf("Press any key to halt: ");
        getch();
        exit(1);/*return with error code*/
    }
    return TRUE;
}
/*check the availability of mouse*/
int initMouse()
{
    union REGS in, out;
    in.x.ax = 0;
    int86(0x33, &in, &out);
    if(out.x.ax == 0)
        return FALSE;
    else
        return TRUE;
}
/*function to change cursor*/
void changeCursor(unsigned int* newCursor)
{
    union REGS in, out;
    struct SREGS seg;
    in.x.ax = 9;/*service 9, change cursor shape*/
    in.x.bx = 7;/*HOT-SPOT position from left*/
    in.x.cx = 7;/*HOT-SPOT position from top*/
    in.x.dx = newCursor;/*pointer to new shape*/
    segread(&seg);/*initialize with segment address*/
    seg.es = seg.ds;/*segment address of pointer*/
    int86x(0x33, &in, &out, &seg);
}
/*displays mouse pointer*/
void showMouse()
{
    union REGS in, out;
    in.x.ax = 1;
    int86(0x33, &in, &out);
}
/*get the mouse related information*/
void mouseInfo(int* buttonStatus, int* xPos, int* yPos)
{
    union REGS in, out;
    in.x.ax = 3;
    int86(0x33,&in,&out);
    *xPos = out.x.cx;
    *yPos = out.x.dx;
    *buttonStatus = out.x.bx;
}
/*main function*/
int main(void)
{
    int bMode = FALSE;
    int xPos = 0;
    int yPos = 0;
    int buttonStatus = 0;
    /*initialize graphics mode
    NOTE: We can show the mouse either in
    graphics mode or in text mode.
    In graphics mode cursor will appear as ARROW
    In text mode cursor will appear as BAR
    YOU CAN CHECK BOTH mode by remout
    the following statement*/
    bMode = initGraphicsMode();
    if(TRUE != initMouse() )
    {
        if(TRUE == bMode)
        {
            closegraph();
            restorecrtmode();
        }
        printf("|nMouse/Mouse Driver not found!");
        exit(1);
    }
    /*since we've successfully initialized first change our mouse shape*/
    changeCursor(crossHairShape);
    /*now show the mouse*/
    showMouse();
    /*show the mouse related information*/
    gotoxy(3,2);
    printf("Mouse Interfacing Example");
    gotoxy(5,4);
    printf("X Pos :");
    gotoxy(5,5);
    printf("Y Pos :");
    gotoxy(5,7);
    printf("LEFT Button :");
    gotoxy(5,8);
    printf("RIGHT Button :");
    gotoxy(3,10);
    printf("PRESS any key to exit......");
    /*until any key is hit, works with the mouse*/
    while(0 == kbhit())
    {
        /*get the mouse information*/
        mouseInfo(&buttonStatus,&xPos,&yPos);
        /*show x and y position*/
        gotoxy(20,4);
        printf("%3d",xPos);
        gotoxy(20,5);
        printf("%3d",yPos);
        /*LEFT button*/
        gotoxy(20,7);
        if(1 == (buttonStatus & 1))
            printf("DOWN ");
        else
            printf("UP ");
        /*RIGHT button*/
        if(2 == (buttonStatus & 2))
            printf("DOWN ");
        else
            printf("UP ");
    }
}
