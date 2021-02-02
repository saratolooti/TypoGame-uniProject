#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// all levels part
void all_level(void)
{
    FILE *p;
    switch(lev)
    {
        case 1:/*level 1*/
            start_level();
            if(level("L01.txt",&p) == 0) break;
            if(continue_playing() == 0) break;
            //when player wants continue playing
            sum = 0;
        case 2:/*level 2*/
            start_level();
            if(level("L02.txt",&p) == 0) break;
            if(continue_playing() == 0) break;
            //when player wants continue playing
            sum = 0;
        case 3:/*level 3*/
            start_level();
            if(level("L03.txt",&p) == 0) break;
            if(continue_playing() == 0) break;
            //when player wants continue playing
            sum = 0;
        case 4:/*level 4*/
            start_level();
            if(level("L04.txt",&p) == 0) break;
            if(continue_playing() == 0) break;
            //when player wants continue playing
            sum = 0;
        case 5:/*level 5*/
            start_level();
            if(level("L05.txt",&p) == 0) break;
            if(continue_playing() == 0) break;
            //when player wants continue playing
            sum = 0;
        case 6:/*level 6*/
            start_level();
            if(level("L06.txt",&p) == 0) break;
            if(continue_playing() == 0) break;
            //when player wants continue playing
            sum = 0;
        case 7:/*level 7*/
            start_level();
            if(level("L07.txt",&p) == 0) break;
            if(continue_playing() == 0) break;
            //when player wants continue playing
            sum = 0;
        case 8:/*level 8*/
            start_level();
            if(level("L08.txt",&p) == 0) break;
            if(continue_playing() == 0) break;
            //when player wants continue playing
            sum = 0;
        case 9:/*level 9*/
            start_level();
            if(level("L09.txt",&p) == 0) break;
            if(continue_playing() == 0) break;
            //when player wants continue playing
            sum = 0;
        case 10:/*level 10*/
            start_level();
            if(level("L10.txt",&p) == 0) break;
            if(continue_playing() == 0) break;
            //when player wants continue playing
            sum = 0;
        case 11:/*level 11*/
            start_level();
            if(level("L11.txt",&p) == 0) break;
            //when player done the level
            system("cls");
            design("tick.txt",&p);
            getch();
            menu();
            break;
        default:
            system("cls");
            menu();
    }
}

