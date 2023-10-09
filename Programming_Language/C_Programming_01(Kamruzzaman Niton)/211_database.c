#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    char name[25];/*member for student name*/
    char id_no[10];/*member for student id*/
    char major[10];/*member for student department*/
    struct node* next;/*pointer to next element*/
};
typedef struct node link; /*get relief from typing long thing*/
link* head;
void get_info(void);
int main()
{
    //clrscr();
    get_info();/*call getinfo*/
    getch();
    return 0;
}
void get_info(void)
{
    link *tail, *node;
    char ch;
    tail = head = NULL;
    printf("\n Do You want to enter data?[Y/N]: ");
    ch = getch();
    while (ch != 'n')/*create list iteratively*/
    {
        //clrscr();
        node = (link *) malloc(sizeof(link));
        printf("\nStudent Name: ");
        gets(node -> name);/*get data for name member*/
        fflush(stdin);
        printf("\nStudent id# : ");
        gets(node -> id_no); /*scan data for id_no*/
        fflush(stdin);
        printf("\nStudent Major: ");
        gets(node -> major);/*get data for major member*/
        node->next = NULL;/*set NULL at the end*/
        if ( head == NULL)
        {
            head = node;
        }
        else
        {
            tail -> next = node;
        }
        tail = node;
        printf("\n\n\n\n Do you want to enter again[Y/N]: ");
        ch = getch();
    }
    //clrscr();
    printf("\n\t\tName\t\t\tid#\t\t\tMajor");
    printf("\n\t\t~~~~\t\t\t~~~\t\t\t\t~~~~~");
    while (head != NULL)/*print he entered data*/
    {
        printf("\n\t\t %s\t\t\t %s\t\t\t %s",head->name,head->id_no,head->major);
        head = head->next;
    }
}
