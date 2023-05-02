#include<bits/stdc++.h>
using namespace std;
const int N=101;
long long arr[N];
long long fib(int n){
    if(n==0) return 0;
    if(n>0 && n<=2) return 1;
    if(arr[n]!=0) return arr[n];

    arr[n] = fib(n-1)+fib(n-2);
    return arr[n];
   
}

int main(){
    cout<<fib(5)<<endl;  
    cout<<fib(15)<<endl;  
    cout<<fib(50)<<endl;  
}