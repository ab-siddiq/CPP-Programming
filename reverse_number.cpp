#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int number = n;
    int reverse = 0;
    while(n>0){
        int lastdigit = n%10;
        reverse = reverse*10 + lastdigit;
        n = n/10;
        cout<<n<<endl;
    }
    cout<<"Reverse of "<<number<<" is: "<<reverse<<endl;
}
