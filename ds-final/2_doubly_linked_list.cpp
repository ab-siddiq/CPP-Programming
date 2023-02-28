#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
};
class DoublyLinkedList
{
public:
    int size;
    node *head;
    node *tail;
    DoublyLinkedList()
    {
        size = 0;
        head = NULL;
        tail = NULL;
    }
    node *CreateNewNode(int data)
    {
        node *newNode = new node;
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;
        return newNode;
    }
    void insertHead(int value)
    {
        
        node *newNode = CreateNewNode(value);
        if (size == 0)
        {
            size++;
            head = newNode;
            tail = newNode;
            return;
        }
        size++;
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    void insertTail(int value){
        node *newNode = CreateNewNode(value);
        if (size == 0)
        {
            size++;
            head = newNode;
            tail = newNode;
            return;
        }
        size++;
        newNode->prev=tail;
        tail->next=newNode;
        tail=newNode;
    }
    void insertMid(int value){
        node *newNode = CreateNewNode(value);
        if (size == 0)
        {
            size++;
            head = newNode;
            tail = newNode;
            return;
        }
        if(size<2){
            cout<<"Size must be greater or equal to 2!\n";
            return;
        }
        int count=0;
        int mid = size/2;
        node* a = head;
        cout<<mid<<" m\n";
        while (count!=mid){
            a=a->next;
            count++;
        }
        cout<<a->data<<" d\n";
        cout<<count<<" c\n";
        size++;
        node* b = a->prev;
        newNode->next=a;
        a->prev=newNode;
        newNode->prev=b;
        b->next=newNode;
        
    }
    void Traverse()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a=a->next;
        }
        cout << "\n";
    }
    int Size(){
        return size;
    }
};
int main()
{
    DoublyLinkedList dl;
    dl.insertHead(1);
    dl.insertHead(2);
    dl.insertHead(3);
    dl.insertTail(-1);
    dl.insertTail(-2);
    dl.Traverse();
    cout<<dl.Size()<<"\n";
    dl.insertMid(11);
    dl.insertMid(12);
    dl.Traverse();
    cout<<dl.Size()<<"\n";
}