#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>


//checking the entered letters are correct or not
int check(char s[50],int length)
{
    system("color 03");
    printf("\n\n\t|1|pause");
    printf("\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t%s\n", s);
    printf("\t\t\t\t\t\t");
    char str[50];
    int time = 1, wrong_word = 0, k = 0;
    do
    {
        while(kbhit())/*this loop only works when the keyboard is pressed*/
        {
            str[k] = getch();
            if(str[k] == '1') break;/*game paused*/
            if(str[k] == s[k])/*correct letters*/
            {
                SetColor(13);
                strupr(str);
                printf("%c", str[k]);
            }
            else/*wrong letters*/
            {
                wrong_word++;
                SetColor(3);
                printf("%c", str[k]);
            }
            k++;
        }
        if(str[k] == '1')/*when user pause the game*/
        {
            if(pause(wrong_word,length,time) == 0) return 0;/*return 0 means leaving the game in the middle of it*/
            else
            {
                str[k] = '\0';
                //printing the last word and entered letters before pausing
                resume(str,s);
            }
        }
        if(s[i] == '\n' || k >= length - 1) break;
        Sleep(1000);
        time++;

    }while(1);
    //calculating score
    score(wrong_word,length,time);
}

