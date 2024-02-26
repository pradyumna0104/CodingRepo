#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *traverse(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL \n");
}

struct node *insertatbeginning(struct node *head, int data)
{
    printf("\ninsert %d at beginning \n", data);
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

struct node *insertinbetween(struct node *head, int value, int data)
{
    printf("\ninsert %d at %d place \n", data, value);
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;
    int i = 1;
    while (i != value - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}


struct node *insertatlast(struct node *head, int data)
{
    printf("\ninsert %d at last \n", data);
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct node *deleteatbeginning(struct node *head){
    printf("\nSuccessfully deleted the first element.\n");
    struct node * p = head;
    head = p->next;
    free (p);
    return head;
}

struct node *deleteatlast(struct node *head){
    printf("\nSuccessfully deleted the last element .\n");
    struct node *p = head;
    while(p->next->next != NULL){
        p = p->next;
    }
    p->next=NULL;
    return head;
}

struct node *deleteinbetween(struct node *head,int value){
    printf("\ndeleted the %d element .\n",value);
    struct node *p =head;
    struct node *q =head->next;
    for(int i=1;i<value-1;i++){
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free (q);
    return head;
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 2;
    head->next = second;

    second->data = 4;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 8;
    fourth->next = NULL;

    traverse(head);

    head = insertatbeginning(head, 1);
    traverse(head);

    head = insertinbetween(head, 3, 3);
    traverse(head);

    head = insertatlast(head, 9);
    traverse(head);

    head = deleteatbeginning(head);
    traverse(head);

    head = deleteatlast(head);
    traverse(head);
    
    head = deleteinbetween(head,3);
    traverse(head);
    
    return 0;
}
