#include<bits/stdc++.h>
using namespace std;
const int MAX_SIZE=500;
class Queue{
    public:
    int arr[MAX_SIZE];
    int l,r;
    Queue(){
        l=0;r=-1;
    }
    void Enqueue(int value){
        if(r+1>MAX_SIZE){
            cout<<"Queue is full!\n";
            return;
        }
        r++;
        arr[r]=value;
    }
    void Dequeue(){
        if(l>r){
            cout<<"Queue is empty!\n";
            return;
        }
        l++;
    }
    int Front(){
        return arr[l];
    }
    int size(){
        return r-l+1;
    }
};
int main(){
    Queue q;
    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    cout<<"Size: "<<q.size()<<"\n";
    cout<<"Front: "<<q.Front()<<"\n";
    q.Dequeue();
    cout<<"Size: "<<q.size()<<"\n";
    cout<<"Front: "<<q.Front()<<"\n";
}