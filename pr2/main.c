#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define N 10

void fillMap(char A[N][255]);

int main()
{
    char map[N][255] = {0};
    int i, j, x, y;
    int win=1;
    x = 8;
    y = 1;
    fillMap(map);
    map[x][y] = 1;

    while (win == 1)
    {
        if (map[x][y] == 'X')
            win = 0;
        system("cls");
        fillMap(map);
        map[x][y] = 1;
        for (i = 0; i < N; i++){
            printf("%s\n", map[i]);
        }
        int go = getch();
        switch (go)
        {
        case 80:
            if (map[x + 1][y] != '#')
            {
                x++;
            }
            break;
        case 72:
            if (map[x - 1][y] != '#')
            {
                x--;
            }
            break;
        case 77:
            if (map[x][y + 1] != '#')
            {
                y++;
            }
            break;
        case 75:
            if (map[x][y - 1] != '#')
            {
                y--;
            }
            break;
        default:
            break;
        }

        sleep(1);
    }

    getch();
    return 0;
}

void fillMap(char A[N][255])
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i == 0 || j == 0 || i == 9 || j == 9)
                A[i][j] = '#';
            else
                A[i][j] = ' ';
        }
    }
    A[1][8] = 'X';
    A[7][3] = '#';
    A[7][4] = '#';
    A[6][3] = '#';
    A[8][6] = '#';
    A[7][6] = '#';
    A[5][6] = '#';
    A[4][1] = '#';
    A[4][2] = '#';
    A[3][4] = '#';
    A[3][5] = '#';
    A[3][5] = '#';
    A[3][6] = '#';
    A[3][7] = '#';
    A[1][5] = '#';
    A[1][6] = '#';

    return;
}