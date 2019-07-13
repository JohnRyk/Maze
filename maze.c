#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
// Destination
#define bournX 10;
#define bournY 1;

int getch();
int main()
{

    char a[7][13]={
    "############",
    "#     #    #",
    "#   #   #  #",
    "# #   #   ##",
    "#   # #  # #",
    "##    #    #",
    "############",};

    int x,y;   

    x=1;
    y=1;
    a[x][y]='O';

    char ch;

    do{
        for(int i=0;i<7;i++)
            puts(a[i]);

        ch=getch();     // Get an input char from stdin
        system("cls");
        switch(ch)
        {
            case 's':
            {
                if(a[x+1][y]!='#')
                {
                    a[x][y]=' ';
                    x++;
                }
            }break;
            case 'w':
            {
                if(a[x-1][y]!='#')
                {
                    a[x][y]=' ';
                    x--;
                }
            }break;
            case 'a':
            {
                if(a[x][y-1]!='#')
                {
                    a[x][y]=' ';
                    y--;
                }
            }break;
            case 'd':
            {
                if(a[x][y+1]!='#')
                {
                    a[x][y]=' ';
                    y++;
                }
            }break;
        }
        a[x][y]='O';
    }while(1);
    
    getchar();
    return 0;
}

