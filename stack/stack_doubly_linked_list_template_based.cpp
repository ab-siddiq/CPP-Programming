#include<bits/stdc++.h>
using namespace std;
template<class T>
class node{
    public:
    T data;
    node* next;
    node* prev;
};
template<class T>
class DoublyLinkedList{
    public:
    int size;
    node<T>* head;
    DoublyLinkedList(){
        size=0;
        head=NULL;
    }
    node<T>* CreateNewNode(T val){
        node<T>* newNode = new node<T>;
        newNode->data=val;
        newNode->next=NULL;
        newNode->prev=NULL;
        return newNode;
    }
    void InsertAtHead(T val){
        size++;
        node<T>* newNode = CreateNewNode(val);
        if(head==NULL){
            head=newNode;
            return;
        }
        node<T>* a = head;
        newNode->next=a;
        a->prev=newNode;
        head=newNode;
    }
    void DeleteAtHead(){
        if(size==0) return;
        node<T>* a =head;
        node<T>* b = a->next;
        delete a;
        if(b!=NULL) b->prev=NULL;
        head=b;
        size--;
    }
    
    int getSize(){
        return size;
    }
};
template<class T>
class Stack{
    public:
    Stack(){

    }
    DoublyLinkedList<T> dl;
    void push(T val){
        dl.InsertAtHead(val);
    }
    void pop(){
        if(dl.getSize()==0){
            cout<<"Stack is empty!\n";
            return;
        }
        dl.DeleteAtHead();
    }
    T top(){
        if(dl.getSize()==0){
            cout<<"Stack is empty!\n";
            T a;
            return a;
        }
        return dl.head->data;
    }
};
int main(){
    Stack<int> stk;
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