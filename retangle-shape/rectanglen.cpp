#include<iostream>
using namespace std;

int main(){
    int height, width;
    char symbol;


    cout<<"Height: ";
    cin>>height;
    cout<<"Width: ";
    cin>>width;

    cout<<"Symbol -> ";
    cin>>symbol;

    for(int h=0;h<=height;h++){
        for(int w=0; w<=width;w++){
            cout<<symbol<<" ";
        }
        cout<<endl;
    }
}
