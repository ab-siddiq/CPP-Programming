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
    //1. triangle
    cout<<"************triangle************"<<endl;
    for(int i=1;i<=rows;i++){
        for(int j=i;j<=rows;j++){
            cout<<symbol<<" ";
        }
        cout<<endl;
    }
    //number trianlge
    cout<<"************number triangle************"<<endl;
    for(int i=1;i<=rows;i++){
        for(int j=i;j<=rows;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
     //floyds's trianlge
    cout<<"************floyd's triangle************"<<endl;
    int count=1;
    for(int i=1;i<=rows;i++){
        for(int j=i;j<=rows;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    //2. reverse triangle
    cout<<"************ reverse triangle************"<<endl;
    for(int i=rows;i>0;i--){
        for(int j=i;j<=rows;j++){ //for(int j=i;j<=row/columns;j++)
            cout<<symbol<<" ";
        }
        cout<<endl;
    }
    //3. 180 degree triangle
    cout<<"************triangle 180 degree************"<<endl;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++){
            if(j<=rows-i){
                cout<<"  ";
            }else{
                cout<<symbol<<" ";
            }
        }

        cout<<endl;
    }
    //4. 180 degree reverse triangle
    cout<<"************triangle 180 degree************"<<endl;
    for(int i=rows;i>0;i--){
        for(int j=1;j<=rows;j++){
            if(j<=rows-i){
                cout<<"  ";
            }else{
                cout<<symbol<<"  ";
            }
        }

        cout<<endl;
    }

    //5. center triangle
    cout<<"************center triangle************"<<endl;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++){
            if(j<=rows-i){
                cout<<" ";
            }else{
                cout<<symbol<<" ";
            }
        }

        cout<<endl;
    }
    //6. center reverse triangle
    cout<<"************center reverse triangle************"<<endl;
    for(int i=rows;i>0;i--){
        for(int j=1;j<=rows;j++){
            if(j<=rows-i){
                cout<<" ";
            }else{
                cout<<symbol<<" ";
            }
        }

        cout<<endl;
    }
}

