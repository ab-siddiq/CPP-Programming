#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,v1,v2;
    cin>>n1;
    set<int>s1;
    for(int i=0;i<n1;i++){
        cin>>v1;
        s1.insert(v1);
    }

    cin>>n2;
    set<int>s2;
    for(int i=0;i<n2;i++){
        cin>>v2;
        s2.insert(v2);
    }
    set<int>setUnion;
    set_union(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(setUnion,setUnion.end()));
    for(auto i:setUnion)
        cout<<i<<" ";
}