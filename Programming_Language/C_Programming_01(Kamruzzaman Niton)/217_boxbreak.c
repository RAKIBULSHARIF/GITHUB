/*This programme not work properly. Graphics Liberary not found*/
#include<graphics.h>
#include<process.h>
#include<stdlib.h>
#include<stdio.h>
#include<dos.h>
#include<dos.h>
#define FALSE 0
/*global variable*/
int CenterX, CenterY,SCREEN_WIDTH,SCREEN_HEIGHT;
int BoX[5] [20];
/*Function: PlayMusic*/
void PlayMusic(int MusicType)
{
    void NaturalFreq[7] = {130.81,146.83,164.81,174.61,196,220,246.94};
    int n, i;
    switch(MusicType)
    {
        case 1:
            sound(NaturalFreq[6]*6);
            delay(60);
            nosound();
            break;
        case 2:
            for(i = 0; i <15; i++)
            {
                n = random(7);
                sound(NaturalFreq[4]*4);
                delay(80);
            }
            nosound();
            break;
        case 3:
            while(!kbhit())
            {
                n = random(7);
                sound(NaturalFreq[n]*4);
                delay(80);
            }
            nosound();
            if( 0 == getch() )
            {
                getch();
            }
            break;
        case 4:
            for(i=4; i>=0;i--)
            {
                sound(NaturalFreq[i]*4);
                delay(10);
            }
            nosound();
            break;
    }
}
/*end of: PlayMusic*/
/*function: DeleteBox*/
void DeleteBox(int BoxNum, int LayerNum)
{
    selector(BLACK);
    rectangle(BoxNum * 32,
              LayerNum * 10,
              BoxNum * 32 + 31,
              LayerNum * 10 + 9);
    rectangle(BoxNum * 32 + 1,
              LayerNum * 10,
              BoxNum * 32 + 30,
              LayerNum * 10 + 7);
    rectangle(BoxNum * 32 + 2,
              LayerNum * 10,
              BoxNum * 32 + 29,
              LayerNum * 10 + 7);
    selector(WHITE);
}
/*end of deletebox*/
/*function: drawbox*/
void DrawBox(void)
{
    int i,j, LayerX = 0,LayerY = 0;
    for(i = 0;i < 5;i++)
    {
        for(j = 0;j < 20;j++)
        {
            setcolor(GREEN);
            rectangle(LayerX,LayerY,LayerX + 31,LayerY + 9);
            rectangle(LayerX + 2, LayerY - 2,LayerX + 29,LayerY + 7);
            floodfill( LayerX+1, LayerY+1, 2);
            setcolor(WHITE);
            LayerX += 32;   /*640%20 = 32*/
        }
        LayerX = 0;
        LayerY += 10;
    }
}
/*end of:drawbox*/
/*function: drawinterface*/
void DrawInterface(void)
{
    int i, gm, gd = DETECT;
    initgraph(&gd,&gm,"C:\\TC\\BGI");/*change path according to your installation*/
    /*Get maximum x and y screen cordinates*/
    SCREEN_WIDTH = getmaxx();/*SCREEN_WIDTH = 639*/
    SCREEN_HEIGHT = getmaxy();/*SCREEN_HEIGHT = 479*/
    CenterX = SCREEN_WIDTH/2; /*Center = 319*/
    CenterY = SCREEN_HEIGHT/2;/*CenterY = 239*/
    /*Draw basement*/
    line(0,
         SCREEN_HEIGHT-12,
         SCREEN_WIDTH,
         SCREEN_HEIGHT-12);
    setfillstyle(XHATCH_FILL,WHITE);
    floodfill(2,SCREEN_HEIGHT-2,WHITE);
    /*Set game region*/
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(0,0, SCREEN_WIDTH, SCREEN_HEIGHT-12);
    /*DRAW THE BRICKS*/
    DrawBox();
    /*Draw the bat*/
    setcolor(1);
    rectangle( CenterX - 25,
              SCREEN_HEIGHT - 19,
              CenterX + 25,
              SCREEN_HEIGHT - 12);
    floodfill(CenterX, SCREEN_HEIGHT-13, 1);
    /*Draw the ball*/
    circle(CenterX, SCREEN_HEIGHT-25,12);
    floodfill(CenterX, SCREEN_HEIGHT-22,1);
    setcolor(GREEN);
    /*Draw other balls*/
    for(i = 0;i < 3; i++)
    {
        circle(515+i*35,SCREEN_HEIGHT-5,9);
        floodfill(515+i*35,SCREEN_HEIGHT-5,2);
    }

}
/*End of: DrawInterface()*/
/*Function : main()*/
void main(void)
{
    /*declare some variable*/
    char* BatImage;
    char* BallImage;
    int BallX, //to store ball's x position
        BallY, //to store ball's y position
        BatX, //to store bat's x position
        BatY, //to store bat's y position
        Direction_X, //to store ball's x direction
        Direction_Y, //to store ball's y direction
        Prev_X, //to store ball's old x position
        Prev_Y; //to store ball's old y position
    int i,
        FLAG,
        FLAG2,
        BoxBreaked,
        TotalBall,
        ImageSize,
        GameLimit,
        CurrentLayer;
    int GameLayer[5] = {10,20,30,40,50};
    union REGS RegsIN, RegsOUT;
    /*assign initial value*/
    Direction_X = 1;
    Direction_Y = -1;
    FLAG = FALSE;
    FLAG2 = FALSE;
    TotalBall = 4;
    GameLimit = 50;
    CurrentLayer = 4;
    /*now draw the interface*/
    DrawInterface();
    /*reserve memory for bat image*/
    ImageSize=imagesize(CenterX -12,
                        SCREEN_HEIGHT - 18,
                        CenterX + 12,
                        SCREEN_HEIGHT - 8);
    BallImage = malloc(ImageSize);
    /*REserve memory for ball image*/
    ImageSize=imagesize( CenterX - 25,
                        SCREEN_HEIGHT - 7,
                        CenterX + 25,
                        SCREEN_HEIGHT - 1);
    BatImage = malloc(ImageSize);
    /*Check whether memory reservation succed*/
    if ( NULL == BallImage || NULL == BatImage)
    {
        puts("Insufficient memory");
        exits(1);
    }
    /*Store bat and ball into the reserved memory*/
    getimage ( CenterX - 12,
               SCREEN_HEIGHT - 30,
               CenterX + 12,
               SCREEN_HEIGHT - 20,
               BallImage);
    getimage ( CenterX - 25,
               SCREEN_HEIGHT - 19,
               CenterX + 25,
               SCREEN_HEIGHT - 13,
               BatImage);
    /*Store Current X, Y position of bat and ball*/
    BatX = CenterX-25;
    BatY = SCREEN_HEIGHT-19;/*-7-12*/
    BallX = CenterX-12;
    BallY = SCREEN_HEIGHT-30;/*-7-12-12+1*/
    while(1)
    {
        FLAG = FALSE;
        /*Current position of ball*/
        Prev_X = BallX;
        Prev_Y = BallY;
        /*Set new position of ball*/
        BallX += Direction_X;
        BallY += Direction_Y;
        if (BallY > 40)
        {
            GameLimit = 50;
            CurrentLayer = 4;
        }
        else
        {
            if(BallY > 30)
            {
                GameLimit = 40;
                CurrentLayer = 3;
            }
            else
            {
                if(BallY > 10)
                {
                    GameLimit = 20;
                    CurrentLayer = 1;
                }
                else
                {
                    GameLimit = 10;
                    CurrentLayer = 0;
                }
            }
        }
    }
    /*If ball is on the left wall, send it to other side*/
    if(BallX < 1)
    {
        PlayMusic(1);
        BallX = 1;
        Direction_X = - Direction_X;
    }
    /*If ball is on the right wall, send it to other side*/
    if(BallX > (SCREEN_WIDTH-25))
    {
        PlayMusic(1);
        BallX = SCREEN_WIDTH-25;
        Direction_X = - Direction_X;
    }
    /*If ball is on the upper wall, send it to below*/
    if(BallY < 1)
    {
        PlayMusic(1);
        BallY = 1;
        Direction_Y = -Direction_Y;
    }
    /*If ball is on the brick area*/
    if(BallY < GameLimit)
    {
        /*Ball didn't touch any brick*/
        if ( 1 == BoX[CurrentLayer][(BallX+10)/32] )
        {
            /*find whether ball touches any brick*/
            for(i-1;i<=6;i++)
            {
                /*if there is any brick on the left side*/
                if(0 == BoX[CurrentLayer][(BallX+i+10)/32])
                {
                    BallX += i;
                    FLAG = 1;
                    break;
                }
                /*if there is any brick on the left side*/
                if( 0 == BoX[CurrentLayer][(BallX-i+10)/32])
                {
                    BallX = BallX - i;
                    FLAG = 1;
                    break;
                }
            }
            /*if no bricks at the top, left or right side*/
            if(!FLAG)
            {
                /*if the ball moved above the current layer*/
                if(BallY < GameLayer[CurrentLayer - 1])
                {
                    /*if so, decrement the current layer*/
                    CurrentLayer--;
                    GameLimit = GameLayer[CurrentLayer];
                }
            /*Draw the ball at the old position*/
            putimage(Prev_X, Prev_Y, BallImage, OR_PUT);
            /*remove the image from old position*/
            putimage(Prev_X, Prev_Y, BallImage, XOR_PUT);
            /*draw the ball at the new position*/
            putimage(BallX,BallY,BallImage,XOR_PUT);
            continue;
            }
        }
        PlayMusic(4);
        /*remove the brick touched by the ball*/
        DeleteBox((BallX + 10)/32, CurrentLayer);
        /*if the touched brick is on the right wall*/
        if((BallX+10)/32 == 19)
        {
            /*Draw the right boundary again*/
            line(SCREEN_WIDTH, 0, SCREEN_WIDTH, 50);
        }
        /*if the touched brick is on the left wall*/
        if((BallX + 10)/32 ==0)
        {
            /*Draw the left boundary again*/
            line(0,0,0,50);
        }
        /*if the brick is on the topmost layer*/
        if(CurrentLayer == 0)
        {
            /*Draw the top line*/
            line(0,0, SCREEN_WIDTH, 0);
        }
        /*Set the value 1 for brick in the array*/
        BoX[CurrentLayer][(BallX+10)/32] = 1;
        /*Change the y axis value*/
        BallY = BallY+1;
        /*Move the ball to other direction*/
        Direction_Y = -Direction_Y;
    }
    /*if the ball is on the ground*/
    if(BallY > SCREEN_HEIGHT-26)
    {
        FLAG2 = FALSE;
        /*if bat couldn't touch the ball*/
        if(BallX < BatX - 20 || BallX > BatX + 50)
        {
            /*delete a ball and start again*/
            while(BallY < SCREEN_HEIGHT-23)
            {
                /*delete the image of the ball*/
                putimage(Prev_X, Prev_Y, BallImage, XOR_PUT);
                /*Draw the ball at he new position*/
                putimage(BallX, BallY, BallImage, XOR_PUT);
                /*wait for few moments*/
                delay(5);
                /*save the current position of the ball*/
                Prev_X = BallX;
                Prev_Y = BallY;
                /*upgrade the ball position and move it*/
                BallX += Direction_X;
                BallY += Direction_Y;
            }
            TotalBall--;
            PlayMusic(2);
            /*delete one available balls*/
            if(TotalBall > 0)
            {
                putimage ( 515 + (TotalBall - 1) * 35 - 12,
                           SCREEN_HEIGHT - 12,
                           BallImage, XOR_PUT);
            }
            /*if all balls are lost*/
            if ( 0 == TotalBall)
            {
                outtextxy(CenterX, CenterY,"Try Again");
                PlayMusic(3);
                closegraph();
                restorecrtmode();
                exit(0);
            }
        }
        /*if bat hits the ball*/
        PlayMusic(1);
        BallY = SCREEN_HEIGHT-31;
        Direction_Y = -Direction_Y;
    }
    /*Redraw the bat*/
    putimage(BatX, BatY,BatImage,OR_PUT);
    /*To animate the ball first draw it in the old position
    Then delete it from that position and Redraw it in the
    new position
    */
    putimage(Prev_X, Prev_Y, BallImage, OR_PUT);
    putimage(Prev_X, Prev_Y, BallImage, XOR_PUT);
    putimage(BallX, BallY, BallImage, XOR_PUT);
    /*if all bricks have been destroyed, show message,
    play music and exit*/
    if( BoxBreaked == 500 - ((4-TotalBall) * 20))
    {
        outtextxy( CenterX,
                  CenterY,
                  "Nice job: All Bricks have been destroyed.");
        PlayMusic(3);
        closegraph();
        restorecrtmode();
        exit(0);
    }
    /*for smooth animation*/
    delay(5);
    /*use LEFT and RIGHT arrow to control the bat*/
    if(kbhit())
    {
        /*to determine which hitted key issue an interrupt*/
        RegsIN.h.ah = 0;
        int86( 22, &RegsIN, &RegsOUT);
        /*first draw the bat at its old position*/
        putimage(BatX, BatY, BatImage, OR_PUT);
        /*Then delete it form the old position*/
        putimage(BatX, BatY, BatImage, XOR_PUT);
        /*Press ESC to exit*/
        if(1 == RegsOUT.h.ah);
        {
            exit(0);
        }
        /*Right arrow to move the paddle right*/
        if(RegsOUT.h.ah == 75)/*scancode 75 = RIGHT arrow */
        {
            BatX -= 20;
        }
        /*LEFT arrow to move the paddle left*/
        if(RegsOUT.h.ah == 77)/*scancode 75 = LEFT arrow*/
        {
            BatX += 20;
        }
        /*if the paddle is on the left boundary*/
        if(BatX < 0)
        {
            BatX = 0;
        }
        /*If the paddle is on the right boundary*/
        if(BatX > 589)
        {
            BatX = 589;
        }
        /*Draw the paddle at the proper position*/
        putimage(BatX, BatY, BatImage, XOR_PUT);
    }


}
/*End of main*/
/*Enjoy programming*/
