#include<bits/stdc++.h>
using namespace std;
template<class T>
class node{
    public:
    T data;
    node* next;
};
template<class T>
class Stack{
    public:
    int size;
    node<T>* next;
    node<T>* head;
    Stack(){
        size=0;
        head=NULL;
    }
    node<T>* CreateNewNode(T data){
        node<T>* newNode = new node<T>;
        newNode->next=NULL;
        newNode->data=data;
        return newNode;
    }
    void Push(T data){
         node<T>* newNode = CreateNewNode(data);
         size++;
         if(head==NULL){
            newNode->data=data;
            head=newNode;
            return;
         }
         newNode->next=head;
         head=newNode;
    }
    void Pop(){
        node<T>* a = head;
        if(size==0){
            cout<<"Stack is empty!\n";
            return;
        }
        if(size==1){
            delete head;
            head=NULL;
            size--;
            return;
        }
        head=a->next;
        size--;
        delete a;
    }
    T Top(){
        if(size==0){
            cout<<"Stack is empty!\n";
            T a;
            return a;
        }
        return head->data;
    }
    int Size(){
        return size;
    }
    void Traverse(){
        node<T>* a = head;
        if(size==0){
            cout<<"Stack is empty!\n";
            return;
        }
        while(a!=NULL){
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<"\n";
    }
};
int main(){
    Stack<char> s;
    s.Push('a');
    s.Push('b');
    s.Push('c');
    cout<<"Top: "<<s.Top()<<"\n";
    cout<<"Size: "<<s.Size()<<"\n";
    s.Traverse();
    s.Pop();
    cout<<"Top: "<<s.Top()<<"\n";
    cout<<"Size: "<<s.Size()<<"\n";
    s.Traverse();
    s.Pop();
    cout<<"Top: "<<s.Top()<<"\n";
    cout<<"Size: "<<s.Size()<<"\n";
    s.Traverse();
    s.Push('c');
    cout<<"Top: "<<s.Top()<<"\n";
    cout<<"Size: "<<s.Size()<<"\n";
    s.Traverse();
    s.Pop();
    cout<<"Top: "<<s.Top()<<"\n";
    cout<<"Size: "<<s.Size()<<"\n";
    s.Traverse();
    s.Pop();
    cout<<"Top: "<<s.Top()<<"\n";
    cout<<"Size: "<<s.Size()<<"\n";
    s.Traverse();
    cout<<"Size: "<<s.Size()<<"\n";
}