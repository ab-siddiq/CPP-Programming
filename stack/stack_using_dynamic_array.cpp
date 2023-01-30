#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int stack_size;
    int *a;
    int array_capacity;
    Stack(){
        stack_size=0;
        a = new int[1];
        array_capacity=1;
    }
    void increase_capacity(){
        int* temp;
        temp = new int[array_capacity*2];
        for(int i=0;i<array_capacity;i++)
            temp[i]=a[i];
        swap(a,temp);
        delete []temp;
        array_capacity*=2;
    }
    void push(int val){
        if(stack_size+1>+array_capacity){
            increase_capacity();
        }
        a[stack_size]=val;
        stack_size++;
    }
    void pop(){
        if(stack_size==0){
            cout<<"Stack is empty!\n";
            return;
        }
        stack_size--;
        a[stack_size]=0;
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