#include <stdio.h>
#include <stdlib.h>

struct circular_queue
{
    int size;
    int f;
    int r;
    int *arr;
};

void intialize(struct circular_queue *q)
{
    q->size = 4;
    q->f = q->r = 0;
    q->arr = (int *)malloc(q->size * sizeof(int));
    printf("queue intialize successfully .\n");
}

int isempty(struct circular_queue *q)
{
    if (q->f == q->r)
        return 1;
    else
        return 0;
}

int isfull(struct circular_queue *q)
{
    if ((q->r + 1) % q->size == q->f)
        return 1;
    else
        return 0;
}

void enqueue(struct circular_queue *q, int data)
{
    if (isfull(q))
    {
        printf("queue is full .cann't enqueue .\n");
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = data;
        printf("%d enqueue successfully .\n", data);
    }
}

void dequeue(struct circular_queue *q)
{
    if (isempty(q))
    {
        printf("queue is empty .cann't dequeue .\n");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        printf("%d is dequeue successfully .\n", q->arr[q->f]);
    }
}

// void display(struct circular_queue *q){
//     for(int i= q->f+1 ; i!=q->r ; i=(i+1)%q->size){
//         printf("%d = ",  q->arr[i]);
//     }
//     printf("\n");
// }

int main()
{
    struct circular_queue q;
    intialize(&q);
    dequeue(&q);
    enqueue(&q, 4);
    enqueue(&q, 7);
    enqueue(&q, 8);
    // display(&q);
    dequeue(&q);
    enqueue(&q, 10);
    enqueue(&q, 11);
    // display(&q);

    return 0;
}
