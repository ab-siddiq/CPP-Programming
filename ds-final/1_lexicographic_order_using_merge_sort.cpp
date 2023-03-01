#include<bits/stdc++.h>
using namespace std;

void merge(string arr[],int l,int mid,int r){
    int l1 = mid-l+1;
    int l2 =r-mid;
    string a[l1];
    string b[l2];
    for(int i=0;i<l1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<l2;i++){
        b[i]=arr[mid+1+i];
    }
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
    while(i<l1){
        arr[k]=a[i];
        k++;i++;
    }
    while(j<l2){
        arr[k]=b[j];
        k++;j++;
    }

}
void mergeSort(string arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}
int main(){
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
     mergeSort(arr,0,n-1);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
}
