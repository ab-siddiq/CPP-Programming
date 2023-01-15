#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
class LinkedList
{
public:
    node *head;
    LinkedList()
    {
        head = NULL;
    }
    // create new node with data=value and next=null
    node *CreateNewNode(int value)
    {
        node *newNode = new node;
        newNode->data = value;
        newNode->next = NULL;
        return newNode;
    }
    // insert new value at head
    void InsertAtHead(int value)
    {
        node *a = CreateNewNode(value);
        if (head == NULL)
        {
            head = a;
            return;
        }

        // if head not null
        a->next = head;
        head = a;
    }
    

    // print the link list
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
    void recursiveReverse(node* a){
            if(!a) return;
            recursiveReverse(a->next);
            cout<<a->data<<" ";
    }
    void printReverse(){
        // reverse(head);
        
        node* a = head;
        recursiveReverse(a);
        cout<<endl;
    }
    int getSize(){
        int size=0;
         node *a = head;
        while (a != NULL)
        {
            a = a->next;
            size++;
        }
        return size;
    }
    int getValue(int index){
        node* a = head;
        int indx=0;
        while(a!=NULL){
            if(indx==index){
                return a->data;
            }
            a=a->next;
            indx++;
            
        }
        return -1;
    }
    void swapFirst(){
        int temp = head->data;
        head->data = head->next->data;
        head->next->data = temp;
    }
    // search single value
    int SearchDistinctValue(int value)
    {
        node *a = head;
        int index = 0;
        while (a != NULL)
        {
            if (a->data == value)
            {
                return index;
            }
            a = a->next;
            index++;
        }
        return -1;
    }
    // search all possible occurence
    void SearchAllValue(int value)
    {
        node *a = head;
        int index = 0;
        while (a != NULL)
        {
            if (a->data == value)
            {
                cout << index << " ";
            }
            a = a->next;
            index++;
        }
    }
};
int main()
{
    LinkedList l;
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(5);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout<<l.getValue(2)<<"\n";
    cout<<l.getValue(6)<<"\n";

    l.printReverse();
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();
   
}
