#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    cout<<"isEmpty= "<<q.empty()<<"\n";
    cout<<"front= "<<q.front()<<"\n";
    cout<<"size= "<<q.size()<<"\n";
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<"isEmpty= "<<q.empty()<<"\n";
    cout<<"front= "<<q.front()<<"\n";
    cout<<"size= "<<q.size()<<"\n";
    q.pop();
    cout<<"front= "<<q.front()<<"\n";
}