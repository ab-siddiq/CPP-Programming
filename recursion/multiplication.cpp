#include<iostream>
using namespace std;

int mul(int n){
    if(n==0)
        return 1;
    int prevMul = mul(n-1);

    int mu = n * prevMul;

    cout<<mu<<" n = "<<n<<endl;
    return mu;

}
int main(){
    cout<<mul(5);
}

