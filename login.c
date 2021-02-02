#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//for log in
int login(void)
{
    char ch[100];
    int flag = 0;
    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t|user name : ");
    scanf("%s", ch);

    for(i = 1; i <= num_players; i++)
    {
        j = strcmp(ch,(num + i)->user_name);
        if(j == 0)
        {
            n = i;
            flag++;
        }
    }
    if(flag == 1)/*when the players user name equals with data*/
    {
        //checking password
        i = 1;
        while(1)
        {
            if(i > 1)
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n");
            }
            printf("\t\t\t\t\t\t|password : ");
            pass_field(&ch);
            j = strcmp(ch,(num + n)->password);
            if(j == 0) return 1;/*returns 1 means user has entered the game*/
            i++;
        }
    }
    else
    {
        system("cls");
        system("color 40");
        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  ");
        printf("you have to SIGN IN first");
        getch();
        exit(0);
    }

}
