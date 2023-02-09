#include<bits/stdc++.h>
using namespace std;
/*
    Deque => Double Ended Queue
*/
class node{
    public:
    int data;
    node* next;
    node* prev;
};
class Deque{
    public:
    int size;
    node* head;
    node* tail;
    Deque(){
        size=0;
        head=NULL;
        tail=NULL;
    }
    node* CreateNewNode(int data){
        node* newNode = new node;
        newNode->next=NULL;
        newNode->prev=NULL;
        return newNode;
    }
    void PushBack(int data){
        node* newNode = CreateNewNode(data);
        if(size==0){
            head=newNode;
            tail=newNode;
            size++;
            return;
        }
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode; 
        size++;
    }
    void PushFront(int data){
        node* newNode = CreateNewNode(data);
        if(size==0){
            head=newNode;
            tail=newNode;
            size++;
            return;
        }
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
        size++;
    }
    void PopBack(){
        if(size==1){
            delete tail;
            head=NULL;
            tail=NULL;
            size--;
            return;
        }
        node* a = tail;
        tail=tail->prev;
        tail->next=NULL;
        delete a;
        size--;
    }
    void PopFront(){
        if(size==1){
            delete head;
            head=NULL;
            tail=NULL;
            size--;
            return;
        }
        node* a = head;
        head=head->next;
        head->prev=NULL;
        delete a;
        size--;
    }
    void Traverse(){
        node* a = head;
        while(a!=NULL){
            cout<<a->data<<" ";
            a=a->next;        
        }
        cout<<"\n";
    }
    int Size(){
        return size;
    }
};
int main(){
    Deque d;
    d.PushBack(1);
    d.PushBack(2);
    d.PushBack(2);
    d.Traverse();
    cout<<"size: "<<d.Size()<<"\n";
}