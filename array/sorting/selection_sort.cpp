#include<iostream>
using namespace std;
int selectionSort(int arr[],int n){
    cout<<arr[0]<<endl;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;i<n;j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                cout<<arr[i]<<" ";
            }
        }
    }

    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter length of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" array elements: ";
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
                cout<<arr[j]<<" "<<j<<endl;
        cout<<"============"<<endl;
            if(arr[j] < arr[i]){

                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;

            }
        }
        cout<<arr[i]<<endl;
    }

    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ("<<i<<") ";

    }



//    selectionSort(arr,n);

}
