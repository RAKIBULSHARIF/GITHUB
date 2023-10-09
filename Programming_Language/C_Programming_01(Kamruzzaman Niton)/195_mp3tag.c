#include<stdio.h>
#include<conio.h>
int main()
{
    FILE*  fp;
    long int i;
    char* tag = (char*)malloc(4);/*to point tag*/
    char* title = (char*)malloc(31);/*to point title*/
    char* artist = (char*)malloc(31);/*to point album*/
    char* album = (char*)malloc(31);/*to point year*/
    char* year = (char*)malloc(5);/*to point year*/
    char* comments = (char*)malloc(31);/*to point comments*/
    //clrscr();
    /*open th desired mp3 file. assuming a mp3 file named Song01 exits in C drive*/
    fp = fopen("C:\\Song01.mp3","r");
    /*if no file opened successfully*/
    if(NULL == fp)
    {
        printf("\n File open error.");
        return 0;
    }
    /*send file pointer at desired location*/
    fseek(fp,-128L,2);
    fgets(tag,4,fp);
    /*check whether opened file is an ID3v1 standard mp3 file*/
    if ( 0 != strcmp(tag,"TAG"))
    {
        printf("\nNot an ID3v1 standard MP3.");
        fclose(fp);
        return 0;
    }
    /*now read the data of different fields*/
    fgets(title, 31, fp);/*reading 30 byte after TAG which is title*/
    fgets(artist, 31, fp);/*read 30 byte of artist field*/
    fgets(album, 31, fp);/*read 30 byte of album field*/
    fgets(year, 5, fp);/*read 4 byte of year field*/
    fgets(comments, 31, fp);/*read 30 byte of comments*/
    printf("\n TAG      :%s",tag);
    printf("\n TTITLE   :%s",title);
    printf("\n ARTIST   :%s",artist);
    printf("\n ALBUM    :%s",album);
    printf("\n YEAR     :%s",year);
    printf("\n COMMENTs :%s",comments);
    fclose(fp);
    getch();
    return 0;
}
