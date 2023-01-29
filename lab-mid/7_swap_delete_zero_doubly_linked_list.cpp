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
    node *head;
    int size;
    DoublyLinkedList()
    {
        head = NULL;
        size = 0;
    }
    node *CreateNewNode(int data)
    {
        node *newNode = new node;
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;
        return newNode;
    }
    void InsertAtHead(int data)
    {
        node *newNode = CreateNewNode(data);
        size++;
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        node *a = head;
        newNode->next = a;
        a->prev = newNode;
        head = newNode;
    }


    void swap(int i, int j)
    {
        node *a = head;
        node *b = head;
        int a_curr_index = 0;
        int b_curr_index = 0;
        while (a_curr_index != i)
        {
            a = a->next;
            a_curr_index++;
        }
        while (b_curr_index != j)
        {
            b = b->next;
            b_curr_index++;
        }
        int val=a->data;
        a->data=b->data;
        b->data=val;
    }
    void DeleteFromAnyIndex(int index){
        node* a = head;
        int curr_index=0;
        while (curr_index!=index)
        {
            a=a->next;
            curr_index++;
        }
        node* b = a->prev;
        node* c = a->next;
        if(b!=NULL){
            b->next=c;
        }
        if(c!=NULL){
            c->prev=b;
        }
        delete a;
        if(index==0){
            head=c;
        }
        size--;
    }
    void deleteZero()
    {
        vector<int>zero;
        node* t = head;
        int curr_index = 0;
        while (t != NULL)
        {
            if(t->data==0){
                zero.push_back(curr_index);
            }
            t=t->next;
            curr_index++;
        }
        for(int i=0;i<zero.size();i++){
            DeleteFromAnyIndex(zero[i]-i);
        }  
    }
    void Traverse()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->next;
        }
        cout << "\n";
    }
    void getSize()
    {
        cout << size << "\n";
    }
};
int main()
{
    DoublyLinkedList dl;
    dl.getSize();
    dl.InsertAtHead(5);
    dl.InsertAtHead(0);
    dl.InsertAtHead(0);
    dl.InsertAtHead(2);
    dl.InsertAtHead(0);
    // dl.InsertAtHead(5);
    // dl.InsertAtHead(4);
    // dl.InsertAtHead(3);
    // dl.InsertAtHead(2);
    // dl.InsertAtHead(1);
    dl.getSize();
    dl.Traverse();
    dl.swap(1,4);
    dl.getSize();
    dl.Traverse();
    dl.deleteZero();
    dl.getSize();
    dl.Traverse();
}
