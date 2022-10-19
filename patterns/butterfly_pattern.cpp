#include<iostream>
using namespace std;

int main(){
    int row, column;
    cout<<"Number of column: ";
    cin>>column;

    for(int i=1;i<=column;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int space = 2*column - 2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=column;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int space = 2*column - 2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
