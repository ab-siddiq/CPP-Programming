#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *nxt;
    Node *prv;
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
    void insertTail(int value)
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
        newNode->prv = tail;
        tail->nxt = newNode;
        tail = newNode;
    }
    void insertMid(int value)
    {
        Node *newNode = CreateNewNode(value);
        if (size == 0)
        {
            size++;
            head = newNode;
            tail = newNode;
            return;
        }
        if (size < 2)
        {
            cout << "Size must be greater or equal to 2!\n";
            return;
        }
        int count = 0;
        int mid = size / 2;
        Node *a = head;
        while (count != mid)
        {
            a = a->nxt;
            count++;
        }
        size++;
        Node *b = a->prv;
        newNode->nxt = a;
        a->prv = newNode;
        newNode->prv = b;
        b->nxt = newNode;
    }
    void print()
    {
        Node *a = head;
        while (a != NULL)
        {
            cout << a->value << " ";
            a = a->nxt;
        }
        cout << "\n";
    }
    int Size()
    {
        return size;
    }
    void merge(LinkedList a)
    {
        if(size==0 && a.size==0){
            cout<<"Linked list are empty!\n";
            return;
        }
        Node* x = a.head;
        Node* z = a.tail;
        Node* y = tail;
        y->nxt=x;
        x->prv=y;
        y=z;
    }
};
int main()
{
    LinkedList a;
    LinkedList b;

    a.insertHead(1);
    a.insertTail(5);
    a.insertMid(3);
    a.insertHead(0);
    a.insertTail(10);
    a.print(); // prints  0 1 3 5 10

    b.insertHead(10);
    b.insertTail(50);
    b.insertMid(30);
    b.insertHead(9);
    b.insertTail(100);
    b.print(); // prints  9 10 30 50 100

    a.merge(b);
    a.print(); // prints  0 1 3 5 10 9 10 30 50 100
    b.print(); // prints  9 10 30 50 100
}