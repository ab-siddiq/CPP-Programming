#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num){
    for(int i=2; i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int num1,num2;
    cout<<"Enter num1: ";
    cin>>num1;
    cout<<"Enter num2: ";
    cin>>num2;
    for(int i=num1;i<=num2;i++){
        if(isPrime(i)){
            cout<<i<<" is prime"<<endl;
        }
    }
}
