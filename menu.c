#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//menu items
void menu(void)
{
    char ch;
    FILE *p;
    while(1)
    {
        system("cls");
        FILE *p;
        system("COLOR FD");
        design("menu.txt",&p);
        printf("\t\t\t\t\t\t|1|new game\n");
        printf("\t\t\t\t\t\t|2|continue\n");
        printf("\t\t\t\t\t\t|3|how to play\n");
        printf("\t\t\t\t\t\t|4|score table\n");
        printf("\t\t\t\t\t\t|5|exit\n");
        ch = getch();
        switch(ch)
        {
            case '1':/*for new game*/
                make_zero();
                char_to_int();
                all_level();
                break;
            case '2':/*for continue playing*/
                all_level();
                break;
            case '3':/*how to play*/
                system("cls");
                design("how to play.txt",&p);
                getch();
                menu();
                break;
            case '4':/*score table*/
                system("cls");
                score_table();
                menu();
                break;
            case '5':/*exiting from program*/
                exit(0);
            default:
                continue;
        }
    }
}
