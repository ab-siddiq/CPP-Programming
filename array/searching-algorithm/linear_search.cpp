#include<iostream>
using namespace std;
int linearSearch(int arr[],int searchItem,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==searchItem){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,searchItem;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";

    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    cout<<"Search an item into the array: ";
    cin>>searchItem;

    cout<<linearSearch(arr,searchItem,n);

}
