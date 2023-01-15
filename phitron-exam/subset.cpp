#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    cin>>n1;
    vector<int>a1(n1);
    for(int i=0;i<n1;i++){
        cin>>a1[i];
    }
    cin>>n2;
    vector<int>a2(n2);
    for(int i=0;i<n2;i++){
        cin>>a2[i];
    }
    for(int i=0;i<n2;i++){
        cout<<a2[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<n1;i++){
        cout<<a1[i]<<" ";
    }



}