#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    FILE* fp;
    long int offset;
    //clrscr();
    fp = fopen("test.txt","w+");
    printf("\n Type a line of text: ");
    while ((ch = getchar()) != '\n')
    {
        putc(ch,fp);
        putchar(ch);
    }
    printf("\n Total characters: %ld",ftell(fp));
    rewind(fp);
    printf("\n Set-Get position of cahracters using fseek()-ftell()....\n");
    offset = 0L;
    while(feof(fp) == 0)
    {
        fseek(fp, offset, 0);
        offset += 1L;
        ch = getc(fp);
        switch(ch)
        {
        case ' ':
            printf("Character SPACE is at %ld\n",ftell(fp));
            break;
        case EOF:
            printf("Last Character EOF. ");
            break;
        default:
            printf("Character %c is at %ld\n",ch, ftell(fp));
            break;
        }
    }
    putchar('\n');
    fclose(fp);
    getch();
    return 0;
}
