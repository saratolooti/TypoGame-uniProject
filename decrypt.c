#include <stdio.h>
#include <stdlib.h>

//for when we read from file
void decrypt(void)
{
    int salt;
    for(i = 1; i <= num_players; i++)
    {
        salt = atoi((num + i)->salt);/*getting the salt from data*/
        for(j = 0; (num + i)->password[j] != '\0'; j++)
        {
            (num + i)->password[j] = (num + i)->password[j] - salt;
        }
    }
    for(i = 1; i <= num_players; i++)
    {
        salt = atoi((num + i)->salt);
        for(j = 0; (num + i)->user_name[j] != '\0'; j++)
        {
            (num + i)->user_name[j] = (num + i)->user_name[j] - salt;
        }
    }
}
