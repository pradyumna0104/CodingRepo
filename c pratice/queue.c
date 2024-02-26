#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

void intialize(struct queue *q)
{
    q->size = 4;
    q->f = q->r = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));
    printf("queue intialize successfully .\n");
}

int isempty(struct queue *q)
{
    if (q->f == q->r)
        return 1;
    else
        return 0;
}

int isfull(struct queue *q)
{
    if (q->f == -1 && q->r == q->size - 1)
        return 1;
    else
        return 0;
}

void enqueue(struct queue *q, int data)
{
    if (isfull(q))
    {
        printf("queue is full .cann't enque\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = data;
    }
}

void deueue(struct queue *q)
{
    if (isempty(q))
    {
        printf("queue is empty .cann't dequeue \n");
    }
    else
    {
        q->f++;
        printf("%d is dequeue successfully .\n", q->arr[q->f]);
    }
}

void display(struct queue *q)
{
    for (int i = q->f + 1; i <= q->r; i++)
    {
        printf("%d = ", q->arr[i]);
    }
    printf("\n");
}

int main()
{
    struct queue q;
    intialize(&q);
    enqueue(&q, 4);
    enqueue(&q, 7);
    enqueue(&q, 8);
    enqueue(&q, 9);
    enqueue(&q, 12);
    display(&q);
    deueue(&q);
    deueue(&q);
    deueue(&q);
    deueue(&q);
    deueue(&q);
    return 0;
}
