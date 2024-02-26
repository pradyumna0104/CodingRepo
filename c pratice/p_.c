#include <stdio.h>
#include <stdlib.h>
#define max 10
int size = 0;

struct stack
{
    int arr[max];
    int top;
};

void createemptystack(struct stack *st)
{
    st->top = -1;
}

int isempty(struct stack *st)
{
    if (st->top == -1)
        return 1;
    else
        return 0;
}

int isfull(struct stack *st)
{
    if (st->top == max - 1)
        return 1;
    else
        return 0;
}

void push(struct stack *st,int data){
    if(isfull(st)){
        printf("\nstack is full .overflow condition .\n");
    }
    else{
        st->top++;
        st->arr[st->top]=data;
        printf("\n%d is pushed successfully into the stack.\n",data);
    }
    size++;
}

void pop(struct stack *st){
    if(isempty(st)){
        printf("\nstack is empty .underflow condition .\n");
    }
    else{
        printf("\n%d is popped successfully.\n",st->arr[st->top]);
        st->top--;
    }
    size--;
    printf("\n");
}

void peek(struct stack *st){
    if(isempty(st)){
        printf("\nstack is empty .no element present.\n");
    }
    else{
        printf("\n %d is peek element.\n",st->arr[st->top]);
    }
}

void print(struct stack *st){
    for(int i =0;i<size;i++){
        printf("%d ->",st->arr[i]);
    }
    printf("\n");
}
int main()
{
    struct stack *st=(struct stack*)malloc(sizeof(struct stack));
    createemptystack(st);
    push(st,4);
    push(st,8);
    push(st,12);
    peek(st);
    push(st,16);
    print(st);
    pop(st);
    pop(st);
    print(st);
    peek(st);
    return 0;
}