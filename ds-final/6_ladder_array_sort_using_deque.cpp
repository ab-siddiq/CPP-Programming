#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>dq;
    deque<int>dqSort;
    int n,v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v;
        dq.push_back(v);
    }
    int max=0;
    // sort(dq.begin(),dq.end());
    // for(auto i:dq)
    //     cout<<i<<" ";
    while(!dq.empty()){
        if(dq.front()>dq.back()){
            dqSort.push_back(dq.back());
            dq.pop_back();
        }else{
            dqSort.push_back(dq.front());
            dq.pop_front();
        }
    }
    for(auto i:dqSort)
        cout<<i<<" ";
}