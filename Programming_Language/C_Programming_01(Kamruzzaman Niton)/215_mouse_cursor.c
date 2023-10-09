/*This programme not work properly*/
#include<dos.h>
#include<graphics.h>
#define TRUE 1
#define FALSE 0
/*initialize graphics mode*/
int initGraphicsMode()
{
    /*request auto detection*/
    int gdriver = DETECT, gmode, errorcode;
    /*initialize graphics mode*/
    initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
    /*read result of initialization*/
    errorcode = graphresult();
    if (errorcode != grOk)/*an error occurred*/
    {
        printf("Graphics error: %s\n",grapherrormsg(errorcode));
        printf("Press any key to halt:");
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
/*displays mouse pointer*/
void showMouse()
{
    union REGS in, out;
    in.x.ax = 1;
    int86(0x33, &in, &out);
}
/*get the mouse related information*/
void mouseInfo(int* buttonStatus, int* xPos, yPos)
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
    int xPos, yPos, buttonStatus;
    /*initialize graphics mode
    NOTE: We can show the mouse either in
    graphics mode or in text mode.
    In graphics mode cursor will appear as ARROW
    In text mode cursor will appear as BAR
    YOU CAN CHECK BOTH mode by remout
    the following statement*/
    bMode = initGraphicsMode();
    if (TRUE != initMouse() )
    {
        if (TRUE == bMode)
        {
            closegraph();
            restorecrtmode();
        }
        printf("\nMouse/Mouse Driver not found!");
        exit(1);
    }
    /*now show the mouse*/
    showMous();
    /*show the mouse related information*/
    gotoxy(3,2);
    printf("Mouse Interfacing Example");
    gotoxy(5,4);
    printf("X Pos    :");
    gotoxy(5,5);
    printf("Y Pos    :");
    gotoxy(5,7);
    printf("Left Button  :");
    gotoxy(5,8);
    printf("Right Button  :");
    gotoxy(3, 10);
    printf("Press any key to exit.....");
    /*until any key is hit, works with the mouse*/
    while(0 == kbhit())
    {
        /*get the mouse information*/
        mouseInfo(&buttonStatus, &xPos,&yPos);
        /*show x and y position*/
        gotoxy(20,4);
        printf("%3d",xPos);/*x position*/
        gotoxy(20,5);
        printf("%3d",yPos);/*y position*/
        /*LEFT BUTTON*/
        gotoxy(20,7);
        if(1 == (buttonsstatus & 1))
            printf("DOWN");
        else
            printf("UP");
        /*RIGHT button*/
        if(2 == (buttonStatus & 2))
            printf("DOWN");
        else
            printf("UP");
    }
}
