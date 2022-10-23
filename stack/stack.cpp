#include<iostream>
#include<stack>
using namespace std;
void printStackElements(stack<int> stack){
    while(!stack.empty()){
        cout<<stack.top()<<endl;
        stack.pop();
    }
}

int main(){
    //size,empty,push,pop,top

    stack<int>stackNumbers;
    stackNumbers.push(1);
    stackNumbers.push(2);
    stackNumbers.push(3);
    // stackNumbers.pop();
    // stackNumbers.pop();
    // stackNumbers.pop();
    printStackElements(stackNumbers);
    if(!stackNumbers.empty())
        cout<<"stack is not empty"<<endl;
    else
        cout<<"Is empty"<<endl;
    cout<<"Size of stack " <<stackNumbers.size()<<endl;
}