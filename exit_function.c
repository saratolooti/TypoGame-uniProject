#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//exit at the game and asking for save the game
void e_x_i_t()
{
    char ch;
    while(1)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\tare you want to save the game?\n");
        printf("\t\t\t\t\t|1| yes\n");
        printf("\t\t\t\t\t|2| no\n");
        ch = getch();
        switch(ch)
        {
            case '1':/*yes*/
                int_to_char();
                f_write();
                decrypt();
                menu();
                return;

            case '2':/*no*/
                menu();
                return;

            default:
                continue;
        }
    }
}
