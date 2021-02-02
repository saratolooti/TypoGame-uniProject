#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>


//pause part
int pause(int wrong_word,int length,int time)
{
    char ch;
    while(1)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t|1| exit to menu\n");
        printf("\t\t\t\t\t|2| resume\n");
        ch = getch();
        system("cls");
        switch(ch)
        {
            case '1':/*exit to menu*/
                system("cls");
                score(wrong_word,length,time);/*calculating score*/
                score_ += sum;
                e_x_i_t();
                return 0;

            case '2':/*resume*/
                for(i = 3; i >= 1; i--)
                {
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("\t\t\t\t\tgame resume in %d second(s)\n", i);
                    Sleep(800);
                    system("cls");
                }
                return 1;

            default:
                continue;
        }
    }
}
