#include<bits/stdc++.h>
using namespace std;
//merge already 2 sorted array
void merge(int arr[],int l,int mid,int r){
    //need to create 2 temporary array
    //1. size of first array
    int l1 = mid-l+1;
    //2. size of second array
    int l2 =r-mid;
    //two temporary arrays
    int a[l1];
    int b[l2];
    //need to put values into the two temporary arrays
    for(int i=0;i<l1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<l2;i++){
        b[i]=arr[mid+1+i];
    }
    //need to create 2 pointer to traverse and sort into final array
    int i=0,j=0,k=l;
    while(i<l1 && j<l2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++;i++;
        }else{
            arr[k]=b[j];
            k++;j++;
        }
    }
    //if one array pointer reaches to the end and anoter is not
    while(i<l1){
        arr[k]=a[i];
        k++;i++;
    }
    while(j<l2){
        arr[k]=b[j];
        k++;j++;
    }

}
void mergeSort(int arr[],int l,int r){
    //do till l<r
    //if l==r that means there is onle one element left in the array
    if(l<r){
        //find mid of the array
        int mid=(l+r)/2;
        //recursive call of mergeSort from left to mid
        mergeSort(arr,l,mid);
        //recursive call of mergeSort from mid to right/end
        mergeSort(arr,mid+1,r);
        //
        merge(arr,l,mid,r);
    }
}
int main(){
     int arr[]={5,4,3,2,1};
     mergeSort(arr,0,4);
     for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
     }
}
