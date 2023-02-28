#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
   int value;
	Node* nxt;
	Node* prv;

};
class LinkedList
{
public:
    int size;
    Node *head;
    Node *tail;
    LinkedList()
    {
        size = 0;
        head = NULL;
        tail = NULL;
    }
    Node *CreateNewNode(int value)
    {
        Node *newNode = new Node;
        newNode->value = value;
        newNode->nxt = NULL;
        newNode->prv = NULL;
        return newNode;
    }
    void insertHead(int value)
    {
        
        Node *newNode = CreateNewNode(value);
        if (size == 0)
        {
            size++;
            head = newNode;
            tail = newNode;
            return;
        }
        size++;
        newNode->nxt = head;
        head->prv = newNode;
        head = newNode;
    }
    void insertTail(int value){
        Node *newNode = CreateNewNode(value);
        if (size == 0)
        {
            size++;
            head = newNode;
            tail = newNode;
            return;
        }
        size++;
        newNode->prv=tail;
        tail->nxt=newNode;
        tail=newNode;
    }
    void insertMid(int value){
        Node *newNode = CreateNewNode(value);
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
        Node* a = head;
        while (count!=mid){
            a=a->nxt;
            count++;
        }
        size++;
        Node* b = a->prv;
        newNode->nxt=a;
        a->prv=newNode;
        newNode->prv=b;
        b->nxt=newNode;
        
    }
    void print()
    {
        Node *a = head;
        while (a != NULL)
        {
            cout << a->value << " ";
            a=a->nxt;
        }
        cout << "\n";
    }
    int Size(){
        return size;
    }
};
int main()
{
    LinkedList dl;
    dl.insertHead(1);
    dl.insertHead(2);
    dl.insertHead(3);
    dl.insertTail(-1);
    dl.insertTail(-2);
    dl.print();
    cout<<dl.Size()<<"\n";
    dl.insertMid(11);
    dl.print();
    cout<<dl.Size()<<"\n";
    dl.insertMid(12);
    dl.print();
    cout<<dl.Size()<<"\n";
}