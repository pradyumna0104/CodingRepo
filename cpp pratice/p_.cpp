//#include <stdio.h>
#include <iostream>
using namespace std;
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

void push(struct stack *st, int data)
{
    if (isfull(st))
    {
        cout<<" stack is full .overflow condition ."<<endl;
    }
    else
    {
        st->top++;
        st->arr[st->top] = data;
        cout<<data <<" is pushed successfully into the stack."<<endl;
    }
    size++;
}

void pop(struct stack *st)
{
    if (isempty(st))
    {
        cout<<" stack is empty .underflow condition ."<<endl;
    }
    else
    {
        cout<< st->arr[st->top]<<" is popped successfully."<<endl;
        st->top--;
    }
    size--;
    cout<<"\n"<<endl;
}

void peek(struct stack *st)
{
    if (isempty(st))
    {
        cout<<" stack is empty .no element present."<<endl;
    }
    else
    {
        cout<< st->arr[st->top]<<" is peek element."<<endl;
    }
}

void print(struct stack *st)
{
    for (int i = 0; i < size; i++)
    {
        cout<<st->arr[i]<<" -> ";
    }
    cout<<""<<endl;
}

int main()
{
  //  struct stack *st = (struct stack *)malloc(sizeof(struct stack));
    struct stack *st = new struct stack;
   
    createemptystack(st);
   
    push(st, 4);
    push(st, 8);
    push(st, 12);
    peek(st);
    push(st, 16);
    print(st);
    pop(st);
    pop(st);
    print(st);
    peek(st);
   
    return 0;
}