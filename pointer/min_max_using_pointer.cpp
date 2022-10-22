#include<iostream>
using namespace std;
void minMax(int arr[],int size,int* min, int* max){
    for(int i=1;i<size;i++){
        if(arr[i]> *max){
            *max = arr[i];
        }
         if(arr[i]< *min){
            *min = arr[i];
        }
    }
}
int main(){
    int arr[5] = {1,3,9,-2,6};
    int min = arr[0];
    int max = arr[0];
    minMax(arr,5,&min,&max);
    cout<<"Min: "<<min<<endl<<"Max: "<<max;
}