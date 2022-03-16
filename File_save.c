#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp;
    char ch;
    fp = fopen("sample.dat", "w");
    if (fp == NULL)
    {
        printf("Error in opening the file.");
        exit(0);
    }
    printf("input some text :\t");

    while ((ch = getchar()) != EOF)
        fputc(ch, fp);
    fclose(fp);
    printf("File contains :\t");
    fp = fopen("sample.dat", "r");

    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
}
