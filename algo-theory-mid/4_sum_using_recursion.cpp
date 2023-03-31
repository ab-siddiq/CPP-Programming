#include<bits/stdc++.h>
using namespace std;
int sumUsingRecursion(int arr[],int i,int n){
    if(n==i) return 0;
    int sum = sumUsingRecursion(arr,i+1,n);
    return sum+arr[i];
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sumUsingRecursion(arr,0,n);
}