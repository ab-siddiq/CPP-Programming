#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
//
class LinkedList
{
public:
    node *head;
    int size;
    LinkedList()
    {
        head = NULL;
        size=0;
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
        //linked list isze
        size++;
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

    //insert at any index
    void InsertAtAnyIndex(int index, int value){
        //pointing a pointer to the head
        node* a = head;
        int current_index=0;
        if(index<0 || index>size){
            return;
        }
        //if index is 0 then add in head
        if(index==0){
            InsertAtHead(value);
            return;
        }
        //linked list size
        size++;
        //move the pointer to index-1 postion
        while(current_index != index-1){
            a=a->next;
            current_index++;
        }
        //create a new node
        node* newNode = CreateNewNode(value);
        //move index-1 next pointer to the newNode next (connext idnex-1 next with newNode)
        newNode->next=a->next;
        //point index-1 next pointer to the newNode (connecting to the new node)
        a->next=newNode;
    }

    //delete from head
    void DeleteAtHead(){
        if(head==NULL){
            return;
        }
        size--;
        node* a = head;
        //point head to current head next
        head=a->next;
        //free disconnected memory
        delete a;
    }

    //delete from any index
    void DeleteAtAnyIndex(int index){
        if(index<0 || index>size-1){
            return;
        }
        if(index==0){
            DeleteAtHead();
            return;
        }
        size--;
        node* a = head;
        int current_index=0;
        while(current_index!=index-1){
            a=a->next;
            current_index++;
        }
        // a is pointing to index-1 and b is pointing to index
        node* b = a->next;
        //move index-1 next to index next
        a->next=b->next;
        //erase memory of delated node
        delete b;
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

    //get size of the link list
    int getSize(){
        return size;
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
    l.InsertAtHead(4);
    l.InsertAtHead(5);
    l.InsertAtHead(4);
    l.InsertAtHead(5);
    cout<<l.getSize()<<"\n";
    l.Traverse();

    l.InsertAtAnyIndex(4,20);
    cout<<l.getSize()<<"\n";
    l.Traverse();

    l.DeleteAtHead();
    cout<<l.getSize()<<"\n";
    l.Traverse();

    l.DeleteAtAnyIndex(2);
    cout<<l.getSize()<<"\n";
    l.Traverse();
}
