#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Size of array: ";
    cin>>size;
    //dynamic array allocation in the memory. It can be changed in runtime.
    int* arr = new int[size];
    for(int i=0;i<size;i++){
        cout<<"arr["<<i<<"]: ";
        //one way to dereference array
        cin>>arr[i];
        //other way to dererence array
        //cin>>*arr(i+1);
    }
    for(int i=0;i<size;i++){
        cout<<*(arr+i);
        //or
        //cout<<arr[i];
    }
    //delete[] arr; // this may cause system crush
    arr = NULL; //best practice
}