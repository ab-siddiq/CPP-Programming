#include<bits/stdc++.h>
using namespace std;
const int MAX_SIZE=10;
template <class T>
class Stack{
    public:
    T a[MAX_SIZE];
    T stack_size;
    Stack(){
        stack_size=0;
    }
    void push(T value){
        if(stack_size+1>MAX_SIZE){
            cout<<"Stack is full!\n";
            return;
        }
        a[stack_size]=value;
        stack_size++;
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
    Stack<int> stk;
    stk.push(1);
    // stk.push(2);
    // stk.push(3);
    // stk.push(4);
    // stk.push(5);
    // stk.push(6);
    // stk.push(7);
    // stk.push(8);
    // stk.push(9);
    // stk.push(10);
    // stk.push(11);
    cout<<stk.top()<<"\n";
    stk.pop();
    cout<<stk.top()<<"\n";
    stk.pop();
    cout<<stk.top()<<"\n";
}