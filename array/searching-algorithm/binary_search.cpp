#include<iostream>
using namespace std;
int binarySearch(int arr[],int searchItem,int n){
    int s=0, e=n-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(searchItem==arr[mid]){
           return arr[mid];
        }
        else if(searchItem<arr[mid]){
            e = mid-1;
        }else{
            s = mid+1;
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

    cout<<binarySearch(arr,searchItem,n);

}
