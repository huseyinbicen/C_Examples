#include <stdio.h>
#include <stdlib.h>

#define sag_ust "\u2510"
#define sag_alt "\u2518"
#define sol_ust "\u250c"
#define sol_alt "\u2514"
#define yatay "\u2500"
#define dikey "\u2502"

int main()
{
    draw_rectangle(20,30,10,10);
    return 0;

}
void gotoxy(int x , int y)
{
    printf("%c[%d;%df",0x1B,y,x);
}
void clrscrn()
{
    printf("e[1;1H\e[2J");
}
void draw_rectangle(int px, int py, int w, int h)
{
    gotoxy(px,py);
    printf(sol_ust);
    for(int i = 0 ; i<w-1;i++)
    {
        printf(yatay);
    }
    printf(sag_ust);


    for(int k = 0 ; k<h-1;k++)
    {
        gotoxy(px,py+1+k);
        printf(dikey);
        gotoxy(px+w,py+1+k);
        printf(dikey);
    }

    gotoxy(px,py+h-1);
    printf(sol_alt);
    gotoxy(px+1,py+h-1);
    for(int i = 0 ; i<w-1;i++)
    {
        printf(yatay);
    }
    gotoxy(px+w,py+h-1);
    printf(sag_alt);

}

