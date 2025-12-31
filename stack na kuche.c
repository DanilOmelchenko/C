#include <stdio.h>
#include <stdlib.h>
struct list
{
    int value;
    struct list* next;

};
struct list *head = NULL;
struct list *tail = NULL;



void init(struct list**head)
{
    while(*head)
    {
        struct list *temp= *head;
        *head=(*head)->next;
        free(temp);
    }
}
void show(void)
{
    if (!tail)
    {
        printf("queue is empty\n");

    }

    else
    {

        struct list *temp_tail = tail;


        while(temp_tail)
        {
         printf("value -   %d\n",temp_tail->value);
         temp_tail= temp_tail->next;
        }

    }
}
int push(int a)
{
    struct list *new_item=(struct list*)malloc(sizeof(struct list));

    if(!tail)
    {
        tail = new_item;
        head = new_item;

        head->value=a;
        head-> next=NULL;


    }
    else
    {
        new_item->next = NULL;
        head->next = new_item;


        head = new_item;
        new_item->value = a;

    }
    return a;
}

int pop()
{
    if(!tail)
    {

        return -1;
    }
    else
    {
        struct list temp_list = (*tail);
        free(tail);
        tail = temp_list.next;
        return temp_list.value;
    }

}


int main()
{
    show();
    push(2);
    push(3);
    show();
    pop();
    printf("\n");
    show();
    return 0;
}
