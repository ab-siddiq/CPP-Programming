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
        size=0;
        head=NULL;
    }
    node* CreateNewNode(int val){
        node* newNode = new node;
        newNode->data=val;
        newNode->next=NULL;
        newNode->prev=NULL;
        return newNode;
    }
    void InsertAtHead(int val){
        size++;
        node* newNode = CreateNewNode(val);
        if(head==NULL){
            head=newNode;
            return;
        }
        node* a = head;
        newNode->next=a;
        a->prev=newNode;
        head=newNode;
    }
    void DeleteAtHead(){
        if(size==0) return;
        node* a =head;
        node* b = a->next;
        delete a;
        if(b!=NULL) b->prev=NULL;
        head=b;
        size--;
    }
    
    int getSize(){
        return size;
    }
};
class Stack{
    public:
    Stack(){

    }
    DoublyLinkedList dl;
    void push(int val){
        dl.InsertAtHead(val);
    }
    void pop(){
        if(dl.getSize()==0){
            cout<<"Stack is empty!\n";
            return;
        }
        dl.DeleteAtHead();
    }
    int top(){
        if(dl.getSize()==0){
            cout<<"Stack is empty!\n";
            return -1;
        }
        return dl.head->data;
    }
};
int main(){
    Stack stk;
    stk.push(1);
    cout<<stk.top()<<"\n";
    stk.push(2);
    cout<<stk.top()<<"\n";
    stk.push(3);
    cout<<stk.top()<<"\n";
    stk.pop();
    cout<<stk.top()<<"\n";
    stk.pop();
    cout<<stk.top()<<"\n";
    stk.pop();
    cout<<stk.top()<<"\n";
}