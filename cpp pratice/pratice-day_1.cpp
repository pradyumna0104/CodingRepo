#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
node* head = NULL;
void insertatbegin(int val){
    node* m=new node(val);
    m ->data=val;
    if(head == NULL){
        m->next=NULL;
        head = m;
    }
    else{
        m->next=head;
        head =m;
    }
    cout<<"\n node inserted successfully at begin"<<endl;
}
void display(){
    node * temp=head;
    while(head!= NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}
int main(){
    insertatbegin(1);
    
    display();
    insertatbegin(2);
    
    insertatbegin(3);
    display();
    return 0;
}