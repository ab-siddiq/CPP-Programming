#include<bits/stdc++.h>
using namespace std;
/*
    Stack is last in first out (LIFO) data structure

*/
//const means once a value is assigned will never change of that variable
const int MAX_SIZE=500;
class Stack{
    public:
    int a[MAX_SIZE];
    int stack_size;
    Stack(){
        stack_size=0;
    }
    void push(int val){
        if(stack_size+1>MAX_SIZE){
            cout<<"Stack is full!\n";
            return;
        }
        a[stack_size]=val;
        stack_size=stack_size+1;
    }
    void pop(){
        if(stack_size==0){
            cout<<"Stack is empty!\n";
            return;
        }
        a[stack_size-1]=0;
        stack_size=stack_size-1;
    }
    int top(){
        if(stack_size==0){
            cout<<"Stack is empty!\n";
            return -1;
        }
        return a[stack_size-1];
    }
};
int main(){
    Stack stk;
    stk.push(1);
    cout<<stk.top()<<"\n";
    stk.push(2);
    cout<<stk.top()<<"\n";
    stk.push(3);
    cout<<stk.top()<<"\n";
    stk.pop();
    cout<<stk.top()<<"\n";
    stk.pop();
    cout<<stk.top()<<"\n";
    stk.pop();
    cout<<stk.top()<<"\n";
}