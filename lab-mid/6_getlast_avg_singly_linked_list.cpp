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
    void InsertAthead(int data){
        node* newNode = CreateNewNode(data);
        size++;
        if(head==NULL){
            head=newNode;
            return;
        }
        node* a = head;
        newNode->next=a;
        head=newNode;
    }
    int getLast(){
        node* a=head;
        int curr_index=0;
        while (a!=NULL)
        {
            a=a->next;
            curr_index++;
            
            if(curr_index==size-1){
               return a->data;
            }
        }
       return -1;
    }
    double getAverage(){
        node* a =head;
        double sum=0;
        double avg=0;
        while (a!=NULL)
        {
            sum+=a->data;
            a=a->next;
        }
        avg=sum/size;
       return avg;
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
    l.InsertAthead(7);
    l.InsertAthead(4);
    l.InsertAthead(6);
    l.InsertAthead(2);
    l.InsertAthead(3);
    l.getSize();
    l.Traverse();
    cout<<l.getLast()<<" "<<"\n";
    cout<<l.getAverage()<<"\n";
}
