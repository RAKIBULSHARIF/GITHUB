#include<stdio.h>
int main()
{
    FILE *fp;
    char filename[] = "203_02_my_file.txt";
    fp = fopen(filename, "w");
    fprintf(fp, "This is a file created by my program!");
    fprintf(fp, "I am so happy.\n");
    fclose(fp);
    fprintf(fp, " Second line.\n");
    return 0;
}
