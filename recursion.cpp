#include<iostream>
using namespace std;

int recursiveSum(int m, int n){
    if(m==n)
        return m;
    return m * recursiveSum(m+1,n);
}

int main(){
    int m=1,n=5;
    cout<<recursiveSum(m,n);
}
