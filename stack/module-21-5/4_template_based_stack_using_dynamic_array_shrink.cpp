#include<bits/stdc++.h>
using namespace std;
template<class T>
class Stack{
    public:
    T* a;
    int stack_size;
    int stack_capacity;
    Stack(){
        a = new T[1];
        stack_size=0;
        stack_capacity=1;
    }
    void IncreaseStackSize(){
        T* temp;
        temp = new T[stack_capacity*2];
        for(int i=0;i<stack_capacity;i++){
            temp[i]=a[i];
        }
        swap(a,temp);
        delete []temp;
        stack_capacity*=2;
        
    }
    void decrease_size(){
        cout<<"cal";
            T* temp;
            temp = new T[(stack_capacity-stack_capacity/2)+4];
            stack_capacity=(stack_capacity-stack_capacity/2)+4;
            for(int i=0;i<stack_capacity;i++){
                temp[i]=a[i];
            }
            swap(a,temp);
            delete[]temp;
    }
    void push(T data){
        if(stack_size+1>stack_capacity){
            IncreaseStackSize();
        }
        if(stack_size+1<stack_capacity/2){
            decrease_size();
        }
        a[stack_size]=data;
        stack_size++;
        cout<<"stack size "<<stack_size<<endl;
        cout<<"stack capacity "<<stack_capacity<<endl;
    }
    void pop(){
        if(stack_size==0){
            cout<<"Stack is empty!\n";
            return;
        }
        stack_size--;
    }
    T top(){
        if(stack_size==0){
            cout<<"Stack is empty!\n";
            T a;
            return a;
        }
        return a[stack_size-1];
    }
    
};
int main(){
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<s.top()<<"\n";
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(10);
    cout<<s.top()<<"\n";
}