#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>dq;
    int n,v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v;
        dq.push_back(v);
    }
    sort(dq.begin(),dq.end());
    for(auto i:dq)
        cout<<i<<" ";
}