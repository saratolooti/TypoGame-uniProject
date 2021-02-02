#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//use for all levels
int level(char fileName[10],FILE **fp)
{
    char **str;
    str = malloc(sizeof(int*) * 11000);
    *fp = fopen(fileName, "r");/*opening file*/
    //reading frome file
    int k, length, w;
    w = num_word;/*this use when the player has an unfinished level*/
    for(i = 0; feof(*fp) == 0; i++)
    {
        str[i] = malloc(sizeof(int*) * 50);
        fgets(str[i], 20,*fp);
        if(str[i] == '\n') i--;
    }
    fclose(*fp);
    //chosing random words
    srand(time(NULL));
    k = i - 1;
    for(i = 0; i < 25 - w; i++)
    {
        system("cls");
        j = rand() % k;
        strlwr(str[j]);
        length = strlen(str[j]);
        num_word++;
        if(check(str[j],length) == 0)//for when the player leaves the game in the middle of it
        {
            free(*str);
            return 0;
        }
    }
    free(*str);
    score_ += sum;
    num_word = 0;
    lev++;
    int_to_char();
    f_write();
    decrypt();
}
