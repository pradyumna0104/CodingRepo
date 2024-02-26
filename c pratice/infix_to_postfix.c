#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    char *arr;
    int top;
    int size;
};

int stackTop(struct stack* sp){
    return sp->arr[sp->top];
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
    if (st->top == st->size - 1)
        return 1;
    else
        return 0;
}

void push(struct stack *st, char data)
{
    if (isfull(st))
    {
        printf("\nstack is full .overflow condition .\n");
    }
    else
    {
        st->top++;
        st->arr[st->top] = data;
    }
}

char pop(struct stack *st)
{
    if (isempty(st))
    {
        printf("\nstack is empty .underflow condition .\n");
        return -1;
    }
    else
    {
        char val = st->arr[st->top];
        st->top--;
        return val;
    }
}

int precedence(char ch)
{
    if (ch == '+' || ch == '-')
        return 2;
    else if (ch == '*' || ch == '/')
        return 3;
    else
        return 0;
}

int isoperater(char ch){
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        return 1;
    else
        return 0;
}

char *infixtopostfix(char *infix)
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->top = -1;
    sp->size = 15;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));
    int i = 0;
    int j = 0;
    while (infix[i] != '\0')
    {
        if (!isoperater(infix[i]))
        {
            postfix[j] = infix[i];
            i++;
            j++;
        }
        else
        {
            if (precedence(infix[i]) > precedence(stackTop(sp)))
            {
                push(sp, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while (!isempty(sp))
    {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    char *infix = "a+b-c*d/e";
    printf ("post fix :%s" ,infixtopostfix(infix));
    return 0;
}
