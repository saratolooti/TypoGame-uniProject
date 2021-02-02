#include <stdio.h>
#include <stdlib.h>

//for sign up
void sign_up(void)
{
    num_players++;
    n = num_players;
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n");

    printf("\t\t\t\t\t\t|user name : ");
    scanf("%s", (num + n)->user_name);

    printf("\t\t\t\t\t\t|password : ");
    scanf("%s", (num + n)->password);
    make_zero();
    f_write();
    decrypt();
}
