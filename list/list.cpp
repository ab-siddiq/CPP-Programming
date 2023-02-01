#include<bits/stdc++.h>
using namespace std;
void print(list<int> l){
    // list<int>::iterator a = l.begin();
    auto a = l.begin();
    while (a!=l.end())
    {
        cout<<*a<<" ";
        a++;
    }
    cout<<"\n";
    
}
void InsertAtAnyPosition(list<int>&l,int index,int value){
    auto it = l.begin();
    advance(it,index);
    l.insert(it,value);
}
void DeleteAtAnyPosition(list<int>&l,int index){
    auto it = l.begin();
    advance(it,index);
    l.erase(it);
}
int main(){
    list<int> l;
    //insert at head O(1)
    l.push_front(1);
    l.push_front(3);
    l.push_front(5);
    print(l);
    //insert at tail O(1)
    l.push_back(2);
    l.push_back(4);
    l.push_back(6);
    print(l);
    //delete from head O(1)
    l.pop_front();
    print(l);
    //delete from tail O(1)
    l.pop_back();
    print(l);
    //insert at any position
    InsertAtAnyPosition(l,2,33);
    print(l);
    //delete at any position
    DeleteAtAnyPosition(l,2);
    print(l);
    //get size
    cout<<l.size()<<"\n";
}