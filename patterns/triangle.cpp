#include<iostream>
using namespace std;

int main(){
    int rows, columns;
    char symbol;
    cout<<"Number of rows: ";
    cin>>rows;
    cout<<"Number of columns: ";
    cin>>columns;
    cout<<"Enter symbol: ";
    cin>>symbol;
    cout<<"************triangle************"<<endl;
    for(int i=1;i<=rows;i++){
        for(int j=i;j<=columns;j++){
            cout<<symbol;
        }
        cout<<endl;
    }
     cout<<"************ reverse triangle************"<<endl;
    for(int i=rows;i>0;i--){
        for(int j=i;j<=columns;j++){
            cout<<symbol;
        }
        cout<<endl;
    }
}

