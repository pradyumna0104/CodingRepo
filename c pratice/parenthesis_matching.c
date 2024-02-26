#include <stdio.h>
#include <stdlib.h>
#define max 10

int size = 0;

struct stack
{
    char arr[max];
    int top;
};

void createemptystack(struct stack *st)
{
    st->top = -1;
}

int isfull(struct stack *st)
{
    if (st->top == max - 1)
        return 1;
    else
        return 0;
}

int isempty(struct stack *st)
{
    if (st->top == -1)
        return 1;
    else
        return 0;
}

void push(struct stack *st, char data)
{
    if (isfull(st))
    {
        printf("\n stack is full .can't perform push operation .\n");
    }
    else
    {
        st->top++;
        st->arr[st->top] = data;
        printf("\n %c is pushed sucessfully into the stack \n", data);
    }
    size++;
}

void pop(struct stack *st)
{
    if (isempty(st))
    {
        printf("\n stack is empty .cann't perform pop operation .\n");
    }
    else
    {
        printf("%c is popped successfully into the stack. \n", st->arr[st->top]);
        st->top--;
    }
    size--;
    printf("\n");
}

void print(struct stack *st)
{
    for (int i = 0; i < size; i++)
    {
        printf("%c -> ", st->arr[i]);
    }
    printf("\n");
}

void peek(struct stack *st)
{
    if (isempty(st))
    {
        printf("\nstack is empty .no element present.\n");
    }
    else
    {
        printf("\n%c is peek element.\n", st->arr[st->top]);
    }
}

int parenthesis_matching(char *exp)
{
    struct stack *st = (struct stack *)malloc(sizeof(struct stack));
    createemptystack(st);

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(st, '(');
        }
        else if (exp[i] == ')')
        {
            if (isempty(st))
            {
                free(st);
                return 0;
            }
            pop(st);
        }
    }
    int result = isempty(st) ? 1 : 0;
    free(st);
    return result;
}

int main()
{
    // struct stack *st = (struct stack *)malloc(sizeof(struct stack));
    // createemptystack(st);
    // push(st, 'a');
    // push(st, 'b');
    // push(st, 'c');
    // push(st, 'd');
    // push(st, 'e');
    // print(st);
    // pop(st);
    // pop(st);
    // print(st);
    char *exp = ")4=(98+7)";
    if (parenthesis_matching(exp))
    {
        printf("the parenthesis is matching");
    }
    else
    {
        printf("the parenthesis is not matching");
    }

    return 0;
}
