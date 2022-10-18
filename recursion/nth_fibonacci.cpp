#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==0 || n == 1)

        return 0|1;

//    int prevNumber = division(n-1);
//
//    int div = n / prevNumber;
//
//    cout<<div<<" n = "<<n<<endl;
    return fibonacci(n-1)+fibonacci(n-2);

}
int main(){
    cout<<fibonacci(5);
}
