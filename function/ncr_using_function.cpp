#include<iostream>
using namespace std;

int factorial(int n){
    int factorial = 1;
    for(int i=1;i<=n;i++){
        factorial *= i;
    }
    return factorial;
}

int main(){
    int n,r;
    cout<<"enter a number of n: ";
    cin>>n;
    cout<<"enter a number of r: ";
    cin>>r;
    cout<<factorial(n)/(factorial(r)*factorial(n-r));

}

