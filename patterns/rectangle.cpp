#include<iostream>
using namespace std;

int main(){
    int rows, columns;
    cout<<"Number of rows: ";
    cin>>rows;
    cout<<"Number of columns: ";
    cin>>columns;

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=columns;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
