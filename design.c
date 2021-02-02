#include <stdio.h>

//for reading from files and display the images
void design(char fileName[50],FILE **fp)
{
    char **str;
    str = malloc(sizeof(int*) * 100);
    *fp = fopen(fileName, "r");
    printf("\n\n\n");
    if(*fp == NULL)
        printf("no file\n");
    else
    {
        for(i = 0; feof(*fp) == 0; i++)
        {
            str[i] = malloc(sizeof(int*) * 100);
            fgets(str[i], 100,*fp);
            printf("\t\t\t\t%s", str[i]);
        }
    }
    printf("\n\n");
    fclose(*fp);
    free(*str);
}
