#include <stdlib.h>
#include <stdio.h>
//for saving data in file
void f_write(void)
{
    FILE *p;
    p = fopen("data.txt", "w");
    encrypt();
    for(i = 1; i <= num_players; i++)
    {
        fprintf(p,"%s %s %s %s %s %s %c", (num + i)->user_name, (num + i)->password, (num + i)->salt, (num + i)->level, (num + i)->words, (num + i)->score, '\n');
    }
    fclose(p);
}
