#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Size of array: ";
    cin>>n;
    int arr[n];

    //first approach to find min max
    //int max = INT_MIN;
    //int min = INT_MAX;


    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //second approach to find min mx
    int maxNum = arr[0];
    int minNum =arr[1];


//    cout<<max<<" "<<min;
    for(int i=0;i<n;i++){

        //longer way to find min mx
//        if(arr[i]>max){
//            max = arr[i];
//        }
//        if(arr[i]<min){
//            min = arr[i];
//        }

        // shorter way to find min max using min max function
        maxNum = max(maxNum,arr[i]);
        minNum = min(minNum,arr[i]);
    }
    cout<<"max is: "<<maxNum<<endl<<"min is: "<<minNum;
}
