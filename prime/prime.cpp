#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter starting range: ";
    cin>>a;
    cout<<"enter the ending range: ";
    cin>>b;
    int j;
    for(j=0;j<2;j++){
        cout<<j<<"inside"<<endl;

    }
    cout<<"outside"<<j<<endl;

    for(int num=a; num<b;num++){
        int i;
        for(i=2;i<num;i++){
            if(num%i==0){
                break;
            }
        }
        if(i==num){
            cout<<num<<endl;
        }
    }
}
