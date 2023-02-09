#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
class Queue{
    public:
    int size;
    node* head;
    node* tail;
    Queue(){
        size=0;
        head=NULL;
        tail=NULL;
    }
    node* CreateNewNode(int data){
        node* newNode = new node;
        newNode->data=data;
        newNode->next=NULL;
        return newNode;
    }
    void Enqueue(int data){
        node* newNode = CreateNewNode(data);
        size++;
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=newNode;
    }
    void Dequeue(){
        if(size==0){
            cout<<"Queue is empty!\n";
            return;
        }
        if(size==1){
            delete head;
            head=NULL;
            tail=NULL;
            size--;
            return;
        }
        node* a = head;
        head = head->next;
        size--;
        delete a;
    }
    int Front(){
        if(size==0){
            cout<<"Queue is empty!\n";
            return -1;
        }
        return head->data;
    }
    void Traverse(){
        node* a = head;
        while (a!=NULL){
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
    Queue q;
    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    cout<<"front= "<<q.Front()<<"\n";
    cout<<"size= "<<q.Size()<<"\n";
    cout<<"Queue= ";q.Traverse();
    q.Dequeue();
    q.Dequeue();
    cout<<"front= "<<q.Front()<<"\n";
    cout<<"size= "<<q.Size()<<"\n";
    cout<<"Queue= ";q.Traverse();
   cout<<"front= "<<q.Front()<<"\n";
    cout<<"size= "<<q.Size()<<"\n";
}