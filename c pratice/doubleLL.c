#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
void traversal(struct node *head)
{
    struct node *ptr = head;
    printf("elements are : ");
    printf("null ");
    while (ptr != NULL)
    {
        printf("<- %d ->", ptr->data);
        ptr = ptr->next;
    }
    printf(" null");
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    
    head->prev = NULL;
    head->data = 1;
    head->next = second;
    
    second->prev = head;
    second->data = 2;
    second->next = third;
    
    third->prev = second;
    third->data = 3;
    third->next = fourth;
    
    fourth->prev = third;
    fourth->data = 4;
    fourth->next = NULL;
    traversal(head);
    return 0;
}