#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//asking want to continue playing or not and display score of level
int continue_playing(void)
{
    char ch;
    while(1)
    {
        system("cls");
        system("color 75");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\twell done\n\n");
        printf("\t\t\t\t\t\tscore %d\n\n", sum);
        printf("\t\t\t\t\t|1|continue       |2|menu\n");
        ch = getch();
        switch(ch)
        {
            case '1':/*continue playing*/
                return 1;
            case '2':/*go to menu*/
                menu();
                return 0;
            default:
                continue;
        }
    }
    system("color F0");
}
