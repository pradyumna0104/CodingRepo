/*        LINKED LIST       */
// struct node{
//     int data;
//     struct node *next;
// };
// void traversal(struct node * head){
//     printf("traversal : ");
//     struct node * ptr = head;
//     while(ptr != NULL){
//         printf("%d -> ",ptr->data);
//         ptr = ptr->next;
//     }
//     printf("NULL \n");
// }
// struct node * insertatbeginning(struct node * head,int data){
//     printf("%d is insert at beggining in the linked list.\n",data);
//     struct node * ptr = (struct node *)malloc(sizeof(struct node));
//     ptr->data = data;
//     ptr->next = head;
//     return ptr;
// }
// struct node * insertbetween(struct node *head,int pos,int data){
//     printf("%d is insert at %d place in the linked list .\n",data,pos);
//     struct node * ptr = (struct node *)malloc(sizeof(struct node));
//     struct node * p = head;
//     int i = 1;
//     while(i!=pos-1){
//         p = p->next;
//         i++;
//     }
//     ptr->data = data;
//     ptr->next = p->next;
//     p->next = ptr;
//     return head;
// }
// struct node * insertatlast(struct node * head,int data){
//     printf("%d is insert at last in the linked list .\n",data);
//     struct node * ptr =(struct node *)malloc(sizeof(struct node));
//     struct node * p = head;
//     while(p->next != NULL){
//         p = p->next;
//     }
//     ptr->data = data;
//     ptr->next = NULL;
//     p->next = ptr;
//     return head;
// }
// struct node * deleteatfirst(struct node *head){
//     printf("1st node deleted successfully .\n");
//     struct node * p = head;
//     head = head->next;
//     free(p);
//     return head;
// }
// struct node * deleteinbetween(struct node * head,int pos){
//     printf("node at %d is deleted successfully.\n",pos);
//     struct node * p = head;
//     struct node * q = head->next;
//     int i = 1;
//     for (int i= 0;i< pos-2;i++)
//     {
//         p = p->next;
//         q = q->next;
//     }
//     p->next = q->next;
//     free(q);
//     return head;
// }
// struct node * deleteatlast(struct node * head){
//     printf("last node deleted successfully.\n");
//     struct node * p = head;
//     struct node * q = head->next;
//     while(q->next != NULL){
//         p = p->next;
//         q = q->next;
//     }
//     p->next = NULL;
//     free(q);
//     return head;
// }
// int main(){
//     struct node * head = (struct node *)malloc(sizeof(struct node));
//     struct node * h2 = (struct node *)malloc(sizeof(struct node));
//     struct node * h3 = (struct node *)malloc(sizeof(struct node));
//     struct node * h4 = (struct node *)malloc(sizeof(struct node));
//     head->data=1;
//     head->next=h2;
//     h2->data=3;
//     h2->next=h3;
//     h3->data=5;
//     h3->next=h4;
//     h4->data=7;
//     h4->next = NULL;
//     traversal(head);
//     head = insertatbeginning(head,-1);
//     traversal(head);
//     head = insertbetween(head,3,2);
//     traversal(head);
//     head = insertatlast(head,9);
//     traversal(head);
//     head = deleteatfirst(head);
//     traversal(head);
//     head = deleteinbetween(head,3);
//     traversal(head);
//     head = deleteatlast(head);
//     traversal(#);
//     return 0;
// }

