#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s1=0,s2=0;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n-1;i++){
        cin>>a[i];
        s1+=a[i];
    }
    for(int i=1;i<=n;i++){
        s2+=i;
    }
    cout<<s2-s1;
}