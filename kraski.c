#include <stdio.h>
#include <stdlib.h>

#define x 8
#define y 8

int mass[x][y];

void fill()
{
    size_t n = 0;
    for (int i = 0; i < x; i ++)
    {
        for (int j = 0; j < y; j ++)
        {
            mass[i][j] = n;
            n ++;

        }

    }
}

void show()
{
    for (int i = 0; i < x; i ++)
    {
        for (int j = 0; j < y; j ++)
        {
            printf("%3d", mass[i][j]);

        }
        printf("\n");

    }
    printf("\n");
}

void diag_cheredov()
{
    for (int i = 0; i < x; i ++)
    {
        for (int j = 0; j < y; j ++)
        {
            if ((i % 2 == 0) && (i + j) % 2 == 0)
            {
                mass[i][j] = 1;

            }
            else if ((i % 2 == 1) && ((i + j) % 2 == 0))
            {
                mass[i][j] = 2;

            }
            else if ((i % 2 == 0) && ((i + j)% 2 == 1))
            {
                mass[i][j] = 3;

            }
            else if ((i % 2 == 1) && ((i + j)% 2 == 1))
            {
                mass[i][j] = 4;

            }

        }

    }

}




int main()
{
    fill();
    show();
    diag_cheredov();
    show();


    return 0;
}
