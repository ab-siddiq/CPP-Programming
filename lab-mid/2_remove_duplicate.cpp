#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int v;
        cin>>v;
        mp[v]++;
    }
    for(auto it:mp){
        cout<<it.first<<" ";
    }
}
