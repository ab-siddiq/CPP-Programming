#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    //push in the stack
    st.push(1);
    st.push(2);
    st.push(2);
    //pop from the stack
    st.pop();
    //get top element
    cout<<st.top()<<"\n";
    //get size of the stack
    cout<<st.size()<<"\n";
    st.pop();
    st.pop();
    cout<<st.top()<<"\n";
    cout<<st.size()<<"\n";
}