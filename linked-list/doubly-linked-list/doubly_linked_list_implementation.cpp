#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
};
class DoublyLinkedList{
    public:
    node* head;
    int size;
    DoublyLinkedList(){
        head=NULL;
        size=0;
    }
    //create new node and return
    node* CreateNewNode(int data){
        node* newNode = new node;
        newNode->data=data;
        newNode->next=NULL;
        newNode->prev=NULL;
        return newNode;
    }
    //insert at head
    void InsertAtHead(int data){
        node* newNode = CreateNewNode(data);
        size++;
        if(head==NULL){
            head=newNode;
            return;
        }
        node* a = head;

        /*
        head--
        -------------------  >---> -------------------
        |NULL|   1 |  40 |         |  30   |  2  |NULL   
        ------------------- <---<  -------------------
                30                          40
        -------------------        -------------------
       
        newNode
        -------------------
        |NULL|   1 |  NULL|
        -------------------
        |prev| data|  next|
        -------------------
       
        insert at head
        -------------------  >---> -------------------
        |20|   1 |  40 |         |  30   |  2  |NULL   
        ------------------- <---<  -------------------
        ^
        |       30                          40
        ^
        |  head
        ------------------- <<<  ------------------- 
        |NULL|   1 |  30|   <<<  |NULL|   1 |  NULL| 
        ------------------- <<<  ------------------- 
        |prev| data|  next|      |prev| data|  next|  
        -------------------      ------------------- 
                20                      20
        newNode->next = newNode=NULL=> a
        */
        //point new node null to previous node location
        newNode->next=a;
        //point prevoius node previous to new node location
        a->prev=newNode;
        //point head to new node
        head=newNode;
    }

    //insert at any index
    void InsertAtAnyIndex(int index, int data){
        node* a = head;
        if(index>size){
            return;
        }
        if(index==0){
            InsertAtHead(data);
            return;
        }
        int curr_index=0;
        while(curr_index!=index-1){
            a=a->next;
            curr_index++;
        }
         node* newNode = CreateNewNode(data);
         newNode->next = a->next;
         newNode->prev = a;
         node* b = a->next;
         b->prev = newNode;
         a->next = newNode;
         size++;
    }

    //delete from any index
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
        if(index==0){
            head=c;
        }
        size--;
    }
    void Traverse(){
        node* a = head;
        while(a!=NULL){
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<"\n";
    }
    void getSize(){
        cout<<size<<"\n";
        return;
    }
};
int main(){
    DoublyLinkedList dl;
    dl.InsertAtHead(10);
    dl.InsertAtHead(20);
    dl.InsertAtHead(30);
    dl.Traverse();
    dl.InsertAtAnyIndex(2,40);
    dl.Traverse();
    dl.getSize();
    dl.DeleteFromAnyIndex(2);
    dl.Traverse();
    dl.getSize();
}