#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *head)
{
    struct node *ptr = head;
    printf("elements are : ");
    do
    {
        printf("%d ->", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    printf("<-");
}
struct node *insertatfirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = fourth;
    fourth->data = 4;
    fourth->next = head;
    traversal(head);

    printf("\n insert 5 at  beginning \n");
    head = insertatfirst(head, 5);
    traversal(head);
    return 0;
}