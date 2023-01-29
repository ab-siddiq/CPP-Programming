#include<bits/stdc++.h>
using namespace std;
int findMax(vector<int> & a, int indx){
    if(indx==a.size()-1) return a[indx];
    int maxi=findMax(a,indx+1);
    if(maxi>a[indx]) return maxi;
    else return a[indx];

}
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    cout<<findMax(arr,0);

}