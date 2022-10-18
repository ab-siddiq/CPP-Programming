#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0)
        return 1;
    int prevNumber = factorial(n-1);

    int fac = n * prevNumber;

    cout<<fac<<" n = "<<n<<endl;
    return fac;

}
int main(){
    cout<<factorial(5);
}
