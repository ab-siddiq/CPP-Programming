#include<bits/stdc++.h>
using namespace std;
template<class T>
class Stack{
    public:
    T* a;
    int stack_size;
    int stack_array_capacity;
    Stack(){
        stack_size=0;
        a = new T[1];
        stack_array_capacity=1;
    }
    void increase_capacity(){
        T* temp;
        temp = new int[stack_array_capacity*2];
        for(int i=0;i<stack_array_capacity;i++)
            temp[i]=a[i];
        swap(a,temp);
        delete []temp;
        stack_array_capacity*=2;
    }
    void push(T val){
        if(stack_size+1>stack_array_capacity){
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
    Stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<st.top()<<"\n";
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<st.top()<<"\n";
}