#include <stdio.h>

//calculating score
void score(int wrong_word,int length,int time)
{
    sum += ((((length - 1) * 2) - wrong_word) / time) * ((lev + 10) / 10);
}
