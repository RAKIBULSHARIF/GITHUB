/*This programme not working properly*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
char *find_replace(char *string, char *replace, char *with)
{
    char *main_string, *temp_string;
    int i, j, k, pos, replace_length;
    main_string = string;
    pos = -1;
    replace_length = strlen(replace);
    for(i = 0; string[i] && (pos == -1); ++i)
    {
        for(j = i, k = 0;string[j] == replace[k]; j++, k++)
        {
            if(!replace[k+1])
                pos = i;
        }
    }
    if( pos != -1)
    {
        for(j = 0; j < pos; j++)
            temp_string[j] = string[j];
        for(i = 0; with[i]; i++, j++)
            temp_string[j] = with[i];
        for(k = pos + replace_length; string[k]; k++, j++)
            temp_string[j] = string[k];
        temp_string[j] = NULL;
        for(i = 0; string[i] = temp_string[i]; i++)
            ;
    }
    return(main_string);

}
int main()
{
    char *string, *replace, *with, *final;
    //clrscr();
    printf("\n Enter a string: ");
    gets(string);
    printf("\n Replace: ");
    gets(replace);
    printf("\n With: ");
    gets(with);
    final = find_replace(string, replace, with);
    printf("\n By replacing %s with %s, the main strin becomes: \n",replace, with);
    printf("%s",final);
    getch();
    return 0;
}
