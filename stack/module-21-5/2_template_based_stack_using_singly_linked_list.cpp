#include<bits/stdc++.h>
using namespace std;
template<class T>
class node{
    public:
    T data;
    node<T>* next;
};
template<class T>
class SinglyLinkedList{
    public:
    T size;
    node<T>* head;
    SinglyLinkedList(){
        size=0;
        head=NULL;
    }
    node<T>* CreateNewNode(T data){
        node<T>* newNode = new node<T>;
        newNode->data=data;
        newNode->next=NULL;
        return newNode;
    }
    void InsertAtHead(T data){
        size++;
        node<T>* newNode=CreateNewNode(data);
         if(head==NULL){
            head=newNode;
            return;
        }
        newNode->next=head;
        head=newNode;
    }
    void DeleteAtHead(){
        node<T>* a = head;
        if(size==0){
            cout<<"Linked list is empty!\n";
            return;
        }
        head=a->next;
        size--;
        delete a;
    }
    void Traverse(){
        node<T>* a = head;
        if(size==0){
            cout<<"Linked list is empty!\n";
            return;
        }
        while (a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<"\n";
        
    }
    T getSize(){
        return size;
    }
};
template<class T>
class Stack{
    public:
    T stack_size;
    Stack(){
        stack_size=0;
    }
    SinglyLinkedList<T> l;
    void push(T data){
        l.InsertAtHead(data);
        stack_size++;
    }
    void pop(){
        if(stack_size==0){
            cout<<"Stack is empty!\n";
            return;
        }
        l.DeleteAtHead();
        stack_size--;
    }
    T top(){
        if(stack_size==0){
            cout<<"Stack is empty!\n";
            T a;
            return a;
        }
        return l.head->data;
    }
};
int main(){
    Stack<int> s;
    s.push(1);  
    s.push(2);  
    cout<<s.top()<<"\n";
    s.pop();
    cout<<s.top()<<"\n";
    s.pop();
    cout<<s.top()<<"\n";
}