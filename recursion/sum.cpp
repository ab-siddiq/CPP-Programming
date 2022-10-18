#include<iostream>
using namespace std;

int sum(int n){
    if(n==0)
        return 0;
    int prevSum = sum(n-1);

    int su = n +prevSum;

    cout<<su<<" n = "<<n<<endl;
    return su;

}
int main(){
    cout<<sum(5);
}
