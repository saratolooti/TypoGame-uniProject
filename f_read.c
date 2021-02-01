#include <stdio.h>
#include <stdlib.h>

void f_read(void)
{
    FILE *p;
    p = fopen("data.txt", "r");

    fseek (p, 0, SEEK_END);
    int size;
    size = ftell(p);
    rewind(p);
    if (size != 0)
    {
        for(i = 1; feof(p) == 0; i++)
        {
            fscanf(p,"%s%s%s%s%s%s", (num + i)->user_name, (num + i)->password, (num + i)->salt, (num + i)->level, (num + i)->words, (num + i)->score);
        }
        num_players = i - 2;
        decrypt();
    }
    else num_players = 0;
    fclose(p);
}
