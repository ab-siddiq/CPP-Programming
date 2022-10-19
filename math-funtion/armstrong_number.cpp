#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int originalN = n;
    int reverse = 0;
    int sum = 0;
    while(n>0){
        int lastdigit = n%10;
        reverse = reverse*10 + lastdigit;
        sum += pow(lastdigit,3);
        n = n/10;
    }
    cout<<"sum of every digit qube: "<<sum<<endl;
    if(sum==originalN){
        cout<<originalN<<" is Armstrong number";
    }else{
        cout<<originalN<<" is not Armstrong number!";
    }

}
