/*Need proper file path for execute this program*/
/*This program file is prob02.in and prob02.out*/
#include<stdio.h>
#include<assert.h>
#include<ctype.h>
int main()
{
    FILE *input, *output;
    int i = 0,
        sum1 = 0,
        sum2 = 0,
        result = 0;
    char *p, str[100];
    input = fopen("prob02.in","r");
    assert(input!=NULL);
    output = fopen("prob02.out","w");
    /*parse the input file until EOF found*/
    while(EOF != fscanf(input,"%s", str))
    {
        p = str;
        i = sum1 = sum2 = result = 0;
        while (*p && !result)
        {
            if (isdigit(*p))
            {
                sum1 += *p - '0';
                sum2 += sum1;
                i++;
            }
            else if (*p == 'X')
            {
                sum1 += 10;
                sum2 += sum1;
                i++;
            }
            else if (*p != '-')
            {
                result = 1;
            }
            p++;
        }
            if((i != 10) || (sum2 % 11))
                result = 1;
            fprintf(output, "%s is %scorrect.\n", str, result ? "in" : "");
    }
    fclose(input);
    fclose(output);
    return 0;
}
