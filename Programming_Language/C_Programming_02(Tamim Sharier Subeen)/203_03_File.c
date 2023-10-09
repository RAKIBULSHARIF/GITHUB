#include<stdio.h>
int main()
{
    FILE *fp;
    char filename[] = "203_03_my_file.txt";
    fp = fopen(filename, "w");
    fprintf(fp, "This is a file created by my program! ");
    fprintf(fp, " I am so Happy.\n");
    fclose(fp);
    fp = fopen(filename, "a");
    fprintf(fp, "Second Line\n");
    fclose(fp);
    return 0;
}
