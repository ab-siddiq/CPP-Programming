#include<bits/stdc++.h>
using namespace std;
//create custom node
class node{
    public:
    //node data
    int data;
    //pointer to the next element
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
//insert at head
void InsertAtHead(node* &head,int val){
    //create new node
    node* n = new node(val);
    //next of n node will point to the head
    n->next=head;
    //change head to new node
    head=n;
}
//insert at tail
void InsertAtTail(node* &head,int val){
    //create new node
    node* n = new node(val);
    //if there is no element in the link list or head is empty
    if(head==NULL){
        head=n;
        return;
    }
    //creating a pointer to traverse start to end
    node* temp = head;
    //traverse till temp->next==NULL
    while(temp->next!=NULL){
        temp=temp->next;
    }
    //inset at tail after getting last element from while loop
    temp->next=n;
}
//print the link list
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//search element
bool Search(node* head,int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data==key) return true;
        temp=temp->next;
    }
    return false;
}
int main(){
    node* head = NULL;
    InsertAtTail(head,5);
    InsertAtTail(head,6);
    InsertAtTail(head,7);
    InsertAtTail(head,8);
    display(head);
    InsertAtHead(head,0);
    display(head);
    cout<<Search(head,20);
}
