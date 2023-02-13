#include<bits/stdc++.h>
using namespace std;
const int MAX_SIZE=5;
class Queue{
    public:
    int arr[MAX_SIZE];
    int l,r,size;
    Queue(){
        l=0;r=-1,size=0;
    }
    void Enqueue(int value){
        if(size==MAX_SIZE){
            cout<<"Queue is full!\n";
            return;
        }
        r++;
        if(r==MAX_SIZE){
            r=0;
        }
        arr[r]=value;
        size++;
    }
    void Dequeue(){
        if(size==0){
            cout<<"Queue is empty!\n";
            return;
        }
        l++;
        if(l==MAX_SIZE){
            l=0;
        }
        size--;
    }
    int Front(){
        if(size==0){
            cout<<"Queue is empty!";
            return -1;
        }
        return arr[l];
    }
    int Size(){
        return size;
    }
};
int main(){
    Queue q;
    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    q.Enqueue(4);
    q.Enqueue(5);
    cout<<"Size: "<<q.Size()<<"\n";
    cout<<"Front: "<<q.Front()<<"\n";
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    cout<<"Size: "<<q.Size()<<"\n";
    cout<<"Front: "<<q.Front()<<"\n";
    q.Enqueue(7);
    q.Enqueue(8);
    cout<<"Size: "<<q.Size()<<"\n";
    cout<<"Front: "<<q.Front()<<"\n";
}