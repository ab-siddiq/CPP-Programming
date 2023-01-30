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
    void Traverse(){
        node<T>* a = head;
        while(a!=NULL){
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<"\n";
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
    stk.push(3);
    stk.push(1);
    stk.push(5);
    stk.push(4);
    stk.push(2);
    cout<<stk.top();
    stk.dl.Traverse();
    Stack<int>temp;
    while(stk.dl.getSize()>0){
        int t = stk.top();
        stk.pop();
        while(temp.dl.getSize()>0){
            if(temp.top()<t){
                break;
            }
            stk.push(temp.top());
            temp.pop();
        }
        temp.push(t);
    }
    swap(stk,temp);
    stk.dl.Traverse();
}