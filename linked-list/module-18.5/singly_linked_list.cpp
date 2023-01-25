#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
class LinkedList{
    public:
    int size;
    node* head;
    LinkedList(){
        head=NULL;
        size=0;
    }  
    node* CreateNewNode(int data){
        node* newNode = new node;
        newNode->data=data;
        newNode->next=NULL;
        return newNode;
    }
    void InsertAtHead(int data){
        node* newNode = CreateNewNode(data);
        size++;
        node* a = head;
        if(head==NULL){
            head=a;
        }
        newNode->next=a;
        head=newNode;
    }
    int getValue(int index){
        node* a = head;
        int curr_index=0;
        if(index>=size) return -1;
        while (a!=NULL)
        {
            if(curr_index==index) return a->data;
            curr_index++;
            a=a->next;
        }
        
    }
    void getSize(){
        cout<<size<<"\n";
        return;
    }
    void Traverse(){
        node* a = head;
        while(a!=NULL){
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<"\n";
    }
};
int main(){
    LinkedList l;
    l.InsertAtHead(1);
    l.InsertAtHead(2);
    l.InsertAtHead(3);
    l.getSize();
    l.Traverse();
    cout<<l.getValue(3);
}