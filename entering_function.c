#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//for sign up and login
int entering(void)
{
    while(1)
    {
        FILE *p;
        system("COLOR 75");
        design("entering.txt",&p);
        printf("\t\t\t\t\t\t|1|sign up\n");
        printf("\t\t\t\t\t\t|2|login\n");
        //get character
        char ch;
        ch = getch();
        switch(ch)
        {
            case '1':/*for sign up*/
                sign_up();
                return 1;

            case '2':/*for log in*/
                system("cls");
                if(login() == 1) return 1;/*returns 1 means user has entered the game*/

            default:
                system("cls");
                continue;
        }
    }
}
