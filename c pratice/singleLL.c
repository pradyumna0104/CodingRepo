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
    while (ptr != NULL)
    {
        printf("%d-> ", ptr->data);
        ptr = ptr->next;
    }
    printf("null");
}
struct node *insertatfirst(struct node *head, int value)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = value;
    ptr->next = head;
    return ptr;
}
struct node *insertinbetween(struct node *head, int position, int value)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != position-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = value;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
struct node *insertatlast(struct node *head, int value)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = value;
    ptr->next = NULL;
    p->next = ptr;
    return head;
}
struct node *deleteatfirst(struct node  *head){
    struct node *p = head;
    head =head->next;
    free (p);
    return head;
}
struct node *deleteinbetween(struct node *head, int position)
{
    struct node *p = head;
    struct node *q = head->next;
    for (int i= 0;i< position-1;i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
struct node *deleteatlast(struct node  *head){
    struct node *p = head;
    struct node *q = head->next;
    while(q->next != NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free (q);
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
    fourth->next = NULL;
    traversal(head);
    printf("\n insert 5 at  beginning \n");
    head = insertatfirst(head, 5);
    traversal(head);

    printf("\n insert 7 at 3 rd position \n");
    head = insertinbetween(head, 3, 7);
    traversal(head);
 
    printf("\n insert 11 at last \n");
    head = insertatlast(head, 11);
    traversal(head);

    printf("\n delete 1st node\n");
    head = deleteatfirst(head);
    traversal(head);
    
    printf("\n delete last node\n");
    head = deleteatlast(head);
    traversal(head);

    printf("\n delete the 2nd  position \n");
    head = deleteinbetween(head, 2);
    traversal(head);
    return 0;
}
