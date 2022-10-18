#include<iostream>
using namespace std;

int division(int n){
    if(n==0)
        return 1;
    int prevNumber = division(n-1);

    int div = n / prevNumber;

    cout<<div<<" n = "<<n<<endl;
    return div;

}
int main(){
    cout<<division(5);
}
