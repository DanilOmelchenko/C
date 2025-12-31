#include <stdio.h>
#include <stdlib.h>

#define x 5        //столбцы
#define y 7        //строки

size_t mass[x][y];     // Наш массив

size_t a = 0;          //Счётчик
int up = 0;         //Верхняя граница
int down = y - 1;   //Нижняя граница
int left = 0;       //Левая граница
int right = x - 1;  //Правая граница


void to_right()
{
    if(up <= down)
    {
        for(int i = left; i <= right; i ++)
        {
            mass[i][up] = a ++;
        }
        up ++;
    }
}

void to_down()
{
    if(left <= right)
    {
        for(int i = up; i <= down; i ++)
        {
                mass[right][i] = a ++;
        }
        right --;
    }
}

void to_left()
{
    if(up <= down)
    {
        for(int i = right; i >= left; i --)
        {
            mass[i][down] = a ++;
        }
        down --;
    }
}

void to_up()
{
    if(left <= right)
    {
        for(int i = down; i >= up; i --)
        {
            mass[left][i] = a ++;
        }
        left ++;
    }
}

void show()
{
    for (int j = 0; j < y; j ++ )
    {
        for (int i = 0; i < x; i ++)
        {
            printf(" %2d", mass[i][j]);
        }
        printf("\n");
    }
}

void fill()
{
    while (left < right || up < down)
    {
        to_right();
        to_down();
        to_left();
        to_up();
    }

}

int main()
{
    fill();
    show();
    return 0;
}


