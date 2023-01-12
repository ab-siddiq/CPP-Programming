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
    l.InsertAtHead(4);
    l.InsertAtHead(5);
    l.InsertAtHead(4);
    l.InsertAtHead(5);

    l.Traverse();
    l.SearchAllValue(5);
}