/*        STACK       */
// #include <stdio.h>
// #include <stdlib.h>
// #define max 10
// int size = 0;
// struct stack
// {
//     int arr[max];
//     int top;
// };
// void createemptystack(struct stack *ps)
// {
//     printf("Empty stack created successfully.\n");
//     ps->top = -1;
// }
// int isfull(struct stack *ps)
// {
//     if (ps->top == max - 1)
//         return 1;
//     else
//         return 0;
// }
// int isempty(struct stack * ps){
//     if(ps->top == -1)
//     return 1;
//     else
//     return 0;
// }
// void push(struct stack * ps,int data){
//     if(isfull(ps)){
//         printf("over flow .cann't perform push operation. \n");
//     }
//     else{
//         ps->top++;
//         ps->arr[ps->top] = data;
//         printf("%d is push into the stack . \n",data);
//     }
//     size++;
// }
// void pop(struct stack * ps){
//     if(isempty(ps)){
//         printf("under flow .cann't perform pop operation. \n");
//     }
//     else{
//         printf("%d is popped successsfully into the stack .\n",ps->arr[ps->top]);
//         ps->top--;
//     }
//     size--;
//     printf("\n");
// }
// void peek(struct stack *st)
// {
//     if (isempty(st))
//     {
//         printf("\nstack is empty .no element present.\n");
//     }
//     else
//     {
//         printf("\n%d is peek element.\n", st->arr[st->top]);
//     }
// }
// void print(struct stack *ps){
//     printf("STACK : ");
//     for(int i = 0;i<size;i++){
//         printf("%d => ",ps->arr[i]);
//     }
//     printf("\n");
// }
// int main()
// {
//     struct stack * ps = (struct stack *)malloc(sizeof(struct stack));
//     createemptystack(ps);
//     push(ps,1);
//     push(ps,2);
//     push(ps,3);
//     push(ps,4);
//     push(ps,5);
//     print(ps);
//     pop(ps);
//     pop(ps);
//     print(ps);
//     return 0;
// }

/*         TREE         */
// struct node
// {
//     int data;
//     struct node *left;
//     struct node *right;
// };
// struct node *createnode(int data,struct node * left,struct node *right)
// {
//     struct node *new = (struct node *)malloc(sizeof(struct node));
//     new->data = data;
//     new->left = left;
//     new->right = right;
//     return new;
// }
// void inorder(struct node *root)
// {
//     if (root != NULL)
//     {
//         inorder(root->left);
//         printf("%d ", root->data);
//         inorder(root->right);
//     }
// }
// void preorder(struct node *root)
// {
//     if (root != NULL)
//     {
//         printf("%d ", root->data);
//         preorder(root->left);
//         preorder(root->right);
//     }
// }
// void postorder(struct node *root)
// {
//     if (root != NULL)
//     {
//         postorder(root->left);
//         postorder(root->right);
//         printf("%d ", root->data);
//     }
// }
// int main()
// {
//     struct node *p4 = createnode(9, NULL, NULL);
//     struct node *p5 = createnode(11, NULL, NULL);
//     struct node *p2 = createnode( 7, NULL, NULL);
//     struct node *p3 = createnode(10, p4, p5);
//     struct node *p  =  createnode(8, p2, p3);
//     printf("     8        \n");
//     printf("    < >      \n");
//     printf("   7  10      \n");
//     printf("     <  >     \n");
//     printf("    9    11   \n");
//     printf("\npreorder : ");
//     preorder(p);
//     printf("\ninorder : ");
//     inorder(p);
//     printf("\npostorder : ");
//     postorder(p);
//     return 0;
// }

