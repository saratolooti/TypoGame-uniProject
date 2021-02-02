#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

//display the score board
void score_table(void)
{
    //for sorting the players based on score
    struct score_table{
        char user_name[100];
        char s_core[100];
    }temp, *players;

    players = malloc((num_players + 1) * sizeof(struct score_table));

    for(i = 1; i <= num_players; i++)
    {
        strcpy((players + i)->user_name,(num + i)->user_name);
        strcpy((players + i)->s_core,(num + i)->score);
    }
    //bubble sort
    for(i = 1; i <= num_players; i++)
    {
        for(j = i + 1; j <= num_players; j++)
        {

            if(atoi((players + i)->s_core) < atoi((players + j)->s_core))
            {
                strcpy(temp.user_name,(players + i)->user_name);
                strcpy((players + i)->user_name,(players + j)->user_name);
                strcpy((players + j)->user_name,temp.user_name);
                strcpy(temp.s_core,(players + i)->s_core);
                strcpy((players + i)->s_core,(players + j)->s_core);
                strcpy((players + j)->s_core,temp.s_core);

            }
        }
    }//end of first for
    //design
    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t  %-20s%20s\n", "player", "score");
    printf("\t\t\t\t\t____________________________________________\n");
    //display result
    int cmp;
    for(i = 1; i <= num_players; i++)
    {
        cmp = strcmp((players + i)->user_name,(num + n)->user_name);
        if(cmp == 0) SetColor(3);/*change the color of user information in score board*/
        Sleep(100);
        printf("\t\t\t\t\t  %-20s%20s\n", (players + i)->user_name, (players + i)->s_core);
        SetColor(13);
        printf("\t\t\t\t\t--------------------------------------------\n");
    }
    printf("\n\t\t\t\t\t\tpress any key to go to menu");
    getch();
    free(players);
}
