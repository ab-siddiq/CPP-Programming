#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
};
class DoublyLinkedList{
    public:
    int size;
    node* head;
    DoublyLinkedList(){
        head=NULL;
        size=0;
    }
    node* CreateNewNode(int data){
        node* newNode = new node;
        newNode->data=data;
        newNode->next=NULL;
        newNode->prev=NULL;
        return newNode;
    }
    void InsertAtHead(int data){
        node* newNode = CreateNewNode(data);
        size++;
        if(head==NULL){
            head=newNode;
            return;
        }
        node* a = head;
        newNode->next=a;
        a->prev=newNode;
        head=newNode;
    }
    void deleteMid(){
        node* a = head;
        int mid = floor(size/2);
        int curr_index=0;
        while (curr_index!=mid)
        {
            a=a->next;
            curr_index++;
        }
        node* b = a->prev;
        node* c = a->next;
        // cout<<a->data;
        if(b!=NULL){
            b->next=c;
        }
        if(c!=NULL){
            c->prev=b;
        }
        size--;
        delete a;
        
    }
    void getSize(){
        cout<<size<<"\n";
    }
    void Traverse(){
        node* a = head;
        while (a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<"\n";
    }
};
int main(){
    DoublyLinkedList dl;
    dl.InsertAtHead(1);
    dl.InsertAtHead(2);
    dl.InsertAtHead(3);
    dl.InsertAtHead(4);
    dl.getSize();
    dl.Traverse();
    dl.deleteMid();
    dl.getSize();
    dl.Traverse();
}