/*       LINKED LIST NOV-6-2023       */
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void traversal(struct node *head)
// {
//     struct node *ptr = head;
//     printf("\nlinked list : ");
//     while (ptr != NULL)
//     {
//         printf("%d ->", ptr->data);
//         ptr = ptr->next;
//     }
//     printf("NULL \n");
// }
// struct node *insertatbeginning(struct node *head, int data)
// {
//     struct node *ptr = (struct node *)malloc(sizeof(struct node));
//     printf("\n%d is insert at beggining.\n", data);
//     ptr->data = data;
//     ptr->next = head;
//     return ptr;
// }
// struct node *insertinbetween(struct node *head, int data, int pos)
// {
//     struct node *ptr = (struct node *)malloc(sizeof(struct node));
//     printf("\n%d is insert at %d postion\n", data, pos);
//     struct node *p = head;
//     int i = 1;
//     while (i != pos - 1)
//     {
//         p = p->next;
//         i++;
//     }
//     ptr->data = data;
//     ptr->next = p->next;
//     p->next = ptr;
//     return head;
// }
// struct node *insertatlast(struct node *head, int data)
// {
//     struct node *ptr = (struct node *)malloc(sizeof(struct node));
//     printf("\n%d is insert at last\n", data);
//     struct node *p = head;
//     while (p->next != NULL)
//     {
//         p = p->next;
//     }
//     ptr->data = data;
//     p->next = ptr;
//     ptr->next = NULL;
//     return head;
// }
// struct node *deleteatfirst(struct node * head){
//     printf("\ndeleted the 1st element .\n");
//     struct node * p = head;
//     head = head->next;
//     free(p);
//     return head;
// }
// struct node *deleteinbetween(struct node * head,int pos){
//     printf("\ndelete the element at position : %d \n",pos);
//     struct node * p = head;
//     struct node * q = head->next;
//     for(int i = 1;i<= pos-2;i++){
//         p = p->next;
//         q = q->next;
//     }
//     p->next = q->next ;
//     free(q);
//     return head;
// }
// struct node * deleteatlast(struct node * head){
//     printf("\ndeleted the last element .\n");
//     struct node * p = head;
//     while(p->next->next != NULL){
//         p = p->next;
//     }
//     p->next = NULL;
//     return head;
// }
// int main()
// {
//     struct node *head = (struct node *)malloc(sizeof(struct node));
//     struct node *h2 = (struct node *)malloc(sizeof(struct node));
//     struct node *h3 = (struct node *)malloc(sizeof(struct node));
//     struct node *h4 = (struct node *)malloc(sizeof(struct node));
//     head->data = 1;
//     head->next = h2;
//     h2->data = 3;
//     h2->next = h3;
//     h3->data = 5;
//     h3->next = h4;
//     h4->data = 7;
//     h4->next = NULL;
//     traversal(head);
//     head = insertatbeginning(head, -1);
//     traversal(head);
//     head = insertinbetween(head, 4, 3);
//     traversal(head);
//     head = insertatlast(head, 9);
//     traversal(head);
//     head = deleteatfirst(head);
//     traversal(head);
//     head = deleteinbetween(head,3);
//     traversal(head);
//     head = deleteatlast(head);
//     traversal(head);
//     return 0;
// }

/*       STACK NOV-6-2023           */
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define max 10
// int size = 0;
// struct stack
// {
//     int arr[max];
//     int top;
// };
// void createemptystack(struct stack *st)
// {
//     printf("created a empty stack.\n");
//     st->top = -1;
// }
// int isfull(struct stack *st)
// {
//     if (st->top == max - 1)
//         return 1;
//     else
//         return 0;
// }
// int isempty(struct stack *st)
// {
//     if (st->top == -1)
//         return 1;
//     else
//         return 0;
// }
// void push(struct stack *st, int data)
// {
//     if (isfull(st))
//     {
//         printf("\n stack is full .cann't perform push operation.\n");
//     }
//     else
//     {
//         printf("\n %d is pushed into the stack.\n", data);
//         st->top++;
//         st->arr[st->top] = data;
//         size++;
//     }
// }
// void pop(struct stack *st)
// {
//     if (isempty(st))
//     {
//         printf("\n stack is empty.cann't perform pop operation.\n");
//     }
//     else
//     {
//         printf("\n%d is popped successfully into the stack .\n", st->arr[st->top]);
//         st->top--;
//         size--;
//     }
// }
// void peek(struct stack *st)
// {
//     if (isempty(st))
//     {
//         printf("\nstack is empty .no element present.\n");
//     }
//     else
//     {
//         printf("\n%d is peek element.\n", st->arr[st->top]);
//     }
// }
// void print(struct stack *st)
// {
//     printf("\n stack : ");
//     for (int i = 0; i < size; i++)
//     {
//         printf(" %d ~", st->arr[i]);
//     }
//     printf("\n");
// }
// int main()
// {
//     struct stack *st = (struct stack *)malloc(sizeof(struct stack));
//     createemptystack(st);
//     push(st, 1);
//     push(st, 2);
//     push(st, 3);
//     push(st, 4);
//     push(st, 5);
//     push(st, 6);
//     push(st, 7);
//     push(st, 8);
//     push(st, 9);
//     push(st, 10);
//     push(st, 11);
//     print(st);
//     pop(st);
//     pop(st);
//     pop(st);
//     print(st);
//     peek(st);
//     return 0;
// }

/*      infix to postfix NOV-6-2023     */
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
