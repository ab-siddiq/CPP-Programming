#include<iostream>
using namespace std;
void fibonacci(int n){
    int t1 = 0;
    int t2 = 1;
    int nextNumber;

    for(int i=1;i<=n;i++){
        cout<<t1<<" ";
        nextNumber = t1+t2;
        t1=t2;
        t2=nextNumber;
    }
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    fibonacci(num);
}
