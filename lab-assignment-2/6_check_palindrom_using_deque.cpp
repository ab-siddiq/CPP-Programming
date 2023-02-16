#include<bits/stdc++.h>
using namespace std;
template<class T>
class node{
    public:
    T data;
    node* next;
    node* prev;
};
template<class T>
class Deque{
    public:
    int size;
    node<T>* head;
    node<T>* tail;
    Deque(){
        head=NULL;
        tail=NULL;
        size=0;
    }
    node<T>* CreateNewNode(T data){
        node<T>* newNode = new node<T>;
        newNode->data=data;
        newNode->next=NULL;
        newNode->prev=NULL;
        return newNode;
    }
    void PushFront(T data){
        node<T>* newNode = CreateNewNode(data);
        if(size==0){
            head=newNode;
            tail=newNode;
            size++;
            return;
        }
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
        size++;
    }
    T Front(){
        if(size==0){
            cout<<"Deque is empty!\n";
            T a;
            return a;
        }
        return head->data;
    }
    void PopFront(){
        node<T>* a = head;
        if(size==0){
            return;
        }
        if(size==1){
            delete head;
            head=NULL;
            tail==NULL;
            size--;
            return;
        }
        head=a->next;
        delete a;
        size--;
    }
    void PushBack(T data){
        node<T>* newNode = CreateNewNode(data);
        if(size==0){
            head=newNode;
            tail=newNode;
            size++;
            return;
        }
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
        size++;
    }
    T Back(){
        if(size==0){
            cout<<"Deque is empty!\n";
            T a;
            return a;
        }
        return tail->data;
    }
    void PopBack(){
        node<T>* a = tail;
        if(size==0){
            return;
        }
        if(size==1){
            delete tail;
            head=NULL;
            tail=NULL;
            size--;
            return;
        }
        tail=a->prev;
        tail->next=NULL;
        delete a;
        size--;
    }
    void Traverse(){
        node<T>* a = head;
        if(size==0){
            cout<<"Deque is empty!\n";
            return;
        }
        while (a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<"\n";
    }
    int Size(){
        return size;
    }
};
int main(){
    Deque<char> d;
    string s;
    cin>>s;
    int result=0;
    vector<char>p;
    for(int i=0;i<s.size();i++){
        d.PushBack(s[i]);
    }
    // cout<<"Deque: ";d.Traverse();
    // cout<<"Front: "<<d.Front()<<"\n";
    // cout<<"Back: "<<d.Back()<<"\n";
    // cout<<"Size: "<<d.Size()<<"\n";
    while (d.Size()!=0)
    {
        if(d.Back()==d.Front()){
            d.PopBack();
            d.PopFront();
            result=1;
        }else{
            result=0;
            break;
        }
    }
    if(result) cout<<"Yes\n";
    else cout<<"No\n";
}