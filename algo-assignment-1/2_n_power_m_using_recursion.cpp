#include<bits/stdc++.h>
using namespace std;
int powerOfNM(int n,int m){
    if(m!=0) return (n*powerOfNM(n,m-1));
    else return 1;
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<powerOfNM(n,m);
}

