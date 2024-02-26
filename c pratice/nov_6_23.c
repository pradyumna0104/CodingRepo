#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node * next;
};
void traversal(struct node * head){
    struct node * ptr = head;
    printf("linked list : ");
    while(ptr != NULL){
        printf("%d ->",ptr->data);
        ptr = ptr->next;
    }
    printf("null\n");
}
struct node * insertatfirst(struct node * head,int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}
int main(){
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
     printf("here 5 is insert at beginning of the linked list\n");
    head = insertatfirst(head, 5);
    traversal(head);
    return 0;
}