#include <stdio.h>
#include <conio.h>

//for printing * for each character
void pass_field(char ch[100])
{
    i = 0;
    do
    {
        ch[i]=getch();
        if(ch[i]!='\r')  printf("*");
        i++;

    }while(ch[i-1]!='\r');

    ch[i-1]='\0';
}
