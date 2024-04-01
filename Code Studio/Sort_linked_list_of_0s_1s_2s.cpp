#include <bits/stdc++.h>
/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* sortList(Node *head){
    int zerocount = 0,onecount =0,twocount = 0;
    Node* temp  = head;
    while(temp){
        if(temp->data == 0){  zerocount++;}
        else if(temp->data == 1){  onecount++;}
        else{  twocount++;}
        temp = temp->next;
    }
    temp = head;
    while(temp){
        for(int i = 1 ; i <= zerocount ; i++){
            temp->data = 0;
            temp = temp->next;
        }
        for(int i = 1 ; i <= onecount ; i++){
            temp->data = 1;
            temp = temp->next;
        }
        for(int i = 1 ; i <= twocount ; i++){
            temp->data = 2;
            temp = temp->next;
        }
    }
    return head;
}