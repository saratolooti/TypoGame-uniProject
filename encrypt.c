#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//making user name and password encrypt
void encrypt(void)
{
    int salt;
    srand(time(NULL));
    salt = (rand() % 10) + 1;
    //add a random of salt to the username and password letters
    for(i = 1; i <= num_players; i++)
    {
        itoa(salt, (num + i)->salt, 10);/*(num + i)->salt = salt*/
        for(j = 0; (num + i)->password[j] != '\0'; j++)
        {
            (num + i)->password[j] = (num + i)->password[j] + salt;
        }
    }
    for(i = 1; i <= num_players; i++)
    {
        itoa(salt, (num + i)->salt, 10);
        for(j = 0; (num + i)->user_name[j] != '\0'; j++)
        {
            (num + i)->user_name[j] = (num + i)->user_name[j] + salt;
        }
    }
}
