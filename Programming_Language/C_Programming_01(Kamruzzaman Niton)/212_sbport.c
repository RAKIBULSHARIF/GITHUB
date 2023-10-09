/*This Programme not work properly*/
#include<stdio.h>
#include<dos.h>
#define TIME1 10            /*reset count*/
#define TIME2 50            /*data*/
unsigned SBPORT = 0x210;    /*start at port 210H*/
char ISFOUND = 0;           /*assumed not found*/
unsigned COUNT1, COUNT2;    /*for resetting and reading*/
//unsigned char inportb(int portid);
//void outportb(int portid, unsigned char value);
void main(void)
{
    COUNT1 = TIME1;         /*start counting*/
    while((SBPORT <= 0x260) && ! ISFOUND)
    {
        outportb(SBPORT+0x6,1); /*reset sound blaster*/
        outportb(SBPORT+0x6,0);
        COUNT2 = TIME2;         /*start setting data*/
        while ((COUNT2 > 0) && (inportb(SBPORT + 0xE) < 128))
            {
                --COUNT2;
            }
        if((COUNT2==0) ||(inportb(SBPORT+0xA) != 0xAA))
        {
            --COUNT1;           /*21Ah don't vave AAH*/
            if(COUNT1 == 0)
            {
                COUNT1 = TIME1;
                SBPORT = SBPORT+0x10;
            }
        }
        else
        {
            ISFOUND = 1;
        }
    }
    if(ISFOUND)
    {
        printf("Sound blaster port found at %x\n",SBPORT);
    }
    else
    {
        printf("No SB Port found.\n");
    }
    getch();
}
