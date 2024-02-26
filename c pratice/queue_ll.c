#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *f = NULL;
struct node *r = NULL;


void traversal(struct node *head)
{
    struct node *p = head;
    while (p != NULL)
    {
        printf("%d = ", p->data);
        p = p->next;
    }
    printf("\n");
}

void enqueue(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        printf("queue is full .\n");
    }
    else
    {
        n->data = data;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
        printf("%d is enqueued successfully .\n", data);
    }
}

void dequeue()
{
    struct node *p = f;
    if (f == NULL)
    {
        printf("queue is empty. \n");
    }
    else
    {
        printf("%d is dequeued successfully .\n", f->data);
        f = f->next;
        free(p);
    }
}

int main()
{
    dequeue();
    enqueue(5);
    enqueue(6);
    enqueue(7);
    enqueue(8);
    traversal(f);
    dequeue();
    dequeue();
    dequeue();
    traversal(f);

    return 0;
}
