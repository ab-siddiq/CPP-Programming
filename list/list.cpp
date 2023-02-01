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
}