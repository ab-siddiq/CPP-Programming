#include<iostream>
using namespace std;
int main(){
    int length;
    cout<<"Enter length of the rectangle: ";
    cin>>length;
    char symbol;
    cout<<"Enter the symbol you want to print: ";
    cin>>symbol;
    for(int i=1;i<=length;i++){
        for(int j=1;j<=i;j++){
            cout<<symbol;
        }
        cout<<endl;
    }
}
