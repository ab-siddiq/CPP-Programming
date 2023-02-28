#include<bits/stdc++.h>
using namespace std;
const int MAX_SIZE=100;
class Queue{
    public:
    int arr[MAX_SIZE];
    int l,r;
    Queue(){
        l=0;r=-1;
    }
    void enqueue(int value){
        if(r+1>MAX_SIZE){
            cout<<"Queue is full!\n";
            return;
        }
        r++;
        arr[r]=value;
    }
    void dqueue(){
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
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout<<"Size: "<<q.size()<<"\n";
    cout<<"Front: "<<q.Front()<<"\n";
    q.dqueue();
    cout<<"Size: "<<q.size()<<"\n";
    cout<<"Front: "<<q.Front()<<"\n";
}