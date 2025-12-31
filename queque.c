#include <stdio.h>
#include <stdlib.h>

#define size_mass 4
#define flag -1

size_t mass[size_mass];
size_t k = 0;

void push(size_t a)
{
    if (k < size_mass)
    {
        mass[k] = a;
        k ++;
    }
    else
    {
        printf("perepolnen\n");
    }
}

void show()
{
    for (int i = k - 1; i >= 0; i --)
    {
        if (mass[i]!= flag)
        {
            printf("%d\n", mass[i]);
        }
    }
    printf("\n");
}

void pop()
{
    printf("ydaleno - %d\n", mass[k - 1]);
    mass[k - 1] = flag;
    k --;
}

int main()
{
    push(3);
    show();
    push(4);
    push(2);
    show();
    pop();
    show();
    return 0;
}
