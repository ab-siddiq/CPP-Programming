#include<iostream>
using namespace std;

int sum(int n){
    return  (n*(n+1))/2;
}

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<"Sum of "<<n<<" is: "<<sum(n);
}
