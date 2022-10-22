#include<iostream>
using namespace std;
int main(){
    // int arr[5] = {1,2,3,4,5};
    // cout<<arr<<endl;
    // cout<<&arr[0]<<endl;
    int arr[5];
    for(int i =0; i<5;i++){
        cout<<"Num "<<i+1<<": ";
        cin>>*(arr+i);
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}