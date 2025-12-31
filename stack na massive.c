#include <stdio.h>
#include <stdlib.h>

#define mass_leng 7
#define flag -1

size_t mass[mass_leng];
size_t k = 0; //schyotchik

void push(size_t a)
{
    if (k < mass_leng)
    {
        mass[k] = a;
        k ++;
    }

}

void show()
{
    if (k == 0)
    {
        printf("pustoy");
    }

    for (int i = 0; i < k; i ++)
    {
        if (mass[i] != flag)
        {
            printf("%d\n", mass[i]);
        }
    }
    printf("\n");
}

void pop()
{
    printf("deleted - %d\n", mass[k - 1]);
    mass[k] = flag;
    k --;

}


int main()
{
    push(5);
    push(3);
    push(2);
    show();
    pop();
    show();
    pop();
    show();
    pop();
    show();
    return 0;
}
